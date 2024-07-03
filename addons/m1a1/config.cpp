class CfgPatches
{
    class WST_mkk_retextures_m1a1
    {
        units[]= {};
        weapons[]={};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "rhsusf_c_m1a1"
        };
        author = "Westalgie";
    };
};

class cfgVehicles
{
    class MBT_01_base_F;
    class rhsusf_m1a1tank_base: MBT_01_base_F
    {
        class textureSources;
    };
    class rhsusf_m1a1aimwd_usarmy: rhsusf_m1a1tank_base
    {
        class textureSources: textureSources
        {
            class Racs
            {
                displayName = "RACS"
                author = "PRACS Dev Team"
                textures[] = {
                    "m1a1\data\mkk_m1a1aim_racs_hull_co.paa",
                    "m1a1\data\mkk_m1a1aim_racs_turret_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_d_co.paa"
                };
                factions[] = {};
            };
        };
    };
};