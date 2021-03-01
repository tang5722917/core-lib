//*****************************************************************************
// Copyright (c) 2021 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
inherit "/lib/core/baseSelector.c";

private object SubselectorObj;
private string SongSegmentType = "ERROR";
private mapping SongData = ([]);

/////////////////////////////////////////////////////////////////////////////
public nomask void setType(string type)
{
    SongSegmentType = type;
}

/////////////////////////////////////////////////////////////////////////////
public nomask void setData(mapping data)
{
    SongData = data;
}

/////////////////////////////////////////////////////////////////////////////
public nomask void reset(int arg)
{
    if(!arg)
    {
        AllowUndo = 0;
        AllowAbort = 1;
        NumColumns = 1;
        Type = "Song";
        Data = ([]);
    }
}

/////////////////////////////////////////////////////////////////////////////
private nomask int GetExistingElementsForSongSection(string section,
    mapping SongData, int optionCount)
{
    mapping *elements = filter(SongData["elements"],
        (: $1["type"] == $2 :), section);

    foreach(mapping element in elements)
    {
        string info = regreplace(getDictionary("research")->getCompositeItemDetails(
            element, colorConfiguration, configuration), "^       ", "", 1);
        info = regreplace(info, "\n *$", "", 1);

        Data[to_string(optionCount)] = ([
            "name": info,
            "description": "Select this option to edit or remove",
            "type": "modify",
            "value": element
        ]);
        optionCount++;
    }

    return optionCount;
}

/////////////////////////////////////////////////////////////////////////////
protected nomask void setUpUserForSelection()
{
    Description = "Select Song Structure Menu";

    int optionCount = 1;

    if (mappingp(SongData))
    {
        object songOptions = getDictionary("research")->researchObject(
            "guilds/bard/compositions/root.c");

        mapping templates = songOptions->getPossibleTemplates();
        if (mappingp(templates) && sizeof(templates))
        {
            foreach(string songTemplate in 
                sort_array(m_indices(templates), (: $1 > $2 :)))
            {
                Data[to_string(optionCount)] = ([
                    "name": songTemplate,
                    "description": sprintf("Select this option to create a "
                        "song using the '%s' template.", songTemplate),
                    "type": songTemplate,
                    "value": templates[songTemplate]
                ]);
                optionCount++;
            }
        }
    }
    
    Data[to_string(optionCount)] = ([
        "name": "Return To Previous Menu",
        "description": "This option leaves the song creation menu.",
        "type": "exit",
    ]);

}

/////////////////////////////////////////////////////////////////////////////
protected nomask int processSelection(string selection)
{
    int ret = -1;
    if (User)
    {
        ret = (Data[selection]["type"] == "exit") || (selection == "abort");
        if (!ret)
        {

        }
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask void onSelectorCompleted(object caller)
{
    if (User)
    {
        tell_object(User, displayMessage());
    }
    caller->cleanUp();
}

/////////////////////////////////////////////////////////////////////////////
protected nomask int suppressMenuDisplay()
{
    return objectp(SubselectorObj);
}

/////////////////////////////////////////////////////////////////////////////
protected string choiceFormatter(string choice)
{
    return sprintf("[%s]%s - %s%s",
        configuration->decorate("%s", "number", "selector", colorConfiguration),
        padSelectionDisplay(choice),
        configuration->decorate("%-30s", "choice enabled", "selector", 
            colorConfiguration),
        " ");
}
