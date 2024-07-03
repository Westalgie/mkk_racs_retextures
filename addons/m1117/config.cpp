class CfgPatches
{
    class WST_mkk_retextures_m1117
    {
        units[]= {};
        weapons[]={};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "rhsusf_c_m1117"
        };
        author = "Westalgie";
    };
};

class cfgVehicles
{
    class LandVehicle;
	class Car: LandVehicle{};
    class Car_F: Car{};
    class Wheeled_APC_F: Car_F{};
    class rhsusf_M1117_base: Wheeled_APC_F
    {
        class textureSources
        {
            class standard
            {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1117\data\m1117_tex1_green_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\m1117_armour_green_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\m1117_turret_green_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\m1117_wheel_green_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
                };
                factions[] = {};
            };
            class Desert
            {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1117\data\m1117_tex1_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\m1117_armour_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\m1117_turret_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\m1117_wheel_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
                };
                factions[] = {};
            };
            class Olive
            {
                displayName = "OD";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1117\data\M1117_tex1_OD_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\M1117_armour_od_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\M1117_turret_od_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\m1117_wheel_green_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
                };
                factions[] = {};
            };
            class un
            {
                displayName = "UN";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1117\data\m1117_tex1_un_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\m1117_armour_un_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\m1117_turret_un_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\m1117_wheel_un_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
                };
                factions[] = {};
            };
            class Racs
            {
                displayName = "RACS"
                author = "PRACS Dev Team"
                textures[] = {
                    "m1117\data\mkk_m1117_racs_tex1_co.paa",
                    "m1117\data\mkk_m1117_racs_armor_co.paa",
                    "m1117\data\mkk_m1117_racs_turret_co.paa",
                    "m1117\data\mkk_m1117_racs_tires_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
                };
                factions[] = {};
            };
        };
    };
};