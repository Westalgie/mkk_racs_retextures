class CfgPatches
{
    class WST_mkk_retextures_melb
    {
        units[]= {};
        weapons[]={};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "rhsusf_c_melb"
        };
        author = "Westalgie";
    };
};

class cfgVehicles
{
    class Helicopter_Base_H;
    class RHS_MELB_base: Helicopter_Base_H
    {
        class textureSources
        {
            class standard
            {
                displayName = "Standard";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa",
                    "rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
                };
                factions[] = {};
            };
            class Racs
            {
                displayName = "RACS"
                author = "PRACS Dev Team"
                textures[] = {
                    "melb\data\mkk_melb_racs_black_co.paa",
                    "rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
                };
                factions[] = {};
            };
            class RacsArid
            {
                displayName = "RACS Arid"
                author = "PRACS Dev Team"
                textures[] = {
                    "melb\data\mkk_melb_racs_arid_co.paa",
                    "rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
                };
                factions[] = {};
            };
        };
    };
};