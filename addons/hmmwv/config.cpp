class CfgPatches
{
    class WST_mkk_retextures_hmmwv
    {
        units[]= {};
        weapons[]={};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "rhsusf_vehicles"
        };
        author = "Westalgie";
    };
};

class cfgVehicles
{
    class rhsusf_hmmwe_base;
    class rhsusf_m998_w_4dr_fulltop;
    class rhsusf_m1025_w: rhsusf_m998_w_4dr_fulltop
    {
        class textureSources
		{
			class LOP_AA
			{
				displayName = "Afghani";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {
                    "po_factions_me\aa\data\m998_exterior_ana_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
                    "po_factions_me\aa\data\m998_mainbody_ana_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "po_factions_me\aa\data\m1025_ana_co.paa",
                    "",
                    ""
                };
			};
			class LOP_IA
			{
				displayName = "Iraqi";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {
                    "\po_factions_me\ia\data\m998_exterior_ia_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
                    "\po_factions_me\ia\data\m998_mainbody_ia_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "\po_factions_me\ia\data\m1025_ia_co.paa",
                    "",
                    ""
                };
			};
			class LOP_ISTS
			{
				displayName = "ISTS";
				author = "$STR_LOP_FULL_NAME";
				textures[] = {
                    "po_factions_me\ists\data\m998_exterior_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
                    "po_factions_me\ists\data\A2_parts_b_co.paa",
                    "po_factions_me\ists\data\wheel_wranglermt_b_co.paa",
                    "po_factions_me\ists\data\m998_mainbody_b_co.paa",
                    "po_factions_me\ists\data\gratting_b_co.paa",
                    "po_factions_me\ists\data\tile_exmetal_b_co.paa",
                    "po_factions_me\ists\data\m1025_b_co.paa",
                    "",
                    ""
                };
			};
			class standard
			{
				displayName = "Woodland";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa"
                };
				factions[] = {};
			};
			class Desert
			{
				displayName = "Desert";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa"
                };
				factions[] = {};
			};
			class Olive
			{
				displayName = "Olive";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m1025_g_co.paa"
                };
				factions[] = {};
			};
            class Racs
            {
                displayName = "RACS";
                author = "PRACS Dev Team"
                textures[] = {
                    "hmmwv\data\mkk_m1025_racs_hull_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "hmmwv\data\mkk_m1025_racs_roof_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
                    "",
                    ""
                };
				factions[] = {};
            };
		};
    };

    class rhsusf_m1025_w_m2: rhsusf_m1025_w
    {
        class textureSources: textureSources
        {
            class Racs
            {
                displayName = "RACS";
                author = "PRACS Dev Team"
                textures[] = {
                    "hmmwv\data\mkk_m1025_racs_hull_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "hmmwv\data\mkk_m1025_racs_roof_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
                    "",
                    ""
                };
				factions[] = {};
            };
		};
    };

    class rhsusf_m1025_w_s_m2: rhsusf_m1025_w
    {
        class textureSources: textureSources{};
    };

    class rhsusf_m1025_w_mk19: rhsusf_m1025_w
    {
        class textureSources: textureSources{};
    };

    class rhsusf_m1025_w_s_Mk19: rhsusf_m1025_w
    {
        class textureSources: textureSources{};
    };

    class rhsusf_m1025_w_s: rhsusf_m1025_w
    {
        class textureSources: textureSources{};
    };

    class rhsusf_m966_w: rhsusf_m1025_w
    {
        class textureSources: textureSources
        {
            class Racs
            {
                displayName = "RACS";
                author = "PRACS Dev Team"
                textures[] = {
                    "hmmwv\data\mkk_m1025_racs_hull_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "hmmwv\data\mkk_m1025_racs_roof_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
                    "",
                    ""
                };
				factions[] = {};
            };
		};
    };

    class rhsusf_m1045_w: rhsusf_m966_w
    {
        class textureSources: textureSources
        {
            class Racs
            {
                displayName = "RACS";
                author = "PRACS Dev Team"
                textures[] = {
                    "hmmwv\data\mkk_m1025_racs_hull_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "hmmwv\data\mkk_m1025_racs_roof_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
                    "",
                    ""
                };
				factions[] = {};
            };
		};
    };

    class rhsusf_m1045_w_s: rhsusf_m966_w{};

    class rhsusf_m998_w_2dr: rhsusf_hmmwe_base
    {
        class textureSources
		{
			class standard
			{
				displayName = "Woodland";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
                };
				factions[] = {};
			};
			class Desert
			{
				displayName = "Desert";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
                };
				factions[] = {};
			};
			class Olive
			{
				displayName = "Olive";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
                };
				factions[] = {};
			};
            class Racs
            {
                displayName = "RACS";
                author = "PRACS Dev Team"
                textures[] = {
                    "hmmwv\data\mkk_m1025_racs_hull_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
                };
				factions[] = {};
            };
		};
    };

    class rhsusf_m998_w_4dr: rhsusf_m998_w_2dr
	{
		class textureSources
		{
			class standard
			{
				displayName = "Woodland";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
                };
				factions[] = {};
			};
			class Desert
			{
				displayName = "Desert";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
                };
				factions[] = {};
			};
			class Olive
			{
				displayName = "Olive";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
                };
				factions[] = {};
			};
            class Racs
            {
                displayName = "RACS";
                author = "PRACS Dev Team"
                textures[] = {
                    "hmmwv\data\mkk_m1025_racs_hull_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
                };
				factions[] = {};
            };
		};
	};
};