class CfgPatches
{
    class WST_mkk_retextures_ch53
    {
        units[]= {};
        weapons[]={};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "rhsusf_c_ch53"
        };
        author = "Westalgie";
    };
};

class cfgVehicles
{
    class Helicopter_Base_H;
    class rhsusf_CH53E_USMC: Helicopter_Base_H
    {
        class textureSources
        {
            class standard
            {
                displayName = "Standard";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_ch53\data\ch53_1_co.paa",
                    "rhsusf\addons\rhsusf_ch53\data\ch53_acc_co.paa",
                    "",
                    ""
                };
                factions[] = {};
            };
            class Racs
            {
                displayName = "RACS"
                author = "PRACS Dev Team, Westalgie"
                textures[] = {
                    "ch53\data\mkk_ch53_racs_co.paa",
                    "ch53\data\mkk_ch53_racs_acc_co.paa",
                    "",
                    ""
                };
                factions[] = {};
            };
        };
    };
};