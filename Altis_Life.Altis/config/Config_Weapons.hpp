/*
*    Format:
*        level: STRING
*            0: FETCH_CONST(var) >= 1
*            You can call any variable and check if its above a certain level
*           e.g
*			 FETCH_CONST(life_donatorlvl) >= 1
*			 call life_coplevel >= 3
*			 FETCH_CONST(life_mediclevel) >= 1
*            
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500, "" },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1, "" },
            { "hgun_ACPC2_F", "", 11500, -1, "" },
            { "hgun_PDW2000_F", "", 20000, -1, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "6Rnd_45ACP_Cylinder", "", 50, 100, "" },
            { "9Rnd_45ACP_Mag", "", 45, 100, "" },
            { "30Rnd_9x21_Mag", "", 75, 100, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, 100, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "arifle_TRG20_F", "", 25000, 2500, "" },
            { "arifle_Katiba_F", "", 30000, 5000, "" },
            { "srifle_DMR_01_F", "", 50000, -1, "" },
            { "arifle_SDAR_F", "", 20000, 7500, "" }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300, 100, "" },
            { "30Rnd_65x39_caseless_green", "", 275, 100, "" },
            { "10Rnd_762x54_Mag", "", 500, 100, "" },
            { "20Rnd_556x45_UW_mag", "", 125, 100, "" }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 100, "" },
            { "optic_Holosight", "", 3600, 100, "" },
            { "optic_Hamr", "", 7500, 100, "" },
            { "acc_flashlight", "", 1000, 100, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1, "" },
            { "hgun_ACPC2_F", "", 4500, -1, "" },
            { "hgun_PDW2000_F", "", 9500, -1, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "6Rnd_45ACP_Cylinder", "", 50, 100, "" },
            { "9Rnd_45ACP_Mag", "", 45, 100, "" },
            { "30Rnd_9x21_Mag", "", 75, 100, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950, 100, "" }
        };
    };
	
	class bm_gun1 {
        name = "Black Market Weapons 1";
        side = "civ";
        license = "bmi1";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "NVGoggles_OPFOR", "", 200, 2500 },
            { "Rangefinder", "", 500, 0 },
			{ "Binocular", "", 150, -1 },
			{ "ItemGPS", "", 100, 45 },
			{ "ItemMap", "", 50, 35 },
			{ "ItemCompass", "", 50, 25 },
			{ "ItemWatch", "", 50, -1 },
            { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "arifle_MX_F", "", 30000, -1 },
			{ "arifle_MXM_F", "", 30000, -1 },
			{ "arifle_MXC_F", "", 30000, -1 },
			{ "arifle_Mk20_F", "", 30000, -1 },
			{ "hgun_Pistol_Signal_F", "Flare Gun", 3000, -1 },
			{ "LMG_Zafir_F", "", 130000, -1 },
			{ "srifle_EBR_F", "", 30000, -1 },
			{ "srifle_DMR_03_tan_F", "", 30000, -1 },
			{ "srifle_DMR_03_khaki_F", "", 30000, -1 },
			{ "srifle_DMR_03_multicam_F", "", 30000, -1 },
			{ "srifle_DMR_03_woodland_F", "", 30000, -1 },
			{ "srifle_DMR_04_Tan_F", "", 30000, -1 },
			{ "srifle_DMR_04_F", "", 30000, -1 },
			{ "srifle_DMR_07_blk_F", "", 33500, 5000 },
            { "arifle_AK12_F", "", 25000, 4000 },
            { "arifle_AKM_F", "", 24500, 3550 },
			{ "srifle_LRR_F", "", 255000, 3550 },
            { "arifle_AKS_F", "", 30000, 3000 },
			{ "arifle_ARX_blk_F", "", 38000, 5000 },
            { "10Rnd_50BW_Mag_F", "", 3000, 100 },
            { "arifle_CTAR_blk_F", "", 33000, 5500 },
            { "SMG_05_F", "", 25000, 2000 },
			{ "launch_RPG7_F", "", 250000, -1 },
            { "arifle_SDAR_F", "", 10000, 7500 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "30Rnd_65x39_caseless_mag", "", 500 },
			{ "6Rnd_GreenSignal_F", "", 500 },
			{ "6Rnd_RedSignal_F", "", 500 },
			{ "10Rnd_762x54_Mag", "", 500 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 500 },
			{ "150Rnd_762x54_Box", "", 1500 },
			{ "150Rnd_762x54_Box_Tracer", "", 750 },
			{ "20Rnd_762x51_Mag", "", 500 },
			{ "30Rnd_545x39_Mag_F", "", 500 },
			{ "10Rnd_127x54_Mag", "", 500 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 10, 5 },
			{ "10Rnd_50BW_Mag_F", "", 5000, 5 },
			{ "30Rnd_762x39_Mag_F", "", 500 },
			{ "7Rnd_408_Mag", "", 1500 },
			{ "30Rnd_762x39_Mag_F", "", 300 },
			{ "30Rnd_580x42_Mag_F", "", 170 },
			{ "RPG7_F", "", 50000 },
            { "20Rnd_556x45_UW_mag", "", 125 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 500 },
			{ "optic_Arco", "", 500 },
			{ "optic_ERCO_blk_F", "", 500, 0 },
			{ "optic_ERCO_khk_F", "", 500, 0 },
			{ "optic_ERCO_snd_F", "", 500, 0 },
			{ "optic_MRCO", "", 500 },
			{ "optic_SOS", "", 500 },
			{ "optic_DMS", "", 500 },
			{ "optic_KHS_blk", "", 500 },
			{ "optic_AMS_snd", "", 500 },
			{ "acc_pointer_IR", "", 500 },
            { "optic_Holosight", "", 600 },
            { "muzzle_snds_H", "", 700 },
			{ "muzzle_snds_L", "", 700 },
			{ "muzzle_snds_M", "", 700 },
			{ "muzzle_snds_B", "", 700 },
			{ "muzzle_snds_H_MG", "", 700 },
			{ "optic_Hamr", "", 700 },
            { "acc_flashlight", "", 200 }
        };
    };

	class bm_gun2 {
        name = "Black Market Weapons 2";
        side = "civ";
        license = "bmi2";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "NVGoggles_OPFOR", "", 200, 2500 },
            { "Rangefinder", "", 500, 0 },
			{ "Binocular", "", 150, -1 },
			{ "ItemGPS", "", 100, 45 },
			{ "ItemMap", "", 50, 35 },
			{ "ItemCompass", "", 50, 25 },
			{ "ItemWatch", "", 50, -1 },
            { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "arifle_MX_F", "", 30000, -1 },
			{ "arifle_MXM_F", "", 30000, -1 },
			{ "arifle_MXC_F", "", 30000, -1 },
			{ "hgun_Pistol_Signal_F", "Flare Gun", 3000, -1 },
			{ "arifle_Mk20_F", "", 30000, -1 },
			{ "LMG_Zafir_F", "", 130000, -1 },
			{ "srifle_EBR_F", "", 30000, -1 },
			{ "srifle_DMR_03_tan_F", "", 30000, -1 },
			{ "srifle_DMR_03_khaki_F", "", 30000, -1 },
			{ "srifle_DMR_03_multicam_F", "", 30000, -1 },
			{ "srifle_DMR_03_woodland_F", "", 30000, -1 },
			{ "srifle_DMR_04_Tan_F", "", 30000, -1 },
			{ "srifle_DMR_04_F", "", 30000, -1 },
			{ "srifle_DMR_07_blk_F", "", 32500, 5000 },
            { "arifle_AK12_F", "", 25000, 4000 },
            { "arifle_AKM_F", "", 24500, 3550 },
			{ "srifle_LRR_F", "", 255000, 3550 },
            { "arifle_AKS_F", "", 20000, 3000 },
			{ "arifle_ARX_blk_F", "", 23000, 5000 },
            { "10Rnd_50BW_Mag_F", "", 3000, 100 },
            { "arifle_CTAR_blk_F", "", 23000, 5500 },
			{ "LMG_03_F", "", 130000, -1 },
			{ "srifle_DMR_02_sniper_F", "", 150000, -1 },
			{ "arifle_SPAR_01_snd_F", "", 30000, -1 },
			{ "arifle_SPAR_02_snd_F", "", 30000, -1 },
			{ "arifle_SPAR_03_snd_F", "", 30000, -1 },
            { "SMG_05_F", "", 25000, 2000 },
			{ "launch_RPG7_F", "", 250000, -1 },
			{ "C_UavTerminal", "", 5000, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
			{ "10Rnd_338_Mag", "", 275 },
            { "30Rnd_65x39_caseless_mag", "", 500 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 900 },
			{ "200Rnd_556x45_Box_F", "", 500 },
			{ "6Rnd_GreenSignal_F", "", 500 },
			{ "6Rnd_RedSignal_F", "", 500 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 10, 5 },
			{ "30Rnd_580x42_Mag_F", "", 170 },
			{ "150Rnd_762x54_Box_Tracer", "", 750 },
			{ "10Rnd_762x54_Mag", "", 500 },
			{ "30Rnd_545x39_Mag_F", "", 500 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 500 },
			{ "150Rnd_762x54_Box", "", 1500 },
			{ "20Rnd_762x51_Mag", "", 500 },
			{ "10Rnd_50BW_Mag_F", "", 5000, 5 },
			{ "10Rnd_127x54_Mag", "", 500 },
			{ "7Rnd_408_Mag", "", 1500 },
			{ "30Rnd_762x39_Mag_F", "", 300 },
			{ "RPG7_F", "", 50000 },
            { "20Rnd_556x45_UW_mag", "", 125 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 500 },
			{ "optic_Arco", "", 500 },
			{ "optic_MRCO", "", 500 },
			{ "optic_ERCO_blk_F", "", 500, 0 },
			{ "optic_ERCO_khk_F", "", 500, 0 },
			{ "optic_ERCO_snd_F", "", 500, 0 },
			{ "optic_SOS", "", 500 },
			{ "optic_DMS", "", 500 },
			{ "optic_KHS_blk", "", 500 },
			{ "optic_AMS_snd", "", 500 },
			{ "acc_pointer_IR", "", 500 },
            { "optic_Holosight", "", 600 },
            { "muzzle_snds_H", "", 700 },
			{ "muzzle_snds_L", "", 700 },
			{ "muzzle_snds_M", "", 700 },
			{ "muzzle_snds_B", "", 700 },
			{ "muzzle_snds_H_MG", "", 700 },
			{ "optic_Hamr", "", 700 },
            { "acc_flashlight", "", 200 }
        };
    };

	class bm_gun3 {
        name = "Black Market Weapons 3";
        side = "civ";
        license = "bmi3";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "NVGogglesB_grn_F", "", 5000, 2500 },
            { "Rangefinder", "", 500, 0 },
			{ "Binocular", "", 150, -1 },
			{ "ItemGPS", "", 100, 45 },
			{ "ItemMap", "", 50, 35 },
			{ "ItemCompass", "", 50, 25 },
			{ "ItemWatch", "", 50, -1 },
            { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "arifle_MX_F", "", 50000, -1 },
			{ "arifle_MXM_F", "", 50000, -1 },
			{ "arifle_MXC_F", "", 50000, -1 },
			{ "arifle_Mk20_F", "", 50000, -1 },
			{ "hgun_Pistol_Signal_F", "Flare Gun", 3000, -1 },
			{ "LMG_Zafir_F", "", 135000, -1 },
			{ "srifle_EBR_F", "", 50000, -1 },
			{ "srifle_DMR_03_tan_F", "", 50000, -1 },
			{ "srifle_DMR_03_khaki_F", "", 50000, -1 },
			{ "srifle_DMR_03_multicam_F", "", 50000, -1 },
			{ "srifle_DMR_03_woodland_F", "", 50000, -1 },
			{ "srifle_DMR_04_Tan_F", "", 50000, -1 },
			{ "srifle_DMR_04_F", "", 50000, -1 },
			{ "srifle_DMR_07_blk_F", "", 37500, 5000 },
            { "arifle_AK12_F", "", 35000, 4000 },
            { "arifle_AKM_F", "", 34500, 3550 },
			{ "srifle_LRR_F", "", 255000, 3550 },
            { "arifle_AKS_F", "", 30000, 3000 },
			{ "arifle_ARX_blk_F", "", 38000, 5000 },
            { "10Rnd_50BW_Mag_F", "", 3000, 100 },
            { "arifle_CTAR_blk_F", "", 39000, 5500 },
			{ "LMG_03_F", "", 150000, -1 },
			{ "srifle_DMR_02_sniper_F", "", 200000, -1 },
			{ "arifle_SPAR_01_snd_F", "", 50000, -1 },
			{ "arifle_SPAR_02_snd_F", "", 50000, -1 },
			{ "arifle_SPAR_03_snd_F", "", 50000, -1 },
            { "SMG_05_F", "", 25000, 2000 },
			{ "LMG_Mk200_F", "", 78000, -1 },
			{ "MMG_02_sand_F", "", 350000, -1 },
			{ "launch_RPG7_F", "", 250000, -1 },
			{ "C_UavTerminal", "", 5000, -1 },
            { "SatchelCharge_Remote_Mag", "", 500000, -1 },
            { "DemoCharge_Remote_Mag", "", 300000, -1 },
            { "launch_RPG32_F", "", 350000, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
			{ "130Rnd_338_Mag", "", 4300 },
			{ "200Rnd_65x39_cased_Box", "", 1300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
			{ "10Rnd_338_Mag", "", 275 },
			{ "6Rnd_GreenSignal_F", "", 500 },
			{ "6Rnd_RedSignal_F", "", 500 },
            { "30Rnd_65x39_caseless_mag", "", 500 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 10, 5 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 900 },
			{ "200Rnd_556x45_Box_F", "", 500 },
			{ "150Rnd_762x54_Box_Tracer", "", 750 },
			{ "10Rnd_762x54_Mag", "", 500 },
			{ "30Rnd_545x39_Mag_F", "", 500 },
			{ "10Rnd_50BW_Mag_F", "", 5000, 5 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 500 },
			{ "30Rnd_580x42_Mag_F", "", 170 },
			{ "150Rnd_762x54_Box", "", 1500 },
			{ "20Rnd_762x51_Mag", "", 500 },
			{ "10Rnd_127x54_Mag", "", 500 },
			{ "7Rnd_408_Mag", "", 1500 },
			{ "30Rnd_762x39_Mag_F", "", 300 },
			{ "RPG32_F", "", 75000 },
			{ "RPG7_F", "", 50000 },
            { "20Rnd_556x45_UW_mag", "", 125 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 500 },
			{ "optic_Arco", "", 500 },
			{ "optic_MRCO", "", 500 },
			{ "optic_ERCO_blk_F", "", 500, 0 },
			{ "optic_ERCO_khk_F", "", 500, 0 },
			{ "optic_ERCO_snd_F", "", 500, 0 },
			{ "optic_SOS", "", 500 },
			{ "optic_DMS", "", 500 },
			{ "optic_KHS_blk", "", 500 },
			{ "optic_AMS_snd", "", 500 },
			{ "acc_pointer_IR", "", 500 },
            { "optic_Holosight", "", 600 },
            { "muzzle_snds_H", "", 700 },
			{ "muzzle_snds_L", "", 700 },
			{ "muzzle_snds_M", "", 700 },
			{ "muzzle_snds_B", "", 700 },
			{ "muzzle_snds_H_MG", "", 700 },
			{ "optic_Hamr", "", 700 },
            { "acc_flashlight", "", 200 }
        };
    };

	class bm_gun4 {
        name = "Black Market Weapons 4";
        side = "civ";
        license = "bmi4";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "NVGogglesB_grn_F", "", 5000, 2500 },
            { "Rangefinder", "", 500, 0 },
			{ "Binocular", "", 150, -1 },
			{ "ItemGPS", "", 100, 45 },
			{ "ItemMap", "", 50, 35 },
			{ "ItemCompass", "", 50, 25 },
			{ "ItemWatch", "", 50, -1 },
            { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "arifle_MX_F", "", 30000, -1 },
			{ "arifle_MXM_F", "", 30000, -1 },
			{ "hgun_Pistol_Signal_F", "Flare Gun", 3000, -1 },
			{ "arifle_MXC_F", "", 30000, -1 },
			{ "arifle_Mk20_F", "", 30000, -1 },
			{ "LMG_Zafir_F", "", 120000, -1 },
			{ "srifle_EBR_F", "", 30000, -1 },
			{ "srifle_DMR_03_tan_F", "", 30000, -1 },
			{ "srifle_DMR_03_khaki_F", "", 30000, -1 },
			{ "srifle_DMR_03_multicam_F", "", 30000, -1 },
			{ "srifle_DMR_03_woodland_F", "", 30000, -1 },
			{ "srifle_DMR_04_Tan_F", "", 30000, -1 },
			{ "srifle_DMR_04_F", "", 30000, -1 },
			{ "srifle_DMR_07_blk_F", "", 31500, 5000 },
            { "arifle_AK12_F", "", 25000, 4000 },
            { "arifle_AKM_F", "", 24500, 3550 },
			{ "srifle_LRR_F", "", 255000, 3550 },
            { "arifle_AKS_F", "", 20000, 3000 },
			{ "arifle_ARX_blk_F", "", 28000, 5000 },
            { "10Rnd_50BW_Mag_F", "", 3000, 100 },
            { "arifle_CTAR_blk_F", "", 21000, 5500 },
			{ "LMG_03_F", "", 150000, -1 },
			{ "srifle_DMR_02_sniper_F", "", 200000, -1 },
			{ "arifle_SPAR_01_snd_F", "", 30000, -1 },
			{ "arifle_SPAR_02_snd_F", "", 30000, -1 },
			{ "arifle_SPAR_03_snd_F", "", 30000, -1 },
            { "SMG_05_F", "", 24000, 2000 },
			{ "LMG_Mk200_F", "", 72000, -1 },
			{ "launch_RPG32_F", "", 350000, -1 },
			{ "launch_NLAW_F", "", 500000, -1 },
			{ "MMG_02_sand_F", "", 250000, -1 },
			{ "MMG_01_hex_F", "", 250000, -1 },
			{ "launch_RPG7_F", "", 250000, -1 },
			{ "C_UavTerminal", "", 5000, -1 },
            { "SatchelCharge_Remote_Mag", "", 500000, -1 },
            { "DemoCharge_Remote_Mag", "", 300000, -1 },
            { "launch_B_Titan_F", "", 800000, -1 },
            { "arifle_SDAR_F", "", 2000, 7500 }
        };
        mags[] = {
			{ "10Rnd_93x64_DMR_05_Mag", "", 4300 },
            { "30Rnd_556x45_Stanag", "", 300 },
			{ "130Rnd_338_Mag", "", 4300 },
			{ "5Rnd_127x108_Mag", "", 2300 },
			{ "5Rnd_127x108_APDS_Mag", "", 2300 },
			{ "NLAW_F", "", 15000 },
			{ "150Rnd_762x54_Box_Tracer", "", 750 },
			{ "150Rnd_93x64_Mag", "", 4500 },
			{ "200Rnd_65x39_cased_Box", "", 1300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
			{ "10Rnd_338_Mag", "", 275 },
            { "30Rnd_65x39_caseless_mag", "", 500 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 10, 5 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 900 },
			{ "200Rnd_556x45_Box_F", "", 500 },
			{ "30Rnd_545x39_Mag_F", "", 500 },
			{ "10Rnd_762x54_Mag", "", 500 },
			{ "10Rnd_50BW_Mag_F", "", 5000, 5 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 500 },
			{ "30Rnd_580x42_Mag_F", "", 170 },
			{ "150Rnd_762x54_Box", "", 1500 },
			{ "20Rnd_762x51_Mag", "", 500 },
			{ "10Rnd_127x54_Mag", "", 500 },
			{ "7Rnd_408_Mag", "", 1500 },
			{ "30Rnd_762x39_Mag_F", "", 300 },
			{ "RPG7_F", "", 50000 },
			{ "RPG32_F", "", 75000 },
			{ "6Rnd_GreenSignal_F", "", 500 },
			{ "6Rnd_RedSignal_F", "", 500 },
			{ "Titan_AA", "", 100000 },
            { "20Rnd_556x45_UW_mag", "", 125 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 500 },
			{ "optic_Arco", "", 500 },
			{ "optic_MRCO", "", 500 },
			{ "optic_SOS", "", 500 },
			{ "optic_ERCO_blk_F", "", 500, 0 },
			{ "optic_ERCO_khk_F", "", 500, 0 },
			{ "optic_ERCO_snd_F", "", 500, 0 },
			{ "optic_DMS", "", 500 },
			{ "optic_Nightstalker", "", 500 },
			{ "optic_tws", "", 500 },
			{ "optic_KHS_blk", "", 500 },
			{ "optic_AMS_snd", "", 500 },
			{ "acc_pointer_IR", "", 500 },
            { "optic_Holosight", "", 600 },
            { "muzzle_snds_H", "", 700 },
			{ "muzzle_snds_L", "", 700 },
			{ "muzzle_snds_M", "", 700 },
			{ "muzzle_snds_B", "", 700 },
			{ "muzzle_snds_H_MG", "", 700 },
			{ "optic_Hamr", "", 700 },
            { "acc_flashlight", "", 200 }
        };
    };

	class bm_gun5 {
        name = "Black Market Weapons 5";
        side = "civ";
        license = "bmi5";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "NVGogglesB_grn_F", "", 5000, 2500 },
            { "Rangefinder", "", 500, 0 },
			{ "Binocular", "", 150, -1 },
			{ "ItemGPS", "", 100, 45 },
			{ "ItemMap", "", 50, 35 },
			{ "ItemCompass", "", 50, 25 },
			{ "ItemWatch", "", 50, -1 },
            { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "arifle_MX_F", "", 30000, -1 },
			{ "arifle_MXM_F", "", 30000, -1 },
			{ "arifle_MXC_F", "", 30000, -1 },
			{ "arifle_Mk20_F", "", 30000, -1 },
			{ "hgun_Pistol_Signal_F", "Flare Gun", 3000, -1 },
			{ "LMG_Zafir_F", "", 130000, -1 },
			{ "srifle_EBR_F", "", 30000, -1 },
			{ "srifle_DMR_03_tan_F", "", 30000, -1 },
			{ "srifle_DMR_03_khaki_F", "", 30000, -1 },
			{ "srifle_DMR_03_multicam_F", "", 30000, -1 },
			{ "srifle_DMR_03_woodland_F", "", 30000, -1 },
			{ "srifle_DMR_04_Tan_F", "", 30000, -1 },
			{ "srifle_DMR_04_F", "", 30000, -1 },
			{ "srifle_DMR_07_blk_F", "", 32500, 5000 },
            { "arifle_AK12_F", "", 25000, 4000 },
            { "arifle_AKM_F", "", 24500, 3550 },
			{ "srifle_LRR_F", "", 255000, 3550 },
            { "arifle_AKS_F", "", 20000, 3000 },
			{ "arifle_ARX_blk_F", "", 22000, 5000 },
            { "10Rnd_50BW_Mag_F", "", 3000, 100 },
            { "arifle_CTAR_blk_F", "", 22000, 5500 },
			{ "LMG_03_F", "", 120000, -1 },
			{ "srifle_DMR_02_sniper_F", "", 150000, -1 },
			{ "arifle_SPAR_01_snd_F", "", 30000, -1 },
			{ "arifle_SPAR_02_snd_F", "", 30000, -1 },
			{ "arifle_SPAR_03_snd_F", "", 30000, -1 },
            { "SMG_05_F", "", 22000, 2000 },
			{ "LMG_Mk200_F", "", 62000, -1 },
			{ "srifle_DMR_05_tan_f", "", 168000, -1 },
			{ "launch_NLAW_F", "", 500000, -1 },
			{ "launch_RPG32_F", "", 350000, -1 },
			{ "MMG_02_sand_F", "", 150000, -1 },
			{ "MMG_01_hex_F", "", 150000, -1 },
			{ "launch_RPG7_F", "", 250000, -1 },
			{ "C_UavTerminal", "", 5000, -1 },
            { "DemoCharge_Remote_Mag", "", 300000, -1 },
            { "SatchelCharge_Remote_Mag", "", 500000, -1 },
            { "launch_B_Titan_F", "", 800000, -1 },
            { "arifle_SDAR_F", "", 2000, 7500 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
			{ "130Rnd_338_Mag", "", 4300 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 4300 },
			{ "5Rnd_127x108_Mag", "", 2300 },
			{ "5Rnd_127x108_APDS_Mag", "", 2300 },
			{ "NLAW_F", "", 100000 },
			{ "RPG32_F", "", 75000 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 10, 5 },
			{ "150Rnd_93x64_Mag", "", 4500 },
			{ "200Rnd_65x39_cased_Box", "", 1300 },
			{ "30Rnd_580x42_Mag_F", "", 170 },
			{ "30Rnd_545x39_Mag_F", "", 500 },
            { "30Rnd_65x39_caseless_green", "", 275 },
			{ "10Rnd_338_Mag", "", 275 },
			{ "150Rnd_762x54_Box_Tracer", "", 750 },
            { "30Rnd_65x39_caseless_mag", "", 500 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 900 },
			{ "10Rnd_50BW_Mag_F", "", 5000, 5 },
			{ "200Rnd_556x45_Box_F", "", 500 },
			{ "10Rnd_762x54_Mag", "", 500 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 500 },
			{ "150Rnd_762x54_Box", "", 1500 },
			{ "20Rnd_762x51_Mag", "", 500 },
			{ "10Rnd_127x54_Mag", "", 500 },
			{ "6Rnd_GreenSignal_F", "", 500 },
			{ "6Rnd_RedSignal_F", "", 500 },
			{ "7Rnd_408_Mag", "", 1500 },
			{ "30Rnd_762x39_Mag_F", "", 300 },
			{ "RPG7_F", "", 50000 },
			{ "Titan_AA", "", 100000 },
            { "20Rnd_556x45_UW_mag", "", 125 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 500 },
			{ "optic_Arco", "", 500 },
			{ "optic_MRCO", "", 500 },
			{ "optic_ERCO_blk_F", "", 500, 0 },
			{ "optic_ERCO_khk_F", "", 500, 0 },
			{ "optic_ERCO_snd_F", "", 500, 0 },
			{ "optic_SOS", "", 500 },
			{ "optic_DMS", "", 500 },
			{ "optic_Nightstalker", "", 500 },
			{ "optic_tws", "", 500 },
			{ "optic_KHS_blk", "", 500 },
			{ "optic_AMS_snd", "", 500 },
			{ "acc_pointer_IR", "", 500 },
            { "optic_Holosight", "", 600 },
            { "muzzle_snds_H", "", 700 },
			{ "muzzle_snds_L", "", 700 },
			{ "muzzle_snds_M", "", 700 },
			{ "muzzle_snds_B", "", 700 },
			{ "muzzle_snds_H_MG", "", 700 },
			{ "optic_Hamr", "", 700 },
            { "acc_flashlight", "", 200 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, 45, "" },
            { "ItemMap", "", 50, 35, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, -1, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 2000, 980, "" },
            { "Chemlight_red", "", 300, -1, "" },
            { "Chemlight_yellow", "", 300, 50, "" },
            { "Chemlight_green", "", 300, 50, "" },
            { "Chemlight_blue", "", 300, 50, "" }
        };
        mags[] = {};
        accs[] = {};
    };
	
	class blackmarket {
        name = "Black Market";
        side = "civ";
        license[] = {"bmcustomer", "bminvestor"};
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, -1, "" },
            { "ItemGPS", "", 500, 45, "" },
            { "ItemMap", "", 250, 35, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, -1, "" },
            { "FirstAidKit", "", 750, 65, "" },
            { "NVGoggles", "", 10000, 980, "" },
            { "Chemlight_red", "", 1500, -1, "" },
            { "Chemlight_yellow", "", 1500, 50, "" },
            { "Chemlight_green", "", 1500, 50, "" },
            { "Chemlight_blue", "", 1500, 50, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, 45, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 2000, 980, "" },
            { "HandGrenade_Stone", "Flashbang", 1700, -1, "" },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650, "" },
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500, "" },
            { "hgun_P07_F", "", 7500, 1500, "" },
            { "SMG_02_ACO_F", "", 30000, -1, "call life_coplevel >= 2" },
            { "arifle_MX_F", "", 35000, 7500, "call life_coplevel >= 2" },
            { "hgun_ACPC2_F", "", 17500, -1, "call life_coplevel >= 3" },
            { "arifle_MXC_F", "", 30000, 5000, "call life_coplevel >= 3" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45, 100, "" },
            { "30Rnd_65x39_caseless_mag", "", 130, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 100, "call life_coplevel >= 2" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "call life_coplevel >= 3" }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650, 100, "" },
            { "acc_flashlight", "", 750, 100, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 1200, 100, "call life_coplevel >= 2" },
            { "optic_Arco", "", 2500, 100, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 2750, 100, "call life_coplevel >= 2" },
            { "optic_MRD", "", 2750, 100, "call life_coplevel >= 2" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 45, "" },
            { "Binocular", "", 150, -1, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 1200, 980, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
