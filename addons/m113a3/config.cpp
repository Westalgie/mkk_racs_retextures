class CfgPatches
{
    class WST_mkk_retextures_m113a3
    {
        units[]= {};
        weapons[]={};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "rhsusf_c_m113"
        };
        author = "Westalgie";
    };
};

class cfgVehicles
{
    class LandVehicle;
	class Tank: LandVehicle{};
    class Tank_F: Tank{};
    class APC_Tracked_02_base_F: Tank_F{};
    class rhsusf_m113tank_base: APC_Tracked_02_base_F
    {
        class textureSources
		{
			class Afghani
			{
				displayName = "Afghani";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {
                    "po_factions_me\aa\data\m113a3_01_ana_h_co.paa",
                    "po_factions_me\aa\data\m113a3_02_ana_h_co.paa",
                    "po_factions_me\aa\data\m113a3_03_ana_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "po_factions_me\aa\data\M23_pintle_ana_co.paa",
                    "po_factions_me\aa\data\m113a3_shield_ana_co.paa"
                };
			};
			class LOP_IRAN
			{
				displayName = "Iranian";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {
                    "po_factions_me\IRAN\data\m113a3_01_iran_h_co.paa",
                    "po_factions_me\IRAN\data\m113a3_02_iran_h_co.paa",
                    "po_factions_me\IRAN\data\m113a3_03_iran_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
                    "po_factions_me\IRAN\data\m23_pintle_iran_co.paa",
                    "po_factions_me\IRAN\data\m113a3_shield_iran_co.paa"};
			};
			class standard
			{
				displayName = "Woodland";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_h_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_h_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_wd_co.paa"
                };
				factions[] = {};
			};
			class Desert
			{
				displayName = "Desert";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_h_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_h_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_d_co.paa"
                };
				factions[] = {};
			};
			class Olive
			{
				displayName = "Olive";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_sup_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_sup_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_od_co.paa"
                };
				factions[] = {};
			};
			class bear_un
			{
				displayName = "United Nations";
				author = "Bear, Red Hammer Studios";
				textures[] = {
                    "mkk_retexture3\m113\un\m113a3_01_un_h_co.paa",
                    "mkk_retexture3\m113\un\m113a3_02_un_h_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "mkk_retexture3\m113\un\m23_pintle_un_co.paa",
                    "mkk_retexture3\m113\un\m113a3_shield_un_co.paa"
                };
				factions[] = {};
			};
            class Racs
            {
                displayName="RACS";
                author="PRACS Dev Team";
                textures[] = {
                    "m113a3\data\mkk_m113a3_racs_hull_co.paa",
                    "m113a3\data\mkk_m113a3_racs_hull2_co.paa",
                    "m113a3\data\mkk_m113a3_racs_hull3_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_d_co.paa",
                    "m113a3\data\mkk_m113a3_racs_shield_co.paa"
                };
                factions[] = {};
            };
		};
    };
    class rhsusf_m113_usarmy_unarmed: rhsusf_m113tank_base{};
    class rhsusf_m113_usarmy_medical: rhsusf_m113_usarmy_unarmed
    {
        class textureSources: textureSources
        {
            class Racs
            {
                displayName="RACS";
                author="PRACS Dev Team";
                textures[] = {
                    "m113a3\data\mkk_m113a3_racs_hull_med_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_l_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa"
                };
                factions[] = {};
            };
        };
    };
    class rhsusf_m113_usarmy_supply: rhsusf_m113tank_base
    {
        class textureSources: textureSources {
            class standard
			{
				displayName = "Woodland";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_h_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_h_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_wd_co.paa"
                };
				factions[] = {};
			};
			class Desert
			{
				displayName = "Desert";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_h_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_h_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_d_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_d_co.paa"
                };
				factions[] = {};
			};
			class Olive
			{
				displayName = "Olive";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_01_sup_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_02_sup_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_od_co.paa"
                };
				factions[] = {};
			};
            class bear_un
			{
				displayName = "United Nations";
				author = "Bear, Red Hammer Studios";
				textures[] = {
                    "mkk_retexture3\m113\un\m113a3_01_un_h_co.paa",
                    "mkk_retexture3\m113\un\m113a3_02_un_h_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
                    "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
                    "mkk_retexture3\m113\un\m23_pintle_un_co.paa",
                    "mkk_retexture3\m113\un\m113a3_shield_un_co.paa"
                };
				factions[] = {};
			};
        };
    };
};