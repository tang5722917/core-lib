//*****************************************************************************
// Copyright (c) 2017 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/commands/baseCommand.c";

/////////////////////////////////////////////////////////////////////////////
public nomask void reset(int arg)
{
    if (!arg)
    {
        addCommandTemplate("cc [-r] ##Target##");
    }
}

/////////////////////////////////////////////////////////////////////////////
private nomask varargs int compile(string path, object initiator, int recurse)
{
    int ret = 0;
    if (recurse && (file_size(path) == -2))
    {
        path += "/";
    }
    string *files = get_dir(path, 0x10);
    if (!sizeof(files) || !initiator->hasReadAccess(path))
    {
        notify_fail("No file(s) matching that criteria could be found.\n");
    }
    else if (((sizeof(files) == 1) || !recurse) &&
        (file_size(path) != -2))
    {
        ret = 1;
        tell_object(initiator, "Building: " + path + "\n");
        rm("/log/log");
        string result = catch (load_object(path); nolog);
        cat("/log/log");
    }
    else if(recurse)
    {
        files = filter_array(files, 
            (: ($1[(sizeof($1)-2)..(sizeof($1)-1)] == ".c") ||
                (file_size("/" + $1) == -2) :));

        foreach(string file in files)
        {
            if (file[0] != '/')
            {
                file = "/" + file;
            }
            ret += compile(file, initiator, 1);
        }
    }
    else
    {
        notify_fail("The -r flag must be supplied to recursively build.\n");
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask int execute(string command, object initiator)
{
    int ret = 0;

    if (canExecuteCommand(command) &&
        initiator->hasExecuteAccess(regreplace(command, "([^-]+)( -r|) " +
            getTargetString(initiator, command), "\\1", 1)))
    {
        object group = load_object("/lib/dictionaries/groups/baseGroup.c");
        string targetPath = group->getFullyQualifiedPath(initiator, 
                getTargetString(initiator, command));

        if (initiator->hasReadAccess(targetPath))
        {
            ret = compile(targetPath, initiator,
                sizeof(regexp(({ command }), "-r")));
        }
        else
        {
            notify_fail("You do not have the read access for that.\n");
        }
    }
    return ret;
}
