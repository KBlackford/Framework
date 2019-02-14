/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        condition = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, "" },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, "" },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, "" },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, "" },
            { "U_C_Poor_2", "Rag tagged clothes", 250, "" },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, "" },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, "" },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, "" },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, "" },
            { "U_OrestesBody", "Surfing On Land", 1100, "" },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, "" },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, "" },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, "" },
            { "U_NikosAgedBody", "Casual Wears", 5000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Bandanna_camo", "Camo Bandanna", 120, "" },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, "" },
            { "H_Bandanna_surfer", "", 135, "" },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Bandanna_gry", "Grey Bandanna", 150, "" },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "Straw Fedora", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", "Hat & Bandanna", 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

	
	class bm_clothing {
        title = "STR_Shops_BM_clothing";
        side = "civ";
		license = "bmcm";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_GhillieSuit", "", 75, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 75, { "", "", -1 } },
			{ "U_C_Driver_1_green", "", 75, { "", "", -1 } },
			{ "U_C_Driver_1_red", "", 75, { "", "", -1 } },
			{ "U_C_Driver_1_blue", "", 75, { "", "", -1 } },
			{ "U_C_Driver_1_white", "", 75, { "", "", -1 } },
			{ "U_C_Driver_1_yellow", "", 75, { "", "", -1 } },
			{ "U_C_Driver_1_orange", "", 75, { "", "", -1 } },
			{ "U_C_Driver_4", "", 75, { "", "", -1 } },
			{ "U_C_Driver_3", "", 75, { "", "", -1 } },
			{ "U_C_Driver_2", "", 75, { "", "", -1 } },
			{ "U_C_Driver_1", "", 75, { "", "", -1 } },
			{ "U_I_GhillieSuit", "", 75, { "", "", -1 } },
			{ "U_B_Wetsuit", "", 75, { "", "", -1 } },
			{ "U_B_CombatUniform_mcam", "", 75, { "", "", -1 } },
			{ "U_B_CombatUniform_mcam_tshirt", "", 75, { "", "", -1 } },
			{ "U_B_CombatUniform_mcam_vest", "", 75, { "", "", -1 } },
			{ "U_B_SpecopsUniform_sgg", "", 75, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_1_F", "", 75, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_3_F", "", 75, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_1_F", "", 75, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 75, { "", "", -1 } },
			{ "U_B_CTRG_1", "", 75, { "", "", -1 } },
			{ "U_B_CTRG_2", "", 75, { "", "", -1 } },
			{ "U_B_CTRG_3", "", 75, { "", "", -1 } },
			{ "U_B_T_Soldier_SL_F", "", 80, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_F", "", 5000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_3_F", "", 5000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_2_F", "", 5000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_1_F", "", 75, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_3_F", "", 75, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_2_F", "", 75, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 75, { "", "", -1 } },
			{ "U_O_CombatUniform_oucamo", "", 75, { "", "", -1 } },
			{ "U_I_CombatUniform_shortsleeve", "", 75, { "", "", -1 } },
			{ "U_I_CombatUniform_tshirt", "", 75, { "", "", -1 } },
			{ "U_B_PilotCoveralls", "", 75, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 75, { "", "", -1 } },
			{ "U_I_pilotCoveralls", "", 75, { "", "", -1 } },
			{ "U_B_HeliPilotCoveralls", "", 75, { "", "", -1 } },
			{ "U_I_HeliPilotCoveralls", "", 75, { "", "", -1 } },
			{ "U_BG_Guerilla1_1", "", 75, { "", "", -1 } },
			{ "U_BG_Guerilla3_1", "", 75, { "", "", -1 } },
			{ "U_BG_Guerilla3_2", "", 75, { "", "", -1 } },
			{ "U_BG_leader", "", 75, { "", "", -1 } },
			{ "U_OG_Guerilla1_1", "", 75, { "", "", -1 } },
			{ "U_OG_Guerilla2_2", "", 75, { "", "", -1 } },
			{ "U_OG_Guerilla3_1", "", 75, { "", "", -1 } },
			{ "U_OG_Guerilla3_2", "", 75, { "", "", -1 } },
			{ "U_OG_leader", "", 75, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 75, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "", 75, { "", "", -1 } },
			{ "U_IG_Guerilla3_2", "", 75, { "", "", -1 } },
			{ "U_IG_leader", "", 75, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "", 75, { "", "", -1 } },
			{ "U_B_Protagonist_VR", "", 75, { "", "", -1 } },
			{ "U_O_Protagonist_VR", "", 75, { "", "", -1 } },
			{ "U_I_Protagonist_VR", "", 75, { "", "", -1 } },
			{ "U_O_FullGhillie_ard", "", 75, { "", "", -1 } },
			{ "U_O_FullGhillie_lsh", "", 75, { "", "", -1 } },
			{ "U_O_FullGhillie_sard", "", 75, { "", "", -1 } },
			{ "U_I_FullGhillie_ard", "", 75, { "", "", -1 } },
			{ "U_I_FullGhillie_lsh", "", 75, { "", "", -1 } },
			{ "U_I_FullGhillie_sard", "", 75, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 50, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Wrangler", 50, { "", "", -1 } },
            { "U_IG_Guerilla2_1", "Weekend Warrior", 500, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "The Hunter", 50, { "", "", -1 } },
			{ "U_C_Scientist", "Scientist", 50, { "", "", -1 } },
			{ "U_C_ConstructionCoverall_Red_F", "Red Coveralls", 50, { "", "", -1 } },
			{ "U_C_ConstructionCoverall_Blue_F", "Blue Coveralls", 50, { "", "", -1 } },
			{ "U_C_ConstructionCoverall_Black_F", "Black Coveralls", 50, { "", "", -1 } },
			{ "U_C_ConstructionCoverall_Vrana_F", "Vrana Coveralls", 50, { "", "", -1 } },
			{ "U_OrestesBody", "Surfer Bro", 10, { "", "", -1 } },
			{ "U_NikosAgedBody", "Business-ish Casual", 10, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_CrewHelmetHeli_B", "Gas Mask", 5000, { "", "", -1 } },
			{ "H_RacingHelmet_1_red_F", "", 120, { "", "", -1 } },
			{ "H_RacingHelmet_1_green_F", "", 120, { "", "", -1 } },
			{ "H_RacingHelmet_1_black_F", "", 120, { "", "", -1 } },
			{ "H_RacingHelmet_1_blue_F", "", 120, { "", "", -1 } },
			{ "H_RacingHelmet_1_white_F", "", 120, { "", "", -1 } },
			{ "H_RacingHelmet_1_yellow_F", "", 120, { "", "", -1 } },
			{ "H_RacingHelmet_1_orange_F", "", 120, { "", "", -1 } },
			{ "H_RacingHelmet_1_F", "", 120, { "", "", -1 } },
			{ "H_RacingHelmet_2_F", "", 120, { "", "", -1 } },
			{ "H_RacingHelmet_3_F", "", 120, { "", "", -1 } },
			{ "H_RacingHelmet_4_F", "", 120, { "", "", -1 } },
			{ "H_HelmetB_TI_tna_F", "", 1500, { "", "", -1 } },
			{ "H_Cap_marshal", "", 120, { "", "", -1 } },
			{ "H_HelmetB", "", 120, { "", "", -1 } },
			{ "H_HelmetB_camo", "", 120, { "", "", -1 } },
			{ "H_HelmetB_light", "", 120, { "", "", -1 } },
			{ "H_HelmetB_paint", "", 120, { "", "", -1 } },
			{ "H_HelmetCrew_I", "", 120, { "", "", -1 } },
			{ "H_HelmetCrew_O", "", 120, { "", "", -1 } },
			{ "H_HelmetSpecB_blk", "", 120, { "", "", -1 } },
			{ "H_PilotHelmetFighter_B", "", 120, { "", "", -1 } },
			{ "H_PilotHelmetFighter_O", "", 120, { "", "", -1 } },
			{ "H_PilotHelmetHeli_O", "", 120, { "", "", -1 } },
			{ "H_Booniehat_grn", "", 120, { "", "", -1 } },
			{ "H_MilCap_dgtl", "", 120, { "", "", -1 } },
			{ "H_Cap_headphones", "", 120, { "", "", -1 } },
			{ "H_Cap_tan", "", 120, { "", "", -1 } },
			{ "H_HelmetLeaderO_oucamo", "", 120, { "", "", -1 } },
			{ "H_HelmetIA", "", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandana", 130, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandana", 145, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } },
			{ "H_Cap_blk_CMMG", "", 150, { "", "", -1 } },
			{ "H_Cap_blk_ION", "", 150, { "", "", -1 } },
			{ "H_Cap_blk", "", 150, { "", "", -1 } },
			{ "H_Cap_press", "", 150, { "", "", -1 } },
			{ "H_Cap_surfer", "", 150, { "", "", -1 } },
			{ "H_Cap_usblack", "Thunderdome Cap", 150, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandana", 150, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandana", 160, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandana", 300, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Booniehat_dirty", "Well Worn Boonie", 250, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } },
			{ "H_Watchcap_blk", "", 425, { "", "", -1 } },
			{ "H_Watchcap_khk", "", 425, { "", "", -1 } },
			{ "H_Watchcap_sgg", "", 425, { "", "", -1 } },
			{ "H_Watchcap_camo", "", 425, { "", "", -1 } },
			{ "H_Cap_White_IDAP_F", "", 425, { "", "", -1 } },
			{ "H_Cap_Orange_IDAP_F", "", 425, { "", "", -1 } },
			{ "H_Cap_Black_IDAP_F", "", 425, { "", "", -1 } },
			{ "H_WirelessEarpiece_F", "", 425, { "", "", -1 } },
			{ "H_Hat_Safari_sand_F", "", 425, { "", "", -1 } },
			{ "H_Hat_Safari_olive_F", "", 425, { "", "", -1 } },
			{ "H_Construction_basic_yellow_F", "", 425, { "", "", -1 } },
			{ "H_Construction_basic_white_F", "", 425, { "", "", -1 } },
			{ "H_Construction_basic_orange_F", "", 425, { "", "", -1 } },
			{ "H_Construction_basic_red_F", "", 425, { "", "", -1 } },
			{ "H_Construction_basic_vrana_F", "", 425, { "", "", -1 } },
			{ "H_Construction_basic_black_F", "", 425, { "", "", -1 } },
			{ "H_Construction_earprot_yellow_F", "", 425, { "", "", -1 } },
			{ "H_Construction_earprot_white_F", "", 425, { "", "", -1 } },
			{ "H_Construction_earprot_orange_F", "", 425, { "", "", -1 } },
			{ "H_Construction_earprot_red_F", "", 425, { "", "", -1 } },
			{ "H_Construction_earprot_vrana_F", "", 425, { "", "", -1 } },
			{ "H_Construction_earprot_black_F", "", 425, { "", "", -1 } },
			{ "H_Construction_headset_yellow_F", "", 425, { "", "", -1 } },
			{ "H_Construction_headset_white_F", "", 425, { "", "", -1 } },
			{ "H_Construction_headset_orange_F", "", 425, { "", "", -1 } },
			{ "H_Construction_headset_red_F", "", 425, { "", "", -1 } },
			{ "H_Construction_headset_vrana_F", "", 425, { "", "", -1 } },
			{ "H_Construction_headset_black_F", "", 425, { "", "", -1 } },
			{ "H_EarProtectors_yellow_F", "", 425, { "", "", -1 } },
			{ "H_EarProtectors_white_F", "", 425, { "", "", -1 } },
			{ "H_EarProtectors_orange_F", "", 425, { "", "", -1 } },
			{ "H_EarProtectors_red_F", "", 425, { "", "", -1 } },
			{ "H_EarProtectors_black_F", "", 425, { "", "", -1 } },
			{ "H_HeadSet_yellow_F", "", 425, { "", "", -1 } },
			{ "H_HeadSet_white_F", "", 425, { "", "", -1 } },
			{ "H_HeadSet_orange_F", "", 425, { "", "", -1 } },
			{ "H_HeadSet_red_F", "", 425, { "", "", -1 } },
			{ "H_HeadSet_black_F", "", 425, { "", "", -1 } },
			{ "H_PASGT_basic_blue_press_F", "", 750, { "", "", -1, } }
		};
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Balaclava_TI_G_tna_F", "", 1500, { "", "", -1 } },
			{ "G_Balaclava_TI_G_blk_F", "", 1500, { "", "", -1 } },
			{ "G_Bandanna_blk", "", 20, { "", "", -1 } },
			{ "G_Bandanna_khk", "", 20, { "", "", -1 } },
			{ "G_Bandanna_Aviator", "", 20, { "", "", -1 } },
			{ "G_Bandanna_oli", "", 20, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 20, { "", "", -1 } },
			{ "G_Balaclava_combat", "", 20, { "", "", -1 } },
			{ "G_Balaclava_lowprofile", "", 20, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Shades_Green", "", 20, { "", "", -1 } },
            { "G_Shades_Red", "", 20, { "", "", -1 } },
            { "G_Sport_Red", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 100, { "", "", -1 } },
			{ "V_RebreatherIR", "", 100, { "", "", -1 } },
			{ "V_RebreatherIA", "", 100, { "", "", -1 } },
			{ "V_PlateCarrier1_rgr", "", 100, { "", "", -1 } },
			{ "V_PlateCarrier1_blk", "", 100, { "", "", -1 } },
			{ "V_PlateCarrier3_rgr", "", 100, { "", "", -1 } },
			{ "V_PlateCarrierGL_rgr", "", 100, { "", "", -1 } },
			{ "V_PlateCarrierIA1_dgtl", "", 100, { "", "", -1 } },
			{ "V_PlateCarrierIA2_dgtl", "", 100, { "", "", -1 } },
			{ "V_PlateCarrierGL_blk", "", 100, { "", "", -1 } },
			{ "V_PlateCarrierGL_mtp", "", 100, { "", "", -1 } },
			{ "V_PlateCarrierGL_rgr", "", 100, { "", "", -1 } },
			{ "V_PlateCarrierIAGL_dgtl", "", 100, { "", "", -1 } },
			{ "V_PlateCarrierIAGL_oli", "", 100, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 100, { "", "", -1 } },
			{ "V_HarnessO_gry", "", 100, { "", "", -1 } },
			{ "V_HarnessOSpec_brn", "", 100, { "", "", -1 } },
			{ "V_BandollierB_blk", "", 100, { "", "", -1 } },
			{ "V_BandollierB_khk", "", 100, { "", "", -1 } },
			{ "V_Chestrig_khk", "", 100, { "", "", -1 } },
			{ "V_Chestrig_oli", "", 100, { "", "", -1 } },
			{ "V_TacVest_blk", "", 100, { "", "", -1 } },
			{ "V_TacVest_brn", "", 100, { "", "", -1 } },
			{ "V_TacVest_camo", "", 100, { "", "", -1 } },
			{ "V_TacVest_khk", "", 100, { "", "", -1 } },
			{ "V_TacVest_oli", "", 100, { "", "", -1 } },
			{ "V_TacVestIR_blk", "", 100, { "", "", -1 } },
			{ "V_Press_F", "Press Vest", 100, { "", "", -1 } },
			{ "V_DeckCrew_yellow_F", "", 100, { "", "", -1 } },
			{ "V_DeckCrew_blue_F", "", 100, { "", "", -1 } },
			{ "V_DeckCrew_green_F", "", 100, { "", "", -1 } },
			{ "V_DeckCrew_red_F", "", 100, { "", "", -1 } },
			{ "V_DeckCrew_white_F", "", 100, { "", "", -1 } },
			{ "V_DeckCrew_brown_F", "", 100, { "", "", -1 } },
			{ "V_DeckCrew_violet_F", "", 100, { "", "", -1 } },
			{ "V_Safety_yellow_F", "", 100, { "", "", -1 } },
			{ "V_Safety_orange_F", "", 100, { "", "", -1 } },
			{ "V_Safety_blue_F", "", 100, { "", "", -1 } },
			{ "V_Pocketed_olive_F", "Green Fishing Vest", 1000, { "", "", -1 } },
			{ "V_Pocketed_coyote_F", "Tan Fishing Vest", 1000, { "", "", -1 } },
			{ "V_Pocketed_black_F", "Black Fishing Vest", 1000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 200, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 200, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 200, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 200, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 200, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 200, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 200, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 200, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 300, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 300, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 300, { "", "", -1 } },
            { "B_FieldPack_blk", "", 500, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 500, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 600, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 600, { "", "", -1 } },
            { "B_Bergen_rgr", "", 600, { "", "", -1 } },
            { "B_Bergen_blk", "", 600, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 700, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 700, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 700, { "", "", -1 } },
            { "B_Carryall_oli", "", 700, { "", "", -1 } },
            { "B_Carryall_khk", "", 700, { "", "", -1 } },
            { "B_Carryall_cbr", "", 700, { "", "", -1 } },
            { "B_Parachute", "", 700, { "", "", -1 } },
			{ "B_Bergen_tna_F", "", 650, { "", "", -1 } },
			{ "B_Bergen_hex_F", "", 650, { "", "", -1 } },
			{ "B_Bergen_tna_F", "", 650, { "", "", -1 } },
			{ "B_Bergen_mcamo_F ", "", 650, { "", "", -1 } },
            { "C_IDAP_UAV_01_backpack_F", "", 35000, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        condition = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_Rangemaster", "Cop Uniform", 25, "" },
            { "U_B_CombatUniform_mcam_tshirt", "", 350, "call life_coplevel >= 1" },
            { "U_B_CombatUniform_mcam_worn", "", 550, "call life_coplevel >= 2" },
            { "U_B_survival_uniform", "", 1250, "call life_coplevel >= 1" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Cap_police", "", 25, "" },
            { "H_Beret_blk_POLICE", "", 50, "call life_coplevel >= 2" },
            { "H_HelmetB_plain_mcamo", "", 75, "call life_coplevel >= 1" },
            { "H_MilCap_mcamo", "", 100, "call life_coplevel >= 2" },
            { "H_Booniehat_mcamo", "", 120, "call life_coplevel >= 1" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Squares", "", 10, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 20, "" },
            { "G_Sport_Checkered", "", 20, "" },
            { "G_Sport_Blackyellow", "", 20, "" },
            { "G_Sport_BlackWhite", "", 20, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Combat", "", 55, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 800, "" },
            { "V_TacVest_blk_POLICE", "", 1000, "call life_coplevel >= 1" },
            { "V_PlateCarrier2_rgr", "", 1500, "call life_coplevel >= 2" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_FieldPack_cbr", "", 500, "" },
            { "B_AssaultPack_cbr", "", 700, "" },
            { "B_Kitbag_cbr", "", 800, "" },
            { "B_Bergen_sgg", "", 2500, "" },
            { "B_Carryall_cbr", "", 3500, "" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        condition = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        condition = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_Rangemaster", "EMS Uniform", 50, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Cap_blu", "", 10, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Blue", "", 10, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_FieldPack_oli", "EMS Backpack", 3000, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 11500, "" },
            { "U_IG_leader", "Guerilla Leader", 15340, "" },
            { "U_O_PilotCoveralls", "", 15610, "" },
            { "U_O_SpecopsUniform_ocamo", "", 17500, "" },
            { "U_O_GhillieSuit", "", 50000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_MilCap_oucamo", "", 1200, "" },
            { "H_HelmetO_ocamo", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        condition = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };
};
