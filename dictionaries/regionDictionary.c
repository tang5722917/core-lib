//*****************************************************************************
// Copyright (c) 2019 - Allen Cummings, RealmsMUD, All rights reserved. See
//                      the accompanying LICENSE file for details.
//*****************************************************************************
#include "/lib//dictionaries/regions/region-types.h"

private string FeaturePrefix = "/lib/environment/features/";

private mapping WeightedFeatures = ([]);
private mapping WeightedEncounters = ([]);

private string *availableDirections = ({ "north", "south", "east", "west",
    "northwest", "northeast", "southwest", "southeast" });

/////////////////////////////////////////////////////////////////////////////
public nomask int isValidRegionType(string type)
{
    return member(RegionTypes, type);
}

/////////////////////////////////////////////////////////////////////////////
public nomask int isValidRegion(object region)
{
    int ret = 0;
    if (objectp(region) &&
        member(inherit_list(region), "lib/environment/region.c") > -1)
    {
        ret = isValidRegionType(region->regionType());
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
private nomask mapping setTerrain(mapping room, mapping roomInput)
{
    if (member(roomInput, "terrain"))
    {
        room["terrain"] = roomInput["terrain"];
    }
    else
    {
        room["interior"] = roomInput["interior"];
    }
    return room;
}

/////////////////////////////////////////////////////////////////////////////
private nomask mapping setExits(mapping room, mapping exits,
    mapping roomInput, object region)
{
    room["exits"] = ([]);

    foreach(string direction in m_indices(exits))
    {
        room["exits"][direction] = ([
            "exit to": exits[direction],
            "path type": "/lib/environment/features/path.c",
            "region": region
        ]);
    }
    return room;
}

/////////////////////////////////////////////////////////////////////////////
private nomask void createWeightedFeatureList(string featureType,
    mapping features)
{
    WeightedFeatures[featureType] = ({});

    foreach(string feature in m_indices(features))
    {
        for (int i = 0; i < features[feature]; i++)
        {
            WeightedFeatures[featureType] += ({ feature });
        }
    }
}

/////////////////////////////////////////////////////////////////////////////
private nomask mapping generateElements(string regionType, mapping items)
{
    mapping ret = ([]);

    if (sizeof(items))
    {
        int numFeatures = 1 + random(5);
        string direction = availableDirections[random(sizeof(availableDirections))];

        for (int i = 0; i < numFeatures; i++)
        {
            string featureType = m_indices(items)[random(sizeof(items))];

            if (!member(WeightedFeatures, featureType))
            {
                createWeightedFeatureList(featureType, items[featureType]);
            }
            string feature = sprintf("%s%s/%s.c", FeaturePrefix, featureType,
                WeightedFeatures[featureType][
                random(sizeof(WeightedFeatures[featureType]))]);

            if (!member(ret, feature))
            {
                ret[feature] = ({});
            }
            ret[feature] += ({ direction });
        }
    }
    return ret;
}

/////////////////////////////////////////////////////////////////////////////
public nomask mapping generateRoomData(object region, mapping data)
{
    mapping ret = 0;
    if (isValidRegion(region))
    {
        ret = ([]);
        mapping roomInput = RegionTypes[region->regionType()] + ([]);

        setTerrain(ret, roomInput);
        setExits(ret, data["exits"], roomInput, region);

        string regionType = region->regionType();

        ret["features"] = generateElements(regionType,
            RegionTypes[regionType]["potential features"]);

        ret["items"] = generateElements(regionType,
            RegionTypes[regionType]["potential items"]);

        ret["room objects"] = ([]);
        ret["creatures"] = ([]);
    }

    return ret;
}
