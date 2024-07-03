#include "BIS_AddonInfo.hpp"
class CfgPatches
{
    class WST_mkk_retextures_m11xx
    {
        units[]= {};
        weapons[]={};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "rhsusf_c_m11xx"
        };
        author = "Westalgie";
    };
};

class cfgVehicles
{
    class Car_F;
    class MRAP_01_base_F: Car_F
    {
        class textureSources;
    };
    class rhsusf_m1151_base: MRAP_01_base_F
    {
        class textureSources: textureSources
        {
            class Racs
            {
                displayName = "RACS"
                author = "PRACS Dev Team"
                textures[] = {
                    "m1151\data\mkk_m1151_racs_hull_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
                    "m1151\data\mkk_m1151_racs_turret_co.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa"
                };
                factions[] = {};
            };
        }
    };
    class rhsusf_m1151_CROWS_base: rhsusf_m1151_base
    {
        class textureSources: textureSources
        {
            class Racs
            {
                displayName = "RACS"
                author = "PRACS Dev Team"
                textures[] = {
                    "m1151\data\mkk_m1151_racs_hull_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
                    "rhsusf\addons\rhsusf_caiman\data\m153_co.paa"
                };
                factions[] = {};
            };
        };
    };

    class rhsusf_m1151_GPK_base: rhsusf_m1151_base
    {
        class textureSources: textureSources{};
    };

    class rhsusf_M1151_OGPK_base: rhsusf_m1151_GPK_base
    {
        class textureSources: textureSources{};
    };

    class rhsusf_M1151_OGPK_M2_base: rhsusf_M1151_OGPK_base
    {
        class textureSources: textureSources
        {
            class Racs
            {
                displayName = "RACS"
                author = "PRACS Dev Team"
                textures[] = {
                    "m1151\data\mkk_m1151_racs_hull_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
                    "m1151\data\mkk_m1151_racs_turret_co.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa"
                };
                factions[] = {};
            };
        };
    };

    class rhsusf_M1151_GPK_M2_base: rhsusf_m1151_GPK_base
    {
        class textureSources: textureSources{};
    };

    class rhsusf_M1151_M2_LRAS3_base: rhsusf_M1151_GPK_M2_base
    {
        class textureSources: textureSources
        {
            class Racs
            {
                displayName = "RACS"
                author = "PRACS Dev Team"
                textures[] = {
                    "m1151\data\mkk_m1151_racs_hull_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_lras3_co.paa"
                };
                factions[] = {};
            };
        };
    };

    class rhsusf_M1165A1_GMV_SAG2_base;

    class rhsusf_M1165A1_GMV_SAG2_M134D_M240_base: rhsusf_M1165A1_GMV_SAG2_base
    {
        class textureSources;
    };

    class rhsusf_m1165a1_gmv_m134d_m240_socom_d: rhsusf_M1165A1_GMV_SAG2_M134D_M240_base
    {
        class textureSources: textureSources
        {
            class Racs
            {
                displayName = "RACS"
                author = "PRACS Dev Team"
                textures[] = {
                    "m11xx\data\mkk_m1165_racs_hull_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
                    "m11xx\data\mkk_m1165_racs_gmv_co.paa",
                    "m11xx\data\mkk_m1165_racs_gmv_sag_co.paa"
                };
                factions[] = {};
            };
        };
    };

    class rhsusf_M1165A1_GMV_SAG2_M2_M240_base: rhsusf_M1165A1_GMV_SAG2_base
    {
        class textureSources;
    };

    class rhsusf_m1165a1_gmv_m2_m240_socom_d: rhsusf_M1165A1_GMV_SAG2_M134D_M240_base
    {
        class textureSources: textureSources
        {
            class Racs
            {
                displayName = "RACS"
                author = "PRACS Dev Team"
                textures[] = {
                    "m11xx\data\mkk_m1165_racs_hull_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
                    "m11xx\data\mkk_m1165_racs_gmv_co.paa",
                    "m11xx\data\mkk_m1165_racs_gmv_sag_co.paa"
                };
                factions[] = {};
            };
        };
    };

    class rhsusf_M1165A1_GMV_SAG2_Mk19_M240_base: rhsusf_M1165A1_GMV_SAG2_base
    {
        class textureSources;
    };

    class rhsusf_m1165a1_gmv_mk19_m240_socom_d: rhsusf_M1165A1_GMV_SAG2_Mk19_M240_base
    {
        class textureSources: textureSources
        {
            class Racs
            {
                displayName = "RACS"
                author = "PRACS Dev Team"
                textures[] = {
                    "m11xx\data\mkk_m1165_racs_hull_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
                    "m11xx\data\mkk_m1165_racs_gmv_co.paa",
                    "m11xx\data\mkk_m1165_racs_gmv_sag_co.paa"
                };
                factions[] = {};
            };
        };
    };
};