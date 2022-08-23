////////////////////////////////////////////////////////////////////
//DeRap: exile_client\config.bin
//Produced from mikero's Dos Tools Dll version 6.94
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Tue Aug 23 13:31:18 2022 : 'file' last modified on Tue Aug 23 11:37:47 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class exile_client
	{
		requiredVersion = 0.1;
		requiredAddons[] = {"a3_characters_f","a3_characters_f_beta","a3_characters_f_epa","a3_characters_f_epb","a3_characters_f_epc","a3_characters_f_gamma","a3_data_f","a3_weapons_f","a3_weapons_f_beta","a3_weapons_f_bootcamp","a3_weapons_f_epa","a3_weapons_f_epb","a3_weapons_f_epc","a3_weapons_f_gamma","a3_rocks_f","a3_anims_f","a3_weapons_f_mark","a3_weapons_f_exp","a3_map_altis_scenes","a3_map_vr_scenes","a3_map_stratis_scenes","a3_ui_f","a3_3den","dbo_old_bike","gnt_c185","exile_assets"};
		units[] = {"Exile_ConcreteMixer","Exile_Cutscene_Abstract","Exile_Cutscene_Player","Exile_Cutscene_Prisoner01","Exile_Cutscene_Prisoner02","Exile_Cutscene_Pilot","Exile_Cutscene_Police01","Exile_Cutscene_Police02","Exile_Guard_Abstract","Exile_Guard_01","Exile_Guard_02","Exile_Guard_03","Exile_Locker","Exile_Preloader","Exile_RussianRouletteChair","Exile_Sound_Flies","Exile_Sound_PortableGenerator","Exile_Sound_Grinding","Exile_Trader_Abstract","Exile_Trader_Armory","Exile_Trader_Diving","Exile_Trader_SpecialOperations","Exile_Trader_Equipment","Exile_Trader_Food","Exile_Trader_Hardware","Exile_Trader_Vehicle","Exile_Trader_Aircraft","Exile_Trader_Boat","Exile_Trader_WasteDump","Exile_Trader_Office","Exile_Trader_VehicleCustoms","Exile_Trader_AircraftCustoms","Exile_Trader_BoatCustoms","Exile_Trader_RussianRoulette","Exile_Trader_CommunityCustoms","Exile_Trader_CommunityCustoms2","Exile_Trader_CommunityCustoms3","Exile_Trader_CommunityCustoms4","Exile_Trader_CommunityCustoms5","Exile_Trader_CommunityCustoms6","Exile_Trader_CommunityCustoms7","Exile_Trader_CommunityCustoms8","Exile_Trader_CommunityCustoms9","Exile_Trader_CommunityCustoms10","Exile_Construction_BaseCamera_Preview","Exile_Construction_BaseCamera_Static","Exile_Construction_CamoTent_Preview","Exile_Construction_CampFire_Preview","Exile_Construction_CampFire_Static","Exile_Construction_ConcreteDoorway_Preview","Exile_Construction_ConcreteDoorway_Static","Exile_Construction_ConcreteDoor_Preview","Exile_Construction_ConcreteDoor_Static","Exile_Construction_ConcreteDrawBridge_Preview","Exile_Construction_ConcreteDrawBridge_Static","Exile_Construction_ConcreteFloorHatch_Preview","Exile_Construction_ConcreteFloorHatch_Static","Exile_Construction_ConcreteFloorPortSmall_Preview","Exile_Construction_ConcreteFloorPortSmall_Static","Exile_Construction_ConcreteFloorPort_Preview","Exile_Construction_ConcreteFloorPort_Static","Exile_Construction_ConcreteFloor_Preview","Exile_Construction_ConcreteFloor_Static","Exile_Construction_ConcreteGate_Preview","Exile_Construction_ConcreteGate_Static","Exile_Construction_ConcreteLadderHatch_Preview","Exile_Construction_ConcreteLadderHatch_Static","Exile_Construction_ConcreteStairs_Preview","Exile_Construction_ConcreteStairs_Static","Exile_Construction_ConcreteSupport_Preview","Exile_Construction_ConcreteSupport_Static","Exile_Construction_ConcreteWall_Preview","Exile_Construction_ConcreteWall_Static","Exile_Construction_ConcreteWindowHatch_Preview","Exile_Construction_ConcreteWindowHatch_Static","Exile_Construction_ConcreteWindow_Preview","Exile_Construction_ConcreteWindow_Static","Exile_Construction_Flag_Preview","Exile_Construction_Flag_Static","Exile_Construction_FloodLight_Preview","Exile_Construction_FloodLight_Static","Exile_Construction_HBarrier5_Preview","Exile_Construction_HBarrier5_Static","Exile_Construction_Laptop_Preview","Exile_Construction_Laptop_Static","Exile_Construction_MetalHedgehog_Preview","Exile_Construction_MetalHedgehog_Static","Exile_Construction_MetalLadderDouble_Preview","Exile_Construction_MetalLadderDouble_Static","Exile_Construction_MetalLadder_Preview","Exile_Construction_MetalLadder_Static","Exile_Construction_OldChest_Preview","Exile_Construction_PortableGenerator_Preview","Exile_Construction_PortableGenerator_Static","Exile_Construction_RazorWire_Preview","Exile_Construction_Safe_Preview","Exile_Construction_Safe_Small_Preview","Exile_Construction_SandBags_Corner_Preview","Exile_Construction_SandBags_Corner_Static","Exile_Construction_SandBags_Long_Preview","Exile_Construction_SandBags_Long_Static","Exile_Construction_StorageCrate_Preview","Exile_Construction_SupplyBox_Preview","Exile_Construction_WaterBarrel_Preview","Exile_Construction_WaterBarrel_Static","Exile_Construction_WiredFence_Preview","Exile_Construction_WiredFence_Static","Exile_Construction_WoodDoorway_Preview","Exile_Construction_WoodDoorway_Reinforced_Preview","Exile_Construction_WoodDoorway_Reinforced_Static","Exile_Construction_WoodDoorway_Static","Exile_Construction_WoodDoor_Preview","Exile_Construction_WoodDoor_Reinforced_Preview","Exile_Construction_WoodDoor_Reinforced_Static","Exile_Construction_WoodDoor_Static","Exile_Construction_WoodDrawBridge_Preview","Exile_Construction_WoodDrawBridge_Reinforced_Preview","Exile_Construction_WoodDrawBridge_Reinforced_Static","Exile_Construction_WoodDrawBridge_Static","Exile_Construction_WoodFloorPortSmall_Preview","Exile_Construction_WoodFloorPortSmall_Reinforced_Static","Exile_Construction_WoodFloorPortSmall_Static","Exile_Construction_WoodFloorPort_Preview","Exile_Construction_WoodFloorPort_Static","Exile_Construction_WoodFloor_Preview","Exile_Construction_WoodFloor_Reinforced_Preview","Exile_Construction_WoodFloor_Reinforced_Static","Exile_Construction_WoodFloor_Static","Exile_Construction_WoodGate_Preview","Exile_Construction_WoodGate_Reinforced_Preview","Exile_Construction_WoodGate_Reinforced_Static","Exile_Construction_WoodGate_Static","Exile_Construction_WoodLadderHatch_Preview","Exile_Construction_WoodLadderHatch_Reinforced_Static","Exile_Construction_WoodLadderHatch_Static","Exile_Construction_WoodLadder_Preview","Exile_Construction_WoodLadder_Static","Exile_Construction_WoodStairs_Preview","Exile_Construction_WoodStairs_Static","Exile_Construction_WoodSupport_Preview","Exile_Construction_WoodSupport_Static","Exile_Construction_WoodWallHalf_Preview","Exile_Construction_WoodWallHalf_Reinforced_Preview","Exile_Construction_WoodWallHalf_Reinforced_Static","Exile_Construction_WoodWallHalf_Static","Exile_Construction_WoodWall_Preview","Exile_Construction_WoodWall_Reinforced_Preview","Exile_Construction_WoodWall_Reinforced_Static","Exile_Construction_WoodWall_Static","Exile_Construction_WoodWindow_Preview","Exile_Construction_WoodWindow_Reinforced_Preview","Exile_Construction_WoodWindow_Reinforced_Static","Exile_Construction_WoodWindow_Static","Exile_Construction_WorkBench_Preview","Exile_Construction_WorkBench_Static","Exile_Container_CamoTent","Exile_Container_OldChest","Exile_Container_Safe","Exile_Container_Safe_Small","Exile_Container_Storagecrate","Exile_Container_SupplyBox","Exile_Cosmetic_BBQSandwich","Exile_Cosmetic_BeefParts","Exile_Cosmetic_Beer","Exile_Cosmetic_CatFood","Exile_Cosmetic_Cheathas","Exile_Cosmetic_CockONut","Exile_Cosmetic_DogFood","Exile_Cosmetic_EnergyDrink","Exile_Cosmetic_EMRE","Exile_Cosmetic_InstantCoffee","Exile_Cosmetic_MacasCheese","Exile_Cosmetic_Moobar","Exile_Cosmetic_Raisins","Exile_Cosmetic_PowerDrink","Exile_Cosmetic_Surstromming","Exile_Cosmetic_Magazine01","Exile_Cosmetic_Magazine02","Exile_Cosmetic_Magazine03","Exile_Cosmetic_Magazine04","Exile_Cosmetic_PopTabs","Exile_Cosmetic_GasMask","Exile_Cosmetic_Knife","Exile_Cosmetic_Foolbox","Exile_Cosmetic_Axe","Exile_Cosmetic_SledgeHammer","Exile_Cosmetic_Shovel","Exile_Cosmetic_MG","Exile_Cosmetic_UAV","Exile_Sign_Escape","Exile_Sign_TraderCity","Exile_Unit_ExileCustoms","Exile_Unit_GhostPlayer","Exile_Unit_Player","Exile_Unit_Wetsuit_NATO","Exile_Unit_Wetsuit_AAF","Exile_Unit_Wetsuit_CSAT","Exile_Unit_Woodland","Exile_Car_BRDM2_HQ","Exile_Car_BTR40_MG_Green","Exile_Car_BTR40_MG_Camo","Exile_Car_BTR40_Green","Exile_Car_BTR40_Camo","Exile_Car_Golf_Red","Exile_Car_Golf_Black","Exile_Car_Hatchback_Beige","Exile_Car_Hatchback_Green","Exile_Car_Hatchback_Blue","Exile_Car_Hatchback_BlueCustom","Exile_Car_Hatchback_BeigeCustom","Exile_Car_Hatchback_Yellow","Exile_Car_Hatchback_Grey","Exile_Car_Hatchback_Black","Exile_Car_Hatchback_Dark","Exile_Car_Hatchback_Rusty1","Exile_Car_Hatchback_Rusty2","Exile_Car_Hatchback_Rusty3","Exile_Car_Hatchback_Sport_Red","Exile_Car_Hatchback_Sport_Blue","Exile_Car_Hatchback_Sport_Orange","Exile_Car_Hatchback_Sport_White","Exile_Car_Hatchback_Sport_Beige","Exile_Car_Hatchback_Sport_Green","Exile_Car_Hatchback_Sport_Admin","Exile_Car_HEMMT","Exile_Car_HMMWV_M134_Green","Exile_Car_HMMWV_M134_Desert","Exile_Car_HMMWV_M2_Green","Exile_Car_HMMWV_M2_Desert","Exile_Car_HMMWV_MEV_Green","Exile_Car_HMMWV_MEV_Desert","Exile_Car_HMMWV_UNA_Green","Exile_Car_HMMWV_UNA_Desert","Exile_Car_Hunter","Exile_Car_Ifrit","Exile_Car_Ikarus_Blue","Exile_Car_Ikarus_Red","Exile_Car_Ikarus_Party","Exile_Car_Kart_BluKing","Exile_Car_Kart_RedStone","Exile_Car_Kart_Vrana","Exile_Car_Kart_Green","Exile_Car_Kart_Blue","Exile_Car_Kart_Orange","Exile_Car_Kart_White","Exile_Car_Kart_Yellow","Exile_Car_Kart_Black","Exile_Car_Lada_Green","Exile_Car_Lada_Taxi","Exile_Car_Lada_Red","Exile_Car_Lada_White","Exile_Car_Lada_Hipster","Exile_Car_LandRover_Red","Exile_Car_LandRover_Urban","Exile_Car_LandRover_Green","Exile_Car_LandRover_Sand","Exile_Car_LandRover_Desert","Exile_Car_LandRover_Ambulance_Green","Exile_Car_LandRover_Ambulance_Desert","Exile_Car_LandRover_Ambulance_Sand","Exile_Car_MB4WD","Exile_Car_MB4WDOpen","Exile_Car_Octavius_White","Exile_Car_Octavius_Black","Exile_Car_Offroad_Red","Exile_Car_Offroad_Beige","Exile_Car_Offroad_White","Exile_Car_Offroad_Blue","Exile_Car_Offroad_DarkRed","Exile_Car_Offroad_BlueCustom","Exile_Car_Offroad_Guerilla01","Exile_Car_Offroad_Guerilla02","Exile_Car_Offroad_Guerilla03","Exile_Car_Offroad_Guerilla04","Exile_Car_Offroad_Guerilla05","Exile_Car_Offroad_Guerilla06","Exile_Car_Offroad_Guerilla07","Exile_Car_Offroad_Guerilla08","Exile_Car_Offroad_Guerilla09","Exile_Car_Offroad_Guerilla10","Exile_Car_Offroad_Guerilla11","Exile_Car_Offroad_Guerilla12","Exile_Car_Offroad_Rusty1","Exile_Car_Offroad_Rusty2","Exile_Car_Offroad_Rusty3","Exile_Car_Offroad_Armed_Guerilla01","Exile_Car_Offroad_Armed_Guerilla02","Exile_Car_Offroad_Armed_Guerilla03","Exile_Car_Offroad_Armed_Guerilla04","Exile_Car_Offroad_Armed_Guerilla05","Exile_Car_Offroad_Armed_Guerilla06","Exile_Car_Offroad_Armed_Guerilla07","Exile_Car_Offroad_Armed_Guerilla08","Exile_Car_Offroad_Armed_Guerilla09","Exile_Car_Offroad_Armed_Guerilla10","Exile_Car_Offroad_Armed_Guerilla11","Exile_Car_Offroad_Armed_Guerilla12","Exile_Car_Offroad_Repair_Civillian","Exile_Car_Offroad_Repair_Red","Exile_Car_Offroad_Repair_Beige","Exile_Car_Offroad_Repair_White","Exile_Car_Offroad_Repair_Blue","Exile_Car_Offroad_Repair_DarkRed","Exile_Car_Offroad_Repair_BlueCustom","Exile_Car_Offroad_Repair_Guerilla01","Exile_Car_Offroad_Repair_Guerilla02","Exile_Car_Offroad_Repair_Guerilla03","Exile_Car_Offroad_Repair_Guerilla04","Exile_Car_Offroad_Repair_Guerilla05","Exile_Car_Offroad_Repair_Guerilla06","Exile_Car_Offroad_Repair_Guerilla07","Exile_Car_Offroad_Repair_Guerilla08","Exile_Car_Offroad_Repair_Guerilla09","Exile_Car_Offroad_Repair_Guerilla10","Exile_Car_Offroad_Repair_Guerilla11","Exile_Car_Offroad_Repair_Guerilla12","Exile_Car_OldTractor_Red","Exile_Car_ProwlerLight","Exile_Car_ProwlerUnarmed","Exile_Car_QilinUnarmed","Exile_Car_Strider","Exile_Car_SUV_Red","Exile_Car_SUV_Black","Exile_Car_SUV_Grey","Exile_Car_SUV_Orange","Exile_Car_SUV_Rusty1","Exile_Car_SUV_Rusty2","Exile_Car_SUV_Rusty3","Exile_Car_SUVXL_Black","Exile_Car_SUV_Armed_Black","Exile_Car_Tempest","Exile_Car_TowTractor_White","Exile_Car_Tractor_Red","Exile_Car_UAZ_Green","Exile_Car_UAZ_Open_Green","Exile_Car_Ural_Covered_Blue","Exile_Car_Ural_Covered_Yellow","Exile_Car_Ural_Covered_Worker","Exile_Car_Ural_Covered_Military","Exile_Car_Ural_Open_Blue","Exile_Car_Ural_Open_Yellow","Exile_Car_Ural_Open_Worker","Exile_Car_Ural_Open_Military","Exile_Car_V3S_Covered","Exile_Car_V3S_Open","Exile_Car_Van_Black","Exile_Car_Van_White","Exile_Car_Van_Red","Exile_Car_Van_Guerilla01","Exile_Car_Van_Guerilla02","Exile_Car_Van_Guerilla03","Exile_Car_Van_Guerilla04","Exile_Car_Van_Guerilla05","Exile_Car_Van_Guerilla06","Exile_Car_Van_Guerilla07","Exile_Car_Van_Guerilla08","Exile_Car_Van_Box_Black","Exile_Car_Van_Box_White","Exile_Car_Van_Box_Red","Exile_Car_Van_Box_Guerilla01","Exile_Car_Van_Box_Guerilla02","Exile_Car_Van_Box_Guerilla03","Exile_Car_Van_Box_Guerilla04","Exile_Car_Van_Box_Guerilla05","Exile_Car_Van_Box_Guerilla06","Exile_Car_Van_Box_Guerilla07","Exile_Car_Van_Box_Guerilla08","Exile_Car_Van_Fuel_Black","Exile_Car_Van_Fuel_White","Exile_Car_Van_Fuel_Red","Exile_Car_Van_Fuel_Guerilla01","Exile_Car_Van_Fuel_Guerilla02","Exile_Car_Van_Fuel_Guerilla03","Exile_Car_Volha_Blue","Exile_Car_Volha_White","Exile_Car_Volha_Black","Exile_Car_Zamak","Exile_Bike_MountainBike","Exile_Bike_OldBike","Exile_Bike_QuadBike_Black","Exile_Bike_QuadBike_Blue","Exile_Bike_QuadBike_Red","Exile_Bike_QuadBike_White","Exile_Bike_QuadBike_Nato","Exile_Bike_QuadBike_Csat","Exile_Bike_QuadBike_Fia","Exile_Bike_QuadBike_Guerilla01","Exile_Bike_QuadBike_Guerilla02","Exile_Chopper_Hellcat_Green","Exile_Chopper_Hellcat_FIA","Exile_Chopper_Huey_Green","Exile_Chopper_Huey_Desert","Exile_Chopper_Huey_Armed_Green","Exile_Chopper_Huey_Armed_Desert","Exile_Chopper_Hummingbird_Green","Exile_Chopper_Hummingbird_Civillian_Blue","Exile_Chopper_Hummingbird_Civillian_Red","Exile_Chopper_Hummingbird_Civillian_ION","Exile_Chopper_Hummingbird_Civillian_BlueLine","Exile_Chopper_Hummingbird_Civillian_Digital","Exile_Chopper_Hummingbird_Civillian_Elliptical","Exile_Chopper_Hummingbird_Civillian_Furious","Exile_Chopper_Hummingbird_Civillian_GrayWatcher","Exile_Chopper_Hummingbird_Civillian_Jeans","Exile_Chopper_Hummingbird_Civillian_Light","Exile_Chopper_Hummingbird_Civillian_Shadow","Exile_Chopper_Hummingbird_Civillian_Sheriff","Exile_Chopper_Hummingbird_Civillian_Speedy","Exile_Chopper_Hummingbird_Civillian_Sunset","Exile_Chopper_Hummingbird_Civillian_Vrana","Exile_Chopper_Hummingbird_Civillian_Wasp","Exile_Chopper_Hummingbird_Civillian_Wave","Exile_Chopper_Huron_Black","Exile_Chopper_Huron_Green","Exile_Chopper_Mohawk_FIA","Exile_Chopper_Orca_CSAT","Exile_Chopper_Orca_Black","Exile_Chopper_Orca_BlackCustom","Exile_Chopper_Taru_CSAT","Exile_Chopper_Taru_Black","Exile_Chopper_Taru_Covered_CSAT","Exile_Chopper_Taru_Covered_Black","Exile_Chopper_Taru_Transport_CSAT","Exile_Chopper_Taru_Transport_Black","Exile_Boat_MotorBoat_Police","Exile_Boat_MotorBoat_Orange","Exile_Boat_MotorBoat_White","Exile_Boat_RHIB","Exile_Boat_RubberDuck_CSAT","Exile_Boat_RubberDuck_Digital","Exile_Boat_RubberDuck_Orange","Exile_Boat_RubberDuck_Blue","Exile_Boat_RubberDuck_Black","Exile_Boat_SDV_CSAT","Exile_Boat_SDV_Digital","Exile_Boat_SDV_Grey","Exile_Boat_WaterScooter","Exile_Plane_AN2_Abstract","Exile_Plane_AN2_Green","Exile_Plane_AN2_White","Exile_Plane_AN2_Stripe","Exile_Plane_BlackfishInfantry","Exile_Plane_BlackfishVehicle","Exile_Plane_Ceasar","Exile_Plane_Cessna","Exile_Casino_TwinkleTwister","Exile_Plant_GreenBush","Exile_Plant_GreenBush2","Exile_Plant_GreenBush3","Exile_Plant_BrownBush","Exile_Plant_GreenBush5","Exile_Plant_GreenBush6","Exile_Plant_GreenBush7","Exile_Plant_GreenBush8","Exile_Animal_Goat_Black","Exile_Animal_Goat_Dirty","Exile_Animal_Goat_White","Exile_Animal_Goat_Old","Exile_Animal_Goat_Spotted","Exile_Animal_Hen_White","Exile_Animal_Rooster_Brown","Exile_Animal_Rooster_White","Exile_Animal_Rooster_Gold","Exile_Animal_Sheep_Beige","Exile_Animal_Sheep_White","Exile_Animal_Sheep_Brown","Exile_Animal_Sheep_Spotted","Exile_Animal_Sheep_Tricolor"};
		weapons[] = {"arifle_MX_SW_F","arifle_MX_SW_Black_F","arifle_SPAR_02_blk_F","arifle_SPAR_02_khk_F","arifle_SPAR_02_snd_F","MMG_01_hex_F","MMG_01_tan_F","MMG_02_camo_F","MMG_02_black_F","MMG_02_sand_F","Throw","Exile_Cap_Exile","Exile_Headgear_GasMask","Exile_Headgear_SafetyHelmet","Exile_Headgear_SantaHat","Exile_Horn_01","Exile_Horn_02","Exile_Horn_03","Exile_Horn_04","Exile_Horn_05","Exile_Horn_06","Exile_Horn_07","Exile_Horn_08","Exile_Item_XM8","Exile_Melee_Axe","Exile_Melee_Shovel","Exile_Melee_SledgeHammer","Exile_Uniform_BambiOverall","Exile_Uniform_ExileCustoms","Exile_Uniform_Wetsuit_NATO","Exile_Uniform_Wetsuit_CSAT","Exile_Uniform_Wetsuit_AAF","Exile_Uniform_Woodland","Exile_Vest_Rebreather_NATO","Exile_Vest_Rebreather_AAF","Exile_Vest_Rebreather_CSAT","Exile_Vest_Snow","Exile_Weapon_AK107","Exile_Weapon_AK107_GL","Exile_Weapon_AK74","Exile_Weapon_AK74_GL","Exile_Weapon_AK47","Exile_Weapon_AKM","Exile_Weapon_AKS","Exile_Weapon_AKS_Gold","Exile_Weapon_M16A4","Exile_Weapon_M16A2","Exile_Weapon_M4","Exile_Weapon_DMR","Exile_Weapon_ksvk","Exile_Weapon_m107","Exile_Weapon_LeeEnfield","Exile_Weapon_CZ550","Exile_Weapon_SVD","Exile_Weapon_SVDCamo","Exile_Weapon_VSSVintorez","Exile_Weapon_RPK","Exile_Weapon_PK","Exile_Weapon_PKP","Exile_Weapon_Colt1911","Exile_Weapon_Makarov","Exile_Weapon_Taurus","Exile_Weapon_TaurusGold","Exile_Weapon_SA61","Exile_Weapon_M1014"};
		magazines[] = {"Exile_Item_BreachingCharge_Wood","Exile_Item_BreachingCharge_Metal","Exile_Item_BreachingCharge_BigMomma","Exile_Item_Bandage","Exile_Item_BaseCameraKit","Exile_Item_BBQSandwich","Exile_Item_BBQSandwich_Cooked","Exile_Item_BeefParts","Exile_Item_Beer","Exile_Item_BushKit_Green","Exile_Item_CamoTentKit","Exile_Item_CampFireKit","Exile_Item_CanOpener","Exile_Item_Can_Empty","Exile_Item_CarWheel","Exile_Item_CatFood","Exile_Item_CatFood_Cooked","Exile_Item_Cement","Exile_Item_Cheathas","Exile_Item_ChocolateMilk","Exile_Item_ChristmasTinner","Exile_Item_ChristmasTinner_Cooked","Exile_Item_CockONut","Exile_Item_Codelock","Exile_Item_ConcreteDoorKit","Exile_Item_ConcreteDoorwayKit","Exile_Item_ConcreteDrawBridgeKit","Exile_Item_ConcreteFloorKit","Exile_Item_ConcreteFloorPortKit","Exile_Item_ConcreteFloorPortSmallKit","Exile_Item_ConcreteGateKit","Exile_Item_ConcreteLadderHatchKit","Exile_Item_ConcreteStairsKit","Exile_Item_ConcreteSupportKit","Exile_Item_ConcreteWallKit","Exile_Item_ConcreteWindowKit","Exile_Item_CookingPot","Exile_Item_CordlessScrewdriver","Exile_Item_Defibrillator","Exile_Item_DogFood","Exile_Item_DogFood_Cooked","Exile_Item_DsNuts","Exile_Item_DuctTape","Exile_Item_EMRE","Exile_Item_EnergyDrink","Exile_Item_ExtensionCord","Exile_Item_FireExtinguisher","Exile_Item_Flag","Exile_Item_FlagStolen1","Exile_Item_FlagStolen10","Exile_Item_FlagStolen2","Exile_Item_FlagStolen3","Exile_Item_FlagStolen4","Exile_Item_FlagStolen5","Exile_Item_FlagStolen6","Exile_Item_FlagStolen7","Exile_Item_FlagStolen8","Exile_Item_FlagStolen9","Exile_Item_FloodLightKit","Exile_Item_Foolbox","Exile_Item_FortificationUpgrade","Exile_Item_FuelBarrelEmpty","Exile_Item_FuelBarrelFull","Exile_Item_FuelCanisterEmpty","Exile_Item_FuelCanisterFull","Exile_Item_GloriousKnakworst","Exile_Item_GloriousKnakworst_Cooked","Exile_Item_Grinder","Exile_Item_Hammer","Exile_Item_Handsaw","Exile_Item_HBarrier5Kit","Exile_Item_Heatpack","Exile_Item_InstaDoc","Exile_Item_InstantCoffee","Exile_Item_JunkMetal","Exile_Item_Knife","Exile_Item_Laptop","Exile_Item_Leaves","Exile_Item_LightBulb","Exile_Item_MacasCheese","Exile_Item_MacasCheese_Cooked","Exile_Item_Magazine01","Exile_Item_Magazine02","Exile_Item_Magazine03","Exile_Item_Magazine04","Exile_Item_Matches","Exile_Item_MetalBoard","Exile_Item_MetalHedgehogKit","Exile_Item_MetalLadderDoubleKit","Exile_Item_MetalLadderKit","Exile_Item_MetalPole","Exile_Item_MetalScrews","Exile_Item_MetalWire","Exile_Item_MobilePhone","Exile_Item_Moobar","Exile_Item_MountainDupe","Exile_Item_Noodles","Exile_Item_OilCanister","Exile_Item_OldChestKit","Exile_Item_PlasticBottleCoffee","Exile_Item_PlasticBottleDirtyWater","Exile_Item_PlasticBottleEmpty","Exile_Item_PlasticBottleFreshWater","Exile_Item_PlasticBottleSaltWater","Exile_Item_Pliers","Exile_Item_PortableGeneratorKit","Exile_Item_PowerDrink","Exile_Item_Raisins","Exile_Item_RazorWireKit","Exile_Item_RepairKitConcrete","Exile_Item_RepairKitMetal","Exile_Item_RepairKitWood","Exile_Item_Rope","Exile_Item_RubberDuck","Exile_Item_SafeKit","Exile_Item_SafeSmallKit","Exile_Item_Sand","Exile_Item_SandBagsKit_Corner","Exile_Item_SandBagsKit_Long","Exile_Item_SausageGravy","Exile_Item_SausageGravy_Cooked","Exile_Item_Screwdriver","Exile_Item_SeedAstics","Exile_Item_Shovel","Exile_Item_SleepingMat","Exile_Item_Storagecratekit","Exile_Item_Surstromming","Exile_Item_Surstromming_Cooked","Exile_Item_ThermalScannerPro","Exile_Item_ToiletPaper","Exile_Item_Vishpirin","Exile_Item_WaterBarrelKit","Exile_Item_WaterCanisterDirtyWater","Exile_Item_WaterCanisterEmpty","Exile_Item_WireFenceKit","Exile_Item_WoodDoorKit","Exile_Item_WoodDoorwayKit","Exile_Item_WoodDrawBridgeKit","Exile_Item_WoodFloorKit","Exile_Item_WoodFloorPortKit","Exile_Item_WoodFloorPortSmallKit","Exile_Item_WoodGateKit","Exile_Item_WoodLadderHatchKit","Exile_Item_WoodLadderKit","Exile_Item_WoodLog","Exile_Item_WoodPlank","Exile_Item_WoodStairsKit","Exile_Item_WoodSticks","Exile_Item_WoodSupportKit","Exile_Item_WoodWallHalfKit","Exile_Item_WoodWallKit","Exile_Item_WoodWindowKit","Exile_Item_WorkBenchKit","Exile_Item_Wrench","Exile_Item_ZipTie","Exile_Item_SprayCan_Black","Exile_Item_SprayCan_Red","Exile_Item_SprayCan_Green","Exile_Item_SprayCan_White","Exile_Item_SprayCan_Blue","Exile_Item_BurlapSack","Exile_Item_Bullets_556","Exile_Item_Bullets_762","Exile_Item_WeaponParts","Exile_Item_AlsatianSteak_Raw","Exile_Item_AlsatianSteak_Cooked","Exile_Item_CatSharkFilet_Raw","Exile_Item_CatSharkFilet_Cooked","Exile_Item_ChickenFilet_Raw","Exile_Item_ChickenFilet_Cooked","Exile_Item_FinSteak_Raw","Exile_Item_FinSteak_Cooked","Exile_Item_GoatSteak_Raw","Exile_Item_GoatSteak_Cooked","Exile_Item_MackerelFilet_Raw","Exile_Item_MackerelFilet_Cooked","Exile_Item_MulletFilet_Raw","Exile_Item_MulletFilet_Cooked","Exile_Item_OrnateFilet_Raw","Exile_Item_OrnateFilet_Cooked","Exile_Item_RabbitSteak_Raw","Exile_Item_RabbitSteak_Cooked","Exile_Item_RoosterFilet_Raw","Exile_Item_RoosterFilet_Cooked","Exile_Item_SalemaFilet_Raw","Exile_Item_SalemaFilet_Cooked","Exile_Item_SheepSteak_Raw","Exile_Item_SheepSteak_Cooked","Exile_Item_SnakeFilet_Raw","Exile_Item_SnakeFilet_Cooked","Exile_Item_TunaFilet_Raw","Exile_Item_TunaFilet_Cooked","Exile_Item_TurtleFilet_Raw","Exile_Item_TurtleFilet_Cooked","Exile_Magazine_10Rnd_765x17_SA61","Exile_Magazine_20Rnd_765x17_SA61","Exile_Magazine_5Rnd_127x108_APDS_KSVK","Exile_Magazine_5Rnd_127x108_KSVK","Exile_Magazine_10Rnd_127x99_m107","Exile_Magazine_30Rnd_762x39_AK","Exile_Magazine_30Rnd_545x39_AK","Exile_Magazine_30Rnd_545x39_AK_Green","Exile_Magazine_30Rnd_545x39_AK_Red","Exile_Magazine_30Rnd_545x39_AK_White","Exile_Magazine_30Rnd_545x39_AK_Yellow","Exile_Magazine_45Rnd_545x39_RPK_Green","Exile_Magazine_75Rnd_545x39_RPK_Green","Exile_Magazine_20Rnd_762x51_DMR","Exile_Magazine_20Rnd_762x51_DMR_Yellow","Exile_Magazine_20Rnd_762x51_DMR_Red","Exile_Magazine_20Rnd_762x51_DMR_Green","Exile_Magazine_10Rnd_303","Exile_Magazine_100Rnd_762x54_PK_Green","Exile_Magazine_7Rnd_45ACP","Exile_Magazine_8Rnd_9x18","Exile_Magazine_6Rnd_45ACP","Exile_Magazine_5Rnd_22LR","Exile_Magazine_10Rnd_762x54","Exile_Magazine_10Rnd_9x39","Exile_Magazine_20Rnd_9x39","Exile_Magazine_8Rnd_74Slug","Exile_Magazine_8Rnd_74Pellets","Exile_Magazine_Battery","Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag","Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag","Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag","Exile_Magazine_7Rnd_408_Bullet_Cam_Mag","Exile_Magazine_10Rnd_338_Bullet_Cam_Mag","Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag","Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag","Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag","Exile_Magazine_Swing","Exile_Magazine_Boing","Exile_Magazine_Swoosh"};
		ammo[] = {"Exile_Ammo_AbstractMelee","Exile_Ammo_Battery","Exile_Ammo_BreachingCharge_BigMomma","Exile_Ammo_BreachingCharge_Wood","Exile_Ammo_BreachingCharge_Metal","Exile_Ammo_Swing","Exile_Ammo_Swoosh","Exile_Ammo_Boing","Exile_Ammo_SmokeShellOrange"};
		worlds[] = {};
	};
};
class CfgActions
{
	class None;
	class OpenBag: None
	{
		show = 0;
	};
	class FireInflame: None
	{
		show = 0;
	};
	class FirePutDown: None
	{
		show = 0;
	};
	class Heal: None
	{
		show = 0;
	};
	class HealSoldier: None
	{
		show = 0;
	};
	class FirstAid: None
	{
		show = 0;
	};
	class ListRightVehicleDisplay: None
	{
		show = 0;
	};
	class ListLeftVehicleDisplay: None
	{
		show = 0;
	};
	class ListPrevRightVehicleDisplay: None
	{
		show = 0;
	};
	class ListPrevLeftVehicleDisplay: None
	{
		show = 0;
	};
	class CloseRightVehicleDisplay: None
	{
		show = 0;
	};
	class CloseLeftVehicleDisplay: None
	{
		show = 0;
	};
	class NextModeRightVehicleDisplay: None
	{
		show = 0;
	};
	class NextModeLeftVehicleDisplay: None
	{
		show = 0;
	};
	class UseContainerMagazine: None
	{
		show = 0;
	};
	class TakeBag: None
	{
		show = 0;
	};
	class TakeItem: None
	{
		show = 0;
	};
	class TakeWeapon: None
	{
		show = 0;
	};
	class TakeMagazine: None
	{
		show = 0;
	};
	class TakeItemFromBody: None
	{
		show = 0;
	};
	class TakeWeaponFromBody: None
	{
		show = 0;
	};
	class TakeBackpackFromBody: None
	{
		show = 0;
	};
	class TakeMine: None
	{
		show = 0;
	};
};
class CfgAmmo
{
	class BulletBase;
	class Exile_Ammo_AbstractMelee: BulletBase
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1;
		typicalSpeed = 85;
		timeToLive = 0.05;
		airFriction = 0;
		waterFriction = 0;
		caliber = 0.7;
		model = "\A3\weapons_f\empty";
		proxyShape = "\A3\weapons_f\empty";
		soundHitBody1[] = {"\exile_assets\sound\hack_flesh01.ogg",1.584893,1,10};
		soundHitBody2[] = {"\exile_assets\sound\hack_flesh02.ogg",1.584893,1,10};
		hitMan[] = {"soundHitBody1",0.5,"soundHitBody2",0.5};
		maxControlRange = 1;
		simulation = "shotRocket";
		explosive = 0;
		visibleFireTime = 0;
		whistleOnFire = 0;
		whistleDist = 0;
		effectsMissileInit = "EmptyEffect";
		effectsMissile = "EmptyEffect";
		effectsSmoke = "EmptyEffect";
		explosionEffects = "NoExplosion";
		craterEffects = "NoCrater";
		muzzleEffect = "";
		class CamShakeExplode
		{
			power = "(5^0.5)";
			duration = "((round (5^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
	class Exile_Ammo_Battery: BulletBase
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		caliber = 2.6;
		deflecting = 45;
		visibleFire = 5;
		audibleFire = 9;
		cost = 100;
		typicalSpeed = 280;
		airFriction = -0.0018;
	};
	class DemoCharge_Remote_Ammo_Scripted;
	class SatchelCharge_Remote_Ammo_Scripted;
	class Exile_Ammo_BreachingCharge_BigMomma: SatchelCharge_Remote_Ammo_Scripted
	{
		displayName = "Breaching Charge (Big Momma)";
		model = "\exile_assets\model\Exile_Item_BigMomma.p3d";
		CraterEffects = "ArtyShellCrater";
		directionalExplosion = 1;
		ExplosionEffects = "MortarExplosion";
	};
	class Exile_Ammo_BreachingCharge_Wood: DemoCharge_Remote_Ammo_Scripted
	{
		displayName = "Breaching Charge (Wood)";
		directionalExplosion = 1;
	};
	class Exile_Ammo_BreachingCharge_Metal: SatchelCharge_Remote_Ammo_Scripted
	{
		displayName = "Breaching Charge (Metal)";
		directionalExplosion = 1;
	};
	class Exile_Ammo_Swing: Exile_Ammo_AbstractMelee
	{
		hit = 9;
		typicalSpeed = 620;
		timeToLive = 0.6;
		visibleFire = 0.1;
		audibleFire = 1;
		caliber = 4.2;
		airFriction = -0.002;
	};
	class Exile_Ammo_Swoosh: Exile_Ammo_Swing
	{
		hit = 12;
	};
	class Exile_Ammo_Boing: Exile_Ammo_Swing
	{
		hit = 5;
	};
	class SmokeShellOrange;
	class Exile_Ammo_SmokeShellOrange: SmokeShellOrange
	{
		deflecting = 360;
		explosionTime = 1;
		timeToLive = 360;
	};
};
class CfgAnimationSourceSounds
{
	class Exile_AnimationSound_ConcreteMixer
	{
		class Start
		{
			loop = 0;
			sound0[] = {"exile_assets\sound\Exile_ConcreteMixer01.wss",1,1,50};
			sound[] = {"sound0",1};
			terminate = 0;
			trigger = "direction";
		};
	};
};
class CfgClanMakerIcons
{
	Icons[] = {{"Text only","\A3\ui_f\data\map\markers\system\dummy_ca.paa"},{"Empty","\A3\ui_f\data\map\markers\system\empty_ca.paa"},{"Objective","\A3\ui_f\data\map\markers\military\objective_CA.paa"},{"Marker","\A3\ui_f\data\map\markers\military\marker_CA.paa"},{"Flag","\A3\ui_f\data\map\markers\military\flag_CA.paa"},{"Arrow","\A3\ui_f\data\map\markers\military\arrow_CA.paa"},{"Arrow (filled)","\A3\ui_f\data\map\markers\military\arrow2_CA.paa"},{"Ambush","\A3\ui_f\data\map\markers\military\ambush_CA.paa"},{"Destroy","\A3\ui_f\data\map\markers\military\destroy_CA.paa"},{"Start","\A3\ui_f\data\map\markers\military\start_CA.paa"},{"End","\A3\ui_f\data\map\markers\military\end_CA.paa"},{"Pick Up","\A3\ui_f\data\map\markers\military\pickup_CA.paa"},{"Join","\A3\ui_f\data\map\markers\military\join_CA.paa"},{"Warning","\A3\ui_f\data\map\markers\military\warning_CA.paa"},{"Unknown","\A3\ui_f\data\map\markers\military\unknown_CA.paa"},{"Circle","\A3\ui_f\data\map\markers\military\circle_CA.paa"},{"Dot","\A3\ui_f\data\map\markers\military\dot_CA.paa"},{"Square","\A3\ui_f\data\map\markers\military\box_CA.paa"},{"Triangle","\A3\ui_f\data\map\markers\military\triangle_CA.paa"},{"Select","\A3\ui_f\data\igui\cfg\islandmap\iconplayer_ca.paa"},{"Waypoint","\A3\ui_f\data\map\groupicons\waypoint.paa"},{"Selector - Selectable","\A3\ui_f\data\map\groupicons\selector_selectable_ca.paa"},{"Selector - Selected Enemy","\A3\ui_f\data\map\groupicons\selector_selectedEnemy_ca.paa"},{"Selector - Selected Friendly","\A3\ui_f\data\map\groupicons\selector_selectedFriendly_ca.paa"},{"Selector - Selected Mission","\A3\ui_f\data\map\groupicons\selector_selectedMission_ca.paa"},{"KIA","\a3\Ui_F_Curator\Data\CfgMarkers\kia_ca.paa"},{"Minefield","\a3\Ui_F_Curator\Data\CfgMarkers\minefield_ca.paa"},{"Minefield (AP)","\a3\Ui_F_Curator\Data\CfgMarkers\minefieldAP_ca.paa"},{"NATO","\A3\ui_f\data\map\markers\flags\nato_ca.paa"},{"CSAT","\A3\ui_f\data\map\markers\flags\CSAT_ca.paa"},{"Altis Armed Forces","\A3\ui_f\data\map\markers\flags\AAF_ca.paa"},{"Altis","\A3\ui_f\data\map\markers\flags\Altis_ca.paa"},{"Altis (Colonial)","\A3\ui_f\data\map\markers\flags\AltisColonial_ca.paa"},{"FIA","\A3\ui_f\data\map\markers\flags\FIA_ca.paa"},{"European Union","\A3\ui_f\data\map\markers\flags\EU_ca.paa"},{"United Nations","\A3\ui_f\data\map\markers\flags\UN_ca.paa"},{"Belgium","\A3\ui_f\data\map\markers\flags\Belgium_ca.paa"},{"Canada","\A3\ui_f\data\map\markers\flags\Canada_ca.paa"},{"Croatia","\A3\ui_f\data\map\markers\flags\Croatia_ca.paa"},{"Czech Republic","\A3\ui_f\data\map\markers\flags\CzechRepublic_ca.paa"},{"Denmark","\A3\ui_f\data\map\markers\flags\Denmark_ca.paa"},{"France","\A3\ui_f\data\map\markers\flags\France_ca.paa"},{"Georgia","\A3\ui_f\data\map\markers\flags\Georgia_ca.paa"},{"Germany","\A3\ui_f\data\map\markers\flags\Germany_ca.paa"},{"Greece","\A3\ui_f\data\map\markers\flags\Greece_ca.paa"},{"Hungary","\A3\ui_f\data\map\markers\flags\Hungary_ca.paa"},{"Iceland","\A3\ui_f\data\map\markers\flags\Iceland_ca.paa"},{"Italy","\A3\ui_f\data\map\markers\flags\Italy_ca.paa"},{"Luxembourg","\A3\ui_f\data\map\markers\flags\Luxembourg_ca.paa"},{"Netherlands","\A3\ui_f\data\map\markers\flags\Netherlands_ca.paa"},{"Norway","\A3\ui_f\data\map\markers\flags\Norway_ca.paa"},{"Poland","\A3\ui_f\data\map\markers\flags\Poland_ca.paa"},{"Portugal","\A3\ui_f\data\map\markers\flags\Portugal_ca.paa"},{"Slovakia","\A3\ui_f\data\map\markers\flags\Slovakia_ca.paa"},{"Slovenia","\A3\ui_f\data\map\markers\flags\Slovenia_ca.paa"},{"Spain","\A3\ui_f\data\map\markers\flags\Spain_ca.paa"},{"UK","\A3\ui_f\data\map\markers\flags\UK_ca.paa"},{"USA","\A3\ui_f\data\map\markers\flags\USA_ca.paa"}};
};
class CfgCloudlets
{
	class Default;
	class Exile_Snow_Close: Default
	{
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = 0;
		onSurface = 0;
		keepOnSurface = 0;
		surfaceOffset = 0;
		bounceOnSurface = -1;
		bounceOnSurfaceVar = 0.0;
		postEffects = "";
		particleEffects = "";
		blockAIVisibility = 0;
		emissiveColor[] = {{2,2,2,0}};
		particleType = "Billboard";
		particleShape = "\exile_assets\model\Exile_Snow";
		particleFSFrameCount = 1;
		particleFSIndex = 0;
		particleFSLoop = 0;
		particleFSNtieth = 3;
		circleRadius = 5;
		circleVelocity[] = {0,0,0};
		angle = 0;
		angleVar = 360;
		animationSpeedCoef = 1;
		animationSpeed[] = {1};
		animationName = "";
		color[] = {{2,2,2,0},{2,2,2,2},{2,2,2,2},{2,2,2,2},{2,2,2,2},{2,2,2,2},{2,2,2,2},{2,2,2,0}};
		colorCoef[] = {1,1,1,1};
		colorVar[] = {0,0,0,0};
		interval = 0.01;
		lifeTime = 6;
		lifeTimeVar = 1;
		timerPeriod = 30;
		onTimerScript = "";
		beforeDestroyScript = "";
		moveVelocity[] = {0,0,-0.3};
		moveVelocityVar[] = {0,0,0.1};
		moveVelocityVarConst[] = {0,0,0};
		position[] = {0,0,0};
		positionVar[] = {5,5,0};
		positionVarConst[] = {0,0,0};
		rotationVelocity = 2;
		rotationVelocityVar = 2;
		size[] = {1};
		sizeCoef = 1;
		sizeVar = 0.5;
		weight = 1;
		volume = 0.75;
		rubbing = 0.05;
		randomDirectionIntensity = 0.0;
		randomDirectionIntensityVar = 0;
		randomDirectionPeriod = 0.0;
		randomDirectionPeriodVar = 0;
	};
	class Exile_Snow_Near: Exile_Snow_Close
	{
		particleFSIndex = 0;
		positionVar[] = {6,6,0};
		lifeTime = 7;
	};
	class Exile_Snow_Far: Exile_Snow_Close
	{
		particleFSIndex = 2;
		positionVar[] = {7,7,0};
		lifeTime = 8;
	};
};
class CfgCommands
{
	allowedHTMLLoadURIs[] = {"http://lobby.exilemod.com/index.html*"};
};
class AbstractConstruction
{
	staticObject = "";
	previewObject = "";
	kitMagazine = "";
	upgradeObject = "";
	refundObjects[] = {};
	requiresTerritory = 1;
	canBePlacedOnRoad = 1;
	allowDuplicateSnap = 0;
	class SnapPositions{};
	class SnapObjects{};
};
class CfgConstruction
{
	class AbstractFloor: AbstractConstruction
	{
		class SnapPositions
		{
			Wall01[] = {0,-2.875,0.25};
			Wall02[] = {-2.875,0,0.25};
			Wall03[] = {0,2.875,0.25};
			Wall04[] = {2.875,0,0.25};
			Floor01[] = {0,6,0};
			Floor02[] = {6,0,0};
			Floor03[] = {0,-6,0};
			Floor04[] = {-6,0,0};
			Floor05[] = {0,0,3.25};
			Floor06[] = {0,0,-3.25};
			Stairs01[] = {0,0,0.25};
			Stairs02[] = {0,0,-2.75};
			ConcreteStairs01[] = {0,0,0};
			ConcreteStairs02[] = {0,0,-3.25};
		};
		class SnapObjects
		{
			class Exile_Construction_WoodFloor_Static
			{
				positions[] = {"Floor01","Floor02","Floor03","Floor04","Floor05","Floor06"};
			};
			class Exile_Construction_WoodFloor_Reinforced_Static
			{
				positions[] = {"Floor01","Floor02","Floor03","Floor04","Floor05","Floor06"};
			};
			class Exile_Construction_WoodFloorPort_Static
			{
				positions[] = {"Floor01","Floor02","Floor03","Floor04","Floor05","Floor06"};
			};
			class Exile_Construction_WoodSupport_Static
			{
				positions[] = {"Floor01","Floor02","Floor03","Floor04"};
			};
			class Exile_Construction_WoodWall_Static
			{
				positions[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_WoodWall_Reinforced_Static
			{
				positions[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_WoodDoor_Static
			{
				positions[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_WoodDoor_Reinforced_Static
			{
				positions[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_WoodWindow_Static
			{
				positions[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_WoodWindow_Reinforced_Static
			{
				positions[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_WoodGate_Static
			{
				positions[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_WoodGate_Reinforced_Static
			{
				positions[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_ConcreteFloor_Static
			{
				positions[] = {"Floor01","Floor02","Floor03","Floor04","Floor05"};
			};
			class Exile_Construction_ConcreteFloorPort_Static
			{
				positions[] = {"Floor01","Floor02","Floor03","Floor04","Floor05"};
			};
			class Exile_Construction_ConcreteFloorHatch_Static
			{
				positions[] = {"Floor01","Floor02","Floor03","Floor04","Floor05"};
			};
			class Exile_Construction_ConcreteFloorPortSmall_Static
			{
				positions[] = {"Floor01","Floor02","Floor03","Floor04","Floor05","Floor06"};
			};
			class Exile_Construction_ConcreteLadderHatch_Static
			{
				positions[] = {"Floor01","Floor02","Floor03","Floor04","Floor05","Floor06"};
			};
			class Exile_Construction_ConcreteSupport_Static
			{
				positions[] = {"Floor01","Floor02","Floor03","Floor04"};
			};
			class Exile_Construction_ConcreteWall_Static
			{
				positions[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_ConcreteDoor_Static
			{
				positions[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_ConcreteWindow_Static
			{
				positions[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_ConcreteGate_Static
			{
				positions[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_ConcreteDrawBridge_Static
			{
				positions[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_WoodFloorPortSmall_Static
			{
				positions[] = {"Floor01","Floor02","Floor03","Floor04","Floor05","Floor06"};
			};
			class Exile_Construction_WoodFloorPortSmall_Reinforced_Static
			{
				positions[] = {"Floor01","Floor02","Floor03","Floor04","Floor05","Floor06"};
			};
			class Exile_Construction_WoodDrawBridge_Static
			{
				positions[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_WoodDrawBridge_Reinforced_Static
			{
				positions[] = {"Floor01","Floor02"};
			};
			class Exile_Construction_WoodLadderHatch_Static
			{
				positions[] = {"Floor01","Floor02","Floor03","Floor04","Floor05","Floor06"};
			};
			class Exile_Construction_WoodLadderHatch_Reinforced_Static
			{
				positions[] = {"Floor01","Floor02","Floor03","Floor04","Floor05","Floor06"};
			};
		};
	};
	class AbstractSupport: AbstractConstruction
	{
		class SnapPositions
		{
			Floor01[] = {3,3,3};
			Floor02[] = {-3,3,3};
			Floor03[] = {3,-3,3};
			Floor04[] = {-3,-3,3};
			Support01[] = {-6,0,0};
			Support02[] = {0,-6,0};
			Support03[] = {6,0,0};
			Support04[] = {0,6,0};
			Support05[] = {0,0,3};
		};
		class SnapObjects
		{
			class Exile_Construction_WoodSupport_Static
			{
				positions[] = {"Support01","Support02","Support03","Support04","Support05"};
			};
			class Exile_Construction_ConcreteSupport_Static
			{
				positions[] = {"Support01","Support02","Support03","Support04","Support05"};
			};
		};
	};
	class AbstractWall: AbstractConstruction
	{
		class SnapPositions
		{
			Wall01[] = {-6,0,0};
			Wall02[] = {-2.875,-2.875,0};
			Wall03[] = {2.875,-2.875,0};
			Wall04[] = {6,0,0};
			Wall05[] = {2.875,2.875,0};
			Wall06[] = {-2.875,2.875,0};
			Wall07[] = {0,0,3};
			Wall08[] = {0,0,-3};
			Floor01[] = {0,2.875,3};
			Floor02[] = {0,-2.875,3};
		};
		class SnapObjects
		{
			class Exile_Construction_WoodWallHalf_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06"};
			};
			class Exile_Construction_WoodWallHalf_Reinforced_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06"};
			};
			class Exile_Construction_WoodWall_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07","Wall08"};
			};
			class Exile_Construction_ConcreteWall_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07","Wall08"};
			};
			class Exile_Construction_WoodWall_Reinforced_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07","Wall08"};
			};
			class Exile_Construction_WoodFloor_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04"};
			};
			class Exile_Construction_WoodFloor_Reinforced_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04"};
			};
			class Exile_Construction_ConcreteFloor_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04"};
			};
			class Exile_Construction_WoodFloorPort_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04"};
			};
			class Exile_Construction_ConcreteFloorPort_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04"};
			};
			class Exile_Construction_ConcreteFloorPortSmall_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04"};
			};
			class Exile_Construction_ConcreteLadderHatch_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04"};
			};
			class Exile_Construction_WoodWindow_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07","Wall08"};
			};
			class Exile_Construction_WoodWindow_Reinforced_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07","Wall08"};
			};
			class Exile_Construction_ConcreteWindow_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07","Wall08"};
			};
			class Exile_Construction_ConcreteWindowHatch_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07","Wall08"};
			};
			class Exile_Construction_WoodDoor_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07","Wall08"};
			};
			class Exile_Construction_WoodDoor_Reinforced_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07","Wall08"};
			};
			class Exile_Construction_ConcreteDoor_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07","Wall08"};
			};
			class Exile_Construction_WoodDoorway_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07","Wall08"};
			};
			class Exile_Construction_WoodDoorway_Reinforced_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07","Wall08"};
			};
			class Exile_Construction_ConcreteDoorway_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07","Wall08"};
			};
			class Exile_Construction_WoodGate_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07","Wall08"};
			};
			class Exile_Construction_WoodGate_Reinforced_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07","Wall08"};
			};
			class Exile_Construction_ConcreteGate_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07","Wall08"};
			};
			class Exile_Construction_ConcreteDrawBridge_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07","Wall08"};
			};
			class Exile_Construction_WoodFloorPortSmall_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04"};
			};
			class Exile_Construction_WoodFloorPortSmall_Reinforced_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04"};
			};
			class Exile_Construction_WoodDrawBridge_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07","Wall08"};
			};
			class Exile_Construction_WoodDrawBridge_Reinforced_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04","Wall05","Wall06","Wall07","Wall08"};
			};
			class Exile_Construction_WoodLadderHatch_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04"};
			};
			class Exile_Construction_WoodLadderHatch_Reinforced_Static
			{
				positions[] = {"Wall01","Wall02","Wall03","Wall04"};
			};
		};
	};
	class Camera: AbstractWall
	{
		staticObject = "Exile_Construction_BaseCamera_Static";
		previewObject = "Exile_Construction_BaseCamera_Preview";
		kitMagazine = "Exile_Item_BaseCameraKit";
		refundObjects[] = {"Exile_Item_BaseCameraKit"};
	};
	class CamoTent: AbstractConstruction
	{
		staticObject = "Exile_Container_CamoTent";
		previewObject = "Exile_Construction_CamoTent_Preview";
		kitMagazine = "Exile_Item_CamoTentKit";
		requiresTerritory = 0;
		refundObjects[] = {"Exile_Item_CamoTentKit"};
	};
	class CampFire: AbstractConstruction
	{
		staticObject = "Exile_Construction_CampFire_Static";
		previewObject = "Exile_Construction_CampFire_Preview";
		kitMagazine = "Exile_Item_CampFireKit";
		requiresTerritory = 0;
		canBePlacedOnRoad = 0;
		refundObjects[] = {"Exile_Item_CampFireKit"};
	};
	class ConcreteDoor: AbstractWall
	{
		staticObject = "Exile_Construction_ConcreteDoor_Static";
		previewObject = "Exile_Construction_ConcreteDoor_Preview";
		kitMagazine = "Exile_Item_ConcreteDoorKit";
		refundObjects[] = {"Exile_Item_ConcreteDoorKit"};
		materialType = 12;
	};
	class ConcreteDoorway: AbstractWall
	{
		staticObject = "Exile_Construction_ConcreteDoorway_Static";
		previewObject = "Exile_Construction_ConcreteDoorway_Preview";
		kitMagazine = "Exile_Item_ConcreteDoorwayKit";
		refundObjects[] = {"Exile_Item_ConcreteDoorwayKit"};
		materialType = 12;
	};
	class ConcreteDrawBridge: AbstractWall
	{
		staticObject = "Exile_Construction_ConcreteDrawBridge_Static";
		previewObject = "Exile_Construction_ConcreteDrawBridge_Preview";
		kitMagazine = "Exile_Item_ConcreteDrawBridgeKit";
		refundObjects[] = {"Exile_Item_ConcreteDrawBridgeKit"};
		materialType = 12;
		class SnapPositions
		{
			Floor01[] = {0,2.875,3};
			Floor02[] = {0,-2.875,3};
			Wall01[] = {-6,0,0};
			Wall02[] = {-2.875,-2.875,0};
			Wall03[] = {2.875,-2.875,0};
			Wall04[] = {6,0,0};
			Wall05[] = {2.875,3.13,0};
			Wall06[] = {-2.875,3.13,0};
			Wall07[] = {0,0,3};
			Wall08[] = {0,0,-3};
		};
	};
	class ConcreteFloor: AbstractFloor
	{
		staticObject = "Exile_Construction_ConcreteFloor_Static";
		previewObject = "Exile_Construction_ConcreteFloor_Preview";
		kitMagazine = "Exile_Item_ConcreteFloorKit";
		refundObjects[] = {"Exile_Item_ConcreteFloorKit"};
		materialType = 12;
	};
	class ConcreteFloorHatch: AbstractFloor
	{
		staticObject = "Exile_Construction_ConcreteFloorHatch_Static";
		previewObject = "Exile_Construction_ConcreteFloorHatch_Preview";
		refundObjects[] = {"Exile_Item_ConcreteFloorPortKit","Exile_Item_FortificationUpgrade"};
		materialType = 12;
	};
	class ConcreteFloorPort: AbstractFloor
	{
		staticObject = "Exile_Construction_ConcreteFloorPort_Static";
		previewObject = "Exile_Construction_ConcreteFloorPort_Preview";
		kitMagazine = "Exile_Item_ConcreteFloorPortKit";
		refundObjects[] = {"Exile_Item_ConcreteFloorPortKit"};
		upgradeObject = "Exile_Construction_ConcreteFloorHatch_Static";
		materialType = 12;
	};
	class ConcreteFloorPortSmall: AbstractFloor
	{
		staticObject = "Exile_Construction_ConcreteFloorPortSmall_Static";
		previewObject = "Exile_Construction_ConcreteFloorPortSmall_Preview";
		kitMagazine = "Exile_Item_ConcreteFloorPortSmallKit";
		refundObjects[] = {"Exile_Item_ConcreteFloorPortSmallKit"};
		materialType = 12;
		class SnapPositions
		{
			PortHole01[] = {-0.85,0,-3.15};
			PortHole02[] = {0,0.85,-3.15};
			PortHole03[] = {0,-0.85,-3.15};
			PortHole04[] = {0.85,0,-3.15};
			Wall01[] = {0,-2.875,0.25};
			Wall02[] = {-2.875,0,0.25};
			Wall03[] = {0,2.875,0.25};
			Wall04[] = {2.875,0,0.25};
			Floor01[] = {0,6,0};
			Floor02[] = {6,0,0};
			Floor03[] = {0,-6,0};
			Floor04[] = {-6,0,0};
			Floor05[] = {0,0,3.25};
			Floor06[] = {0,0,-3.25};
		};
	};
	class ConcreteGate: AbstractWall
	{
		staticObject = "Exile_Construction_ConcreteGate_Static";
		previewObject = "Exile_Construction_ConcreteGate_Preview";
		kitMagazine = "Exile_Item_ConcreteGateKit";
		refundObjects[] = {"Exile_Item_ConcreteGateKit"};
		materialType = 12;
	};
	class ConcreteLadderHatch: AbstractFloor
	{
		staticObject = "Exile_Construction_ConcreteLadderHatch_Static";
		previewObject = "Exile_Construction_ConcreteLadderHatch_Preview";
		kitMagazine = "Exile_Item_ConcreteLadderHatchKit";
		refundObjects[] = {"Exile_Item_ConcreteLadderHatchKit"};
		materialType = 12;
	};
	class ConcreteStairs: AbstractConstruction
	{
		staticObject = "Exile_Construction_ConcreteStairs_Static";
		previewObject = "Exile_Construction_ConcreteStairs_Preview";
		kitMagazine = "Exile_Item_ConcreteStairsKit";
		refundObjects[] = {"Exile_Item_ConcreteStairsKit"};
		materialType = 12;
		allowDuplicateSnap = 1;
		class SnapObjects
		{
			class Exile_Construction_WoodFloor_Static
			{
				positions[] = {"ConcreteStairs01"};
			};
			class Exile_Construction_WoodFloorPort_Static
			{
				positions[] = {"ConcreteStairs01","ConcreteStairs02"};
			};
			class Exile_Construction_ConcreteFloor_Static
			{
				positions[] = {"ConcreteStairs01"};
			};
			class Exile_Construction_ConcreteFloorPort_Static
			{
				positions[] = {"ConcreteStairs01","ConcreteStairs02"};
			};
		};
	};
	class ConcreteSupport: AbstractSupport
	{
		staticObject = "Exile_Construction_ConcreteSupport_Static";
		previewObject = "Exile_Construction_ConcreteSupport_Preview";
		kitMagazine = "Exile_Item_ConcreteSupportKit";
		refundObjects[] = {"Exile_Item_ConcreteSupportKit"};
		materialType = 12;
	};
	class ConcreteWall: AbstractWall
	{
		staticObject = "Exile_Construction_ConcreteWall_Static";
		previewObject = "Exile_Construction_ConcreteWall_Preview";
		kitMagazine = "Exile_Item_ConcreteWallKit";
		refundObjects[] = {"Exile_Item_ConcreteWallKit"};
		materialType = 12;
	};
	class ConcreteWindow: AbstractWall
	{
		staticObject = "Exile_Construction_ConcreteWindow_Static";
		previewObject = "Exile_Construction_ConcreteWindow_Preview";
		kitMagazine = "Exile_Item_ConcreteWindowKit";
		refundObjects[] = {"Exile_Item_ConcreteWindowKit"};
		upgradeObject = "Exile_Construction_ConcreteWindowHatch_Static";
		materialType = 12;
	};
	class ConcreteWindowHatch: AbstractWall
	{
		staticObject = "Exile_Construction_ConcreteWindowHatch_Static";
		previewObject = "Exile_Construction_ConcreteWindowHatch_Preview";
		refundObjects[] = {"Exile_Item_ConcreteWindowKit","Exile_Item_FortificationUpgrade"};
		materialType = 12;
	};
	class Flag: AbstractConstruction
	{
		staticObject = "Exile_Construction_Flag_Static";
		previewObject = "Exile_Construction_Flag_Preview";
		kitMagazine = "Exile_Item_Flag";
		requiresTerritory = 0;
		refundObjects[] = {"Exile_Item_Flag"};
	};
	class FloodLight: AbstractConstruction
	{
		staticObject = "Exile_Construction_FloodLight_Static";
		previewObject = "Exile_Construction_FloodLight_Preview";
		kitMagazine = "Exile_Item_FloodLightKit";
		refundObjects[] = {"Exile_Item_FloodLightKit"};
	};
	class HBarrier5: AbstractConstruction
	{
		staticObject = "Exile_Construction_HBarrier5_Static";
		previewObject = "Exile_Construction_HBarrier5_Preview";
		kitMagazine = "Exile_Item_HBarrier5Kit";
		requiresTerritory = 1;
		canBePlacedOnRoad = 0;
		refundObjects[] = {"Exile_Item_HBarrier5Kit"};
		class SnapPositions
		{
			HBarrier5_01[] = {-5.69873,-0.00390625,-0.740514};
			HBarrier5_02[] = {5.69873,-0.00390625,-0.740514};
		};
		class SnapObjects
		{
			class Exile_Construction_HBarrier5_Static
			{
				positions[] = {"HBarrier5_01","HBarrier5_02"};
			};
		};
	};
	class Laptop: AbstractWall
	{
		staticObject = "Exile_Construction_Laptop_Static";
		previewObject = "Exile_Construction_Laptop_Preview";
		kitMagazine = "Exile_Item_Laptop";
		refundObjects[] = {"Exile_Item_Laptop"};
	};
	class MetalHedgehog: AbstractConstruction
	{
		staticObject = "Exile_Construction_MetalHedgehog_Static";
		previewObject = "Exile_Construction_MetalHedgehog_Preview";
		kitMagazine = "Exile_Item_MetalHedgehogKit";
		refundObjects[] = {"Exile_Item_MetalHedgehogKit"};
		requiresTerritory = 0;
		canBePlacedOnRoad = 1;
	};
	class MetalLadder: AbstractConstruction
	{
		staticObject = "Exile_Construction_MetalLadder_Static";
		previewObject = "Exile_Construction_MetalLadder_Preview";
		kitMagazine = "Exile_Item_MetalLadderKit";
		refundObjects[] = {"Exile_Item_MetalLadderKit"};
		materialType = 11;
		allowDuplicateSnap = 1;
		class SnapPositions
		{
			Ladder01[] = {0,0,3.5};
		};
		class SnapObjects
		{
			class Exile_Construction_WoodFloorPortSmall_Static
			{
				positions[] = {"PortHole01","PortHole02","PortHole03","PortHole04"};
			};
			class Exile_Construction_WoodFloorPortSmall_Reinforced_Static
			{
				positions[] = {"PortHole01","PortHole02","PortHole03","PortHole04"};
			};
			class Exile_Construction_WoodLadder_Static
			{
				positions[] = {"Ladder01"};
			};
			class Exile_Construction_ConcreteFloorPortSmall_Static
			{
				positions[] = {"PortHole01","PortHole02","PortHole03","PortHole04"};
			};
			class Exile_Construction_MetalLadder_Static
			{
				positions[] = {"Ladder01"};
			};
			class Exile_Construction_MetalLadderDouble_Static
			{
				positions[] = {"Ladder01"};
			};
		};
	};
	class MetalLadderDouble: AbstractConstruction
	{
		staticObject = "Exile_Construction_MetalLadderDouble_Static";
		previewObject = "Exile_Construction_MetalLadderDouble_Preview";
		kitMagazine = "Exile_Item_MetalLadderDoubleKit";
		refundObjects[] = {"Exile_Item_MetalLadderDoubleKit"};
		materialType = 11;
		allowDuplicateSnap = 1;
		class SnapPositions
		{
			Ladder01[] = {0,0,6.5};
		};
		class SnapObjects
		{
			class Exile_Construction_WoodFloorPortSmall_Static
			{
				positions[] = {"PortHole01","PortHole02","PortHole03","PortHole04"};
			};
			class Exile_Construction_WoodFloorPortSmall_Reinforced_Static
			{
				positions[] = {"PortHole01","PortHole02","PortHole03","PortHole04"};
			};
			class Exile_Construction_WoodLadder_Static
			{
				positions[] = {"Ladder01"};
			};
			class Exile_Construction_ConcreteFloorPortSmall_Static
			{
				positions[] = {"PortHole01","PortHole02","PortHole03","PortHole04"};
			};
			class Exile_Construction_MetalLadder_Static
			{
				positions[] = {"Ladder01"};
			};
			class Exile_Construction_MetalLadderDouble_Static
			{
				positions[] = {"Ladder01"};
			};
		};
	};
	class OldChest: AbstractConstruction
	{
		staticObject = "Exile_Container_OldChest";
		previewObject = "Exile_Construction_OldChest_Preview";
		kitMagazine = "Exile_Item_OldChestKit";
		requiresTerritory = 0;
		canBePlacedOnRoad = 0;
		refundObjects[] = {"Exile_Item_OldChestKit"};
	};
	class PortableGenerator: AbstractConstruction
	{
		staticObject = "Exile_Construction_PortableGenerator_Static";
		previewObject = "Exile_Construction_PortableGenerator_Preview";
		kitMagazine = "Exile_Item_PortableGeneratorKit";
		refundObjects[] = {"Exile_Item_PortableGeneratorKit"};
	};
	class RazorWire: AbstractConstruction
	{
		staticObject = "Exile_Construction_RazorWire_Static";
		previewObject = "Exile_Construction_RazorWire_Preview";
		kitMagazine = "Exile_Item_RazorWireKit";
		requiresTerritory = 0;
		canBePlacedOnRoad = 1;
		refundObjects[] = {"Exile_Item_RazorWireKit"};
	};
	class Safe: AbstractConstruction
	{
		staticObject = "Exile_Container_Safe";
		previewObject = "Exile_Construction_Safe_Preview";
		kitMagazine = "Exile_Item_SafeKit";
		requiresTerritory = 0;
		refundObjects[] = {"Exile_Item_SafeKit"};
	};
	class SafeSmall: AbstractConstruction
	{
		staticObject = "Exile_Container_Safe_Small";
		previewObject = "Exile_Construction_Safe_Small_Preview";
		kitMagazine = "Exile_Item_SafeSmallKit";
		requiresTerritory = 0;
		refundObjects[] = {"Exile_Item_SafeSmallKit"};
	};
	class SandBags: AbstractConstruction
	{
		staticObject = "Exile_Construction_SandBags_Long_Static";
		previewObject = "Exile_Construction_SandBags_Long_Preview";
		kitMagazine = "Exile_Item_SandBagsKit_Long";
		requiresTerritory = 0;
		canBePlacedOnRoad = 1;
		refundObjects[] = {"Exile_Item_SandBagsKit_Long"};
		class SnapPositions
		{
			SandBags01[] = {-3.0,0,-0.417873};
			SandBags02[] = {3.0,0,-0.417873};
			SandbagCorner03[] = {2,-0.279785,-0.419312};
			SandbagCorner04[] = {-1.94995,-0.370117,-0.419312};
		};
		class SnapObjects
		{
			class Exile_Construction_SandBags_Long_Static
			{
				positions[] = {"SandBags01","SandBags02"};
			};
			class Exile_Construction_SandBags_Corner_Static
			{
				positions[] = {"SandBags03","SandBags04"};
			};
		};
	};
	class SandbagsCorner: AbstractConstruction
	{
		staticObject = "Exile_Construction_SandBags_Corner_Static";
		previewObject = "Exile_Construction_SandBags_Corner_Preview";
		kitMagazine = "Exile_Item_SandBagsKit_Corner";
		requiresTerritory = 0;
		canBePlacedOnRoad = 1;
		refundObjects[] = {"Exile_Item_SandBagsKit_Corner"};
		class SnapPositions
		{
			SandbagCorner01[] = {0.139893,-1.02979,-0.421095};
			SandbagCorner02[] = {-1.01001,-0.129883,-0.421095};
			SandBags03[] = {0.389893,-1.93994,-0.421095};
			SandBags04[] = {-2.11011,0.27002,-0.421095};
		};
		class SnapObjects
		{
			class Exile_Construction_SandBags_Corner_Static
			{
				positions[] = {"SandbagCorner01","SandbagCorner02"};
			};
			class Exile_Construction_SandBags_Long_Static
			{
				positions[] = {"SandbagCorner03","SandbagCorner04"};
			};
		};
	};
	class StorageCrate: AbstractConstruction
	{
		staticObject = "Exile_Container_StorageCrate";
		previewObject = "Exile_Construction_StorageCrate_Preview";
		kitMagazine = "Exile_Item_StorageCrateKit";
		requiresTerritory = 0;
		canBePlacedOnRoad = 0;
		refundObjects[] = {"Exile_Item_StorageCrateKit"};
	};
	class SupplyBox: AbstractConstruction
	{
		staticObject = "Exile_Container_SupplyBox";
		previewObject = "Exile_Construction_SupplyBox_Preview";
		kitMagazine = "Exile_Item_SupplyBoxKit";
		requiresTerritory = 0;
		refundObjects[] = {"Exile_Item_SupplyBoxKit"};
	};
	class WaterBarrel: AbstractConstruction
	{
		staticObject = "Exile_Construction_WaterBarrel_Static";
		previewObject = "Exile_Construction_WaterBarrel_Preview";
		kitMagazine = "Exile_Item_WaterBarrelKit";
		requiresTerritory = 1;
		canBePlacedOnRoad = 0;
		refundObjects[] = {"Exile_Item_WaterBarrelKit"};
	};
	class WireFence: AbstractConstruction
	{
		staticObject = "Exile_Construction_WiredFence_Static";
		previewObject = "Exile_Construction_WiredFence_Preview";
		kitMagazine = "Exile_Item_WireFenceKit";
		requiresTerritory = 1;
		canBePlacedOnRoad = 0;
		refundObjects[] = {"Exile_Item_WireFenceKit"};
		class SnapPositions
		{
			Fence01[] = {-7.875,0,-1.789415};
			Fence02[] = {7.875,0,-1.789415};
		};
		class SnapObjects
		{
			class Exile_Construction_WiredFence_Static
			{
				positions[] = {"Fence01","Fence02"};
			};
		};
	};
	class WoodDoor: AbstractWall
	{
		staticObject = "Exile_Construction_WoodDoor_Static";
		previewObject = "Exile_Construction_WoodDoor_Preview";
		kitMagazine = "Exile_Item_WoodDoorKit";
		upgradeObject = "Exile_Construction_WoodDoor_Reinforced_Static";
		refundObjects[] = {"Exile_Item_WoodDoorKit"};
		materialType = 10;
	};
	class WoodDoorReinforced: AbstractWall
	{
		staticObject = "Exile_Construction_WoodDoor_Reinforced_Static";
		previewObject = "Exile_Construction_WoodDoor_Reinforced_Preview";
		refundObjects[] = {"Exile_Item_WoodDoorKit","Exile_Item_FortificationUpgrade"};
		materialType = 11;
	};
	class WoodDoorway: AbstractWall
	{
		staticObject = "Exile_Construction_WoodDoorway_Static";
		previewObject = "Exile_Construction_WoodDoorway_Preview";
		kitMagazine = "Exile_Item_WoodDoorwayKit";
		upgradeObject = "Exile_Construction_WoodDoorway_Reinforced_Static";
		refundObjects[] = {"Exile_Item_WoodDoorwayKit"};
		materialType = 10;
	};
	class WoodDoorwayReinforced: AbstractWall
	{
		staticObject = "Exile_Construction_WoodDoorway_Reinforced_Static";
		previewObject = "Exile_Construction_WoodDoorway_Reinforced_Preview";
		refundObjects[] = {"Exile_Item_WoodDoorwayKit","Exile_Item_FortificationUpgrade"};
		materialType = 11;
	};
	class WoodDrawBridge: AbstractWall
	{
		staticObject = "Exile_Construction_WoodDrawBridge_Static";
		previewObject = "Exile_Construction_WoodDrawBridge_Preview";
		kitMagazine = "Exile_Item_WoodDrawBridgeKit";
		upgradeObject = "Exile_Construction_WoodDrawBridge_Reinforced_Static";
		refundObjects[] = {"Exile_Item_WoodDrawBridgeKit"};
		materialType = 10;
		class SnapPositions
		{
			Floor01[] = {0,2.875,3};
			Floor02[] = {0,-2.875,3};
			Wall01[] = {-6,0,0};
			Wall02[] = {-2.875,-2.875,0};
			Wall03[] = {2.875,-2.875,0};
			Wall04[] = {6,0,0};
			Wall05[] = {2.875,3.13,0};
			Wall06[] = {-2.875,3.13,0};
			Wall07[] = {0,0,3};
			Wall08[] = {0,0,-3};
		};
	};
	class WoodDrawBridgeReinforced: AbstractWall
	{
		staticObject = "Exile_Construction_WoodDrawBridge_Reinforced_Static";
		previewObject = "Exile_Construction_WoodDrawBridge_Reinforced_Preview";
		refundObjects[] = {"Exile_Item_WoodDrawBridgeKit","Exile_Item_FortificationUpgrade"};
		materialType = 11;
		class SnapPositions
		{
			Floor01[] = {0,2.875,3};
			Floor02[] = {0,-2.875,3};
			Wall01[] = {-6,0,0};
			Wall02[] = {-2.875,-2.875,0};
			Wall03[] = {2.875,-2.875,0};
			Wall04[] = {6,0,0};
			Wall05[] = {2.875,3.13,0};
			Wall06[] = {-2.875,3.13,0};
			Wall07[] = {0,0,3};
			Wall08[] = {0,0,-3};
		};
	};
	class WoodFloor: AbstractFloor
	{
		staticObject = "Exile_Construction_WoodFloor_Static";
		previewObject = "Exile_Construction_WoodFloor_Preview";
		kitMagazine = "Exile_Item_WoodFloorKit";
		upgradeObject = "Exile_Construction_WoodFloor_Reinforced_Static";
		refundObjects[] = {"Exile_Item_WoodFloorKit"};
		materialType = 10;
	};
	class WoodFloorPort: AbstractFloor
	{
		staticObject = "Exile_Construction_WoodFloorPort_Static";
		previewObject = "Exile_Construction_WoodFloorPort_Preview";
		kitMagazine = "Exile_Item_WoodFloorPortKit";
		refundObjects[] = {"Exile_Item_WoodFloorPortKit"};
		materialType = 10;
	};
	class WoodFloorPortSmall: AbstractFloor
	{
		staticObject = "Exile_Construction_WoodFloorPortSmall_Static";
		previewObject = "Exile_Construction_WoodFloorPortSmall_Preview";
		kitMagazine = "Exile_Item_WoodFloorPortSmallKit";
		upgradeObject = "Exile_Construction_WoodFloorPortSmall_Reinforced_Static";
		refundObjects[] = {"Exile_Item_WoodFloorPortSmallKit"};
		materialType = 10;
		class SnapPositions
		{
			PortHole01[] = {-0.85,0,-3.15};
			PortHole02[] = {0,0.85,-3.15};
			PortHole03[] = {0,-0.85,-3.15};
			PortHole04[] = {0.85,0,-3.15};
			Wall01[] = {0,-2.875,0.25};
			Wall02[] = {-2.875,0,0.25};
			Wall03[] = {0,2.875,0.25};
			Wall04[] = {2.875,0,0.25};
			Floor01[] = {0,6,0};
			Floor02[] = {6,0,0};
			Floor03[] = {0,-6,0};
			Floor04[] = {-6,0,0};
			Floor05[] = {0,0,3.25};
			Floor06[] = {0,0,-3.25};
		};
	};
	class WoodFloorPortSmallReinforced: AbstractFloor
	{
		staticObject = "Exile_Construction_WoodFloorPortSmall_Reinforced_Static";
		previewObject = "Exile_Construction_WoodFloorPortSmall_Reinforced_Preview";
		refundObjects[] = {"Exile_Item_WoodFloorPortSmallKit","Exile_Item_FortificationUpgrade"};
		materialType = 11;
		class SnapPositions
		{
			PortHole01[] = {-0.85,0,-3.15};
			PortHole02[] = {0,0.85,-3.15};
			PortHole03[] = {0,-0.85,-3.15};
			PortHole04[] = {0.85,0,-3.15};
			Wall01[] = {0,-2.875,0.25};
			Wall02[] = {-2.875,0,0.25};
			Wall03[] = {0,2.875,0.25};
			Wall04[] = {2.875,0,0.25};
			Floor01[] = {0,6,0};
			Floor02[] = {6,0,0};
			Floor03[] = {0,-6,0};
			Floor04[] = {-6,0,0};
			Floor05[] = {0,0,3.25};
			Floor06[] = {0,0,-3.25};
		};
	};
	class WoodFloorReinforced: AbstractFloor
	{
		staticObject = "Exile_Construction_WoodFloor_Reinforced_Static";
		previewObject = "Exile_Construction_WoodFloor_Reinforced_Preview";
		refundObjects[] = {"Exile_Item_WoodFloorKit","Exile_Item_FortificationUpgrade"};
		materialType = 11;
	};
	class WoodGate: AbstractWall
	{
		staticObject = "Exile_Construction_WoodGate_Static";
		previewObject = "Exile_Construction_WoodGate_Preview";
		kitMagazine = "Exile_Item_WoodGateKit";
		upgradeObject = "Exile_Construction_WoodGate_Reinforced_Static";
		refundObjects[] = {"Exile_Item_WoodGateKit"};
		materialType = 10;
	};
	class WoodGateReinforced: AbstractWall
	{
		staticObject = "Exile_Construction_WoodGate_Reinforced_Static";
		previewObject = "Exile_Construction_WoodGate_Reinforced_Preview";
		refundObjects[] = {"Exile_Item_WoodGateKit","Exile_Item_FortificationUpgrade"};
		materialType = 11;
	};
	class WoodLadder: AbstractConstruction
	{
		staticObject = "Exile_Construction_WoodLadder_Static";
		previewObject = "Exile_Construction_WoodLadder_Preview";
		kitMagazine = "Exile_Item_WoodLadderKit";
		refundObjects[] = {"Exile_Item_WoodLadderKit"};
		materialType = 10;
		allowDuplicateSnap = 1;
		class SnapPositions
		{
			Ladder01[] = {0,0,3.5};
		};
		class SnapObjects
		{
			class Exile_Construction_WoodFloorPortSmall_Static
			{
				positions[] = {"PortHole01","PortHole02","PortHole03","PortHole04"};
			};
			class Exile_Construction_WoodFloorPortSmall_Reinforced_Static
			{
				positions[] = {"PortHole01","PortHole02","PortHole03","PortHole04"};
			};
			class Exile_Construction_WoodLadder_Static
			{
				positions[] = {"Ladder01"};
			};
		};
	};
	class WoodLadderHatch: AbstractFloor
	{
		staticObject = "Exile_Construction_WoodLadderHatch_Static";
		previewObject = "Exile_Construction_WoodLadderHatch_Preview";
		kitMagazine = "Exile_Item_WoodLadderHatchKit";
		upgradeObject = "Exile_Construction_WoodLadderHatch_Reinforced_Static";
		refundObjects[] = {"Exile_Item_WoodLadderHatchKit"};
		materialType = 10;
	};
	class WoodLadderHatchReinforced: AbstractFloor
	{
		staticObject = "Exile_Construction_WoodLadderHatch_Reinforced_Static";
		previewObject = "Exile_Construction_WoodLadderHatch_Reinforced_Preview";
		refundObjects[] = {"Exile_Item_WoodLadderHatchKit","Exile_Item_FortificationUpgrade"};
		materialType = 11;
	};
	class WoodStairs: AbstractConstruction
	{
		staticObject = "Exile_Construction_WoodStairs_Static";
		previewObject = "Exile_Construction_WoodStairs_Preview";
		kitMagazine = "Exile_Item_WoodStairsKit";
		refundObjects[] = {"Exile_Item_WoodStairsKit"};
		materialType = 10;
		allowDuplicateSnap = 1;
		class SnapObjects
		{
			class Exile_Construction_WoodFloor_Static
			{
				positions[] = {"Stairs01"};
			};
			class Exile_Construction_WoodFloorPort_Static
			{
				positions[] = {"Stairs01","Stairs02"};
			};
			class Exile_Construction_ConcreteFloor_Static
			{
				positions[] = {"Stairs01"};
			};
			class Exile_Construction_ConcreteFloorPort_Static
			{
				positions[] = {"Stairs01","Stairs02"};
			};
		};
	};
	class WoodSupport: AbstractSupport
	{
		staticObject = "Exile_Construction_WoodSupport_Static";
		previewObject = "Exile_Construction_WoodSupport_Preview";
		kitMagazine = "Exile_Item_WoodSupportKit";
		refundObjects[] = {"Exile_Item_WoodSupportKit"};
		materialType = 10;
	};
	class WoodWall: AbstractWall
	{
		staticObject = "Exile_Construction_WoodWall_Static";
		previewObject = "Exile_Construction_WoodWall_Preview";
		kitMagazine = "Exile_Item_WoodWallKit";
		upgradeObject = "Exile_Construction_WoodWall_Reinforced_Static";
		refundObjects[] = {"Exile_Item_WoodWallKit"};
		materialType = 10;
	};
	class WoodWallHalf: AbstractWall
	{
		staticObject = "Exile_Construction_WoodWallHalf_Static";
		previewObject = "Exile_Construction_WoodWallHalf_Preview";
		kitMagazine = "Exile_Item_WoodWallHalfKit";
		upgradeObject = "Exile_Construction_WoodWallHalf_Reinforced_Static";
		refundObjects[] = {"Exile_Item_WoodWallHalfKit"};
		materialType = 10;
	};
	class WoodWallHalfReinforced: AbstractWall
	{
		staticObject = "Exile_Construction_WoodWallHalf_Reinforced_Static";
		previewObject = "Exile_Construction_WoodWallHalf_Reinforced_Preview";
		refundObjects[] = {"Exile_Item_WoodWallHalfKit","Exile_Item_FortificationUpgrade"};
		materialType = 11;
	};
	class WoodWallReinforced: AbstractWall
	{
		staticObject = "Exile_Construction_WoodWall_Reinforced_Static";
		previewObject = "Exile_Construction_WoodWall_Reinforced_Preview";
		refundObjects[] = {"Exile_Item_WoodWallKit","Exile_Item_FortificationUpgrade"};
		materialType = 11;
	};
	class WoodWindow: AbstractWall
	{
		staticObject = "Exile_Construction_WoodWindow_Static";
		previewObject = "Exile_Construction_WoodWindow_Preview";
		kitMagazine = "Exile_Item_WoodWindowKit";
		upgradeObject = "Exile_Construction_WoodWindow_Reinforced_Static";
		refundObjects[] = {"Exile_Item_WoodWindowKit"};
		materialType = 10;
	};
	class WoodWindowReinforced: AbstractWall
	{
		staticObject = "Exile_Construction_WoodWindow_Reinforced_Static";
		previewObject = "Exile_Construction_WoodWindow_Reinforced_Preview";
		refundObjects[] = {"Exile_Item_WoodWindowKit","Exile_Item_FortificationUpgrade"};
		materialType = 11;
	};
	class WorkBench: AbstractConstruction
	{
		staticObject = "Exile_Construction_WorkBench_Static";
		previewObject = "Exile_Construction_WorkBench_Preview";
		kitMagazine = "Exile_Item_WorkBenchKit";
		refundObjects[] = {"Exile_Item_WorkBenchKit"};
		requiresTerritory = 0;
		canBePlacedOnRoad = 0;
	};
};
class CfgDifficultyPresets
{
	class Veteran;
	defaultPreset = "ExileRegular";
	class ExileRegular: Veteran
	{
		BleedingRate = 0.0005;
		displayName = "Regular Exile";
		class Options
		{
			reducedDamage = 0;
			groupIndicators = 0;
			friendlyTags = 0;
			enemyTags = 0;
			detectedMines = 0;
			commands = 0;
			waypoints = 0;
			weaponInfo = 0;
			stanceIndicator = 0;
			staminaBar = 0;
			weaponCrosshair = 1;
			visionAid = 0;
			thirdPersonView = 1;
			cameraShake = 1;
			scoreTable = 0;
			deathMessages = 0;
			vonID = 0;
			squadRadar = 0;
			mapContent = 0;
			autoReport = 0;
			multipleSaves = 0;
		};
	};
	class ExileHardcore: Veteran
	{
		BleedingRate = 0.005;
		displayName = "Hardcore Exile";
		class Options
		{
			reducedDamage = 0;
			groupIndicators = 0;
			friendlyTags = 0;
			enemyTags = 0;
			detectedMines = 0;
			commands = 0;
			waypoints = 0;
			weaponInfo = 0;
			stanceIndicator = 0;
			staminaBar = 0;
			weaponCrosshair = 0;
			visionAid = 0;
			thirdPersonView = 0;
			cameraShake = 1;
			scoreTable = 0;
			deathMessages = 0;
			vonID = 0;
			squadRadar = 0;
			mapContent = 0;
			autoReport = 0;
			multipleSaves = 0;
		};
	};
};
class CfgExileDelayedActions
{
	class Abstract
	{
		duration = 10;
		abortInCombatMode = 1;
		durationFunction = "";
		animation = "";
		animationType = "switchMove";
		failChance = 0;
		conditionFunction = "";
		completedFunction = "";
		abortedFunction = "";
		failedFunction = "";
		repeatingCheckFunction = "";
	};
	class RepairVehicle: Abstract
	{
		duration = 37;
		animation = "Exile_Acts_RepairVehicle01_Animation01";
		conditionFunction = "ExileClient_action_repairVehicle_condition";
		completedFunction = "ExileClient_action_repairVehicle_completed";
	};
	class HotwireVehicle: Abstract
	{
		duration = "3 * 60";
		failChance = 50;
		animation = "Exile_Acts_RepairVehicle01_Animation01";
		conditionFunction = "ExileClient_action_hotwireVehicle_condition";
		completedFunction = "ExileClient_action_hotwireVehicle_completed";
		failedFunction = "ExileClient_action_hotwireVehicle_failed";
	};
	class StealFlag: Abstract
	{
		duration = 60;
		abortInCombatMode = 0;
		durationFunction = "ExileClient_action_stealFlag_duration";
		animation = "Exile_Acts_RepairVehicle01_Animation01";
		conditionFunction = "ExileClient_action_stealFlag_condition";
		completedFunction = "ExileClient_action_stealFlag_completed";
	};
	class HideBody: Abstract
	{
		duration = 10;
		animation = "Exile_Shovel_Dig01";
		conditionFunction = "ExileClient_action_HideBody_condition";
		completedFunction = "ExileClient_action_HideBody_completed";
	};
	class PlantChargeWood: Abstract
	{
		duration = "3 * 60";
		abortInCombatMode = 0;
		animation = "Exile_Acts_RepairVehicle01_Animation01";
		conditionFunction = "ExileClient_action_breaching_condition";
		completedFunction = "ExileClient_action_breaching_completed";
		failedFunction = "ExileClient_action_breaching_failed";
		abortedFunction = "ExileClient_action_breaching_aborted";
	};
	class PlantChargeMetal: PlantChargeWood
	{
		duration = "5 * 60";
	};
	class PlantChargeConcrete: PlantChargeWood
	{
		duration = "7 * 60";
	};
	class RepairConstruction: Abstract
	{
		animation = "Exile_Acts_RepairVehicle01_Animation01";
		durationFunction = "ExileClient_action_repairConstruction_duration";
		conditionFunction = "ExileClient_action_repairConstruction_condition";
		completedFunction = "ExileClient_action_repairConstruction_completed";
	};
	class GutAnimal: Abstract
	{
		duration = 10;
		animationType = "playMoveNow";
		animation = "AinvPknlMstpSnonWnonDr_medic5";
		conditionFunction = "ExileClient_action_GutAnimal_condition";
		completedFunction = "ExileClient_action_GutAnimal_completed";
	};
	class HackLock: Abstract
	{
		animationType = "switchMove";
		animation = "Acts_TerminalOpen";
		abortInCombatMode = 0;
		failChanceFunction = "ExileClient_action_hackLock_failChance";
		durationFunction = "ExileClient_action_hackLock_duration";
		conditionFunction = "ExileClient_action_hackLock_condition";
		completedFunction = "ExileClient_action_hackLock_completed";
		failedFunction = "ExileClient_action_hackLock_failed";
		abortedFunction = "ExileClient_action_hackLock_aborted";
	};
	class GrindLock: Abstract
	{
		animationType = "switchMove";
		animation = "Exile_Acts_RepairVehicle01_Animation01";
		abortInCombatMode = 0;
		failChanceFunction = "ExileClient_action_grindLock_failChance";
		durationFunction = "ExileClient_action_grindLock_duration";
		conditionFunction = "ExileClient_action_grindLock_condition";
		completedFunction = "ExileClient_action_grindLock_completed";
		failedFunction = "ExileClient_action_grindLock_failed";
		abortedFunction = "ExileClient_action_grindLock_aborted";
	};
};
class CfgExileLoadingScreen
{
	templates[] = {{".... . . .. ... .","WimpSnark"},{"9879821876, I'm sure you haven't read this number..","maxicraft68"},{"[Insert funny loading screen joke here]","polivilas"},{"A good bush for an ambush...","Reaper7Strike"},{"Add toaster to improve loading speed...","zAfLu"},{"Adding soap to a rope...","Tankiouse"},{"Arma has stopped responding...","Brett Nordin"},{"Attempting integer division by zero...","eraser1"},{"Auto hovering the chopper...","xMarch"},{"Baron is awesomer!","BaroN"},{"Blowing up your vehicles...","SomeRandomScorpion"},{"Click Click... Wait","TheGyro"},{"Constructing additional pylons...","KrypTarch"},{"Deploying spike strips to bridges...","dizzler"},{"Do you think it's going to load?","[T.G] Razor"},{"Eating chicken...","ManuDiet"},{"Error Type Number, Not a Number, Expected Number, Number","Grim"},{"Exile_zombies.sqf failed to load","Pustekuchen"},{"Filling Jerry Cans...","Abomination"},{"Hardening bushes...","Gaina"},{"Hiding your backpack...","Markkos"},{"HODOR!","Hodor"},{"Initializing 1000m-pistol-whipping AI...","Major Mittens"},{"Initiating lag...","Crazy Mike"},{"Injecting Backdoor Trojan...","bambam"},{"Installing snapbuild...","Mezo"},{"Kicked by BattlEye: Script Restriction #1337","Mr Hanky"},{"Kuplion is awesome!!","kuplion"},{"Kurwa!","Flosstradamus"},{"Learning how to Arma...","ka0s"},{"LINUS!","Beardageddon"},{"Loading Bambi Slayers...","GolovaRaoul"},{"Loading loading screen suggestions...","ThatGuyYouKnow"},{"Loading next loading screen...","Vodor"},{"Looking at pictures of cats...","DudeMan"},{"Making another memory error","SynysterDemon"},{"Mining Bitcoins to pay the server...","XuluniX"},{"Point of No Return","Commander Malc"},{"Prepare to rage quit...","Spackler"},{"Publishing your mission file on MPGH...","Valthos"},{"Releasing bugs back into their habitat...","MadMoo"},{"Removing your workshop subscriptions...","File_Delete"},{"Resetting your poptabs...","Colonelfury"},{"Restarting for no reason...","DarkWatcher"},{"Rigging broken parachute...","Gordon301"},{"Self-destruction in 10 seconds...","Darkzy"},{"Soon(TM)","WolfkillArcadia"},{"Spawning inevitable death...","KIMBOF1"},{"Spawning into crying corner...","Magz"},{"Toilet door is being loaded...","tom"},{"Wait a bit, I'm in the middle of some calibrations...","acer5200"},{"WARNING: THIS GAME IS EARLY ACCESS ALPHA.","BrainlessDude"},{"Wiping your virtual garage","DB"},{"You have that read wrong","Axl"},{"""What server does Frankie play on?""","Shoritz"},{"Adding abusive admins","Chris"},{"All your bases are belong to us","yukihito23"},{"Attaching vehicles to bungee cords.","4mbu5h"},{"Attempting to utilize the GPU... Failed... Reverting to CPU...","Tobias Solem"},{"Bad module error","ComatoseBadger"},{"Booby trapping push bikes...","HonestDave"},{"Booking Flight To Altis","Bloodsworth"},{"Breaking helicopter for no reason.","Gryph"},{"But where are all the zombies at?","Midnight"},{"Can't answer the phone right now! I'm playing Arma!","OG ThaGame"},{"Deploying Raiding Bandits...","Zentarix"},{"Disperse these spongers","Sgt. Cuddles"},{"Do you kno dawae?","MonkeyNutz"},{"Don't ALT+TAB!","Michaesine"},{"Dropping tables...","Jefferderp"},{"Emergerrrd look...helerkerpters","masters91"},{"Emptying your locker...","[KZ] Samfisher"},{"Error: Bambi Creation Timeout","AdamKadmon"},{"Error: This game is no longer available","Cooper"},{"ExtDB3 support, when?","Cloud"},{"Feeding horse for power...","primedead"},{"Have you tried switching it off and on again?","ExiledVibe"},{"Headless client midlife crisis: Wants head back","Antdooky"},{"Hey, WolfkillArcadia. Let me have a loading screen quote!","Defent"},{"Hiding IEDs on the road...","Aramet"},{"I got knife, let's steal... *dies at car*","Reaper7Strike"},{"I have no problems on other servers","James1st"},{"I should've read a tutorial...","BushWuukie"},{"In real life, Altis is called Lemnos","science freak"},{"iPhone XM8 when?","CatOverload"},{"Kuplion isn't really that awesome","Devil_Wolf"},{"Loading Rage Quit Engine","smokedog77"},{"Loading Spoilers","Bloodsworth"},{"Log in successful, informing raiders...","Feary"},{"Looking damn good, my man!","ZeroSuitSnake"},{"Manufacturing wooden ammunition","pticu"},{"Mission time? Mission time","MilkyBob"},{"No Keyboard Detected! Press F1 To Continue","Captain_Bigzy"},{"No.","Vishpala"},{"Perf isn't really critical so this will do in the meantime.","Killjoy"},{"Praying to the Loot God","Twent"},{"Refining death mechanics...","Nightshredder"},{"Rooty Tooty, Point and Shooty!","Demonic"},{"Server restart in 1 minute!","Jarskie"},{"Servers are dumb","Andrew_S90"},{"TheMeq W0z Er3","TheMeq"},{"This is a Life server, right?","FairyTale"},{"This is chaos","AwezmTV"},{"This is not what I signed up for ","UnknownWarrior"},{"This message intentionally left blank.","Geekm0nkey"},{"This server is powered by a lemon and two electrodes.","OMARCOMIN"},{"Trying to find the one safe spot","pipin96"},{"Verify Integrity of Game Files...","Helldog"},{"Waaaaiiit, Woooot ?","REX"},{"Why?","StokesMagee"},{"Your XM8 shut down unexpectedly. Please restart your PC.","Przemek"},{"Mornin! Nice day for fishin, ain't it? Hu hah!","Eichi"},{"Throwing hand grenade at a rabbit...","ass4assintim"},{"Milking the sheep","Trap_God"},{"Status of happening: It is","qp"},{"Just a fat little squirrel trying to get a nut","chainsaw"},{"... Do not ping me with en random ... !!!","Dwarden"},{"Loading Chicken...","Dave"},{"Dropping GBU on your location","Dark4Ever[MGK]"},{"Stealing your Семечки","Bambuz"},{"Randomizing PIN codes...","Coldrice"},{"Installing OP Frying Pan","Morty"},{"You need a little revive?","Falinov"},{"I love you mom and dad","H0nkX"},{"Preparing to find THE way","The Dude (chernaruski)"},{"Paying for WinRAR","IPaidForWinRAR"}};
};
class CfgExileSelections
{
	class GNT_C185
	{
		class driver
		{
			selections[] = {{-0.256207,0.266304,-0.501907}};
		};
		class cargo
		{
			selections[] = {{0.192368,0.265785,-0.502125},{0.176559,-0.64402,-0.509307},{-0.237976,-0.644402,-0.50931}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class GNT_C185F
	{
		class driver
		{
			selections[] = {{-0.256073,0.165916,-0.196804}};
		};
		class cargo
		{
			selections[] = {{0.192558,0.165443,-0.19649},{0.176811,-0.744598,-0.203876},{-0.237831,-0.744759,-0.203886}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class GNT_C185T
	{
		class driver
		{
			selections[] = {{-0.25618,0.266319,-0.501915}};
		};
		class cargo
		{
			selections[] = {{0.192368,0.265755,-0.502115},{0.176559,-0.644035,-0.50934},{-0.237984,-0.644318,-0.50924}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class B_Heli_Light_01_F
	{
		class driver
		{
			selections[] = {{-0.374823,1.18665,-0.0438075}};
		};
		class cargo
		{
			selections[] = {{-0.288498,0.272263,-0.0888104},{0.300203,0.23658,-0.0897832},{0.825016,0.963249,-0.333086},{-0.798944,0.0632248,-0.335676},{-0.832724,0.970711,-0.34092},{0.827204,0.0653076,-0.338562}};
			path[] = {{-10},{-10},{1},{2},{3},{4}};
		};
		class turret
		{
			selections[] = {{0.366716,1.18437,-0.0431471}};
			path[] = {{0}};
		};
	};
	class B_Heli_Light_01_armed_F
	{
		class driver
		{
			selections[] = {{-0.374823,1.18665,-0.0438075}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {{0.366714,1.18438,-0.0431471}};
			path[] = {{0}};
		};
	};
	class C_Heli_Light_01_civil_F
	{
		class driver
		{
			selections[] = {{-0.373158,2.03548,0.752798}};
		};
		class cargo
		{
			selections[] = {{0.307795,1.1257,0.642728},{-0.330084,1.13381,0.649127}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.368382,2.0332,0.753458}};
			path[] = {{0}};
		};
	};
	class O_Heli_Light_02_F
	{
		class driver
		{
			selections[] = {{0.435719,3.46618,-1.06931}};
		};
		class cargo
		{
			selections[] = {{0.55681,2.52369,-0.990719},{0.0459976,2.71758,-0.965829},{-0.607925,2.61597,-0.969089},{0.56744,0.477211,-0.942882},{0.0117722,0.469772,-0.970472},{-0.595413,0.476166,-0.966298},{0.234703,1.55914,-0.867352},{-0.270561,1.58994,-0.941651}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.460649,3.46624,-1.06842}};
			path[] = {{0}};
		};
	};
	class O_Heli_Light_02_unarmed_F
	{
		class driver
		{
			selections[] = {{0.43569,3.46619,-1.06931}};
		};
		class cargo
		{
			selections[] = {{0.556608,2.52351,-0.990579},{0.0460148,2.71769,-0.965817},{-0.607908,2.61597,-0.969089},{0.567369,0.477257,-0.942922},{0.0117245,0.469803,-0.970592},{-0.595879,0.476204,-0.966123},{0.234655,1.55877,-0.867545},{-0.270542,1.58982,-0.941669}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.460649,3.46625,-1.06842}};
			path[] = {{0}};
		};
	};
	class O_Heli_Light_02_v2_F
	{
		class driver
		{
			selections[] = {{0.435692,3.46619,-1.06931}};
		};
		class cargo
		{
			selections[] = {{0.55628,2.52324,-0.990339},{0.0460205,2.71786,-0.965741},{-0.607891,2.61598,-0.969086},{0.56732,0.47728,-0.942961},{0.0116653,0.469757,-0.97066},{-0.596148,0.476234,-0.966022},{0.234606,1.55871,-0.867824},{-0.270523,1.5897,-0.94169}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.460646,3.46626,-1.06842}};
			path[] = {{0}};
		};
	};
	class B_Heli_Attack_01_F
	{
		class driver
		{
			selections[] = {{-0.0530148,3.90562,-0.568796}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {{-0.0676861,2.48053,-0.222655}};
			path[] = {{0}};
		};
	};
	class O_Heli_Attack_02_F
	{
		class driver
		{
			selections[] = {{0.0390377,3.0807,-0.35813}};
		};
		class cargo
		{
			selections[] = {{-0.0420494,1.6802,-1.66509},{-0.141718,0.997391,-1.69001},{-0.0774975,0.407898,-1.72499},{-0.136099,-0.204041,-1.80181},{0.19784,0.991501,-1.69108},{0.301657,1.49978,-1.64477},{0.268785,0.384949,-1.74883},{0.318624,-0.269951,-1.78196}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.0792427,4.32634,-0.759324}};
			path[] = {{0}};
		};
	};
	class O_Heli_Attack_02_black_F
	{
		class driver
		{
			selections[] = {{0.0390377,3.08069,-0.358128}};
		};
		class cargo
		{
			selections[] = {{-0.0420456,1.68019,-1.66509},{-0.141714,0.997398,-1.69001},{-0.0775089,0.407875,-1.72498},{-0.135893,-0.204041,-1.80166},{0.197935,0.991753,-1.69096},{0.301687,1.49968,-1.64506},{0.268711,0.385063,-1.74885},{0.318314,-0.269913,-1.78205}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.0792618,4.32635,-0.759324}};
			path[] = {{0}};
		};
	};
	class B_Heli_Transport_01_F
	{
		class driver
		{
			selections[] = {{-0.441162,5.54001,-0.902555}};
		};
		class cargo
		{
			selections[] = {{0.780022,1.19497,-1.12686},{0.754333,2.73972,-1.08366},{-0.66614,1.22334,-1.12008},{-0.710432,2.7273,-1.10588},{0.258192,1.28727,-1.12261},{-0.2101,1.31505,-1.11707},{0.302452,2.6932,-1.10713},{-0.196957,2.64622,-1.12029}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.394163,4.07333,-0.798412},{0.658655,5.54001,-0.902555},{0.520807,4.05775,-0.796521}};
			path[] = {{1},{0},{2}};
		};
	};
	class B_Heli_Transport_01_camo_F
	{
		class driver
		{
			selections[] = {{-0.44116,5.54,-0.902555}};
		};
		class cargo
		{
			selections[] = {{0.779985,1.19495,-1.12685},{0.75423,2.7397,-1.08401},{-0.666216,1.22314,-1.12038},{-0.710131,2.72798,-1.10566},{0.25819,1.28721,-1.12264},{-0.210106,1.31504,-1.11705},{0.302431,2.69331,-1.10707},{-0.197046,2.64621,-1.12039}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.394163,4.07333,-0.798412},{0.658657,5.54,-0.902555},{0.520805,4.05775,-0.796521}};
			path[] = {{1},{0},{2}};
		};
	};
	class I_Heli_Transport_02_F
	{
		class driver
		{
			selections[] = {{0.745209,6.36018,-1.79773}};
		};
		class cargo
		{
			selections[] = {{0.947247,-0.608322,-1.74854},{-0.967558,-1.62138,-1.72834},{-1.10735,1.62867,-1.6869},{1.08293,4.25459,-1.71578},{-1.06961,-1.08168,-1.65363},{1.05392,1.03391,-1.67135},{1.05393,0.506714,-1.67383},{-1.0723,0.0458527,-1.65116},{1.04753,3.70451,-1.71331},{-1.05156,3.84513,-1.70143},{1.08292,4.78178,-1.71331},{1.04064,-0.0543823,-1.69049},{-1.07478,-0.520584,-1.67029},{-1.08594,1.09486,-1.68633},{-1.06849,0.571228,-1.67029},{-1.07609,3.19193,-1.70371}};
			path[] = {{1},{2},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.799219,6.36017,-1.79773}};
			path[] = {{0}};
		};
	};
	class I_Heli_light_03_F
	{
		class driver
		{
			selections[] = {{0.483927,3.81342,-0.375299}};
		};
		class cargo
		{
			selections[] = {{0.682646,2.73264,-0.543276},{-0.722105,2.95506,-0.512855},{-0.345604,1.24496,-0.256592},{-0.377815,3.09515,-0.55809},{0.242781,3.1768,-0.601345},{0.253679,1.27113,-0.266905}};
			path[] = {{1},{2},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.468275,3.81567,-0.361241}};
			path[] = {{0}};
		};
	};
	class I_Heli_light_03_unarmed_F
	{
		class driver
		{
			selections[] = {{0.492634,3.81342,-0.561788}};
		};
		class cargo
		{
			selections[] = {{0.271395,3.28049,-0.446618},{-0.263695,3.29352,-0.417704},{-0.297035,1.26389,-0.45782},{0.256977,1.31113,-0.468871},{0.265692,2.68457,-0.412904},{-0.21941,2.70644,-0.456135}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.459574,3.81566,-0.547735}};
			path[] = {{0}};
		};
	};
	class B_Plane_CAS_01_F
	{
		class driver
		{
			selections[] = {{-0.00296211,4.86451,0.312551}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class O_Plane_CAS_02_F
	{
		class driver
		{
			selections[] = {{0.0209274,2.88761,-0.893395}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class I_Plane_Fighter_03_CAS_F
	{
		class driver
		{
			selections[] = {{0.0628815,2.66847,-0.833918}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class I_Plane_Fighter_03_AA_F
	{
		class driver
		{
			selections[] = {{0.0628738,2.66856,-0.833918}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class B_Heli_Transport_03_F
	{
		class driver
		{
			selections[] = {{0.471346,7.63042,-0.688491}};
		};
		class cargo
		{
			selections[] = {{-0.980665,-0.80114,-1.21169},{-1.00673,2.75153,-1.28189},{-0.878845,1.52163,-1.26324},{-0.980072,0.93351,-1.21131},{-0.928951,0.34256,-1.22214},{-0.873278,-0.34951,-1.26791},{0.89081,2.76933,-1.14055},{0.789923,2.13885,-1.22903},{0.780277,1.56014,-1.21177},{-1.04177,2.1519,-1.17479},{0.832466,0.416801,-1.19941},{0.863394,-0.227585,-1.17889},{0.837076,0.977249,-1.14817},{0.90074,-0.773811,-1.21394},{0.854445,-1.31753,-1.30444},{-0.984333,-1.35039,-1.27188}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{3},{4}};
		};
		class turret
		{
			selections[] = {{-0.771263,4.03524,-1.009},{-0.532774,7.63017,-0.688834},{0.692728,4.00097,-1.01173}};
			path[] = {{1},{0},{2}};
		};
	};
	class B_Heli_Transport_03_unarmed_F
	{
		class driver
		{
			selections[] = {{0.471348,7.63042,-0.688492}};
		};
		class cargo
		{
			selections[] = {{-0.980667,-0.801132,-1.21169},{-1.00674,2.75156,-1.28189},{-0.878696,1.52177,-1.26323},{-0.980038,0.933487,-1.2113},{-0.928957,0.342552,-1.22214},{-0.873276,-0.349724,-1.26798},{0.890848,2.76931,-1.14055},{0.789829,2.13882,-1.22899},{0.780273,1.56013,-1.2118},{-1.04182,2.15194,-1.17479},{0.832319,0.416763,-1.19944},{0.863409,-0.227585,-1.17888},{0.837078,0.977257,-1.14817},{0.900345,-0.773895,-1.21402},{0.854445,-1.31752,-1.30443},{-0.984333,-1.35038,-1.27188},{-0.941412,4.00089,-1.01087},{0.864286,4.01943,-1.01359}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{3},{4},{1},{2}};
		};
		class turret
		{
			selections[] = {{-0.532774,7.63017,-0.688834}};
			path[] = {{0}};
		};
	};
	class O_Heli_Transport_04_F
	{
		class driver
		{
			selections[] = {{-0.743334,3.98355,-0.913627}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {{-0.81069,3.18697,-1.28905},{0.565466,3.98304,-0.913983}};
			path[] = {{1},{0}};
		};
	};
	class O_Heli_Transport_04_ammo_F
	{
		class driver
		{
			selections[] = {{-0.743336,3.98355,-0.677624}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {{-0.810795,3.18698,-1.05301},{0.565462,3.98304,-0.677981}};
			path[] = {{1},{0}};
		};
	};
	class O_Heli_Transport_04_bench_F
	{
		class driver
		{
			selections[] = {{-0.743334,3.98355,-0.91363}};
		};
		class cargo
		{
			selections[] = {{0.365473,1.39304,-1.874},{0.36002,0.562454,-1.87673},{0.348963,-0.280144,-1.8822},{0.379173,-1.10135,-1.86579},{-0.556824,-1.10304,-1.874},{-0.55134,-0.267654,-1.87673},{-0.540382,0.570229,-1.8822},{-0.570496,1.39571,-1.86579}};
			path[] = {{2},{3},{4},{5},{6},{7},{8},{9}};
		};
		class turret
		{
			selections[] = {{-0.810421,3.18804,-1.28829},{0.565472,3.98304,-0.913984}};
			path[] = {{1},{0}};
		};
	};
	class O_Heli_Transport_04_box_F
	{
		class driver
		{
			selections[] = {{-0.743336,3.98355,-0.677616}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {{-0.81094,3.18698,-1.05297},{0.565462,3.98304,-0.677981}};
			path[] = {{1},{0}};
		};
	};
	class O_Heli_Transport_04_covered_F
	{
		class driver
		{
			selections[] = {{-0.743328,3.98356,-0.677629}};
		};
		class cargo
		{
			selections[] = {{0.220755,1.90108,-1.23475},{-0.385355,1.95834,-1.18929},{0.192371,1.2877,-1.15838},{-0.389107,1.35442,-1.18354},{0.145,0.71904,-1.19106},{-0.384743,0.777985,-1.17377},{0.191088,0.206993,-1.15936},{-0.429817,0.188072,-1.21646},{0.229076,-0.265236,-1.15402},{-0.359644,-0.258949,-1.20516},{-0.397076,-0.881302,-1.16845},{-0.338737,-1.32311,-1.16989},{0.262308,-0.831619,-1.23517},{0.202288,-1.30688,-1.20816},{0.211304,-2.0228,-1.20444},{-0.424479,-2.0179,-1.2163}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{2},{3}};
		};
		class turret
		{
			selections[] = {{-0.811644,3.19582,-1.05157},{0.565474,3.98304,-0.677985}};
			path[] = {{1},{0}};
		};
	};
	class O_Heli_Transport_04_fuel_F
	{
		class driver
		{
			selections[] = {{-0.743338,3.98355,-0.531207}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {{-0.810654,3.18697,-0.90664},{0.565464,3.98304,-0.531561}};
			path[] = {{1},{0}};
		};
	};
	class O_Heli_Transport_04_medevac_F
	{
		class driver
		{
			selections[] = {{-0.74334,3.98357,-0.677628}};
		};
		class cargo
		{
			selections[] = {{-1.03646,-1.1898,-1.31832},{0.794689,-1.06316,-1.3114},{0.785164,1.3104,-1.29132},{-1.06062,0.250221,-1.25408}};
			path[] = {{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.8116,3.1877,-1.05174},{0.565462,3.98305,-0.67798}};
			path[] = {{1},{0}};
		};
	};
	class O_Heli_Transport_04_repair_F
	{
		class driver
		{
			selections[] = {{-0.743334,3.98355,-0.677622}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {{-0.81082,3.18698,-1.053},{0.565464,3.98304,-0.677981}};
			path[] = {{1},{0}};
		};
	};
	class B_APC_Tracked_01_rcws_F
	{
		class driver
		{
			selections[] = {{-0.81778,-0.170609,-1.49384}};
		};
		class cargo
		{
			selections[] = {{-0.0489426,-0.00174713,0.0646167},{0.00328064,-0.0227127,0.0661011},{0.00327301,-0.0226746,0.0660601},{0.00119019,0.0159378,0.0819831},{0.00230408,-0.0238762,0.0664239},{-0.00889587,0.00211334,0.0692792},{-0.0320511,0.0123291,0.0713449},{-0.00498962,-0.0130234,0.0706844}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.0508804,-0.118603,-0.452654},{-0.642792,-1.06043,-0.851429}};
			path[] = {{0},{1}};
		};
	};
	class B_APC_Tracked_01_AA_F
	{
		class driver
		{
			selections[] = {{-0.518188,-1.09371,-1.48154}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {{0.667618,-1.72716,-0.166016},{0.374184,-1.05313,-0.164898}};
			path[] = {{0},{0,0}};
		};
	};
	class O_APC_Tracked_02_cannon_F
	{
		class driver
		{
			selections[] = {{-0.0460892,-0.126015,-0.452628}};
		};
		class cargo
		{
			selections[] = {{-0.00858307,0.00062561,0.0703354},{0.00260162,0.0142136,0.0805731},{-0.00724792,-0.0493164,0.0461969},{-0.00038147,-0.0221558,0.0578156},{0.00310516,-0.0239182,0.0659666},{-0.0319214,0.0113373,0.0714397},{-0.048233,-0.00468063,0.0643463},{-0.00454712,-0.0128441,0.070405}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.0519409,-0.114826,-0.452633},{-0.0524292,-0.116138,-0.452636}};
			path[] = {{0},{0,0}};
		};
	};
	class O_APC_Tracked_02_AA_F
	{
		class driver
		{
			selections[] = {{-0.49176,-2.71126,-1.65621}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {{0.672272,-3.37712,-0.30333},{0.350433,-2.6742,-0.299632}};
			path[] = {{0},{0,0}};
		};
	};
	class I_APC_tracked_03_cannon_F
	{
		class driver
		{
			selections[] = {{-0.480309,1.42779,-1.78879}};
		};
		class cargo
		{
			selections[] = {{0.00345612,-0.0197449,0.0660486},{0.0018692,-0.0199738,0.0667706},{0.00335693,-0.019577,0.0660768},{-0.00729752,-0.0444565,0.0459466},{-0.00845718,0.00606537,0.0699258},{-0.0314369,0.015274,0.0714469},{-0.0488777,-0.000976563,0.0655246}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.522572,-0.785439,-0.583921},{-0.676121,-0.139732,-0.602881}};
			path[] = {{0},{0,0}};
		};
	};
	class I_MBT_03_cannon_F
	{
		class driver
		{
			selections[] = {{0.888496,0.723412,-2.30037}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {{0.769737,-0.884979,-0.897495},{0.397369,-0.264683,-0.935608}};
			path[] = {{0},{0,0}};
		};
	};
	class B_MBT_01_cannon_F
	{
		class driver
		{
			selections[] = {{-0.0462036,-0.125229,-0.45263}};
		};
		class cargo
		{
			selections[] = {{-0.00580597,-0.468262,0.208829},{-0.00357056,-0.0454254,0.0547543},{-0.00765228,-0.0543175,0.0457678},{0.00284576,-0.0346947,0.106388},{-0.0103455,-0.0485191,0.0470276},{0.00386047,-0.036705,0.0629673}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.0509491,-0.115601,-0.452639},{0.675934,-0.762611,-0.274631}};
			path[] = {{0},{0,0}};
		};
	};
	class B_MBT_01_arty_F
	{
		class driver
		{
			selections[] = {{-0.721069,-0.0111542,-2.25148}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {{-0.0542068,-0.111893,-0.452622},{1.52936,-2.87109,-0.722082}};
			path[] = {{0},{0,0}};
		};
	};
	class B_MBT_01_mlrs_F
	{
		class driver
		{
			selections[] = {{-0.72113,0.419006,-1.0233}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {{-0.0536346,-0.110062,-0.452611}};
			path[] = {{0}};
		};
	};
	class O_MBT_02_cannon_F
	{
		class driver
		{
			selections[] = {{-0.0388718,0.346302,-1.82363}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {{0.724525,-1.36408,-0.980382},{0.307259,-0.435619,-0.976297}};
			path[] = {{0},{0,0}};
		};
	};
	class O_MBT_02_arty_F
	{
		class driver
		{
			selections[] = {{-0.0389252,-0.309502,-2.36954}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {{-0.0514603,-0.114204,-0.452649},{1.74606,-2.34688,-0.82306}};
			path[] = {{0},{0,0}};
		};
	};
	class B_MRAP_01_F
	{
		class driver
		{
			selections[] = {{-0.520063,-1.43124,-0.438801}};
		};
		class cargo
		{
			selections[] = {{0.515207,-1.40712,-0.36861},{0.487928,-2.57125,-0.335176},{-0.564989,-2.48822,-0.351775}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class B_MRAP_01_gmg_F
	{
		class driver
		{
			selections[] = {{-0.520121,-1.39827,-0.99525}};
		};
		class cargo
		{
			selections[] = {{0.515221,-1.37418,-0.925014},{0.487925,-2.53837,-0.891603}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.56208,-2.47311,-0.909727}};
			path[] = {{0}};
		};
	};
	class B_MRAP_01_hmg_F
	{
		class driver
		{
			selections[] = {{-0.519997,-1.43221,-0.994998}};
		};
		class cargo
		{
			selections[] = {{0.514961,-1.40784,-0.925061},{0.487656,-2.57278,-0.891606}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.57003,-2.49975,-0.909726}};
			path[] = {{0}};
		};
	};
	class O_MRAP_02_F
	{
		class driver
		{
			selections[] = {{0.0153046,-0.762108,-0.657634}};
		};
		class cargo
		{
			selections[] = {{0.491898,-2.08635,-0.667093},{-0.364853,-2.15816,-0.660241},{0.261681,-3.30734,-0.505543},{-0.348564,-3.20543,-0.527423}};
			path[] = {{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class O_MRAP_02_hmg_F
	{
		class driver
		{
			selections[] = {{0.00579834,-0.124115,0.13411}};
		};
		class cargo
		{
			selections[] = {{0.00449371,-0.024168,0.187327},{-0.03228,0.0126648,0.0723605},{0.0072937,-0.113373,0.124445}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.0362167,0.012291,0.0618591}};
			path[] = {{0}};
		};
	};
	class O_MRAP_02_gmg_F
	{
		class driver
		{
			selections[] = {{0.00576019,-0.124855,0.134109}};
		};
		class cargo
		{
			selections[] = {{0.00467682,-0.0238247,0.18739},{-0.0323868,0.0132046,0.0723205},{0.00727081,-0.113241,0.124444}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.284241,-2.08627,-0.920509}};
			path[] = {{0}};
		};
	};
	class C_Offroad_01_F
	{
		class driver
		{
			selections[] = {{-0.00275421,-0.0491428,-0.0437002}};
		};
		class cargo
		{
			selections[] = {{-0.00272369,-0.0140057,0.0253754},{-0.000968933,-0.0326805,0.107801},{-0.00839233,-0.0544071,0.0459247},{-0.0122681,-0.0513592,0.0490742},{-0.0118484,-0.0522575,0.0490742}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class I_G_Offroad_01_F
	{
		class driver
		{
			selections[] = {{0.000411987,-0.044632,-0.0432978}};
		};
		class cargo
		{
			selections[] = {{0.000762939,-0.0107346,0.0254107},{0.00243378,-0.030674,0.107807},{-0.00577545,-0.0519028,0.0459304},{-0.0103226,-0.0470619,0.0490727},{-0.0103378,-0.0469894,0.0490732}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class I_G_Offroad_01_armed_F
	{
		class driver
		{
			selections[] = {{-0.00202179,-0.0447426,-0.0436778}};
		};
		class cargo
		{
			selections[] = {{-0.000137329,-0.0109901,0.0257211}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {{0.0396042,0.0139465,0.975883}};
			path[] = {{0}};
		};
	};
	class B_G_Offroad_01_F
	{
		class driver
		{
			selections[] = {{-9.15527e-005,-0.0468597,-0.0432992}};
		};
		class cargo
		{
			selections[] = {{0.00025177,-0.0135803,0.0254164},{0.00197601,-0.0342751,0.107809},{-0.00619507,-0.0566101,0.0459313},{-0.0107422,-0.0520744,0.0490737},{-0.0107422,-0.0521202,0.0490727}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class O_G_Offroad_01_F
	{
		class driver
		{
			selections[] = {{-0.00202179,-0.047924,-0.0432749}};
		};
		class cargo
		{
			selections[] = {{-0.0022049,-0.0146141,0.025425},{-0.000839233,-0.0345478,0.107819},{-0.00850677,-0.0550537,0.0459261},{-0.0122681,-0.0500603,0.049067},{-0.0118256,-0.0508041,0.0490694}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class B_G_Offroad_01_armed_F
	{
		class driver
		{
			selections[] = {{-0.00133514,-0.0441208,-0.0437293}};
		};
		class cargo
		{
			selections[] = {{0.000244141,-0.0103607,0.0257406}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {{0.040947,0.0143127,0.975883}};
			path[] = {{0}};
		};
	};
	class O_G_Offroad_01_armed_F
	{
		class driver
		{
			selections[] = {{-0.419067,0.345242,-1.00159}};
		};
		class cargo
		{
			selections[] = {{0.41803,0.247345,-1.02279}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {{0.533615,-1.92236,-0.246942}};
			path[] = {{0}};
		};
	};
	class C_Quadbike_01_F
	{
		class driver
		{
			selections[] = {{-0.0146637,-0.348648,-0.357202}};
		};
		class cargo
		{
			selections[] = {{-0.000961304,-0.739872,-0.361821}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class B_Quadbike_01_F
	{
		class driver
		{
			selections[] = {{-0.0146561,-0.348473,-0.357256}};
		};
		class cargo
		{
			selections[] = {{-0.000968933,-0.739868,-0.361821}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class O_Quadbike_01_F
	{
		class driver
		{
			selections[] = {{-0.0146713,-0.348862,-0.357149}};
		};
		class cargo
		{
			selections[] = {{-0.000976563,-0.739979,-0.36182}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class I_Quadbike_01_F
	{
		class driver
		{
			selections[] = {{-0.0146561,-0.348572,-0.357225}};
		};
		class cargo
		{
			selections[] = {{-0.000968933,-0.739864,-0.361821}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class I_G_Quadbike_01_F
	{
		class driver
		{
			selections[] = {{-0.0146561,-0.348698,-0.35719}};
		};
		class cargo
		{
			selections[] = {{-0.000961304,-0.73988,-0.361821}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class B_G_Quadbike_01_F
	{
		class driver
		{
			selections[] = {{-0.0146713,-0.349129,-0.357075}};
		};
		class cargo
		{
			selections[] = {{-0.000976563,-0.740013,-0.36182}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class O_G_Quadbike_01_F
	{
		class driver
		{
			selections[] = {{-0.0146637,-0.348675,-0.357199}};
		};
		class cargo
		{
			selections[] = {{-0.000968933,-0.739834,-0.361821}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class I_MRAP_03_F
	{
		class driver
		{
			selections[] = {{0.0117111,0.920513,-0.533345}};
		};
		class cargo
		{
			selections[] = {{0.67804,-0.202209,-0.497061},{0.0175705,-0.146225,-0.533025}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.733009,-0.193501,-0.55811}};
			path[] = {{0}};
		};
	};
	class I_MRAP_03_hmg_F
	{
		class driver
		{
			selections[] = {{0.0118484,0.919056,-1.22959}};
		};
		class cargo
		{
			selections[] = {{0.0173569,-0.155396,-1.22963}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {{0.692261,-0.189384,-1.27114},{-0.728012,-0.186584,-1.25583}};
			path[] = {{0},{1}};
		};
	};
	class I_MRAP_03_gmg_F
	{
		class driver
		{
			selections[] = {{0.0112457,-0.0572281,0.133829}};
		};
		class cargo
		{
			selections[] = {{-0.0320053,0.0123138,0.0720587}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {{0.0102768,-0.0529137,0.15007},{0.00242615,-0.0521774,0.14895}};
			path[] = {{0},{1}};
		};
	};
	class B_Truck_01_transport_F
	{
		class driver
		{
			selections[] = {{-0.747498,4.08039,-0.485872}};
		};
		class cargo
		{
			selections[] = {{0.811821,4.02884,-0.411519},{-0.900505,0.317745,-0.00257969},{-0.778168,-1.04706,-0.0237064},{-0.876205,-1.75279,0.0305638},{-0.812775,-2.44632,0.0514526},{-0.801697,-3.1504,-0.00734854},{-0.804039,-3.74315,-0.0344887},{-0.782921,-4.53878,0.152543},{0.881889,0.213816,0.0560093},{0.855766,-0.517574,-0.0562391},{0.907356,-1.06364,0.166045},{0.92498,-1.76526,0.125966},{0.903305,-2.53235,0.0338955},{0.973953,-3.22316,0.123972},{0.912979,-3.86791,0.170173},{0.860802,-4.50733,0.178381},{-0.729164,-0.375569,0.0311165}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{0},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{1},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class B_Truck_01_covered_F
	{
		class driver
		{
			selections[] = {{-0.73275,4.0774,-0.485344}};
		};
		class cargo
		{
			selections[] = {{0.82711,4.02369,-0.411516},{-0.893143,0.316811,-0.00265837},{-0.790512,-1.04774,-0.00426197},{-0.877747,-1.75331,0.0257058},{-0.803696,-2.44667,0.0513101},{-0.802505,-3.15105,-0.0074048},{-0.74543,-3.74254,-0.0345502},{-0.774933,-4.53799,0.15195},{0.90155,0.212656,0.0469842},{0.874588,-0.51667,0.0585675},{0.898026,-1.14997,0.0552192},{0.824745,-1.87106,0.106086},{0.821838,-2.53249,0.109571},{0.991913,-3.22361,0.167195},{0.931351,-3.86814,0.0912251},{0.877213,-4.50637,0.178302},{-0.666733,-0.3755,0.0313125}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{0},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{1},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class O_Truck_02_covered_F
	{
		class driver
		{
			selections[] = {{-0.581665,2.75568,-0.404126}};
		};
		class cargo
		{
			selections[] = {{0.194489,2.70899,-0.379365},{0.735672,2.67202,-0.378172},{-0.834129,0.879173,-0.170911},{0.914001,0.829601,-0.11504},{-0.917679,0.197197,-0.207017},{0.919373,0.116295,-0.0238409},{-0.961433,-0.554264,-0.158774},{0.927734,-0.612404,-0.115764},{-0.870499,-1.17096,-0.258324},{0.833977,-1.17538,-0.142351},{-0.860199,-1.90205,-0.211107},{0.944717,-1.86303,-0.109841},{-0.998291,-2.50959,-0.165689},{0.838509,-2.56244,-0.0822301},{-0.87764,-3.23612,-0.101442},{0.897263,-3.24594,-0.0901504}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{0},{1}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class O_Truck_02_transport_F
	{
		class driver
		{
			selections[] = {{-0.5793,2.75443,-0.404125}};
		};
		class cargo
		{
			selections[] = {{0.196945,2.7072,-0.37941},{0.738037,2.67008,-0.37823},{-0.83625,0.877136,-0.170518},{0.914955,0.831314,-0.114655},{-0.9188,0.196381,-0.207132},{0.91983,0.116646,-0.0237198},{-0.960777,-0.554203,-0.158817},{0.925568,-0.612701,-0.116294},{-0.868233,-1.17013,-0.258217},{0.832886,-1.17548,-0.142385},{-0.860344,-1.90162,-0.21104},{0.944611,-1.86367,-0.109532},{-0.998016,-2.50957,-0.16564},{0.83744,-2.56265,-0.0825691},{-0.875847,-3.23662,-0.101331},{0.895279,-3.24682,-0.0900426}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{0},{1}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class I_Truck_02_covered_F
	{
		class driver
		{
			selections[] = {{-0.579269,2.75424,-0.404141}};
		};
		class cargo
		{
			selections[] = {{0.196976,2.70721,-0.379425},{0.738068,2.67018,-0.378255},{-0.836288,0.876945,-0.170491},{0.914871,0.831154,-0.114554},{-0.91861,0.19635,-0.207118},{0.919617,0.116661,-0.0237737},{-0.960724,-0.554302,-0.158832},{0.925461,-0.612629,-0.116333},{-0.868187,-1.17002,-0.258215},{0.832985,-1.1754,-0.142376},{-0.860504,-1.9014,-0.210991},{0.944496,-1.86383,-0.109403},{-0.997795,-2.50961,-0.16562},{0.837189,-2.56267,-0.0826068},{-0.875633,-3.23668,-0.101307},{0.895119,-3.24688,-0.0900235}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{0},{1}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class I_Truck_02_transport_F
	{
		class driver
		{
			selections[] = {{-0.579239,2.75435,-0.404112}};
		};
		class cargo
		{
			selections[] = {{0.196991,2.70686,-0.379418},{0.738106,2.66952,-0.378225},{-0.836777,0.87751,-0.170437},{0.915672,0.831699,-0.114583},{-0.919762,0.196415,-0.207227},{0.920822,0.11681,-0.0234699},{-0.96138,-0.553974,-0.158786},{0.926048,-0.612751,-0.116181},{-0.868195,-1.17049,-0.258369},{0.831848,-1.1756,-0.142515},{-0.85907,-1.90204,-0.21119},{0.94474,-1.86318,-0.109793},{-0.999352,-2.50935,-0.165676},{0.839714,-2.56228,-0.0817747},{-0.877815,-3.23602,-0.101446},{0.896461,-3.24633,-0.0901098}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{0},{1}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class O_Truck_03_transport_F
	{
		class driver
		{
			selections[] = {{-0.672623,2.62984,-0.215975}};
		};
		class cargo
		{
			selections[] = {{0.759865,2.53268,-0.197335},{-0.922997,-0.55447,0.145935},{-0.898666,-2.15337,0.161669},{-0.896057,-2.90437,0.2224},{-0.846184,-3.63902,0.230224},{-0.858597,-4.50956,0.311588},{0.95533,-0.553316,0.134771},{0.920784,-1.39356,0.309127},{0.861343,-2.09378,0.224024},{-0.876747,-1.36725,0.145483},{0.965942,-3.55287,0.353559},{0.945641,-4.53869,0.319166},{0.897652,-2.87291,0.23311}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{0},{-10},{-10},{-10},{-10},{-10},{1},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class O_Truck_03_covered_F
	{
		class driver
		{
			selections[] = {{-0.647552,2.63103,-0.216058}};
		};
		class cargo
		{
			selections[] = {{0.785202,2.53423,-0.197419},{-0.897896,-0.55442,0.146005},{-0.775681,-2.15232,0.161688},{-0.873055,-2.90342,0.242571},{-0.822182,-3.63744,0.230486},{-0.833832,-4.5079,0.311597},{0.980957,-0.554558,0.284973},{0.823273,-1.39451,0.222917},{0.88546,-2.09483,0.223743},{-0.90049,-1.36719,0.245353},{0.884682,-3.55287,0.277143},{0.969658,-4.53886,0.319171},{0.920715,-2.87284,0.233648}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{0},{-10},{-10},{-10},{-10},{-10},{1},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class O_Truck_03_device_F
	{
		class driver
		{
			selections[] = {{-0.667671,2.35461,0.0519609}};
		};
		class cargo
		{
			selections[] = {{0.76445,2.25642,0.0709901}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class C_Hatchback_01_F
	{
		class driver
		{
			selections[] = {{-0.000595093,-0.048172,-0.0432925}};
		};
		class cargo
		{
			selections[] = {{9.15527e-005,-0.014801,0.0254154},{-0.0414124,0.000179291,0.0643616},{-0.0318604,0.00911331,0.0723467}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class C_Hatchback_01_sport_F
	{
		class driver
		{
			selections[] = {{-0.000816345,-0.0517311,-0.0434122}};
		};
		class cargo
		{
			selections[] = {{0.000137329,-0.02034,0.0253325},{-0.0422287,-0.00533295,0.0643649},{-0.0319977,0.00153351,0.0722518}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class C_SUV_01_F
	{
		class driver
		{
			selections[] = {{0.0271683,0.00702667,0.0421019}};
		};
		class cargo
		{
			selections[] = {{0.000541687,-0.0114937,0.0254054},{-0.00106049,-0.0102768,0.0702801},{-0.0408096,-0.000442505,0.0642815}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class B_Truck_01_mover_F
	{
		class driver
		{
			selections[] = {{-0.757172,3.68771,-0.175419}};
		};
		class cargo
		{
			selections[] = {{0.775032,3.63485,-0.100302}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class B_Truck_01_box_F
	{
		class driver
		{
			selections[] = {{-0.780052,4.21526,-0.574368}};
		};
		class cargo
		{
			selections[] = {{0.752342,4.16311,-0.49913}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class C_Van_01_transport_F
	{
		class driver
		{
			selections[] = {{0.00167847,-0.00905228,-0.0444064}};
		};
		class cargo
		{
			selections[] = {{0.0665817,-0.0258751,0.0609789},{-0.0242081,0.054184,0.0633831},{0.00519562,0.0253334,0.118214},{0.00514221,0.0250053,0.118212},{0.00512695,0.0246811,0.118209},{0.00510406,0.0241394,0.118207},{0.00512695,0.0235901,0.118206},{0.00511932,0.0231133,0.118204},{0.00504303,0.0233192,0.118205},{0.241287,-2.34433,-0.215616},{-0.233856,-2.84007,-0.222046},{0.263062,-2.918,-0.215613}};
			path[] = {{-10},{-10},{0},{5},{1},{6},{2},{7},{3},{8},{4},{9}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class I_G_Van_01_transport_F
	{
		class driver
		{
			selections[] = {{-0.458542,0.251678,-0.297942}};
		};
		class cargo
		{
			selections[] = {{0.571213,0.275528,-0.19875},{0.121284,0.201595,-0.175565},{-0.313553,-0.642521,-0.222057},{0.266342,-0.486465,-0.215626},{-0.341255,-1.26065,-0.222056},{0.316658,-1.11939,-0.21562},{-0.253517,-1.85191,-0.222043},{0.163689,-1.7045,-0.215602},{-0.365318,-2.45753,-0.222029},{0.245903,-2.34392,-0.215591},{-0.235527,-2.84422,-0.222021},{0.266739,-2.92053,-0.215587}};
			path[] = {{-10},{-10},{0},{5},{1},{6},{2},{7},{3},{8},{4},{9}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class C_Van_01_box_F
	{
		class driver
		{
			selections[] = {{-3.8147e-005,-0.0109138,-0.0435443}};
		};
		class cargo
		{
			selections[] = {{0.0667419,-0.028038,0.0608492},{-0.0284576,0.049675,0.0632348}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class B_G_Van_01_transport_F
	{
		class driver
		{
			selections[] = {{-0.458496,0.250893,-0.297889}};
		};
		class cargo
		{
			selections[] = {{0.571327,0.2771,-0.198716},{0.121559,0.203995,-0.175471},{-0.315254,-0.642624,-0.222054},{0.266945,-0.486214,-0.215622},{-0.340729,-1.26069,-0.222056},{0.31469,-1.11961,-0.215627},{-0.249687,-1.85152,-0.222059},{0.158684,-1.70452,-0.215626},{-0.360275,-2.45749,-0.222053},{0.241692,-2.34412,-0.215613},{-0.234451,-2.84186,-0.222034},{0.265511,-2.91953,-0.215596}};
			path[] = {{-10},{-10},{0},{5},{1},{6},{2},{7},{3},{8},{4},{9}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class O_G_Van_01_transport_F
	{
		class driver
		{
			selections[] = {{-0.458488,0.251438,-0.297981}};
		};
		class cargo
		{
			selections[] = {{0.571243,0.275475,-0.198716},{0.121536,0.201534,-0.175511},{-0.313599,-0.642651,-0.222058},{0.26619,-0.486256,-0.215627},{-0.341431,-1.26064,-0.222056},{0.317039,-1.11943,-0.215619},{-0.25351,-1.85188,-0.222044},{0.163918,-1.70444,-0.215601},{-0.365585,-2.45764,-0.222027},{0.246132,-2.34377,-0.215591},{-0.235413,-2.84421,-0.222021},{0.266876,-2.92052,-0.215587}};
			path[] = {{-10},{-10},{0},{5},{1},{6},{2},{7},{3},{8},{4},{9}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class C_Kart_01_F
	{
		class driver
		{
			selections[] = {{-0.0112991,-0.211384,0.243923}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class C_Kart_01_Fuel_F
	{
		class driver
		{
			selections[] = {{-0.0113068,-0.21138,0.243924}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class C_Kart_01_Blu_F
	{
		class driver
		{
			selections[] = {{-0.0112915,-0.21138,0.243923}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class C_Kart_01_Red_F
	{
		class driver
		{
			selections[] = {{-0.0113068,-0.211384,0.243923}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class C_Kart_01_Vrana_F
	{
		class driver
		{
			selections[] = {{-0.0112991,-0.21138,0.243924}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class dbo_CIV_new_bike
	{
		class driver
		{
			selections[] = {{-0.0181084,-0.318169,1.13739}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class dbo_CIV_ol_bike
	{
		class driver
		{
			selections[] = {{0.00187302,-0.254639,0.205034}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Hatchback_Beige
	{
		class driver
		{
			selections[] = {{-0.37159,-0.037674,-0.673427}};
		};
		class cargo
		{
			selections[] = {{0.371841,-0.0576859,-0.695304},{0.31469,-1.14083,-0.678605},{-0.402512,-1.06092,-0.648402}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Hatchback_Green
	{
		class driver
		{
			selections[] = {{-0.371712,-0.0356522,-0.673563}};
		};
		class cargo
		{
			selections[] = {{0.372223,-0.055687,-0.695315},{0.313171,-1.13779,-0.677545},{-0.40242,-1.05952,-0.648524}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Hatchback_Blue
	{
		class driver
		{
			selections[] = {{-0.371429,-0.0356712,-0.673487}};
		};
		class cargo
		{
			selections[] = {{0.372223,-0.0551643,-0.695338},{0.314163,-1.13783,-0.677726},{-0.402306,-1.05889,-0.648462}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Hatchback_BlueCustom
	{
		class driver
		{
			selections[] = {{-0.371521,-0.0373421,-0.673511}};
		};
		class cargo
		{
			selections[] = {{0.372505,-0.0568886,-0.69533},{0.313774,-1.13808,-0.677694},{-0.402222,-1.05811,-0.648513}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Hatchback_BeigeCustom
	{
		class driver
		{
			selections[] = {{-0.371338,-0.0357742,-0.67348}};
		};
		class cargo
		{
			selections[] = {{0.372246,-0.054615,-0.69534},{0.314064,-1.13652,-0.677375},{-0.402267,-1.05772,-0.64846}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Hatchback_Yellow
	{
		class driver
		{
			selections[] = {{-0.37159,-0.0373306,-0.673518}};
		};
		class cargo
		{
			selections[] = {{0.372589,-0.0567436,-0.695332},{0.313805,-1.13794,-0.677645},{-0.402184,-1.05827,-0.648532}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Hatchback_Grey
	{
		class driver
		{
			selections[] = {{-0.371605,-0.0355759,-0.673515}};
		};
		class cargo
		{
			selections[] = {{0.372185,-0.0545692,-0.69534},{0.313637,-1.13639,-0.677272},{-0.402344,-1.05724,-0.648497}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Hatchback_Black
	{
		class driver
		{
			selections[] = {{-0.371254,-0.0365524,-0.67347}};
		};
		class cargo
		{
			selections[] = {{0.372292,-0.0547829,-0.695343},{0.313774,-1.13589,-0.677159},{-0.402267,-1.05666,-0.648483}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Hatchback_Dark
	{
		class driver
		{
			selections[] = {{-0.371666,-0.0354729,-0.673541}};
		};
		class cargo
		{
			selections[] = {{0.372185,-0.0555153,-0.695331},{0.313423,-1.13748,-0.677521},{-0.402382,-1.05855,-0.648502}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Hatchback_Rusty1
	{
		class driver
		{
			selections[] = {{-0.371712,-0.0356674,-0.673563}};
		};
		class cargo
		{
			selections[] = {{0.372223,-0.0557556,-0.695316},{0.313217,-1.13771,-0.67753},{-0.402458,-1.05921,-0.648533}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Hatchback_Rusty2
	{
		class driver
		{
			selections[] = {{-0.371712,-0.0370789,-0.673512}};
		};
		class cargo
		{
			selections[] = {{0.372559,-0.0563431,-0.69531},{0.313484,-1.13771,-0.677515},{-0.402176,-1.05862,-0.648545}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Hatchback_Rusty3
	{
		class driver
		{
			selections[] = {{-0.371834,-0.0373192,-0.673465}};
		};
		class cargo
		{
			selections[] = {{0.37178,-0.0574074,-0.695327},{0.314041,-1.13925,-0.678122},{-0.402626,-1.06024,-0.648434}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Hatchback_Sport_Red
	{
		class driver
		{
			selections[] = {{-0.371941,-0.0409737,-0.673533}};
		};
		class cargo
		{
			selections[] = {{0.372017,-0.0619812,-0.695383},{0.313927,-1.14426,-0.679418},{-0.402695,-1.06668,-0.648571}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Hatchback_Sport_Blue
	{
		class driver
		{
			selections[] = {{-0.371902,-0.0385094,-0.67349}};
		};
		class cargo
		{
			selections[] = {{0.371895,-0.0595932,-0.695373},{0.314453,-1.1428,-0.679141},{-0.402527,-1.06468,-0.648508}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Hatchback_Sport_Orange
	{
		class driver
		{
			selections[] = {{-0.371803,-0.0411224,-0.673505}};
		};
		class cargo
		{
			selections[] = {{0.37207,-0.0620041,-0.695388},{0.314583,-1.1447,-0.679647},{-0.402664,-1.06715,-0.64853}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Hatchback_Sport_White
	{
		class driver
		{
			selections[] = {{-0.372307,-0.0375748,-0.673509}};
		};
		class cargo
		{
			selections[] = {{0.371552,-0.0577011,-0.695371},{0.31385,-1.14021,-0.678368},{-0.402336,-1.06259,-0.648527}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Hatchback_Sport_Beige
	{
		class driver
		{
			selections[] = {{-0.371849,-0.0402145,-0.673498}};
		};
		class cargo
		{
			selections[] = {{0.371918,-0.061367,-0.695388},{0.314232,-1.14423,-0.679489},{-0.402596,-1.0663,-0.648541}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Hatchback_Sport_Green
	{
		class driver
		{
			selections[] = {{-0.371765,-0.0414925,-0.673493}};
		};
		class cargo
		{
			selections[] = {{0.371964,-0.0620232,-0.695384},{0.313934,-1.14421,-0.679418},{-0.40274,-1.06778,-0.648566}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_HEMMT
	{
		class driver
		{
			selections[] = {{-0.747498,4.07927,-0.485666}};
		};
		class cargo
		{
			selections[] = {{0.811539,4.02793,-0.411471},{-0.901024,0.317625,-0.00233841},{-0.778374,-1.04704,-0.0239964},{-0.876945,-1.75295,0.0304589},{-0.812874,-2.44632,0.0514512},{-0.801666,-3.15039,-0.00735092},{-0.80381,-3.74315,-0.0343585},{-0.782745,-4.5388,0.152563},{0.881638,0.213737,0.0560679},{0.855064,-0.51755,-0.0565481},{0.907478,-1.06363,0.166093},{0.92511,-1.76518,0.125996},{0.903023,-2.53232,0.0339084},{0.972626,-3.22318,0.123166},{0.912895,-3.86787,0.170117},{0.860603,-4.5074,0.178384},{-0.729111,-0.375523,0.0311236}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{0},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{1},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Hunter
	{
		class driver
		{
			selections[] = {{-0.520096,-1.43598,-0.438347}};
		};
		class cargo
		{
			selections[] = {{0.514915,-1.41231,-0.368657},{0.487633,-2.57618,-0.335178},{-0.565117,-2.49176,-0.351688}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Ifrit
	{
		class driver
		{
			selections[] = {{0.0152893,-0.761848,-0.657664}};
		};
		class cargo
		{
			selections[] = {{0.491959,-2.08683,-0.66714},{-0.364738,-2.15819,-0.660189},{0.26162,-3.30756,-0.505548},{-0.348534,-3.20565,-0.52743}};
			path[] = {{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Ikarus_Blue
	{
		class driver
		{
			selections[] = {{-0.853882,3.93476,-0.214134}};
		};
		class cargo
		{
			selections[] = {{-0.96405,0.636158,-0.304799},{-0.982727,3.06097,-0.291568},{-1.01398,-0.161346,-0.287577},{0.770737,1.82536,-0.292629},{0.784813,-3.33429,-0.278183},{-1.02808,-1.64264,-0.278186},{0.783249,-1.59517,-0.278189},{0.229065,0.981873,-0.300176},{-1.03169,-2.47708,-0.280608},{0.262299,-3.16325,-0.279455},{0.262794,-1.67657,-0.27946},{0.226837,1.80831,-0.287354},{0.231483,-2.47694,-0.240849},{0.30735,2.67923,-0.262327},{-0.986191,-3.22534,-0.276511},{-0.991585,-0.927979,-0.289399},{-0.902107,2.2633,-0.272786},{-0.949455,1.45092,-0.272757},{0.715134,0.995211,-0.265231},{-0.27845,-5.2997,0.158065},{-0.305511,-0.69986,0.158066},{-0.389595,-3.78166,0.158067},{-0.826294,-4.50942,0.158067}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Ikarus_Red
	{
		class driver
		{
			selections[] = {{-0.852989,3.93784,-0.214138}};
		};
		class cargo
		{
			selections[] = {{-0.962456,0.638514,-0.304704},{-0.980629,3.06223,-0.291467},{-1.01157,-0.161129,-0.287568},{0.773315,1.82509,-0.292662},{0.78212,-3.33376,-0.278236},{-1.02541,-1.64296,-0.278226},{0.785553,-1.59521,-0.278203},{0.230835,0.982065,-0.300175},{-1.03067,-2.47775,-0.280622},{0.261726,-3.16264,-0.279505},{0.263222,-1.67731,-0.279532},{0.227486,1.80786,-0.287423},{0.231674,-2.4773,-0.240855},{0.30751,2.67936,-0.262324},{-0.986267,-3.22606,-0.27645},{-0.991745,-0.928699,-0.28934},{-0.901207,2.26136,-0.272598},{-0.949585,1.45156,-0.272576},{0.699936,1.0424,-0.271404},{-0.275307,-5.29978,0.15807},{-0.302704,-0.699478,0.15807},{-0.392212,-3.78387,0.158074},{-0.82225,-4.51084,0.158077}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Ikarus_Party
	{
		class driver
		{
			selections[] = {{-0.852509,3.93784,-0.214141}};
		};
		class cargo
		{
			selections[] = {{-0.962166,0.638538,-0.304704},{-0.980446,3.062,-0.291487},{-1.01144,-0.161476,-0.287598},{0.773407,1.82495,-0.292675},{0.782043,-3.33398,-0.27822},{-1.02536,-1.64263,-0.278197},{0.785606,-1.59504,-0.278189},{0.230919,0.981884,-0.300191},{-1.03082,-2.47814,-0.280658},{0.261734,-3.16224,-0.279541},{0.26326,-1.67737,-0.279539},{0.227203,1.80828,-0.287377},{0.231712,-2.47648,-0.240847},{0.307465,2.68008,-0.262289},{-0.986206,-3.22662,-0.276401},{-0.991661,-0.928247,-0.289299},{-0.900246,2.2591,-0.272507},{-0.94957,1.45181,-0.272554},{0.714256,1.00165,-0.26477},{-0.274834,-5.2998,0.158072},{-0.300865,-0.699215,0.158076},{-0.393272,-3.78471,0.158077},{-0.823586,-4.51046,0.158072}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Kart_BluKing
	{
		class driver
		{
			selections[] = {{-0.0112915,-0.211384,0.243923}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Kart_RedStone
	{
		class driver
		{
			selections[] = {{-0.0112991,-0.211384,0.243923}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Kart_Vrana
	{
		class driver
		{
			selections[] = {{-0.0112991,-0.21138,0.243924}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Kart_Green
	{
		class driver
		{
			selections[] = {{-0.0112991,-0.211384,0.243924}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Kart_Blue
	{
		class driver
		{
			selections[] = {{-0.0113068,-0.211384,0.243923}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Kart_Orange
	{
		class driver
		{
			selections[] = {{-0.0113068,-0.211384,0.243924}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Kart_White
	{
		class driver
		{
			selections[] = {{-0.0112991,-0.21138,0.243924}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Kart_Yellow
	{
		class driver
		{
			selections[] = {{-0.0112991,-0.21138,0.243923}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Kart_Black
	{
		class driver
		{
			selections[] = {{-0.0113068,-0.21138,0.243924}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Lada_Green
	{
		class driver
		{
			selections[] = {{0.0151825,-0.0519867,0.142465}};
		};
		class cargo
		{
			selections[] = {{0.000961304,0.0343208,-0.0336213},{0.000831604,0.0346184,-0.0336223},{0.000732422,0.0348644,-0.0336223},{0.047905,-0.0108166,-0.00649118}};
			path[] = {{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Lada_Taxi
	{
		class driver
		{
			selections[] = {{0.0146484,-0.0516167,0.142457}};
		};
		class cargo
		{
			selections[] = {{0.000495911,0.0342121,-0.0336251},{0.00038147,0.0342293,-0.033618},{0.000289917,0.0341492,-0.033617},{0.0474472,-0.0117607,-0.00648689}};
			path[] = {{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Lada_Red
	{
		class driver
		{
			selections[] = {{0.0146408,-0.05159,0.142461}};
		};
		class cargo
		{
			selections[] = {{0.000495911,0.0342789,-0.0336232},{0.00037384,0.0342846,-0.0336213},{0.000274658,0.0341644,-0.0336227},{0.0474243,-0.0117626,-0.00649118}};
			path[] = {{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Lada_White
	{
		class driver
		{
			selections[] = {{0.015152,-0.0579491,0.142488}};
		};
		class cargo
		{
			selections[] = {{0.000762939,0.0251656,-0.0335875},{0.000144958,0.0266304,-0.0336018},{-0.000534058,0.0302887,-0.0336099},{0.0461197,-0.0131626,-0.00647354}};
			path[] = {{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Lada_Hipster
	{
		class driver
		{
			selections[] = {{0.0150909,-0.0515842,0.142465}};
		};
		class cargo
		{
			selections[] = {{0.000907898,0.0345459,-0.0336218},{0.000793457,0.0348148,-0.0336232},{0.000701904,0.0350037,-0.0336227},{0.0479126,-0.0108967,-0.00649118}};
			path[] = {{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Landrover_Civ_02
	{
		class driver
		{
			selections[] = {{-0.00171661,-0.0100212,0.0678673}};
		};
		class cargo
		{
			selections[] = {{-0.0326309,0.00799179,0.0717058},{0.00236511,-0.0265236,0.0660696},{-0.00906372,-0.000391006,0.0706477},{0.00241852,-0.0276833,0.0660872},{0.0019989,0.0106926,0.0802846},{0.0141907,0.0692387,0.108403},{0.0142441,0.0709991,0.108402},{0.000465393,0.0142307,0.0819917}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{0},{1},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_LandRover_Red
	{
		class driver
		{
			selections[] = {{-0.00189209,-0.00963974,0.0678654}};
		};
		class cargo
		{
			selections[] = {{-0.0327988,0.00816917,0.0718465},{0.0022583,-0.0269833,0.0660534},{-0.00891876,0.000797272,0.0708389},{0.00247955,-0.0265408,0.0660858},{0.00180054,0.0114803,0.0798016},{0.0141678,0.0696144,0.108401},{0.0142365,0.071146,0.1084},{0.000915527,0.0138626,0.0818577}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{0},{1},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_LandRover_Urban
	{
		class driver
		{
			selections[] = {{-0.000320435,-0.0101528,0.0678725}};
		};
		class cargo
		{
			selections[] = {{-0.0315704,0.0093441,0.0718508},{0.00317383,-0.0243378,0.0660496},{-0.00816345,0.00377274,0.0708933},{0.00312805,-0.0223236,0.0660806},{0.00244141,0.0170631,0.0798774},{0.0147095,0.0742931,0.108397},{0.558464,-2.14132,-0.317484},{-0.618004,-2.05644,-0.336291}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{0},{1},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_LandRover_Green
	{
		class driver
		{
			selections[] = {{-0.508438,0.0964603,-0.485146}};
		};
		class cargo
		{
			selections[] = {{0.469803,0.148079,-0.509947},{-0.66143,-0.562551,-0.252489},{0.637993,-0.662474,-0.253589},{-0.665993,-1.28805,-0.252461},{0.629707,-1.37324,-0.238335},{-0.566238,-2.06983,-0.30972},{0.561401,-2.14181,-0.317488},{-0.622551,-2.05556,-0.336262}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{0},{1},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_LandRover_Sand
	{
		class driver
		{
			selections[] = {{-0.508743,0.096611,-0.485145}};
		};
		class cargo
		{
			selections[] = {{0.469444,0.147995,-0.509927},{-0.661751,-0.562292,-0.252494},{0.637894,-0.662539,-0.253452},{-0.666039,-1.28796,-0.252462},{0.630272,-1.37338,-0.238883},{-0.566727,-2.0697,-0.30972},{0.562126,-2.14191,-0.317489},{-0.623016,-2.05571,-0.33626}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{0},{1},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_LandRover_Desert
	{
		class driver
		{
			selections[] = {{-0.50885,0.0967922,-0.485145}};
		};
		class cargo
		{
			selections[] = {{0.469162,0.148146,-0.50985},{-0.661819,-0.562086,-0.252494},{0.637337,-0.662588,-0.253308},{-0.666138,-1.28787,-0.252461},{0.63118,-1.37353,-0.239161},{-0.567459,-2.06962,-0.309721},{0.562042,-2.14198,-0.317488},{-0.622421,-2.05592,-0.336389}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{0},{1},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class LR_Ambulance_Base
	{
		class driver
		{
			selections[] = {{-0.507408,0.821371,-0.485245}};
		};
		class cargo
		{
			selections[] = {{0.470947,0.874916,-0.509515},{-0.658936,0.160141,-0.25265},{0.636154,0.0629368,-0.25288},{-0.663078,-0.565281,-0.252619},{0.628326,-0.651379,-0.241261},{-0.621643,-1.33227,-0.24016}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_LandRover_Ambulance_Green
	{
		class driver
		{
			selections[] = {{-0.507248,0.824203,-0.485244}};
		};
		class cargo
		{
			selections[] = {{0.470978,0.877483,-0.509367},{-0.657143,0.159929,-0.252705},{0.633514,0.0628853,-0.252886},{-0.661346,-0.565348,-0.252619},{0.629089,-0.652363,-0.241741},{-0.62323,-1.33121,-0.24078}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_LandRover_Ambulance_Desert
	{
		class driver
		{
			selections[] = {{-0.507393,0.82283,-0.485246}};
		};
		class cargo
		{
			selections[] = {{0.470169,0.874966,-0.509442},{-0.660225,0.16144,-0.252697},{0.63739,0.061327,-0.252893},{-0.665031,-0.563536,-0.252621},{0.632248,-0.653412,-0.241634},{-0.625824,-1.33022,-0.240587}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_LandRover_Ambulance_Sand
	{
		class driver
		{
			selections[] = {{-0.506676,0.824368,-0.485242}};
		};
		class cargo
		{
			selections[] = {{0.47084,0.875917,-0.509481},{-0.658928,0.160795,-0.252658},{0.635773,0.0620823,-0.252885},{-0.663376,-0.564404,-0.252622},{0.63063,-0.652086,-0.241302},{-0.625206,-1.33154,-0.240199}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Octavius_White
	{
		class driver
		{
			selections[] = {{-0.00088501,-0.0476723,-0.0433607}};
		};
		class cargo
		{
			selections[] = {{0.000152588,-0.0159111,0.0253882},{-0.0424423,0.000741959,0.0644636},{-0.0319748,0.00946045,0.0722666}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Octavius_Black
	{
		class driver
		{
			selections[] = {{-0.000259399,-0.0483627,-0.0433006}};
		};
		class cargo
		{
			selections[] = {{0.000350952,-0.0155487,0.0254149},{-0.0415497,0.00127029,0.0643935},{-0.0317459,0.0121841,0.0723195}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Red
	{
		class driver
		{
			selections[] = {{-0.00122833,-0.048214,-0.0434895}};
		};
		class cargo
		{
			selections[] = {{-0.000816345,-0.0136032,0.0254054},{0.00110626,-0.0333481,0.1078},{-0.00674438,-0.0543671,0.0459232},{-0.0108414,-0.0496368,0.049067},{-0.0104218,-0.0498314,0.049067}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Beige
	{
		class driver
		{
			selections[] = {{-0.00138092,-0.0483093,-0.0435772}};
		};
		class cargo
		{
			selections[] = {{-0.000938416,-0.0136452,0.0253797},{0.00106049,-0.0332947,0.1078},{-0.00676727,-0.0541191,0.0459242},{-0.0108566,-0.0490303,0.049068},{-0.010437,-0.0488892,0.0490689}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_White
	{
		class driver
		{
			selections[] = {{0.000244141,-0.0480118,-0.0434694}};
		};
		class cargo
		{
			selections[] = {{0.000549316,-0.0122337,0.0254068},{0.0022049,-0.0326996,0.107803},{-0.00598145,-0.0557594,0.0459266},{-0.0105362,-0.0519638,0.0490704},{-0.0105362,-0.0519447,0.0490723}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Blue
	{
		class driver
		{
			selections[] = {{-0.00131989,-0.0483189,-0.0435305}};
		};
		class cargo
		{
			selections[] = {{-0.000862122,-0.0135078,0.0253901},{0.00115204,-0.0330696,0.107801},{-0.00666809,-0.0539932,0.0459242},{-0.0107269,-0.049099,0.0490685},{-0.0103607,-0.049263,0.0490694}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_DarkRed
	{
		class driver
		{
			selections[] = {{0.000480652,-0.0454712,-0.0434351}};
		};
		class cargo
		{
			selections[] = {{0.000747681,-0.0103378,0.0254111},{0.00239563,-0.0301056,0.107807},{-0.0058136,-0.0513458,0.0459309},{-0.0103683,-0.0470734,0.0490737},{-0.010376,-0.048008,0.0490718}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_BlueCustom
	{
		class driver
		{
			selections[] = {{-0.417053,0.20784,-0.450957}};
		};
		class cargo
		{
			selections[] = {{0.418671,0.111519,-0.472694},{0.149223,-2.33553,-0.474407},{-0.384346,-2.25701,-0.493414},{0.236992,-0.950924,-0.557517},{-0.410492,-1.00377,-0.554673}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Guerilla01
	{
		class driver
		{
			selections[] = {{-0.417366,0.207272,-0.451006}};
		};
		class cargo
		{
			selections[] = {{0.418419,0.10923,-0.472715},{0.148865,-2.33184,-0.474419},{-0.383095,-2.25256,-0.493418},{0.237183,-0.945766,-0.557518},{-0.410301,-0.999817,-0.554673}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Guerilla02
	{
		class driver
		{
			selections[] = {{-0.417412,0.20583,-0.450942}};
		};
		class cargo
		{
			selections[] = {{0.418427,0.109985,-0.472718},{0.149002,-2.33275,-0.474417},{-0.383194,-2.25294,-0.49342},{0.237167,-0.946712,-0.55752},{-0.410332,-0.999832,-0.554672}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Guerilla03
	{
		class driver
		{
			selections[] = {{-0.417122,0.207726,-0.450994}};
		};
		class cargo
		{
			selections[] = {{0.418648,0.111485,-0.472701},{0.149208,-2.33544,-0.474406},{-0.384338,-2.25701,-0.493414},{0.237,-0.951256,-0.557518},{-0.4105,-1.00454,-0.554672}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Guerilla04
	{
		class driver
		{
			selections[] = {{-0.417885,0.205639,-0.450788}};
		};
		class cargo
		{
			selections[] = {{0.418129,0.109097,-0.472698},{0.148918,-2.33244,-0.474423},{-0.383514,-2.25331,-0.493425},{0.236938,-0.948132,-0.557526},{-0.410538,-1.00289,-0.554677}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Guerilla05
	{
		class driver
		{
			selections[] = {{-0.417068,0.208984,-0.451137}};
		};
		class cargo
		{
			selections[] = {{0.418686,0.111931,-0.472707},{0.149109,-2.33498,-0.474408},{-0.383919,-2.25521,-0.49342},{0.237022,-0.94865,-0.557523},{-0.410461,-1.00314,-0.554676}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Guerilla06
	{
		class driver
		{
			selections[] = {{-0.418678,0.204853,-0.450762}};
		};
		class cargo
		{
			selections[] = {{0.41729,0.10857,-0.472712},{0.149773,-2.33271,-0.474417},{-0.383194,-2.25443,-0.493421},{0.237083,-0.948235,-0.557523},{-0.410591,-1.00251,-0.554677}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Guerilla07
	{
		class driver
		{
			selections[] = {{-0.417366,0.206505,-0.450954}};
		};
		class cargo
		{
			selections[] = {{0.418442,0.110172,-0.472707},{0.148941,-2.33235,-0.474419},{-0.383171,-2.25284,-0.493421},{0.237183,-0.946796,-0.55752},{-0.410324,-1.00096,-0.554674}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Guerilla08
	{
		class driver
		{
			selections[] = {{-0.41703,0.208775,-0.451052}};
		};
		class cargo
		{
			selections[] = {{0.418701,0.112385,-0.472693},{0.149223,-2.33569,-0.474404},{-0.384163,-2.25621,-0.493416},{0.237,-0.9496,-0.557521},{-0.410484,-1.00376,-0.554675}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Guerilla09
	{
		class driver
		{
			selections[] = {{-0.417267,0.207417,-0.451122}};
		};
		class cargo
		{
			selections[] = {{0.418587,0.111259,-0.472739},{0.149162,-2.33518,-0.474407},{-0.384293,-2.25682,-0.493415},{0.236992,-0.951107,-0.557517},{-0.410484,-1.00436,-0.554671}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Guerilla10
	{
		class driver
		{
			selections[] = {{-0.417015,0.208862,-0.451131}};
		};
		class cargo
		{
			selections[] = {{0.418747,0.111652,-0.472708},{0.149017,-2.33469,-0.474411},{-0.383888,-2.25496,-0.493421},{0.236984,-0.948219,-0.557524},{-0.410469,-1.00257,-0.554677}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Guerilla11
	{
		class driver
		{
			selections[] = {{-0.417,0.208431,-0.451073}};
		};
		class cargo
		{
			selections[] = {{0.418755,0.111252,-0.472705},{0.148941,-2.3341,-0.474414},{-0.383659,-2.25405,-0.493422},{0.237015,-0.947754,-0.557525},{-0.410469,-1.0025,-0.554678}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Guerilla12
	{
		class driver
		{
			selections[] = {{-0.417068,0.207478,-0.450943}};
		};
		class cargo
		{
			selections[] = {{0.418678,0.111259,-0.472698},{0.149193,-2.33532,-0.474407},{-0.38427,-2.2567,-0.493416},{0.236992,-0.950603,-0.557519},{-0.4105,-1.00347,-0.554673}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Rusty1
	{
		class driver
		{
			selections[] = {{-0.417,0.207161,-0.450888}};
		};
		class cargo
		{
			selections[] = {{0.418732,0.110966,-0.472694},{0.149124,-2.33508,-0.474409},{-0.38427,-2.25657,-0.493417},{0.236984,-0.950714,-0.557518},{-0.410507,-1.00385,-0.554674}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Rusty2
	{
		class driver
		{
			selections[] = {{-0.417999,0.205513,-0.450716}};
		};
		class cargo
		{
			selections[] = {{0.417969,0.109276,-0.472697},{0.149185,-2.33302,-0.47442},{-0.383606,-2.25388,-0.493423},{0.2369,-0.947891,-0.557525},{-0.410576,-1.00266,-0.554678}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Rusty3
	{
		class driver
		{
			selections[] = {{-0.417252,0.207699,-0.451132}};
		};
		class cargo
		{
			selections[] = {{0.418579,0.111481,-0.472738},{0.149239,-2.33554,-0.474406},{-0.384323,-2.25698,-0.493415},{0.237007,-0.950836,-0.557518},{-0.410492,-1.00365,-0.554673}};
			path[] = {{-10},{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla01
	{
		class driver
		{
			selections[] = {{-0.419312,0.345247,-1.00142}};
		};
		class cargo
		{
			selections[] = {{0.417282,0.246208,-1.02301}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {{0.533485,-2.05092,-0.246944}};
			path[] = {{0}};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla02
	{
		class driver
		{
			selections[] = {{-0.418991,0.344948,-1.00146}};
		};
		class cargo
		{
			selections[] = {{0.418381,0.247261,-1.02289}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {{0.536316,-1.9402,-0.246941}};
			path[] = {{0}};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla03
	{
		class driver
		{
			selections[] = {{-0.418846,0.346207,-1.00156}};
		};
		class cargo
		{
			selections[] = {{0.41851,0.247158,-1.02296}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {{0.533714,-1.91593,-0.246939}};
			path[] = {{0}};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla04
	{
		class driver
		{
			selections[] = {{-0.419098,0.345442,-1.00139}};
		};
		class cargo
		{
			selections[] = {{0.417305,0.246197,-1.02312}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {{0.532982,-2.05704,-0.246938}};
			path[] = {{0}};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla05
	{
		class driver
		{
			selections[] = {{-0.420105,0.344194,-1.00139}};
		};
		class cargo
		{
			selections[] = {{0.416534,0.245014,-1.02298}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {{0.503181,-2.1826,-0.246939}};
			path[] = {{0}};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla06
	{
		class driver
		{
			selections[] = {{-0.419334,0.34576,-1.00143}};
		};
		class cargo
		{
			selections[] = {{0.417679,0.247169,-1.02311}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {{0.536873,-1.95455,-0.246936}};
			path[] = {{0}};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla07
	{
		class driver
		{
			selections[] = {{-0.418846,0.343994,-1.00136}};
		};
		class cargo
		{
			selections[] = {{0.418182,0.246311,-1.02298}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {{0.533844,-1.92246,-0.24694}};
			path[] = {{0}};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla08
	{
		class driver
		{
			selections[] = {{-0.420006,0.344236,-1.00136}};
		};
		class cargo
		{
			selections[] = {{0.41655,0.245029,-1.02304}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {{0.509933,-2.16278,-0.246937}};
			path[] = {{0}};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla09
	{
		class driver
		{
			selections[] = {{-0.419426,0.344856,-1.00136}};
		};
		class cargo
		{
			selections[] = {{0.417244,0.24556,-1.02308}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {{0.536674,-2.01582,-0.246941}};
			path[] = {{0}};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla10
	{
		class driver
		{
			selections[] = {{-0.419876,0.343952,-1.00122}};
		};
		class cargo
		{
			selections[] = {{0.416298,0.24468,-1.02313}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {{0.512764,-2.15396,-0.246934}};
			path[] = {{0}};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla11
	{
		class driver
		{
			selections[] = {{-0.418854,0.346062,-1.00153}};
		};
		class cargo
		{
			selections[] = {{0.418152,0.247555,-1.02301}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {{0.53653,-1.95052,-0.246938}};
			path[] = {{0}};
		};
	};
	class Exile_Car_Offroad_Armed_Guerilla12
	{
		class driver
		{
			selections[] = {{-0.418816,0.346657,-1.00157}};
		};
		class cargo
		{
			selections[] = {{0.418144,0.246494,-1.02303}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {{0.535904,-1.94355,-0.246937}};
			path[] = {{0}};
		};
	};
	class Exile_Car_Offroad_Repair_Civillian
	{
		class driver
		{
			selections[] = {{-0.000526428,-0.0437775,-0.0433536}};
		};
		class cargo
		{
			selections[] = {{0.000366211,-0.0104256,0.0253687},{-0.00332642,-0.46632,0.206713},{-0.0286179,-0.487427,0.173008}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Repair_Red
	{
		class driver
		{
			selections[] = {{-0.000442505,-0.044117,-0.0433693}};
		};
		class cargo
		{
			selections[] = {{0.000495911,-0.0107727,0.025373},{-0.00323486,-0.467056,0.206737},{-0.0285339,-0.488178,0.173006}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Repair_Beige
	{
		class driver
		{
			selections[] = {{-0.000534058,-0.0439186,-0.0433922}};
		};
		class cargo
		{
			selections[] = {{0.000549316,-0.0105247,0.0253658},{-0.0031662,-0.466831,0.206667},{-0.0285339,-0.487598,0.173006}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Repair_White
	{
		class driver
		{
			selections[] = {{-0.000572205,-0.0435562,-0.043355}};
		};
		class cargo
		{
			selections[] = {{0.000617981,-0.009552,0.0253859},{-0.00305176,-0.4655,0.2068},{-0.0282669,-0.486477,0.173012}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Repair_Blue
	{
		class driver
		{
			selections[] = {{-0.000617981,-0.0455246,-0.0433331}};
		};
		class cargo
		{
			selections[] = {{0.000106812,-0.0131645,0.0253758},{-0.00354004,-0.469788,0.206783},{-0.0286331,-0.490627,0.172999}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Repair_DarkRed
	{
		class driver
		{
			selections[] = {{-0.000656128,-0.0447083,-0.043386}};
		};
		class cargo
		{
			selections[] = {{0.000404358,-0.0113106,0.0253625},{-0.00328064,-0.46722,0.206691},{-0.0286331,-0.488655,0.173004}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Repair_BlueCustom
	{
		class driver
		{
			selections[] = {{-0.000389099,-0.0455589,-0.0433559}};
		};
		class cargo
		{
			selections[] = {{0.000473022,-0.0125809,0.0253792},{-0.00330353,-0.467846,0.206801},{-0.0285034,-0.488197,0.173008}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla01
	{
		class driver
		{
			selections[] = {{-0.00164795,-0.0453701,-0.0433788}};
		};
		class cargo
		{
			selections[] = {{-0.000724792,-0.0131626,0.0253654},{-0.00448608,-0.469992,0.206736},{-0.0296021,-0.490295,0.173}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla02
	{
		class driver
		{
			selections[] = {{-0.00087738,-0.0452538,-0.0433483}};
		};
		class cargo
		{
			selections[] = {{-0.000114441,-0.0129662,0.0253797},{-0.00379944,-0.46941,0.206792},{-0.0287704,-0.489887,0.173006}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla03
	{
		class driver
		{
			selections[] = {{-0.000335693,-0.0457153,-0.043335}};
		};
		class cargo
		{
			selections[] = {{0.000411987,-0.0115128,0.0253825},{-0.0033493,-0.467773,0.206799},{-0.0285568,-0.489765,0.173007}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla04
	{
		class driver
		{
			selections[] = {{-0.00171661,-0.0459366,-0.0433578}};
		};
		class cargo
		{
			selections[] = {{-0.00112915,-0.0133877,0.0253782},{-0.00502014,-0.469913,0.206786},{-0.0301743,-0.490532,0.173003}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla05
	{
		class driver
		{
			selections[] = {{-0.000617981,-0.0445251,-0.0433631}};
		};
		class cargo
		{
			selections[] = {{0.000617981,-0.0103683,0.0253782},{-0.00305176,-0.465786,0.206772},{-0.0283127,-0.486187,0.173011}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla06
	{
		class driver
		{
			selections[] = {{-1.52588e-005,-0.043087,-0.0433164}};
		};
		class cargo
		{
			selections[] = {{0.000717163,-0.0101776,0.025403},{-0.00317383,-0.46653,0.206929},{-0.0283279,-0.487679,0.173033}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla07
	{
		class driver
		{
			selections[] = {{-0.000854492,-0.0437012,-0.0433741}};
		};
		class cargo
		{
			selections[] = {{0.000198364,-0.0104141,0.0253716},{0.399696,-2.16794,-0.431602},{-0.494804,-2.46002,-0.47988}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla08
	{
		class driver
		{
			selections[] = {{-0.417931,0.209473,-0.450985}};
		};
		class cargo
		{
			selections[] = {{0.418594,0.111908,-0.472734},{0.398689,-2.16729,-0.431629},{-0.492584,-2.46062,-0.47988}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla09
	{
		class driver
		{
			selections[] = {{-0.417946,0.208508,-0.450866}};
		};
		class cargo
		{
			selections[] = {{0.418549,0.110268,-0.472718},{0.399712,-2.16756,-0.431565},{-0.493385,-2.46059,-0.479881}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla10
	{
		class driver
		{
			selections[] = {{-0.419022,0.207634,-0.450794}};
		};
		class cargo
		{
			selections[] = {{0.416931,0.108616,-0.472722},{0.402107,-2.17001,-0.431522},{-0.49604,-2.45852,-0.479885}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla11
	{
		class driver
		{
			selections[] = {{-0.417816,0.206982,-0.450717}};
		};
		class cargo
		{
			selections[] = {{0.418358,0.108913,-0.472707},{0.400459,-2.16804,-0.431454},{-0.494263,-2.46029,-0.479868}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Offroad_Repair_Guerilla12
	{
		class driver
		{
			selections[] = {{-0.418121,0.208481,-0.450858}};
		};
		class cargo
		{
			selections[] = {{0.418488,0.109962,-0.472711},{0.400475,-2.16778,-0.431479},{-0.493614,-2.46061,-0.479875}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class TractorOld
	{
		class driver
		{
			selections[] = {{-0.0787964,-1.68858,-0.265375}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_OldTractor_Red
	{
		class driver
		{
			selections[] = {{-0.0799255,-1.69053,-0.265329}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Strider
	{
		class driver
		{
			selections[] = {{0.0118637,0.921307,-0.533658}};
		};
		class cargo
		{
			selections[] = {{0.677811,-0.202007,-0.497213},{0.0178757,-0.145527,-0.532902}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.73317,-0.193134,-0.55819}};
			path[] = {{0}};
		};
	};
	class Exile_Car_SUV_Red
	{
		class driver
		{
			selections[] = {{0.0271454,0.00691223,0.0421023}};
		};
		class cargo
		{
			selections[] = {{0.000526428,-0.0115967,0.0253873},{-0.000701904,-0.0105705,0.0701642},{-0.0410843,0.000354767,0.0643692}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_SUV_Black
	{
		class driver
		{
			selections[] = {{0.0271378,0.00678253,0.0421019}};
		};
		class cargo
		{
			selections[] = {{0.000511169,-0.0118179,0.0254054},{-0.00111389,-0.0107269,0.0702987},{-0.0408707,-0.000591278,0.0643167}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_SUV_Grey
	{
		class driver
		{
			selections[] = {{0.0271912,0.0071373,0.0421014}};
		};
		class cargo
		{
			selections[] = {{0.000541687,-0.0113564,0.0254064},{-0.00104523,-0.0100403,0.0702834},{-0.0407562,-0.000328064,0.0642724}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_SUV_Orange
	{
		class driver
		{
			selections[] = {{0.027153,0.00691223,0.0421023}};
		};
		class cargo
		{
			selections[] = {{0.000526428,-0.0116425,0.0253959},{-0.00119019,-0.0105057,0.0703239},{-0.0408401,-0.000423431,0.0643096}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_SUV_Rusty1
	{
		class driver
		{
			selections[] = {{0.0271378,0.0066185,0.0421028}};
		};
		class cargo
		{
			selections[] = {{0.000511169,-0.0122032,0.0254116},{-0.00128937,-0.0112038,0.0703492},{-0.040863,-0.00104904,0.0643001}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_SUV_Rusty2
	{
		class driver
		{
			selections[] = {{0.027153,0.00710297,0.0421014}};
		};
		class cargo
		{
			selections[] = {{0.000541687,-0.0113258,0.0253906},{-0.000793457,-0.0101929,0.0701981},{-0.0409546,0.000411987,0.0643582}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_SUV_Rusty3
	{
		class driver
		{
			selections[] = {{0.0271835,0.0068512,0.0421019}};
		};
		class cargo
		{
			selections[] = {{0.000534058,-0.0115814,0.025373},{-0.000640869,-0.0105476,0.0701475},{-0.0411987,0.00075531,0.0643802}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class SUV_Base
	{
		class driver
		{
			selections[] = {{-0.426826,0.525753,0.0331712}};
		};
		class cargo
		{
			selections[] = {{0.418381,0.40517,0.0516033},{0.432289,-0.441101,0.00292397},{-0.445557,-0.44762,0.0160704},{-0.313499,-1.54,0.0478525},{0.241417,-1.51352,0.0512333}};
			path[] = {{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_SUVXL_Black
	{
		class driver
		{
			selections[] = {{-0.426826,0.525711,0.0331726}};
		};
		class cargo
		{
			selections[] = {{0.418304,0.405117,0.0515933},{0.432213,-0.44112,0.00288534},{-0.445618,-0.447659,0.0160217},{-0.312546,-1.5406,0.0476604},{0.240768,-1.51324,0.0516386}};
			path[] = {{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Tempest
	{
		class driver
		{
			selections[] = {{-0.672485,2.62984,-0.215972}};
		};
		class cargo
		{
			selections[] = {{0.759796,2.53213,-0.197327},{-0.923569,-0.554388,0.146202},{-0.899162,-2.1527,0.161611},{-0.894897,-2.90489,0.222035},{-0.845375,-3.63934,0.230001},{-0.858101,-4.50954,0.311601},{0.955078,-0.553873,0.134734},{0.921616,-1.39408,0.309165},{0.861824,-2.09369,0.224352},{-0.876617,-1.36662,0.145427},{0.966705,-3.55272,0.35358},{0.945526,-4.53857,0.319164},{0.897827,-2.87205,0.233448}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{0},{-10},{-10},{-10},{-10},{-10},{1},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_TowTractor_White
	{
		class driver
		{
			selections[] = {{-0.601646,-0.964909,-0.816053}};
		};
		class cargo
		{
			selections[] = {{0.0018158,-0.0326195,0.107808}};
			path[] = {{0}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Tractor_Base
	{
		class driver
		{
			selections[] = {{-0.088501,-2.15174,-0.134808}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Tractor_Red
	{
		class driver
		{
			selections[] = {{-0.0884933,-2.15163,-0.134809}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class UAZ_Base
	{
		class driver
		{
			selections[] = {{-0.346458,0.0945053,1.01129}};
		};
		class cargo
		{
			selections[] = {{-0.00164032,6.29425e-005,-0.0484591},{-0.00126648,-0.000465393,-0.0484591},{-0.0010376,-0.000808716,-0.0484605},{-0.000862122,-0.000614166,-0.0484586},{-0.000747681,-0.00031662,-0.0484567},{-0.000656128,-0.000389099,-0.0484576}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_UAZ_Green
	{
		class driver
		{
			selections[] = {{-0.344536,0.0986881,1.01563}};
		};
		class cargo
		{
			selections[] = {{0.452492,0.0959549,1.03165},{-0.45517,-0.833557,1.14213},{-0.474915,-1.38246,1.13252},{0.559525,-0.833546,1.14213},{0.063797,-0.833344,1.14213},{0.584801,-1.3419,1.13251}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class UAZ_Open_Base
	{
		class driver
		{
			selections[] = {{-0.346375,0.0947857,1.01129}};
		};
		class cargo
		{
			selections[] = {{-0.000778198,0.0285339,0.120563},{-0.000396729,0.0279617,0.120564},{-0.000160217,0.0275688,0.120562},{0,0.027607,0.120562},{-0.00075531,-0.000415802,-0.0484571},{0.000205994,0.0279503,0.120564}};
			path[] = {{2},{3},{0},{4},{-10},{1}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_UAZ_Open_Green
	{
		class driver
		{
			selections[] = {{-0.342323,0.101803,1.01563}};
		};
		class cargo
		{
			selections[] = {{0.455231,0.00540924,1.04347},{-0.452827,-0.835869,1.16992},{-0.492317,-1.37098,1.14217},{0.561447,-0.837971,1.16997},{0.0647202,-0.871197,1.00172},{0.594246,-1.3395,1.14223}};
			path[] = {{2},{3},{0},{4},{-10},{1}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Ural_RU
	{
		class driver
		{
			selections[] = {{-0.345032,0.0968971,1.01129}};
		};
		class cargo
		{
			selections[] = {{0.00250244,-0.0220509,0.0658631},{-0.00591278,0.0157909,0.0496764},{-0.00496674,0.0173588,0.0799417},{-0.00596619,-0.015913,0.0713968},{0.000579834,-0.00773811,0.0694575},{0.000343323,-0.00798416,0.0694599},{0.00299835,-0.0239506,0.0666194},{0.00136566,-0.0230141,0.0658245},{-0.0488129,-0.00520706,0.063427},{0.00199127,-0.0227299,0.0669861},{-0.000793457,0.0301342,0.120562},{-0.000213623,0.0297012,0.120562},{-0.00787354,0.00166702,0.0692444},{-1.03252,0.381168,0.0616012}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{1},{0},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Ural_Covered_Blue
	{
		class driver
		{
			selections[] = {{-0.558937,1.74282,-0.305972}};
		};
		class cargo
		{
			selections[] = {{0.62796,1.59156,-0.334299},{0.171532,1.6515,-0.347471},{0.918022,-0.486729,0.0965524},{-0.976997,-0.309311,0.0686851},{0.928009,-1.14622,0.085331},{-0.957092,-0.938118,0.0902872},{0.922371,-1.74319,0.0899448},{-0.946335,-1.64135,0.0881853},{0.939484,-2.48548,0.0794439},{-0.896729,-2.29239,0.0904193},{0.996666,-3.08069,0.0485444},{-1.00037,-2.8304,0.0538259},{0.896057,0.196232,0.0953765},{-1.0293,0.380123,0.0615544}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{1},{0},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Ural_Covered_Yellow
	{
		class driver
		{
			selections[] = {{-0.559212,1.74264,-0.305981}};
		};
		class cargo
		{
			selections[] = {{0.62767,1.59144,-0.334321},{0.171005,1.65175,-0.347439},{0.917046,-0.487581,0.0967665},{-0.975639,-0.307467,0.0687709},{0.927284,-1.14766,0.0853105},{-0.956665,-0.937126,0.0903234},{0.922394,-1.74387,0.0898619},{-0.946175,-1.64096,0.0882049},{0.93869,-2.48577,0.0790763},{-0.89711,-2.2923,0.0902781},{0.99662,-3.08095,0.0485396},{-1.00029,-2.83019,0.0538197},{0.8965,0.195564,0.095439},{-1.02913,0.380314,0.0617537}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{1},{0},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Ural_Covered_Worker
	{
		class driver
		{
			selections[] = {{-0.558678,1.74298,-0.305963}};
		};
		class cargo
		{
			selections[] = {{0.628235,1.59162,-0.334288},{0.171555,1.65173,-0.347458},{0.917336,-0.487259,0.0966134},{-0.976402,-0.30863,0.0686955},{0.927895,-1.14672,0.0853243},{-0.957199,-0.937832,0.0902834},{0.922775,-1.74333,0.0898972},{-0.946854,-1.64127,0.0881567},{0.940292,-2.48553,0.0793109},{-0.897636,-2.2923,0.090343},{0.997269,-3.08076,0.0486465},{-1.00077,-2.83028,0.0538998},{0.896393,0.196095,0.0953894},{-1.02941,0.380219,0.0616078}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{1},{0},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Ural_Covered_Military
	{
		class driver
		{
			selections[] = {{-0.559441,1.74266,-0.30598}};
		};
		class cargo
		{
			selections[] = {{0.627419,1.59152,-0.334311},{0.170761,1.65189,-0.347426},{0.916939,-0.487865,0.0967541},{-0.975769,-0.307594,0.068758},{0.927322,-1.14748,0.0853128},{-0.956573,-0.937233,0.0903287},{0.922302,-1.74383,0.0898442},{-0.945702,-1.64103,0.0882339},{0.93837,-2.48582,0.079185},{-0.896721,-2.29229,0.0903225},{0.996407,-3.08094,0.0485048},{-1.00014,-2.83023,0.0537925},{0.896248,0.195705,0.0954289},{-1.02882,0.380283,0.0618763}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{1},{0},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Ural_Open_RU
	{
		class driver
		{
			selections[] = {{-0.344849,0.0971642,1.01129}};
		};
		class cargo
		{
			selections[] = {{0.00268555,-0.0217094,0.065886},{-0.00572205,0.0161877,0.0496788},{-0.00482178,0.0176525,0.0799432},{-0.00588989,-0.0156879,0.0714126},{0.000701904,-0.00743866,0.0694585},{0.000495911,-0.00760937,0.0694599},{0.00321198,-0.0235138,0.0666304},{0.00170898,-0.0228024,0.0658236},{-0.0480576,-0.00578117,0.0636544},{0.00294495,-0.0228691,0.0670586},{0.000175476,0.0301666,0.12056},{-0.954697,-3.04876,2.06424},{0.946884,-0.0226135,2.10534},{-0.983589,0.161255,2.0715}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{1},{0},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Ural_Open_Blue
	{
		class driver
		{
			selections[] = {{-0.509811,1.52463,1.70403}};
		};
		class cargo
		{
			selections[] = {{0.67717,1.37335,1.67569},{0.220863,1.43357,1.66259},{0.964256,-0.70429,2.10686},{-0.926422,-0.528431,2.07877},{0.973816,-1.36533,2.09529},{-0.906975,-1.15662,2.10037},{0.96962,-1.96292,2.09979},{-0.897446,-1.85943,2.09821},{0.987137,-2.70558,2.08893},{-0.850204,-2.50994,2.10011},{1.04663,-3.30153,2.05883},{-0.954292,-3.04707,2.06421},{0.94799,-0.0248394,2.10542},{-0.984207,0.162773,2.07165}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{1},{0},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Ural_Open_Yellow
	{
		class driver
		{
			selections[] = {{-0.510025,1.52465,1.70403}};
		};
		class cargo
		{
			selections[] = {{0.676888,1.37337,1.67564},{0.220589,1.43331,1.66262},{0.965172,-0.70356,2.1074},{-0.927437,-0.526993,2.07897},{0.974907,-1.36646,2.09525},{-0.907745,-1.15528,2.10034},{0.970284,-1.96452,2.09973},{-0.897392,-1.85799,2.09826},{0.986946,-2.70597,2.08862},{-0.851318,-2.51027,2.09993},{1.04729,-3.30037,2.05893},{-0.954628,-3.0485,2.06423},{0.947098,-0.0240822,2.10538},{-0.981865,0.161736,2.0719}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{1},{0},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Ural_Open_Worker
	{
		class driver
		{
			selections[] = {{-0.50985,1.52484,1.70404}};
		};
		class cargo
		{
			selections[] = {{0.677277,1.37381,1.67576},{0.220802,1.43384,1.66258},{0.964653,-0.705545,2.10662},{-0.927132,-0.528227,2.07852},{0.974663,-1.36592,2.09528},{-0.907715,-1.15591,2.10034},{0.969635,-1.96364,2.09991},{-0.897797,-1.85865,2.09821},{0.989014,-2.70563,2.08943},{-0.850853,-2.51039,2.10023},{1.04781,-3.30001,2.059},{-0.955338,-3.04869,2.06435},{0.947472,-0.0228996,2.10534},{-0.983803,0.161823,2.07135}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{1},{0},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Ural_Open_Military
	{
		class driver
		{
			selections[] = {{-0.511032,1.52372,1.70398}};
		};
		class cargo
		{
			selections[] = {{0.675835,1.37255,1.67561},{0.219292,1.43284,1.66256},{0.965302,-0.705618,2.10709},{-0.927277,-0.525913,2.0789},{0.975182,-1.36699,2.09527},{-0.908432,-1.15579,2.10029},{0.97097,-1.96314,2.09975},{-0.898109,-1.8598,2.09816},{0.986359,-2.70454,2.08869},{-0.849419,-2.51128,2.1001},{1.04485,-3.29992,2.05852},{-0.952171,-3.0491,2.06379},{0.944939,-0.0237198,2.10539},{-0.980537,0.161339,2.07195}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{1},{0},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Black
	{
		class driver
		{
			selections[] = {{-0.458237,0.251198,-0.298124}};
		};
		class cargo
		{
			selections[] = {{0.571327,0.275749,-0.198707},{0.121597,0.201309,-0.175435},{-0.313507,-0.642574,-0.222057},{0.266113,-0.486256,-0.215626},{-0.341049,-1.26064,-0.222057},{0.316551,-1.11942,-0.215621},{-0.252609,-1.85178,-0.222048},{0.162819,-1.70452,-0.215607},{-0.365059,-2.45768,-0.22203},{0.245789,-2.34378,-0.215592},{-0.235344,-2.84414,-0.222022},{0.26664,-2.92024,-0.215589}};
			path[] = {{-10},{-10},{0},{5},{1},{6},{2},{7},{3},{8},{4},{9}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_White
	{
		class driver
		{
			selections[] = {{-0.458389,0.251286,-0.298083}};
		};
		class cargo
		{
			selections[] = {{0.571251,0.277035,-0.198704},{0.121536,0.202888,-0.175436},{-0.314423,-0.642544,-0.222053},{0.266243,-0.48653,-0.215625},{-0.340355,-1.26041,-0.22206},{0.314606,-1.11947,-0.215628},{-0.250206,-1.85173,-0.222057},{0.159874,-1.70436,-0.215621},{-0.361519,-2.45761,-0.222047},{0.242737,-2.34401,-0.215608},{-0.234566,-2.84254,-0.222031},{0.265892,-2.91969,-0.215593}};
			path[] = {{-10},{-10},{0},{5},{1},{6},{2},{7},{3},{8},{4},{9}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Red
	{
		class driver
		{
			selections[] = {{-0.458405,0.251808,-0.298124}};
		};
		class cargo
		{
			selections[] = {{0.571228,0.27684,-0.198698},{0.121513,0.202206,-0.175432},{-0.314255,-0.642654,-0.222055},{0.266396,-0.486397,-0.215625},{-0.341194,-1.26057,-0.222057},{0.31604,-1.11945,-0.215623},{-0.252113,-1.85169,-0.22205},{0.162209,-1.70452,-0.215611},{-0.364555,-2.45756,-0.222033},{0.245628,-2.34387,-0.215593},{-0.235291,-2.84402,-0.222022},{0.266533,-2.92024,-0.21559}};
			path[] = {{-10},{-10},{0},{5},{1},{6},{2},{7},{3},{8},{4},{9}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Guerilla01
	{
		class driver
		{
			selections[] = {{-0.458488,0.251556,-0.298119}};
		};
		class cargo
		{
			selections[] = {{0.571312,0.277077,-0.198702},{0.121666,0.202377,-0.175432},{-0.314201,-0.642586,-0.222055},{0.266159,-0.486259,-0.215626},{-0.3405,-1.26071,-0.22206},{0.315819,-1.1195,-0.215623},{-0.251915,-1.8516,-0.222051},{0.161461,-1.70458,-0.215614},{-0.363358,-2.45761,-0.222039},{0.245071,-2.34383,-0.215596},{-0.235298,-2.84392,-0.222023},{0.266556,-2.9204,-0.215588}};
			path[] = {{-10},{-10},{0},{5},{1},{6},{2},{7},{3},{8},{4},{9}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Guerilla02
	{
		class driver
		{
			selections[] = {{-0.458313,0.25034,-0.298042}};
		};
		class cargo
		{
			selections[] = {{0.571327,0.276909,-0.198684},{0.121696,0.203506,-0.175429},{-0.315277,-0.642704,-0.222053},{0.266762,-0.486252,-0.215624},{-0.340851,-1.26066,-0.222058},{0.314934,-1.1195,-0.215627},{-0.250175,-1.8516,-0.222058},{0.159683,-1.70438,-0.215622},{-0.361336,-2.4576,-0.222049},{0.242966,-2.34412,-0.215607},{-0.23465,-2.84251,-0.222031},{0.265862,-2.91977,-0.215593}};
			path[] = {{-10},{-10},{0},{5},{1},{6},{2},{7},{3},{8},{4},{9}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Guerilla03
	{
		class driver
		{
			selections[] = {{-0.458443,0.248756,-0.297854}};
		};
		class cargo
		{
			selections[] = {{0.57135,0.274158,-0.198714},{0.121689,0.20097,-0.17544},{-0.31485,-0.642563,-0.222053},{0.268982,-0.486244,-0.215615},{-0.345566,-1.26091,-0.222036},{0.32148,-1.11907,-0.215597},{-0.256981,-1.8522,-0.222025},{0.166153,-1.70448,-0.21559},{-0.366714,-2.45763,-0.222021},{0.246338,-2.34377,-0.21559},{-0.235512,-2.84448,-0.22202},{0.266846,-2.92052,-0.215588}};
			path[] = {{-10},{-10},{0},{5},{1},{6},{2},{7},{3},{8},{4},{9}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Guerilla04
	{
		class driver
		{
			selections[] = {{-0.458466,0.251751,-0.298106}};
		};
		class cargo
		{
			selections[] = {{0.571182,0.27705,-0.198702},{0.121666,0.202187,-0.17544},{-0.314056,-0.642471,-0.222056},{0.266212,-0.486305,-0.215626},{-0.340431,-1.26051,-0.22206},{0.315331,-1.11957,-0.215625},{-0.251556,-1.85177,-0.222051},{0.161873,-1.70436,-0.215611},{-0.364014,-2.45764,-0.222035},{0.2453,-2.34384,-0.215595},{-0.235191,-2.84378,-0.222024},{0.266487,-2.92027,-0.21559}};
			path[] = {{-10},{-10},{0},{5},{1},{6},{2},{7},{3},{8},{4},{9}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Guerilla05
	{
		class driver
		{
			selections[] = {{-0.458138,0.251598,-0.298212}};
		};
		class cargo
		{
			selections[] = {{0.571426,0.277069,-0.19868},{0.121719,0.202221,-0.175437},{-0.314156,-0.642628,-0.222055},{0.266335,-0.486229,-0.215625},{-0.340546,-1.26075,-0.222059},{0.315666,-1.11942,-0.215624},{-0.251747,-1.85156,-0.222052},{0.161972,-1.70454,-0.215611},{-0.364388,-2.45766,-0.222033},{0.245094,-2.34389,-0.215596},{-0.235146,-2.8436,-0.222025},{0.266487,-2.92039,-0.215588}};
			path[] = {{-10},{-10},{0},{5},{1},{6},{2},{7},{3},{8},{4},{9}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Guerilla06
	{
		class driver
		{
			selections[] = {{-0.458229,0.250832,-0.298076}};
		};
		class cargo
		{
			selections[] = {{0.571289,0.277004,-0.198699},{0.121574,0.202927,-0.175429},{-0.314461,-0.642628,-0.222054},{0.266472,-0.486237,-0.215624},{-0.340538,-1.26058,-0.222059},{0.315216,-1.11952,-0.215625},{-0.250496,-1.85156,-0.222057},{0.160118,-1.70445,-0.215621},{-0.36235,-2.45763,-0.222043},{0.244102,-2.34384,-0.215601},{-0.234924,-2.84327,-0.222027},{0.266403,-2.92002,-0.21559}};
			path[] = {{-10},{-10},{0},{5},{1},{6},{2},{7},{3},{8},{4},{9}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Guerilla07
	{
		class driver
		{
			selections[] = {{-0.458214,0.249851,-0.298158}};
		};
		class cargo
		{
			selections[] = {{0.571228,0.276718,-0.198659},{0.121727,0.203632,-0.175459},{-0.315689,-0.642715,-0.22205},{0.267075,-0.486217,-0.215622},{-0.340935,-1.26055,-0.222057},{0.315224,-1.11966,-0.215625},{-0.25061,-1.85153,-0.222056},{0.160179,-1.70445,-0.21562},{-0.361435,-2.45764,-0.222049},{0.242058,-2.34404,-0.215612},{-0.23436,-2.84185,-0.222035},{0.265747,-2.91958,-0.215594}};
			path[] = {{-10},{-10},{0},{5},{1},{6},{2},{7},{3},{8},{4},{9}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Guerilla08
	{
		class driver
		{
			selections[] = {{-0.458542,0.251968,-0.297977}};
		};
		class cargo
		{
			selections[] = {{0.571251,0.276138,-0.198739},{0.121368,0.201927,-0.175534},{-0.313614,-0.642593,-0.222058},{0.266151,-0.48624,-0.215626},{-0.341179,-1.26068,-0.222056},{0.316757,-1.11948,-0.21562},{-0.252625,-1.85172,-0.222047},{0.162842,-1.70449,-0.215607},{-0.36483,-2.45762,-0.222031},{0.245689,-2.34377,-0.215592},{-0.235413,-2.84401,-0.222022},{0.266525,-2.92046,-0.215588}};
			path[] = {{-10},{-10},{0},{5},{1},{6},{2},{7},{3},{8},{4},{9}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Box_Black
	{
		class driver
		{
			selections[] = {{0.000114441,-0.0112572,-0.0434046}};
		};
		class cargo
		{
			selections[] = {{0.0665894,-0.0285721,0.0610585},{-0.0284958,0.0495186,0.0632534}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Box_White
	{
		class driver
		{
			selections[] = {{0.000282288,-0.0114136,-0.0433378}};
		};
		class cargo
		{
			selections[] = {{0.0665283,-0.0288734,0.0613089},{-0.0284729,0.0496025,0.0632582}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Box_Red
	{
		class driver
		{
			selections[] = {{-0.459602,0.250593,-0.296637}};
		};
		class cargo
		{
			selections[] = {{0.570412,0.275341,-0.197693},{0.11673,0.201328,-0.175488}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Box_Guerilla01
	{
		class driver
		{
			selections[] = {{-0.459518,0.250999,-0.297206}};
		};
		class cargo
		{
			selections[] = {{0.572166,0.276798,-0.199321},{0.117882,0.200077,-0.175615}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Box_Guerilla02
	{
		class driver
		{
			selections[] = {{-0.459534,0.250988,-0.297208}};
		};
		class cargo
		{
			selections[] = {{0.572113,0.276566,-0.199224},{0.117851,0.199913,-0.175611}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Box_Guerilla03
	{
		class driver
		{
			selections[] = {{-0.459526,0.250896,-0.297205}};
		};
		class cargo
		{
			selections[] = {{0.572113,0.276428,-0.199074},{0.117859,0.200058,-0.175601}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Box_Guerilla04
	{
		class driver
		{
			selections[] = {{-0.459579,0.251022,-0.297216}};
		};
		class cargo
		{
			selections[] = {{0.572136,0.276619,-0.199369},{0.117828,0.199841,-0.175609}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Box_Guerilla05
	{
		class driver
		{
			selections[] = {{-0.459602,0.250748,-0.297185}};
		};
		class cargo
		{
			selections[] = {{0.572121,0.276363,-0.199345},{0.117798,0.199764,-0.175605}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Box_Guerilla06
	{
		class driver
		{
			selections[] = {{-0.459541,0.250729,-0.297214}};
		};
		class cargo
		{
			selections[] = {{0.572182,0.276867,-0.199465},{0.117889,0.199936,-0.175637}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Box_Guerilla07
	{
		class driver
		{
			selections[] = {{-0.459579,0.250389,-0.297143}};
		};
		class cargo
		{
			selections[] = {{0.572105,0.276237,-0.199323},{0.11776,0.200066,-0.175603}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Box_Guerilla08
	{
		class driver
		{
			selections[] = {{-0.459541,0.25106,-0.297206}};
		};
		class cargo
		{
			selections[] = {{0.572075,0.276497,-0.199147},{0.117775,0.200066,-0.175602}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Fuel_Black
	{
		class driver
		{
			selections[] = {{-0.000267029,-0.0115356,-0.0436306}};
		};
		class cargo
		{
			selections[] = {{0.0666885,-0.0277214,0.0603518},{-0.0284805,0.0497894,0.0631962}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Fuel_White
	{
		class driver
		{
			selections[] = {{-0.000198364,-0.0110168,-0.0436444}};
		};
		class cargo
		{
			selections[] = {{0.0666656,-0.0274696,0.0605712},{-0.0285034,0.0498352,0.0632119}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Fuel_Red
	{
		class driver
		{
			selections[] = {{-0.000190735,-0.0110893,-0.0436425}};
		};
		class cargo
		{
			selections[] = {{0.0667267,-0.0272217,0.0602441},{-0.0284729,0.0495224,0.0631895}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Fuel_Guerilla01
	{
		class driver
		{
			selections[] = {{-0.000160217,-0.0111923,-0.0436482}};
		};
		class cargo
		{
			selections[] = {{0.0667419,-0.0271606,0.0603218},{-0.0284729,0.0498428,0.0631952}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Fuel_Guerilla02
	{
		class driver
		{
			selections[] = {{-0.000183105,-0.0111732,-0.0436077}};
		};
		class cargo
		{
			selections[] = {{0.0666656,-0.027916,0.0605946},{-0.028595,0.0500488,0.0632124}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Van_Fuel_Guerilla03
	{
		class driver
		{
			selections[] = {{-0.000244141,-0.0113754,-0.0436378}};
		};
		class cargo
		{
			selections[] = {{0.0667419,-0.0276222,0.0604134},{-0.0284042,0.0497894,0.0632019}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Volha_Blue
	{
		class driver
		{
			selections[] = {{0.000137329,-0.00773621,-0.11008}};
		};
		class cargo
		{
			selections[] = {{-7.62939e-005,-0.00860596,-0.081007},{-0.000167847,-0.00882721,-0.0835009},{-0.000213623,-0.00868988,-0.0810061},{-0.106369,-0.00260925,0.268798}};
			path[] = {{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Volha_White
	{
		class driver
		{
			selections[] = {{0.000694275,-0.0087204,-0.110079}};
		};
		class cargo
		{
			selections[] = {{0.00037384,-0.0087738,-0.0810056},{0.000259399,-0.00827026,-0.0835009},{0.000198364,-0.00769806,-0.0810065},{-0.105949,-0.00137329,0.268797}};
			path[] = {{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Volha_Black
	{
		class driver
		{
			selections[] = {{0.000686646,-0.00874329,-0.110079}};
		};
		class cargo
		{
			selections[] = {{0.00037384,-0.00868225,-0.081007},{0.00025177,-0.00830078,-0.0835009},{0.000190735,-0.00782776,-0.0810061},{-0.105949,-0.00146484,0.268797}};
			path[] = {{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Car_Zamak
	{
		class driver
		{
			selections[] = {{-0.581032,2.75439,-0.404123}};
		};
		class cargo
		{
			selections[] = {{0.194916,2.70762,-0.379395},{0.73597,2.67067,-0.378221},{-0.835777,0.878529,-0.170538},{0.91507,0.829746,-0.114507},{-0.918594,0.197208,-0.207108},{0.920013,0.116314,-0.0236855},{-0.961151,-0.554401,-0.158818},{0.925743,-0.612392,-0.116257},{-0.86882,-1.17024,-0.258185},{0.83419,-1.17523,-0.142262},{-0.861725,-1.90156,-0.210905},{0.946136,-1.86341,-0.109213},{-1.00077,-2.50911,-0.165685},{0.841148,-2.56202,-0.0812335},{-0.880241,-3.23528,-0.101627},{0.899567,-3.24501,-0.0902967}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{0},{1}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Bike_MountainBike
	{
		class driver
		{
			selections[] = {{-0.0181046,-0.318066,1.13715}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Bike_OldBike
	{
		class driver
		{
			selections[] = {{0.00187683,-0.254547,0.205349}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Bike_QuadBike_Black
	{
		class driver
		{
			selections[] = {{-0.0146561,-0.348896,-0.357139}};
		};
		class cargo
		{
			selections[] = {{-0.000961304,-0.739868,-0.361817}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Bike_QuadBike_Blue
	{
		class driver
		{
			selections[] = {{-0.0146484,-0.348907,-0.357138}};
		};
		class cargo
		{
			selections[] = {{-0.000953674,-0.739857,-0.361818}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Bike_QuadBike_Red
	{
		class driver
		{
			selections[] = {{-0.0147018,-0.348518,-0.357242}};
		};
		class cargo
		{
			selections[] = {{-0.000991821,-0.741257,-0.361815}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Bike_QuadBike_White
	{
		class driver
		{
			selections[] = {{-0.0147095,-0.348457,-0.357261}};
		};
		class cargo
		{
			selections[] = {{-0.00100708,-0.7411,-0.361817}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Bike_QuadBike_Nato
	{
		class driver
		{
			selections[] = {{-0.0146713,-0.349628,-0.356942}};
		};
		class cargo
		{
			selections[] = {{-0.000961304,-0.742554,-0.361811}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Bike_QuadBike_Csat
	{
		class driver
		{
			selections[] = {{-0.014679,-0.349445,-0.35699}};
		};
		class cargo
		{
			selections[] = {{-0.000976563,-0.742432,-0.361811}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Bike_QuadBike_Fia
	{
		class driver
		{
			selections[] = {{-0.014389,-0.352985,-0.356035}};
		};
		class cargo
		{
			selections[] = {{-0.000663757,-0.745037,-0.361807}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Bike_QuadBike_Guerilla01
	{
		class driver
		{
			selections[] = {{-0.0147095,-0.348614,-0.357218}};
		};
		class cargo
		{
			selections[] = {{-0.000991821,-0.741341,-0.361815}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Bike_QuadBike_Guerilla02
	{
		class driver
		{
			selections[] = {{-0.0146942,-0.348595,-0.357221}};
		};
		class cargo
		{
			selections[] = {{-0.000991821,-0.739986,-0.361822}};
			path[] = {{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Chopper_Hellcat_Green
	{
		class driver
		{
			selections[] = {{0.492615,3.81346,-0.561776}};
		};
		class cargo
		{
			selections[] = {{0.270916,3.28131,-0.446844},{-0.263767,3.29353,-0.417714},{-0.297115,1.26394,-0.457849},{0.257132,1.31174,-0.468655},{0.266449,2.6844,-0.412625},{-0.219461,2.70648,-0.456067}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.459663,3.81565,-0.547733}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Hellcat_FIA
	{
		class driver
		{
			selections[] = {{0.49262,3.81345,-0.561775}};
		};
		class cargo
		{
			selections[] = {{0.271099,3.28099,-0.44675},{-0.263754,3.29353,-0.417713},{-0.297083,1.26393,-0.457837},{0.257063,1.31149,-0.468767},{0.266068,2.68448,-0.412753},{-0.219416,2.70646,-0.456127}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.459583,3.81566,-0.547734}};
			path[] = {{0}};
		};
	};
	class UH1H_Clo
	{
		class driver
		{
			selections[] = {{0.519148,3.11723,-0.884327}};
		};
		class cargo
		{
			selections[] = {{-0.679665,0.934769,-0.94407},{0.666822,0.874023,-0.922603},{-0.618872,0.891617,-0.984937},{-0.282829,1.71438,-0.878743},{0.778158,1.67681,-0.911706},{-0.813164,1.67673,-0.911751},{0.255775,1.67664,-0.911795},{0.605618,0.924614,-0.954837},{-0.0321293,0.0147095,0.0711999}};
			path[] = {{1},{2},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.583241,3.21166,-0.938683}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Huey_Green
	{
		class driver
		{
			selections[] = {{0.519148,3.11723,-0.884328}};
		};
		class cargo
		{
			selections[] = {{-0.679665,0.934769,-0.944071},{0.666822,0.874023,-0.922603},{-0.618874,0.891586,-0.984941},{-0.282816,1.71438,-0.878743},{0.778152,1.67681,-0.911708},{-0.813173,1.67673,-0.911754},{0.25577,1.67654,-0.911843},{0.605509,0.924622,-0.954881},{-0.032114,0.014679,0.0711589}};
			path[] = {{1},{2},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.583241,3.21166,-0.938683}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Huey_Desert
	{
		class driver
		{
			selections[] = {{0.519148,3.11723,-0.884327}};
		};
		class cargo
		{
			selections[] = {{-0.679665,0.934769,-0.94407},{0.666822,0.874023,-0.922603},{-0.618872,0.891594,-0.98494},{-0.282871,1.71438,-0.878744},{0.778099,1.67679,-0.911721},{-0.813202,1.67668,-0.911775},{0.255766,1.67648,-0.91187},{0.605505,0.924622,-0.954885},{-0.032114,0.014679,0.0711546}};
			path[] = {{1},{2},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.583241,3.21166,-0.938683}};
			path[] = {{0}};
		};
	};
	class UH1H_M240
	{
		class driver
		{
			selections[] = {{0.519148,3.09864,-0.891768}};
		};
		class cargo
		{
			selections[] = {{0.896778,1.63419,-1.20447},{-1.00225,1.63494,-1.20301},{0.775465,1.66324,-1.26409},{0.173374,1.59614,-1.2443},{0.722399,2.56386,-1.21375},{-0.940891,1.58997,-1.24278},{-0.372772,2.6105,-1.21383},{-0.78356,2.30981,-1.1999}};
			path[] = {{2},{3},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.508575,0.956978,-1.00999},{0.495096,0.850342,-0.992823},{-0.583239,3.21166,-0.938682}};
			path[] = {{0},{1},{4}};
		};
	};
	class Exile_Chopper_Huey_Armed_Green
	{
		class driver
		{
			selections[] = {{0.519148,3.09864,-0.891768}};
		};
		class cargo
		{
			selections[] = {{0.896776,1.63419,-1.20447},{-1.00225,1.63494,-1.20301},{0.775465,1.66324,-1.2641},{0.173372,1.59614,-1.2443},{0.722366,2.56385,-1.21375},{-0.940887,1.58997,-1.24279},{-0.372822,2.61048,-1.21382},{-0.783487,2.30986,-1.19997}};
			path[] = {{2},{3},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.508575,0.956978,-1.00999},{0.495096,0.850342,-0.992823},{-0.583239,3.21166,-0.938682}};
			path[] = {{0},{1},{4}};
		};
	};
	class Exile_Chopper_Huey_Armed_Desert
	{
		class driver
		{
			selections[] = {{0.519148,3.09863,-0.891768}};
		};
		class cargo
		{
			selections[] = {{0.896778,1.63419,-1.20447},{-1.00225,1.63493,-1.20301},{0.775473,1.66323,-1.26412},{0.173376,1.59614,-1.24432},{0.722464,2.56389,-1.21376},{-0.940866,1.58998,-1.24282},{-0.372742,2.6105,-1.21383},{-0.783508,2.30984,-1.19995}};
			path[] = {{2},{3},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.508575,0.95697,-1.00998},{0.495096,0.850334,-0.992823},{-0.583241,3.21165,-0.938683}};
			path[] = {{0},{1},{4}};
		};
	};
	class Exile_Chopper_Hummingbird_Green
	{
		class driver
		{
			selections[] = {{-0.374823,1.18665,-0.0438075}};
		};
		class cargo
		{
			selections[] = {{-0.2885,0.272263,-0.0888104},{0.300201,0.23658,-0.0897832},{0.825016,0.963249,-0.333086},{-0.798946,0.0632248,-0.335676},{-0.832726,0.970711,-0.340919},{0.8272,0.0653152,-0.338562}};
			path[] = {{-10},{-10},{1},{2},{3},{4}};
		};
		class turret
		{
			selections[] = {{0.366716,1.18438,-0.0431471}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Blue
	{
		class driver
		{
			selections[] = {{-0.373159,2.03548,0.752798}};
		};
		class cargo
		{
			selections[] = {{0.307495,1.12669,0.642678},{-0.330084,1.13381,0.649127}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.368382,2.0332,0.753458}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Red
	{
		class driver
		{
			selections[] = {{-0.373156,2.03548,0.752798}};
		};
		class cargo
		{
			selections[] = {{0.307796,1.12571,0.642728},{-0.330084,1.13381,0.649126}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.368382,2.03321,0.753458}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_ION
	{
		class driver
		{
			selections[] = {{-0.373159,2.03548,0.752798}};
		};
		class cargo
		{
			selections[] = {{0.307795,1.1257,0.642728},{-0.330084,1.13381,0.649127}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.368382,2.0332,0.753458}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_BlueLine
	{
		class driver
		{
			selections[] = {{-0.373156,2.03548,0.752798}};
		};
		class cargo
		{
			selections[] = {{0.307566,1.12675,0.642651},{-0.330084,1.13381,0.649126}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.368382,2.03321,0.753458}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Digital
	{
		class driver
		{
			selections[] = {{-0.373159,2.03548,0.752798}};
		};
		class cargo
		{
			selections[] = {{0.307795,1.1257,0.642728},{-0.330084,1.13381,0.649127}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.368382,2.0332,0.753458}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Elliptical
	{
		class driver
		{
			selections[] = {{-0.373156,2.03548,0.752798}};
		};
		class cargo
		{
			selections[] = {{0.307796,1.1257,0.642728},{-0.330084,1.13381,0.649126}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.368382,2.03321,0.753458}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Furious
	{
		class driver
		{
			selections[] = {{-0.373159,2.03548,0.752798}};
		};
		class cargo
		{
			selections[] = {{0.307795,1.1257,0.642728},{-0.330084,1.13381,0.649127}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.368382,2.0332,0.753458}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_GrayWatcher
	{
		class driver
		{
			selections[] = {{-0.373156,2.03548,0.752798}};
		};
		class cargo
		{
			selections[] = {{0.307796,1.1257,0.642728},{-0.330084,1.13381,0.649126}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.368382,2.03321,0.753458}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Jeans
	{
		class driver
		{
			selections[] = {{-0.373159,2.03548,0.752798}};
		};
		class cargo
		{
			selections[] = {{0.307795,1.1257,0.642728},{-0.330084,1.13381,0.649127}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.368382,2.0332,0.753458}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Light
	{
		class driver
		{
			selections[] = {{-0.373156,2.03548,0.752798}};
		};
		class cargo
		{
			selections[] = {{0.307795,1.1257,0.642728},{-0.330084,1.13381,0.649126}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.368382,2.03321,0.753458}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Shadow
	{
		class driver
		{
			selections[] = {{-0.373159,2.03548,0.752798}};
		};
		class cargo
		{
			selections[] = {{0.307795,1.1257,0.642728},{-0.330084,1.13381,0.649127}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.368382,2.0332,0.753458}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Sheriff
	{
		class driver
		{
			selections[] = {{-0.373156,2.03548,0.752798}};
		};
		class cargo
		{
			selections[] = {{0.307795,1.1257,0.642728},{-0.33041,1.13467,0.649142}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.368382,2.03321,0.753458}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Speedy
	{
		class driver
		{
			selections[] = {{-0.373159,2.03548,0.752798}};
		};
		class cargo
		{
			selections[] = {{0.307795,1.1257,0.642728},{-0.330084,1.13381,0.649127}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.368382,2.0332,0.753458}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Sunset
	{
		class driver
		{
			selections[] = {{-0.373156,2.03548,0.752798}};
		};
		class cargo
		{
			selections[] = {{0.307796,1.1257,0.642728},{-0.330082,1.13381,0.649126}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.368382,2.03321,0.753458}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Vrana
	{
		class driver
		{
			selections[] = {{-0.373159,2.03548,0.752798}};
		};
		class cargo
		{
			selections[] = {{0.307795,1.1257,0.642728},{-0.330084,1.13381,0.649127}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.368382,2.0332,0.753458}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Wasp
	{
		class driver
		{
			selections[] = {{-0.373156,2.03548,0.752798}};
		};
		class cargo
		{
			selections[] = {{0.307795,1.1257,0.642728},{-0.330084,1.13381,0.649126}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.368382,2.03321,0.753458}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Wave
	{
		class driver
		{
			selections[] = {{-0.373159,2.03548,0.752798}};
		};
		class cargo
		{
			selections[] = {{0.307535,1.12673,0.642651},{-0.330084,1.13381,0.649127}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.368382,2.0332,0.753458}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Huron_Black
	{
		class driver
		{
			selections[] = {{0.471348,7.63043,-0.688492}};
		};
		class cargo
		{
			selections[] = {{-0.98061,-0.801041,-1.2121},{-1.00673,2.75127,-1.28184},{-0.879248,1.52135,-1.26327},{-0.980368,0.933723,-1.21143},{-0.92894,0.342575,-1.22218},{-0.873344,-0.349289,-1.26782},{0.890648,2.76945,-1.14054},{0.790308,2.13897,-1.22912},{0.780275,1.56017,-1.21177},{-1.04173,2.15187,-1.17479},{0.83252,0.416817,-1.1994},{0.863396,-0.227585,-1.17888},{0.837078,0.977249,-1.14817},{0.90032,-0.773903,-1.21403},{0.854445,-1.31752,-1.30444},{-0.984333,-1.35038,-1.27188},{-0.941412,4.00089,-1.01086},{0.864286,4.01943,-1.01359}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{3},{4},{1},{2}};
		};
		class turret
		{
			selections[] = {{-0.532774,7.63017,-0.688834}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Huron_Green
	{
		class driver
		{
			selections[] = {{0.471348,7.63043,-0.688492}};
		};
		class cargo
		{
			selections[] = {{-0.980576,-0.801201,-1.21155},{-1.00705,2.75201,-1.28193},{-0.878496,1.5221,-1.26327},{-0.979689,0.933258,-1.21131},{-0.928949,0.342506,-1.22212},{-0.873165,-0.350327,-1.26811},{0.891279,2.76904,-1.14063},{0.788677,2.13828,-1.22829},{0.780239,1.56009,-1.21189},{-1.04224,2.15207,-1.17469},{0.831993,0.416801,-1.19994},{0.863415,-0.227615,-1.17888},{0.837053,0.977249,-1.14818},{0.898581,-0.774445,-1.21444},{0.854446,-1.31752,-1.30444},{-0.984333,-1.35038,-1.27188},{-0.941412,4.00089,-1.01086},{0.864286,4.01944,-1.01359}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{3},{4},{1},{2}};
		};
		class turret
		{
			selections[] = {{-0.532772,7.63017,-0.688835}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Mohawk_FIA
	{
		class driver
		{
			selections[] = {{0.745205,6.36018,-1.79773}};
		};
		class cargo
		{
			selections[] = {{0.947247,-0.608315,-1.74854},{-0.967558,-1.62138,-1.72834},{-1.10735,1.62867,-1.6869},{1.08293,4.25459,-1.71578},{-1.06961,-1.08168,-1.65363},{1.05392,1.03392,-1.67135},{1.05393,0.506721,-1.67383},{-1.0723,0.0458603,-1.65116},{1.04753,3.70452,-1.71331},{-1.05156,3.84514,-1.70143},{1.08292,4.78179,-1.71331},{1.04063,-0.0543823,-1.69049},{-1.07477,-0.520576,-1.67029},{-1.08594,1.09486,-1.68633},{-1.06849,0.571228,-1.67029},{-1.0761,3.19193,-1.70371}};
			path[] = {{1},{2},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.799221,6.36018,-1.79773}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Orca_CSAT
	{
		class driver
		{
			selections[] = {{0.435562,3.46624,-1.0693}};
		};
		class cargo
		{
			selections[] = {{0.55558,2.52254,-0.989409},{0.0458546,2.71809,-0.965556},{-0.607861,2.61616,-0.96908},{0.56712,0.477219,-0.943027},{0.0113811,0.46904,-0.970784},{-0.596922,0.47567,-0.966079},{0.234129,1.55923,-0.868855},{-0.270281,1.58949,-0.941759}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.460606,3.46627,-1.06841}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Orca_Black
	{
		class driver
		{
			selections[] = {{0.435585,3.46622,-1.06931}};
		};
		class cargo
		{
			selections[] = {{0.555759,2.52274,-0.989726},{0.0459232,2.71809,-0.965608},{-0.60788,2.6161,-0.969055},{0.567183,0.477249,-0.943026},{0.0114403,0.469223,-0.970778},{-0.596861,0.475876,-0.965985},{0.234198,1.5591,-0.868808},{-0.270334,1.58951,-0.941746}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.460609,3.46627,-1.06841}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Orca_BlackCustom
	{
		class driver
		{
			selections[] = {{0.435621,3.46621,-1.06931}};
		};
		class cargo
		{
			selections[] = {{0.556015,2.52298,-0.990056},{0.0460186,2.71797,-0.965689},{-0.607885,2.61604,-0.969066},{0.567263,0.47728,-0.943003},{0.0116043,0.469658,-0.970712},{-0.596577,0.476273,-0.965862},{0.234482,1.55874,-0.868263},{-0.270487,1.58957,-0.941711}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.460621,3.46627,-1.06842}};
			path[] = {{0}};
		};
	};
	class Exile_Chopper_Taru_CSAT
	{
		class driver
		{
			selections[] = {{-0.743336,3.98355,-0.91363}};
		};
		class cargo
		{
			selections[] = {{0.365473,1.39304,-1.874},{0.36002,0.562447,-1.87673},{0.348965,-0.280159,-1.8822},{0.379173,-1.10135,-1.86579},{-0.556824,-1.10304,-1.874},{-0.551342,-0.267654,-1.87673},{-0.540382,0.570229,-1.8822},{-0.570496,1.39569,-1.86579}};
			path[] = {{2},{3},{4},{5},{6},{7},{8},{9}};
		};
		class turret
		{
			selections[] = {{-0.809811,3.18808,-1.28804},{0.565472,3.98304,-0.913984}};
			path[] = {{1},{0}};
		};
	};
	class Exile_Chopper_Taru_Black
	{
		class driver
		{
			selections[] = {{-0.743338,3.98355,-0.91363}};
		};
		class cargo
		{
			selections[] = {{0.365473,1.39304,-1.874},{0.36002,0.562454,-1.87673},{0.348965,-0.280151,-1.8822},{0.379173,-1.10135,-1.86579},{-0.556822,-1.10303,-1.874},{-0.55134,-0.267647,-1.87673},{-0.540382,0.570229,-1.8822},{-0.570496,1.3957,-1.86579}};
			path[] = {{2},{3},{4},{5},{6},{7},{8},{9}};
		};
		class turret
		{
			selections[] = {{-0.810001,3.1881,-1.28812},{0.565472,3.98304,-0.913984}};
			path[] = {{1},{0}};
		};
	};
	class Exile_Chopper_Taru_Covered_CSAT
	{
		class driver
		{
			selections[] = {{-0.743328,3.98355,-0.677628}};
		};
		class cargo
		{
			selections[] = {{0.22076,1.90108,-1.23476},{-0.385353,1.95832,-1.1893},{0.192709,1.28783,-1.15832},{-0.389233,1.35446,-1.18341},{0.144962,0.71907,-1.19103},{-0.385656,0.778633,-1.17393},{0.191029,0.207512,-1.15948},{-0.431452,0.188011,-1.2165},{0.228977,-0.265137,-1.15409},{-0.359201,-0.259102,-1.20528},{-0.39809,-0.881996,-1.16758},{-0.33856,-1.3231,-1.16987},{0.262196,-0.831573,-1.23514},{0.206675,-1.30769,-1.20709},{0.211306,-2.0228,-1.20444},{-0.424477,-2.01791,-1.2163}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{2},{3}};
		};
		class turret
		{
			selections[] = {{-0.811333,3.19371,-1.04759},{0.565475,3.98304,-0.677985}};
			path[] = {{1},{0}};
		};
	};
	class Exile_Chopper_Taru_Covered_Black
	{
		class driver
		{
			selections[] = {{-0.74333,3.98355,-0.677629}};
		};
		class cargo
		{
			selections[] = {{0.220776,1.90107,-1.23481},{-0.385359,1.95834,-1.18928},{0.19256,1.28777,-1.15834},{-0.389122,1.35443,-1.18349},{0.144997,0.719055,-1.19105},{-0.385305,0.778336,-1.17384},{0.191122,0.207329,-1.15943},{-0.430872,0.188087,-1.21645},{0.228977,-0.26516,-1.15408},{-0.359253,-0.259087,-1.20528},{-0.398098,-0.881996,-1.16757},{-0.338564,-1.32311,-1.16987},{0.262196,-0.831566,-1.23514},{0.205711,-1.30745,-1.20719},{0.211306,-2.0228,-1.20444},{-0.424479,-2.0179,-1.2163}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{2},{3}};
		};
		class turret
		{
			selections[] = {{-0.811483,3.19405,-1.04821},{0.565474,3.98304,-0.677985}};
			path[] = {{1},{0}};
		};
	};
	class Exile_Chopper_Taru_Transport_CSAT
	{
		class driver
		{
			selections[] = {{-0.743334,3.98355,-0.913626}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {{-0.810715,3.18698,-1.28904},{0.565464,3.98304,-0.913984}};
			path[] = {{1},{0}};
		};
	};
	class Exile_Chopper_Taru_Transport_Black
	{
		class driver
		{
			selections[] = {{-0.743336,3.98355,-0.913629}};
		};
		class cargo
		{
			selections[] = {};
			path[] = {};
		};
		class turret
		{
			selections[] = {{-0.81057,3.18693,-1.28907},{0.565466,3.98304,-0.913982}};
			path[] = {{1},{0}};
		};
	};
	class Exile_Boat_MotorBoat_Police
	{
		class driver
		{
			selections[] = {{0.0615959,0.00519562,0.0256062}};
		};
		class cargo
		{
			selections[] = {{0.000490189,-0.00857544,0.0254097},{0.000465393,-0.00869751,0.0253677}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Boat_MotorBoat_Orange
	{
		class driver
		{
			selections[] = {{0.0617218,0.00353241,0.0255585}};
		};
		class cargo
		{
			selections[] = {{0.000480652,-0.00862122,0.0253754},{0.000465393,-0.00872803,0.0253754}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Boat_MotorBoat_White
	{
		class driver
		{
			selections[] = {{0.0615978,0.00517273,0.0256081}};
		};
		class cargo
		{
			selections[] = {{0.000478745,-0.00862885,0.0253735},{0.000465393,-0.00872803,0.0253773}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Boat_RubberDuck_CSAT
	{
		class driver
		{
			selections[] = {{0.0166569,-0.0551682,0.104486}};
		};
		class cargo
		{
			selections[] = {{0.0167465,0.0631485,0.0550156},{0.0164928,0.0631485,0.0545774},{0.0271378,-0.0663528,0.202452},{0.00767899,-0.0231628,0.145529}};
			path[] = {{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Boat_RubberDuck_Digital
	{
		class driver
		{
			selections[] = {{0.0166569,-0.0551682,0.104486}};
		};
		class cargo
		{
			selections[] = {{0.0167465,0.0631485,0.0550156},{0.0164928,0.0631485,0.0545774},{0.0271378,-0.0663528,0.202452},{0.00767899,-0.0231628,0.145529}};
			path[] = {{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Boat_RubberDuck_Orange
	{
		class driver
		{
			selections[] = {{0.0166569,-0.0551682,0.104486}};
		};
		class cargo
		{
			selections[] = {{0.0167465,0.0631485,0.0550156},{0.0164928,0.0631485,0.0545774},{0.0271378,-0.0663528,0.202452},{0.00767899,-0.0231628,0.145529}};
			path[] = {{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Boat_RubberDuck_Blue
	{
		class driver
		{
			selections[] = {{0.0166569,-0.0551682,0.104486}};
		};
		class cargo
		{
			selections[] = {{0.0167465,0.0631485,0.0550156},{0.0164928,0.0631485,0.0545774},{0.0271378,-0.0663528,0.202452},{0.00767899,-0.0231628,0.145529}};
			path[] = {{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Boat_RubberDuck_Black
	{
		class driver
		{
			selections[] = {{0.0166569,-0.0551682,0.104486}};
		};
		class cargo
		{
			selections[] = {{0.0167465,0.0631485,0.0550156},{0.0164928,0.0631485,0.0545774},{0.0271378,-0.0663528,0.202452},{0.00767899,-0.0231628,0.145529}};
			path[] = {{0},{1},{2},{3}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Exile_Boat_SDV_CSAT
	{
		class driver
		{
			selections[] = {{0.000593185,0.0262985,0.127645}};
		};
		class cargo
		{
			selections[] = {{-0.0384064,-0.0848236,0.109874},{-0.0383644,-0.0848999,0.109885}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.000169754,0.0289078,0.128582}};
			path[] = {{0}};
		};
	};
	class Exile_Boat_SDV_Digital
	{
		class driver
		{
			selections[] = {{0.000717163,0.0261154,0.127669}};
		};
		class cargo
		{
			selections[] = {{-0.0384083,-0.0848846,0.10988},{-0.0382442,-0.0848312,0.109887}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{8.58307e-005,0.0290604,0.128695}};
			path[] = {{0}};
		};
	};
	class Exile_Boat_SDV_Grey
	{
		class driver
		{
			selections[] = {{0.000501633,0.026413,0.127617}};
		};
		class cargo
		{
			selections[] = {{-0.0384007,-0.0847626,0.109868},{-0.0383186,-0.0848694,0.109886}};
			path[] = {{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.000108719,0.0290375,0.128666}};
			path[] = {{0}};
		};
	};
	class Exile_Plane_Cessna
	{
		class driver
		{
			selections[] = {{-0.256237,0.266281,-0.5019}};
		};
		class cargo
		{
			selections[] = {{0.192383,0.265854,-0.50211},{0.176575,-0.643951,-0.509142},{-0.237961,-0.644592,-0.509477}};
			path[] = {{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class volha_Civ_01
	{
		class driver
		{
			selections[] = {{-0.360138,0.0147705,-0.78298}};
		};
		class cargo
		{
			selections[] = {{0.406574,0.0878448,-0.715643},{-0.336567,-0.763214,-0.72948},{0.425392,-0.768951,-0.739796},{0.127518,-1.95448,-0.681242}};
			path[] = {{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class volha_Civ_02
	{
		class driver
		{
			selections[] = {{-0.360115,0.0146637,-0.782982}};
		};
		class cargo
		{
			selections[] = {{0.40659,0.087738,-0.715646},{-0.336559,-0.763229,-0.729479},{0.4254,-0.768784,-0.739793},{0.127502,-1.9545,-0.681242}};
			path[] = {{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class volha_Civ_03
	{
		class driver
		{
			selections[] = {{-0.36013,0.0148773,-0.782979}};
		};
		class cargo
		{
			selections[] = {{0.40657,0.0880127,-0.715639},{-0.336571,-0.763107,-0.729481},{0.425396,-0.769028,-0.739796},{0.127514,-1.9545,-0.681242}};
			path[] = {{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Landrover_Des
	{
		class driver
		{
			selections[] = {{-0.506546,0.108292,-0.485136}};
		};
		class cargo
		{
			selections[] = {{0.471333,0.158569,-0.510056},{-0.652729,-0.563751,-0.25245},{0.630791,-0.662003,-0.253831},{-0.657791,-1.28905,-0.252433},{0.622639,-1.3735,-0.23742},{-0.560364,-2.07066,-0.309711},{0.5536,-2.14114,-0.317466},{-0.607296,-2.05589,-0.336899}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{0},{1},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Landrover_Civ_01
	{
		class driver
		{
			selections[] = {{-0.506546,0.108459,-0.485136}};
		};
		class cargo
		{
			selections[] = {{0.471333,0.158813,-0.510091},{-0.652557,-0.563721,-0.25245},{0.630783,-0.662003,-0.253844},{-0.657562,-1.28902,-0.252429},{0.622414,-1.37354,-0.237408},{-0.560661,-2.07065,-0.309712},{0.55386,-2.14113,-0.317468},{-0.607365,-2.05595,-0.336863}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{0},{1},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Landrover_Civ_01_Urban1
	{
		class driver
		{
			selections[] = {{-0.506538,0.107697,-0.485138}};
		};
		class cargo
		{
			selections[] = {{0.471321,0.160202,-0.510054},{-0.651627,-0.563736,-0.252447},{0.629993,-0.662003,-0.253777},{-0.656902,-1.28903,-0.252441},{0.62207,-1.37343,-0.237541},{-0.560841,-2.07066,-0.309712},{0.556992,-2.1411,-0.317482},{-0.614658,-2.05592,-0.336648}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{0},{1},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Landrover_Civ_03
	{
		class driver
		{
			selections[] = {{-0.506409,0.1082,-0.485137}};
		};
		class cargo
		{
			selections[] = {{0.471527,0.15863,-0.510101},{-0.652634,-0.563873,-0.252447},{0.631378,-0.661926,-0.253875},{-0.658344,-1.28906,-0.252429},{0.622692,-1.3734,-0.237528},{-0.55867,-2.07065,-0.309703},{0.553116,-2.14117,-0.317465},{-0.610188,-2.05582,-0.336978}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{0},{1},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class LR_Ambulance_01
	{
		class driver
		{
			selections[] = {{-0.506523,0.829788,-0.485242}};
		};
		class cargo
		{
			selections[] = {{0.471352,0.881531,-0.509775},{-0.651459,0.159973,-0.252599},{0.62632,0.0623016,-0.253047},{-0.655495,-0.565384,-0.252575},{0.621967,-0.650284,-0.240242},{-0.617096,-1.33372,-0.23901}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class LR_Ambulance_02
	{
		class driver
		{
			selections[] = {{-0.506508,0.829636,-0.485243}};
		};
		class cargo
		{
			selections[] = {{0.471382,0.881912,-0.509674},{-0.650581,0.159943,-0.252594},{0.625885,0.0623932,-0.252949},{-0.655285,-0.56543,-0.252585},{0.622341,-0.650421,-0.240392},{-0.617676,-1.33339,-0.239389}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class UH1H_Closed_TK
	{
		class driver
		{
			selections[] = {{0.519148,3.11723,-0.884327}};
		};
		class cargo
		{
			selections[] = {{-0.679665,0.934769,-0.94407},{0.666822,0.874023,-0.922603},{-0.6189,0.891777,-0.984931},{-0.282646,1.71436,-0.878741},{0.778322,1.67688,-0.911672},{-0.812958,1.67683,-0.911697},{0.255842,1.67674,-0.911744},{0.60574,0.924599,-0.954792},{-0.0321369,0.0147629,0.0712428}};
			path[] = {{1},{2},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.583241,3.21166,-0.938683}};
			path[] = {{0}};
		};
	};
	class UH1H_M240_TK
	{
		class driver
		{
			selections[] = {{0.519148,3.09864,-0.891768}};
		};
		class cargo
		{
			selections[] = {{0.896776,1.63419,-1.20447},{-1.00225,1.63494,-1.20301},{0.775558,1.66322,-1.26399},{0.173376,1.59613,-1.24418},{0.721884,2.56361,-1.21366},{-0.941084,1.58996,-1.24267},{-0.373192,2.61034,-1.21377},{-0.783073,2.31014,-1.20039}};
			path[] = {{2},{3},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.508577,0.956978,-1.00998},{0.495094,0.850342,-0.992823},{-0.583241,3.21166,-0.938682}};
			path[] = {{0},{1},{4}};
		};
	};
	class B_APC_Wheeled_01_cannon_F
	{
		class driver
		{
			selections[] = {{-0.533119,0.812683,-1.52234}};
		};
		class cargo
		{
			selections[] = {{-0.00854492,0.00886536,0.069809},{0.00312805,0.0188141,0.0309114},{-0.00959015,0.019577,0.0775681},{0.00226593,-0.0228729,0.0223455},{-0.00836563,-0.0420227,0.046957},{-0.031456,0.0287781,0.0751305},{0.00315475,0.0184784,0.0306883},{-0.00938797,0.00793457,0.0693855}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{0.566055,-1.97739,-0.208199},{0.198837,-1.22818,-0.208364}};
			path[] = {{0},{0,0}};
		};
	};
	class O_APC_Wheeled_02_rcws_F
	{
		class driver
		{
			selections[] = {{-0.197205,-0.298538,-1.31811}};
		};
		class cargo
		{
			selections[] = {{0.864738,-3.87024,-0.954178},{-0.13147,-3.93274,-1.0496},{0.863522,-2.62872,-0.978002},{-0.149502,-2.71019,-1.05227},{0.872505,-3.2998,-1.0486},{-0.11573,-3.26552,-0.970794},{0.818466,-2.05443,-0.938668},{-0.167103,-2.07521,-0.896795}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.0480995,-0.116928,-0.45265},{-0.27599,-1.07854,-0.845204}};
			path[] = {{0},{1}};
		};
	};
	class B_MBT_01_TUSK_F
	{
		class driver
		{
			selections[] = {{-0.0459061,-0.12262,-0.452644}};
		};
		class cargo
		{
			selections[] = {{-0.00410461,-0.464417,0.208023},{-0.00327682,-0.0432892,0.0547466},{-0.00595093,-0.0526276,0.0458684},{0.00325775,-0.0333405,0.106069},{-0.0100212,-0.0470276,0.0470819},{0.00358582,-0.0353546,0.0628691}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.0493927,-0.116135,-0.452647},{0.628986,-0.710037,-0.64051}};
			path[] = {{0},{0,0}};
		};
	};
	class I_APC_Wheeled_03_cannon_F
	{
		class driver
		{
			selections[] = {{-0.0403366,1.26404,-1.51558}};
		};
		class cargo
		{
			selections[] = {{0.00240326,0.0215759,0.0810757},{0.00320816,-0.0170746,0.0660906},{-0.00043869,-0.0149994,0.0578079},{-0.0318909,0.0178223,0.071435},{-0.00897598,0.00769043,0.069315},{-0.0091362,-0.0462189,0.055479},{-0.00465393,-0.00691223,0.0704403},{0.00323868,-0.0171509,0.0658407}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {{-0.0386047,0.0172272,0.0430374},{-0.107918,-0.0556641,-0.987075}};
			path[] = {{0},{0,0}};
		};
	};
	class Ikarus_Base
	{
		class driver
		{
			selections[] = {{-0.851151,3.93997,-0.214146}};
		};
		class cargo
		{
			selections[] = {{-0.961136,0.640854,-0.304607},{-0.979622,3.06471,-0.291253},{-1.01073,-0.158218,-0.287315},{0.773998,1.82841,-0.292373},{0.781502,-3.33754,-0.277909},{-1.02489,-1.63689,-0.277692},{0.786018,-1.58829,-0.27759},{0.231026,0.98732,-0.29971},{-1.02837,-2.47432,-0.280259},{0.261074,-3.16533,-0.279264},{0.263191,-1.67531,-0.279359},{0.226448,1.80962,-0.287246},{0.231941,-2.47473,-0.240832},{0.307339,2.6828,-0.262156},{-0.966446,-3.27206,-0.283432},{-0.990402,-0.920868,-0.288634},{-0.896942,2.2529,-0.271753},{-0.949383,1.45804,-0.271999},{0.715233,1.00255,-0.264444},{-0.272835,-5.29997,0.158076},{-0.301567,-0.699478,0.158074},{-0.391579,-3.78313,0.158072},{-0.825119,-4.51001,0.15807}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Ikarus_Civ_Base
	{
		class driver
		{
			selections[] = {{-0.851143,3.93991,-0.214146}};
		};
		class cargo
		{
			selections[] = {{-0.96114,0.640839,-0.304608},{-0.979626,3.06467,-0.291255},{-1.01073,-0.158234,-0.287316},{0.774002,1.82843,-0.292373},{0.781502,-3.33739,-0.277924},{-1.02489,-1.63739,-0.277737},{0.786018,-1.58817,-0.27758},{0.231003,0.987656,-0.299683},{-1.02819,-2.47398,-0.280227},{0.261017,-3.16579,-0.279223},{0.263165,-1.67511,-0.279342},{0.226463,1.80959,-0.287248},{0.231926,-2.47517,-0.240835},{0.307411,2.68221,-0.262186},{-0.986076,-3.22955,-0.276141},{-0.990673,-0.922791,-0.288808},{-0.896122,2.25093,-0.271845},{-0.949379,1.4592,-0.271895},{0.715218,1.0034,-0.264352},{-0.272205,-5.3,0.158078},{-0.301128,-0.699402,0.158074},{-0.391815,-3.78333,0.158072},{-0.824905,-4.51009,0.158071}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Ikarus_Civ_02
	{
		class driver
		{
			selections[] = {{-0.851139,3.9399,-0.214146}};
		};
		class cargo
		{
			selections[] = {{-0.961132,0.640823,-0.304609},{-0.979618,3.06468,-0.291254},{-1.01073,-0.158279,-0.287319},{0.774002,1.8284,-0.292376},{0.781494,-3.33733,-0.277927},{-1.02488,-1.63951,-0.277925},{0.786026,-1.59116,-0.277844},{0.231003,0.987701,-0.299676},{-1.02772,-2.47322,-0.280147},{0.260845,-3.16663,-0.279147},{0.26302,-1.67377,-0.279223},{0.225677,1.81067,-0.28713},{0.231991,-2.47363,-0.240821},{0.307274,2.68372,-0.26211},{-0.98587,-3.23161,-0.275962},{-0.989716,-0.917664,-0.288621},{-0.864067,2.22166,-0.279183},{-0.949181,1.45935,-0.272163},{0.715256,1.00194,-0.264509},{-0.2733,-5.29999,0.158074},{-0.301918,-0.699539,0.158072},{-0.391357,-3.78296,0.158071},{-0.825325,-4.50992,0.158069}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Lada_Civ_01
	{
		class driver
		{
			selections[] = {{-0.342529,-0.0471649,-0.710351}};
		};
		class cargo
		{
			selections[] = {{0.34343,-0.0516205,-0.703833},{-0.329865,-0.84903,-0.691311},{0.363815,-0.848694,-0.68574},{-0.0792236,-1.76491,-0.728607}};
			path[] = {{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Lada_Civ_02
	{
		class driver
		{
			selections[] = {{-0.342525,-0.0471344,-0.710352}};
		};
		class cargo
		{
			selections[] = {{0.343433,-0.0513763,-0.703834},{-0.329857,-0.848938,-0.69131},{0.363819,-0.84903,-0.68574},{-0.079174,-1.76413,-0.728606}};
			path[] = {{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Lada_Civ_03
	{
		class driver
		{
			selections[] = {{-0.342529,-0.0471191,-0.710351}};
		};
		class cargo
		{
			selections[] = {{0.343433,-0.0514374,-0.703833},{-0.329857,-0.848969,-0.691311},{0.363815,-0.848892,-0.68574},{-0.0791931,-1.76451,-0.728607}};
			path[] = {{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Lada_Civ_04
	{
		class driver
		{
			selections[] = {{-0.342541,-0.0471191,-0.710351}};
		};
		class cargo
		{
			selections[] = {{0.343418,-0.0516052,-0.703834},{-0.329868,-0.84903,-0.691311},{0.363808,-0.848724,-0.68574},{-0.079216,-1.76488,-0.728607}};
			path[] = {{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Lada_Militia
	{
		class driver
		{
			selections[] = {{-0.342522,-0.0471344,-0.709815}};
		};
		class cargo
		{
			selections[] = {{0.343433,-0.0515442,-0.703295},{-0.329857,-0.848999,-0.690773},{0.363815,-0.84877,-0.685204},{-0.0792122,-1.76474,-0.728074}};
			path[] = {{-10},{-10},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Ural_Open_Base
	{
		class driver
		{
			selections[] = {{-0.509117,1.52705,1.70417}};
		};
		class cargo
		{
			selections[] = {{0.677872,1.37671,1.67594},{0.221512,1.43709,1.66279},{0.96212,-0.706665,2.10738},{-0.923096,-0.529251,2.07775},{0.969444,-1.36476,2.09531},{-0.902218,-1.15741,2.10067},{0.963223,-1.96207,2.10012},{-0.89225,-1.86104,2.09849},{0.98275,-2.70352,2.09},{-0.843468,-2.51158,2.10086},{1.0411,-3.29944,2.05789},{-0.949089,-3.04993,2.06324},{0.941177,-0.0220337,2.1052},{-0.979359,0.160477,2.07116}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{1},{0},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Ural_Civ_01
	{
		class driver
		{
			selections[] = {{-0.557285,1.746,-0.305796}};
		};
		class cargo
		{
			selections[] = {{0.629745,1.59549,-0.334021},{0.173603,1.65613,-0.347072},{0.912254,-0.484665,0.0971789},{-0.970619,-0.310394,0.0688052},{0.921295,-1.1458,0.0853415},{-0.950424,-0.938446,0.0907068},{0.916225,-1.743,0.0898576},{-0.940483,-1.64215,0.0885377},{0.933826,-2.48524,0.0794501},{-0.892727,-2.29317,0.0905948},{0.992954,-3.08049,0.0479288},{-0.997314,-2.83099,0.0532827},{0.894009,0.195724,0.0954447},{-1.02644,0.379623,0.0621104}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{1},{0},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Ural_Civ_02
	{
		class driver
		{
			selections[] = {{-0.557301,1.746,-0.305795}};
		};
		class cargo
		{
			selections[] = {{0.629745,1.59549,-0.333979},{0.173531,1.65613,-0.347092},{0.912231,-0.485321,0.0969687},{-0.970619,-0.310562,0.0687151},{0.921291,-1.14583,0.0853424},{-0.950428,-0.938431,0.0907068},{0.916183,-1.74298,0.0898709},{-0.940456,-1.64214,0.0885391},{0.934219,-2.48528,0.0796733},{-0.89249,-2.29303,0.0906649},{0.992947,-3.08049,0.0479288},{-0.99733,-2.83098,0.0532856},{0.893791,0.195953,0.0954323},{-1.02663,0.379684,0.0619922}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{1},{0},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Ural_Civ_03
	{
		class driver
		{
			selections[] = {{-0.557297,1.74602,-0.305794}};
		};
		class cargo
		{
			selections[] = {{0.629753,1.59549,-0.333989},{0.173523,1.65611,-0.347096},{0.912228,-0.485062,0.097033},{-0.970615,-0.310532,0.0687361},{0.921295,-1.14581,0.0853424},{-0.950424,-0.938431,0.0907073},{0.916237,-1.743,0.0898576},{-0.940475,-1.64215,0.0885382},{0.934151,-2.48532,0.0796289},{-0.892426,-2.29303,0.090683},{0.992973,-3.08049,0.0479321},{-0.997375,-2.83099,0.0532937},{0.893684,0.196121,0.0954208},{-1.02673,0.379669,0.0619183}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{1},{0},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Ural_Open_Civ_01
	{
		class driver
		{
			selections[] = {{-0.509106,1.52716,1.70417}};
		};
		class cargo
		{
			selections[] = {{0.677925,1.37666,1.67599},{0.22168,1.43726,1.66286},{0.960419,-0.704666,2.10687},{-0.922382,-0.529587,2.07864},{0.969421,-1.36473,2.0953},{-0.902252,-1.15738,2.10067},{0.964241,-1.96191,2.09986},{-0.892296,-1.86107,2.0985},{0.98243,-2.70419,2.08967},{-0.844433,-2.51202,2.10059},{1.04117,-3.29944,2.0579},{-0.949234,-3.04993,2.06326},{0.942001,-0.0230103,2.1054},{-0.978424,0.160736,2.07198}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{1},{0},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Ural_Open_Civ_02
	{
		class driver
		{
			selections[] = {{-0.509129,1.52702,1.70417}};
		};
		class cargo
		{
			selections[] = {{0.677917,1.37653,1.67595},{0.221733,1.43716,1.66288},{0.960381,-0.704025,2.10698},{-0.922432,-0.529602,2.07864},{0.969467,-1.36475,2.0953},{-0.902275,-1.15738,2.10067},{0.964256,-1.96193,2.09986},{-0.892296,-1.86108,2.0985},{0.982307,-2.70424,2.0896},{-0.844357,-2.51201,2.10061},{1.04114,-3.29942,2.05789},{-0.949181,-3.04993,2.06325},{0.942039,-0.023056,2.1054},{-0.97842,0.160721,2.07199}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{1},{0},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
	class Ural_Open_Civ_03
	{
		class driver
		{
			selections[] = {{-0.509117,1.5271,1.70417}};
		};
		class cargo
		{
			selections[] = {{0.677925,1.3766,1.67596},{0.221733,1.43723,1.66288},{0.960323,-0.703781,2.10708},{-0.922417,-0.529327,2.07876},{0.96946,-1.36475,2.0953},{-0.902283,-1.15741,2.10067},{0.964523,-1.96196,2.0998},{-0.892288,-1.8611,2.0985},{0.981693,-2.70415,2.08929},{-0.844707,-2.51213,2.10051},{1.04115,-3.29944,2.0579},{-0.949207,-3.04993,2.06326},{0.942165,-0.0231781,2.10541},{-0.978294,0.16069,2.07206}};
			path[] = {{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{-10},{1},{0},{-10},{-10}};
		};
		class turret
		{
			selections[] = {};
			path[] = {};
		};
	};
};
class CfgExileToasts
{
	class InfoEmpty
	{
		template = "%1";
		color[] = {0.247,0.831,0.988,1};
	};
	class InfoTitleOnly
	{
		template = "<t size='22' font='PuristaMedium'>%1</t>";
		color[] = {0.247,0.831,0.988,1};
	};
	class InfoTitleAndText
	{
		template = "<t size='22' font='PuristaMedium'>%1</t><br/><t color='#ff979ba1' size='19' font='PuristaLight'>%2</t>";
		color[] = {0.247,0.831,0.988,1};
	};
	class SuccessEmpty
	{
		template = "%1";
		color[] = {0.627,0.874,0.231,1};
	};
	class SuccessTitleOnly
	{
		template = "<t size='22' font='PuristaMedium'>%1</t>";
		color[] = {0.627,0.874,0.231,1};
	};
	class SuccessTitleAndText
	{
		template = "<t size='22' font='PuristaMedium'>%1</t><br/><t color='#ff979ba1' size='19' font='PuristaLight'>%2</t>";
		color[] = {0.627,0.874,0.231,1};
	};
	class ErrorEmpty
	{
		template = "%1";
		color[] = {0.78,0.149,0.318,1};
	};
	class ErrorTitleOnly
	{
		template = "<t size='22' font='PuristaMedium'>%1</t>";
		color[] = {0.78,0.149,0.318,1};
	};
	class ErrorTitleAndText
	{
		template = "<t size='22' font='PuristaMedium'>%1</t><br/><t color='#ff979ba1' size='19' font='PuristaLight'>%2</t>";
		color[] = {0.78,0.149,0.318,1};
	};
	class WarningEmpty
	{
		template = "%1";
		color[] = {0.871,0.796,0.227,1};
	};
	class WarningTitleOnly
	{
		template = "<t size='22' font='PuristaMedium'>%1</t>";
		color[] = {0.871,0.796,0.227,1};
	};
	class WarningTitleAndText
	{
		template = "<t size='22' font='PuristaMedium'>%1</t><br/><t color='#ff979ba1' size='19' font='PuristaLight'>%2</t>";
		color[] = {0.871,0.796,0.227,1};
	};
};
class CfgFlagsNative
{
	class BI
	{
		name = "Bohemia Interactive";
		texture = "exile_assets\texture\flag\flag_mate_bis_co.paa";
		uids[] = {"76561197977933359","76561197968664825","76561198003485468","76561198050098256","76561198007169107","76561197971697870","76561198085333695","76561197991855773"};
	};
	class Vish
	{
		name = "Vish";
		texture = "exile_assets\texture\flag\flag_mate_vish_co.paa";
		uids[] = {"76561198075905447"};
	};
	class Hollow
	{
		name = "Hollow";
		texture = "exile_assets\texture\flag\flag_mate_hollow_co.paa";
		uids[] = {"76561198182951970"};
	};
	class Legion
	{
		name = "Legion";
		texture = "exile_assets\texture\flag\flag_mate_legion_ca.paa";
		uids[] = {"76561198010969041","76561198124983829","76561198094881952","76561198111208683","76561198015966307","76561198078247060","76561198034836765","76561197998832240","76561197970701357","76561198123330495"};
	};
	class DogesOfMassDestruction
	{
		name = "21 DMD";
		texture = "exile_assets\texture\flag\flag_mate_21dmd_co.paa";
		uids[] = {"76561198021615590"};
	};
	class Spawny
	{
		name = "sp4wny";
		texture = "exile_assets\texture\flag\flag_mate_spawny_co.paa";
		uids[] = {"76561197960452768"};
	};
	class Tomms
	{
		name = "Tomms";
		texture = "exile_assets\texture\flag\flag_mate_secretone_co.paa";
		uids[] = {"76561198003041335"};
	};
	class StitchMoonz
	{
		name = "StitchMoonz";
		texture = "exile_assets\texture\flag\flag_mate_stitchmoonz_co.paa";
		uids[] = {"76561198112458056"};
	};
	class CommanderMalc
	{
		name = "CommanderMalc";
		texture = "exile_assets\texture\flag\flag_mate_commandermalc_co.paa";
		uids[] = {"76561197998522808"};
	};
	class Blue
	{
		name = "Blue";
		texture = "\A3\Data_F\Flags\flag_blue_co.paa";
		uids[] = {};
	};
	class Green
	{
		name = "Green";
		texture = "\A3\Data_F\Flags\flag_green_co.paa";
		uids[] = {};
	};
	class Red
	{
		name = "Red";
		texture = "\A3\Data_F\Flags\flag_red_co.paa";
		uids[] = {};
	};
	class White
	{
		name = "White";
		texture = "\A3\Data_F\Flags\flag_white_co.paa";
		uids[] = {};
	};
	class CountryUK
	{
		name = "United Kingdom";
		texture = "\A3\Data_F\Flags\flag_uk_co.paa";
		uids[] = {};
	};
	class CountryDE
	{
		name = "Germany";
		texture = "exile_assets\texture\flag\flag_country_de_co.paa";
		uids[] = {};
	};
	class CountryAT
	{
		name = "Austria";
		texture = "exile_assets\texture\flag\flag_country_at_co.paa";
		uids[] = {};
	};
	class CountrySCT
	{
		name = "Scotland";
		texture = "exile_assets\texture\flag\flag_country_sct_co.paa";
		uids[] = {};
	};
	class CountryEE
	{
		name = "Estonia";
		texture = "exile_assets\texture\flag\flag_country_ee_co.paa";
		uids[] = {};
	};
	class CountryCZ
	{
		name = "Czech Republic";
		texture = "exile_assets\texture\flag\flag_country_cz_co.paa";
		uids[] = {};
	};
	class CountryNL
	{
		name = "The Netherlands";
		texture = "exile_assets\texture\flag\flag_country_nl_co.paa";
		uids[] = {};
	};
	class CountryHR
	{
		name = "Croatia";
		texture = "exile_assets\texture\flag\flag_country_hr_co.paa";
		uids[] = {};
	};
	class CountryCN
	{
		name = "Canada";
		texture = "exile_assets\texture\flag\flag_country_cn_co.paa";
		uids[] = {};
	};
	class CountryRU
	{
		name = "Russia";
		texture = "exile_assets\texture\flag\flag_country_ru_co.paa";
		uids[] = {};
	};
	class CountryIR
	{
		name = "Ireland";
		texture = "exile_assets\texture\flag\flag_country_ir_co.paa";
		uids[] = {};
	};
	class CountryBY
	{
		name = "Belarus";
		texture = "exile_assets\texture\flag\flag_country_by_co.paa";
		uids[] = {};
	};
	class CountryFI
	{
		name = "Finland";
		texture = "exile_assets\texture\flag\flag_country_fi_co.paa";
		uids[] = {};
	};
	class CountryFR
	{
		name = "France";
		texture = "exile_assets\texture\flag\flag_country_fr_co.paa";
		uids[] = {};
	};
	class CountryAU
	{
		name = "Australia";
		texture = "exile_assets\texture\flag\flag_country_au_co.paa";
		uids[] = {};
	};
	class CountryBE
	{
		name = "Belgium";
		texture = "exile_assets\texture\flag\flag_country_be_co.paa";
		uids[] = {};
	};
	class CountrySE
	{
		name = "Sweden";
		texture = "exile_assets\texture\flag\flag_country_se_co.paa";
		uids[] = {};
	};
	class CountryPL
	{
		name = "Poland";
		texture = "exile_assets\texture\flag\flag_country_pl_co.paa";
		uids[] = {};
	};
	class CountryPL2
	{
		name = "Poland 2";
		texture = "exile_assets\texture\flag\flag_country_pl2_co.paa";
		uids[] = {};
	};
	class CountryPT
	{
		name = "Portugal";
		texture = "exile_assets\texture\flag\flag_country_pt_co.paa";
		uids[] = {};
	};
	class Zand3rs
	{
		name = "Zand3rs";
		texture = "exile_assets\texture\flag\flag_mate_zanders_streched_co.paa";
		uids[] = {};
	};
	class Brunswik
	{
		name = "Brunswik";
		texture = "exile_assets\texture\flag\flag_misc_brunswik_co.paa";
		uids[] = {};
	};
	class Dorset
	{
		name = "Dorset";
		texture = "exile_assets\texture\flag\flag_misc_dorset_co.paa";
		uids[] = {};
	};
	class Svarog
	{
		name = "Children of Svarog";
		texture = "exile_assets\texture\flag\flag_misc_svarog_co.paa";
		uids[] = {};
	};
	class Exile
	{
		name = "Exile";
		texture = "exile_assets\texture\flag\flag_misc_exile_co.paa";
		uids[] = {};
	};
	class UTcity
	{
		name = "UTcity";
		texture = "exile_assets\texture\flag\flag_misc_utcity_co.paa";
		uids[] = {};
	};
	class Dickbutt
	{
		name = "Dickbut";
		texture = "exile_assets\texture\flag\flag_misc_dickbutt_co.paa";
		uids[] = {};
	};
	class Rainbow
	{
		name = "Rainbow";
		texture = "exile_assets\texture\flag\flag_misc_rainbow_co.paa";
		uids[] = {};
	};
	class BattlEye
	{
		name = "BattlEye";
		texture = "exile_assets\texture\flag\flag_misc_battleye_co.paa";
		uids[] = {};
	};
	class BSS
	{
		name = "Bluescreen Simulator";
		texture = "exile_assets\texture\flag\flag_misc_bss_co.paa";
		uids[] = {};
	};
	class Skippy
	{
		name = "Skippy";
		texture = "exile_assets\texture\flag\flag_misc_skippy_co.paa";
		uids[] = {};
	};
	class KiwiFern
	{
		name = "Silver Fern";
		texture = "exile_assets\texture\flag\flag_misc_kiwifern_co.paa";
		uids[] = {};
	};
	class Trololol
	{
		name = "Trololol";
		texture = "exile_assets\texture\flag\flag_misc_trololol_co.paa";
		uids[] = {};
	};
	class DreamCat
	{
		name = "Dream Cat";
		texture = "exile_assets\texture\flag\flag_misc_dream_cat_co.paa";
		uids[] = {};
	};
	class Pirate
	{
		name = "Pirate";
		texture = "exile_assets\texture\flag\flag_misc_pirate_co.paa";
		uids[] = {};
	};
	class Pedobear
	{
		name = "Pedobear";
		texture = "exile_assets\texture\flag\flag_misc_pedobear_co.paa";
		uids[] = {};
	};
	class Petoria
	{
		name = "Petoria";
		texture = "exile_assets\texture\flag\flag_misc_petoria_co.paa";
		uids[] = {};
	};
	class Smashing
	{
		name = "Smashing";
		texture = "exile_assets\texture\flag\flag_misc_smashing_co.paa";
		uids[] = {};
	};
	class LemonParty
	{
		name = "Lemon Party";
		texture = "exile_assets\texture\flag\flag_misc_lemonparty_co.paa";
		uids[] = {};
	};
	class RMA
	{
		name = "Respect my autoritah!";
		texture = "exile_assets\texture\flag\flag_misc_rma_co.paa";
		uids[] = {};
	};
	class CP
	{
		name = "ClarkyCallad";
		texture = "exile_assets\texture\flag\flag_cp_co.paa";
		uids[] = {};
	};
	class Trouble2_NA
	{
		name = "Trouble2";
		texture = "exile_assets\texture\flag\flag_trouble2_co.paa";
		uids[] = {};
	};
	class ExileCity
	{
		name = "Exile City";
		texture = "exile_assets\texture\flag\flag_exile_city_co.paa";
		uids[] = {};
	};
	class Eraser1
	{
		name = "eraser1";
		texture = "exile_assets\texture\flag\flag_misc_eraser1_co.paa";
		uids[] = {};
	};
	class Trespassers
	{
		name = "Trespassers will be eaten";
		texture = "exile_assets\texture\flag\flag_misc_willbeeaten_co.paa";
		uids[] = {};
	};
	class PrivateProperty
	{
		name = "Private Property";
		texture = "exile_assets\texture\flag\flag_misc_privateproperty_co.paa";
		uids[] = {};
	};
	class NuCoolR
	{
		name = "Nu Cool R";
		texture = "exile_assets\texture\flag\flag_misc_nuclear_co.paa";
		uids[] = {};
	};
	class LazerKiwi
	{
		name = "Lazer Kiwi";
		texture = "exile_assets\texture\flag\flag_misc_lazerkiwi_co.paa";
		uids[] = {};
	};
	class Beardageddon
	{
		name = "Beardageddon";
		texture = "exile_assets\texture\flag\flag_misc_beardageddon_co.paa";
		uids[] = {};
	};
	class CountryDK
	{
		name = "Denmark";
		texture = "exile_assets\texture\flag\flag_country_dk_co.paa";
		uids[] = {};
	};
	class CountryIT
	{
		name = "Italy";
		texture = "exile_assets\texture\flag\flag_country_it_co.paa";
		uids[] = {};
	};
	class Alkohol
	{
		name = "Alkohol";
		texture = "exile_assets\texture\flag\flag_misc_alkohol_co.paa";
		uids[] = {};
	};
	class Kickass
	{
		name = "Fort Kickass";
		texture = "exile_assets\texture\flag\flag_misc_kickass_co.paa";
		uids[] = {};
	};
	class Knuckles
	{
		name = "Da Wae?";
		texture = "exile_assets\texture\flag\flag_misc_knuckles_co.paa";
		uids[] = {};
	};
	class Snake
	{
		name = "Don't Tread on Me";
		texture = "exile_assets\texture\flag\flag_misc_snake_co.paa";
		uids[] = {};
	};
	class WeebCity
	{
		name = "Weeb City";
		texture = "exile_assets\texture\flag\flag_misc_weeb_co.paa";
		uids[] = {};
	};
};
class CfgFontFamilies
{
	class RobotoRegular
	{
		spaceWidth = 0.7;
		spacing = 0.065;
		fonts[] = {"\exile_assets\font\RobotoRegular\RobotoRegular6","\exile_assets\font\RobotoRegular\RobotoRegular7","\exile_assets\font\RobotoRegular\RobotoRegular8","\exile_assets\font\RobotoRegular\RobotoRegular9","\exile_assets\font\RobotoRegular\RobotoRegular10","\exile_assets\font\RobotoRegular\RobotoRegular11","\exile_assets\font\RobotoRegular\RobotoRegular12","\exile_assets\font\RobotoRegular\RobotoRegular13","\exile_assets\font\RobotoRegular\RobotoRegular14","\exile_assets\font\RobotoRegular\RobotoRegular15","\exile_assets\font\RobotoRegular\RobotoRegular16","\exile_assets\font\RobotoRegular\RobotoRegular17","\exile_assets\font\RobotoRegular\RobotoRegular18","\exile_assets\font\RobotoRegular\RobotoRegular19","\exile_assets\font\RobotoRegular\RobotoRegular20","\exile_assets\font\RobotoRegular\RobotoRegular21","\exile_assets\font\RobotoRegular\RobotoRegular22","\exile_assets\font\RobotoRegular\RobotoRegular23","\exile_assets\font\RobotoRegular\RobotoRegular24","\exile_assets\font\RobotoRegular\RobotoRegular25","\exile_assets\font\RobotoRegular\RobotoRegular26","\exile_assets\font\RobotoRegular\RobotoRegular27","\exile_assets\font\RobotoRegular\RobotoRegular28","\exile_assets\font\RobotoRegular\RobotoRegular29","\exile_assets\font\RobotoRegular\RobotoRegular30","\exile_assets\font\RobotoRegular\RobotoRegular31","\exile_assets\font\RobotoRegular\RobotoRegular34","\exile_assets\font\RobotoRegular\RobotoRegular35","\exile_assets\font\RobotoRegular\RobotoRegular37","\exile_assets\font\RobotoRegular\RobotoRegular46"};
	};
	class RobotoMedium
	{
		spaceWidth = 0.7;
		spacing = 0.065;
		fonts[] = {"\exile_assets\font\RobotoMedium\RobotoMedium6","\exile_assets\font\RobotoMedium\RobotoMedium7","\exile_assets\font\RobotoMedium\RobotoMedium8","\exile_assets\font\RobotoMedium\RobotoMedium9","\exile_assets\font\RobotoMedium\RobotoMedium10","\exile_assets\font\RobotoMedium\RobotoMedium11","\exile_assets\font\RobotoMedium\RobotoMedium12","\exile_assets\font\RobotoMedium\RobotoMedium13","\exile_assets\font\RobotoMedium\RobotoMedium14","\exile_assets\font\RobotoMedium\RobotoMedium15","\exile_assets\font\RobotoMedium\RobotoMedium16","\exile_assets\font\RobotoMedium\RobotoMedium17","\exile_assets\font\RobotoMedium\RobotoMedium18","\exile_assets\font\RobotoMedium\RobotoMedium19","\exile_assets\font\RobotoMedium\RobotoMedium20","\exile_assets\font\RobotoMedium\RobotoMedium21","\exile_assets\font\RobotoMedium\RobotoMedium22","\exile_assets\font\RobotoMedium\RobotoMedium23","\exile_assets\font\RobotoMedium\RobotoMedium24","\exile_assets\font\RobotoMedium\RobotoMedium25","\exile_assets\font\RobotoMedium\RobotoMedium26","\exile_assets\font\RobotoMedium\RobotoMedium27","\exile_assets\font\RobotoMedium\RobotoMedium28","\exile_assets\font\RobotoMedium\RobotoMedium29","\exile_assets\font\RobotoMedium\RobotoMedium30","\exile_assets\font\RobotoMedium\RobotoMedium31","\exile_assets\font\RobotoMedium\RobotoMedium34","\exile_assets\font\RobotoMedium\RobotoMedium35","\exile_assets\font\RobotoMedium\RobotoMedium37","\exile_assets\font\RobotoMedium\RobotoMedium46"};
	};
	class OrbitronLight
	{
		spaceWidth = 0.7;
		spacing = 0.065;
		fonts[] = {"\exile_assets\font\OrbitronLight\OrbitronLight6","\exile_assets\font\OrbitronLight\OrbitronLight7","\exile_assets\font\OrbitronLight\OrbitronLight8","\exile_assets\font\OrbitronLight\OrbitronLight9","\exile_assets\font\OrbitronLight\OrbitronLight10","\exile_assets\font\OrbitronLight\OrbitronLight11","\exile_assets\font\OrbitronLight\OrbitronLight12","\exile_assets\font\OrbitronLight\OrbitronLight13","\exile_assets\font\OrbitronLight\OrbitronLight14","\exile_assets\font\OrbitronLight\OrbitronLight15","\exile_assets\font\OrbitronLight\OrbitronLight16","\exile_assets\font\OrbitronLight\OrbitronLight17","\exile_assets\font\OrbitronLight\OrbitronLight18","\exile_assets\font\OrbitronLight\OrbitronLight19","\exile_assets\font\OrbitronLight\OrbitronLight20","\exile_assets\font\OrbitronLight\OrbitronLight21","\exile_assets\font\OrbitronLight\OrbitronLight22","\exile_assets\font\OrbitronLight\OrbitronLight23","\exile_assets\font\OrbitronLight\OrbitronLight24","\exile_assets\font\OrbitronLight\OrbitronLight25","\exile_assets\font\OrbitronLight\OrbitronLight26","\exile_assets\font\OrbitronLight\OrbitronLight27","\exile_assets\font\OrbitronLight\OrbitronLight28","\exile_assets\font\OrbitronLight\OrbitronLight29","\exile_assets\font\OrbitronLight\OrbitronLight30","\exile_assets\font\OrbitronLight\OrbitronLight31","\exile_assets\font\OrbitronLight\OrbitronLight34","\exile_assets\font\OrbitronLight\OrbitronLight35","\exile_assets\font\OrbitronLight\OrbitronLight37","\exile_assets\font\OrbitronLight\OrbitronLight46"};
	};
	class OrbitronMedium
	{
		spaceWidth = 0.7;
		spacing = 0.065;
		fonts[] = {"\exile_assets\font\OrbitronMedium\OrbitronMedium6","\exile_assets\font\OrbitronMedium\OrbitronMedium7","\exile_assets\font\OrbitronMedium\OrbitronMedium8","\exile_assets\font\OrbitronMedium\OrbitronMedium9","\exile_assets\font\OrbitronMedium\OrbitronMedium10","\exile_assets\font\OrbitronMedium\OrbitronMedium11","\exile_assets\font\OrbitronMedium\OrbitronMedium12","\exile_assets\font\OrbitronMedium\OrbitronMedium13","\exile_assets\font\OrbitronMedium\OrbitronMedium14","\exile_assets\font\OrbitronMedium\OrbitronMedium15","\exile_assets\font\OrbitronMedium\OrbitronMedium16","\exile_assets\font\OrbitronMedium\OrbitronMedium17","\exile_assets\font\OrbitronMedium\OrbitronMedium18","\exile_assets\font\OrbitronMedium\OrbitronMedium19","\exile_assets\font\OrbitronMedium\OrbitronMedium20","\exile_assets\font\OrbitronMedium\OrbitronMedium21","\exile_assets\font\OrbitronMedium\OrbitronMedium22","\exile_assets\font\OrbitronMedium\OrbitronMedium23","\exile_assets\font\OrbitronMedium\OrbitronMedium24","\exile_assets\font\OrbitronMedium\OrbitronMedium25","\exile_assets\font\OrbitronMedium\OrbitronMedium26","\exile_assets\font\OrbitronMedium\OrbitronMedium27","\exile_assets\font\OrbitronMedium\OrbitronMedium28","\exile_assets\font\OrbitronMedium\OrbitronMedium29","\exile_assets\font\OrbitronMedium\OrbitronMedium30","\exile_assets\font\OrbitronMedium\OrbitronMedium31","\exile_assets\font\OrbitronMedium\OrbitronMedium34","\exile_assets\font\OrbitronMedium\OrbitronMedium35","\exile_assets\font\OrbitronMedium\OrbitronMedium37","\exile_assets\font\OrbitronMedium\OrbitronMedium46"};
	};
	class PressStart2P
	{
		spaceWidth = 0.7;
		spacing = 0.065;
		fonts[] = {"\exile_assets\font\PressStart2P\PressStart2P6","\exile_assets\font\PressStart2P\PressStart2P7","\exile_assets\font\PressStart2P\PressStart2P8","\exile_assets\font\PressStart2P\PressStart2P9","\exile_assets\font\PressStart2P\PressStart2P10","\exile_assets\font\PressStart2P\PressStart2P11","\exile_assets\font\PressStart2P\PressStart2P12","\exile_assets\font\PressStart2P\PressStart2P13","\exile_assets\font\PressStart2P\PressStart2P14","\exile_assets\font\PressStart2P\PressStart2P15","\exile_assets\font\PressStart2P\PressStart2P16","\exile_assets\font\PressStart2P\PressStart2P17","\exile_assets\font\PressStart2P\PressStart2P18","\exile_assets\font\PressStart2P\PressStart2P19","\exile_assets\font\PressStart2P\PressStart2P20","\exile_assets\font\PressStart2P\PressStart2P21","\exile_assets\font\PressStart2P\PressStart2P22","\exile_assets\font\PressStart2P\PressStart2P23","\exile_assets\font\PressStart2P\PressStart2P24","\exile_assets\font\PressStart2P\PressStart2P25","\exile_assets\font\PressStart2P\PressStart2P26","\exile_assets\font\PressStart2P\PressStart2P27","\exile_assets\font\PressStart2P\PressStart2P28","\exile_assets\font\PressStart2P\PressStart2P29","\exile_assets\font\PressStart2P\PressStart2P30","\exile_assets\font\PressStart2P\PressStart2P31","\exile_assets\font\PressStart2P\PressStart2P34","\exile_assets\font\PressStart2P\PressStart2P35","\exile_assets\font\PressStart2P\PressStart2P37","\exile_assets\font\PressStart2P\PressStart2P46"};
	};
};
class CfgFunctions
{
	class A3
	{
		tag = "BIS";
		project = "arma3";
		class Ambient
		{
			file = "exile_client\trashBin";
			class animalBehaviour{};
		};
		class Misc
		{
			delete progressLoadingScreen;
		};
		class BecauseArma
		{
			file = "exile_client\bootstrap";
			class progressLoadingScreen{};
		};
		class MP
		{
			file = "exile_client\trashBin";
			class execFSM{};
			class execVM{};
			class execRemote{};
			class addScore{};
			class setRespawnDelay{};
			class onPlayerConnected{};
			class initPlayable{};
			class missionTimeLeft{};
			class MP{};
			class MPexec{};
			class initMultiplayer{};
			class call{};
			class spawn{};
			class deleteVehicleCrew{};
			class admin{};
			class spawnOrdered{};
		};
	};
	class ExileClient
	{
		class Bootstrap
		{
			file = "exile_client\bootstrap";
			class preStart
			{
				preStart = 1;
			};
			class preInit
			{
				preInit = 1;
			};
			class postInit
			{
				postInit = 1;
			};
		};
		class FiniteStateMachine
		{
			file = "exile_client\fsm";
			class login
			{
				ext = ".fsm";
			};
			class scheduledCall
			{
				ext = ".fsm";
			};
			class Exile_Animal_Goat
			{
				ext = ".fsm";
			};
			class Exile_Animal_Hen
			{
				ext = ".fsm";
			};
			class Exile_Animal_Rooster
			{
				ext = ".fsm";
			};
			class Exile_Animal_Sheep
			{
				ext = ".fsm";
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureExileAxeSwing01: Default
		{
			file = "\exile_assets\animation\Exile_Axe_Swing01.rtm";
			looped = 0;
			speed = 1.5;
			mask = "launcher";
			headBobStrength = 0.2;
			headBobMode = 2;
			disableWeapons = 0;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
		};
		class GestureExileSledgeHammerSwing01: Default
		{
			file = "\exile_assets\animation\Exile_SledgeHammer_Swing01.rtm";
			looped = 0;
			speed = 0.75;
			mask = "launcher";
			headBobStrength = 0.2;
			headBobMode = 2;
			disableWeapons = 0;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
		};
		class GestureExileSuicide01: Default
		{
			file = "\exile_assets\animation\Exile_Suicide01.rtm";
			looped = 0;
			speed = 0.143541;
			mask = "rightHand";
			headBobStrength = 0.2;
			headBobMode = 2;
			disableWeapons = 1;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
		};
		class GestureExileSuicide02: Default
		{
			file = "\exile_assets\animation\Exile_Suicide02.rtm";
			looped = 0;
			speed = 0.124481;
			mask = "rightHand";
			headBobStrength = 0.2;
			headBobMode = 2;
			disableWeapons = 1;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
		};
		class GestureExileRussianRoulette01: Default
		{
			file = "\exile_assets\animation\Exile_RussianRoulette01.rtm";
			looped = 0;
			speed = 0.3;
			mask = "upperTorsoSelfShoot";
			headBobStrength = 0.2;
			headBobMode = 2;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			rightHandIKBeg = 0;
			rightHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			rightHandIKCurve[] = {};
			showItemInRightHand = 0;
			showHandGun = 1;
			weaponLowered = 0;
			canPullTrigger = 1;
			forceAim = 1;
			enableOptics = "false";
			showWeaponAim = "false";
		};
		class GestureExileSuicideCancel01: Default
		{
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureHi";
			looped = 0;
			speed = 1;
			mask = "rightHand";
			headBobStrength = 0.2;
			headBobMode = 2;
			disableWeapons = 1;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
		};
	};
	class BlendAnims
	{
		upperTorsoSelfShoot[] = {"head",1,"neck1",1,"neck",1,"weapon",0,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",0,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1,"pelvis",1};
	};
};
class CfgGlasses
{
	class G_I_Diving;
	class G_O_Diving;
	class G_B_Diving;
	class Exile_Glasses_Diving_AAF: G_I_Diving
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Diving Goggles (AAF, Forced)";
		mode = 0;
	};
	class Exile_Glasses_Diving_CSAT: G_O_Diving
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Diving Goggles (CSAT, Forced)";
		mode = 0;
	};
	class Exile_Glasses_Diving_NATO: G_B_Diving
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Diving Goggles (NATO, Forced)";
		mode = 0;
	};
};
class CfgInGameUI
{
	class Actions
	{
		align = "0x00 + 0x08";
		shadow = 0;
		x = "(safeZoneX + safeZoneW * 0.5)";
		y = "(safeZoneY + safeZoneH * 0.6)";
		w = "300 * pixelW";
		font = "PuristaMedium";
		size = "18 * pixelH";
		rows = "5*SafeZoneH";
		arrowWidth = 0.015;
		arrowHeight = 0.02;
		iconArrowUp = "\A3\ui_f\data\igui\cfg\actions\arrow_up_gs.paa";
		iconArrowDown = "\A3\ui_f\data\igui\cfg\actions\arrow_down_gs.paa";
		background = "\A3\ui_f\data\igui\cfg\imageCornerElement_ca.paa";
		underlineSelected = 0;
		colorBackground[] = {"19/255","22/255","27/255",0.9};
		colorText[] = {"111/255","113/255","122/255",1};
		colorSelect[] = {1,1,1,1};
		colorBackgroundSelected[] = {"63/255","212/255","252/255",0.6};
	};
	class DefaultAction
	{
		font = "PuristaMedium";
		size = "18 * pixelH";
		colorText[] = {"255/255","180/255","24/255",1};
		shadow = 2;
		showHint = 0;
		showNext = 0;
		showLine = 0;
		relativeToCursor = 1;
		offsetX = 0.0;
		offsetY = 0.045;
		hotspotX = 0.0;
		hotspotY = 0.0;
		textTipFade = 0.4;
		textTipDelay = 0.4;
	};
	class CommandBar
	{
		left = -1;
		top = -1;
		show = 0;
	};
};
class CfgInventoryGlobalVariable
{
	maxSoldierLoad = 1700;
};
class CfgLocationTypes
{
	class Name;
	class ExileTerritory: Name
	{
		color[] = {0.91,0,0,1};
		drawStyle = "name";
		font = "PuristaMedium";
		name = "Exile Territory";
		textSize = 0.05;
		size = 15;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class HandGrenade_Stone;
	class Exile_AbstractItem_Interaction_Consuming
	{
		scope = 1;
		sounds[] = {};
		returnedItem = "";
		stopBleeding = 0;
		animations[] = {};
		tools[] = {};
	};
	class Exile_AbstractItem_Interaction_Eating: Exile_AbstractItem_Interaction_Consuming
	{
		scope = 1;
		sounds[] = {"SndExileHeartbeatEating01","SndExileHeartbeatEating02"};
	};
	class Exile_AbstractItem_Interaction_Eating_Can: Exile_AbstractItem_Interaction_Eating
	{
		tools[] = {"Exile_Item_CanOpener"};
	};
	class Exile_AbstractItem_Interaction_Drinking: Exile_AbstractItem_Interaction_Consuming
	{
		scope = 1;
		sounds[] = {"SndExileHeartbeatDrinking01"};
	};
	class Exile_AbstractItem_Interaction_Consuming_Healing: Exile_AbstractItem_Interaction_Consuming
	{
		animations[] = {"AinvPknlMstpSlayWnonDnon_medic","AinvPknlMstpSlayWrflDnon_medic","AinvPknlMstpSlayWpstDnon_medic","AinvPknlMstpSlayWrflDnon_medic","AinvPknlMstpSlayWnonDnon_medic","AinvPknlMstpSlayWnonDnon_medic","AinvPknlMstpSlayWrflDnon_medic","AinvPknlMstpSlayWpstDnon_medic","AinvPknlMstpSlayWrflDnon_medic","AinvPknlMstpSlayWnonDnon_medic","AinvPpneMstpSlayWnonDnon_medic","AinvPpneMstpSlayWrflDnon_medic","AinvPpneMstpSlayWpstDnon_medic","AinvPpneMstpSlayWrflDnon_medic","AinvPpneMstpSlayWnonDnon_medic"};
	};
	class Exile_AbstractItem_Interaction_Using
	{
		scope = 1;
		chance = 100;
		successFunction = "";
		successNotification = "";
	};
	class Exile_AbstractItem_Interaction_Constructing
	{
		scope = 1;
	};
	class Exile_AbstractItem: CA_Magazine
	{
		scope = 1;
		descriptionShort = "Dummy";
		displayName = "Dummy";
		count = 1;
		mass = 1;
		picture = "\exile_assets\texture\item\Dummy.paa";
		model = "\exile_assets\model\Dummy.p3d";
		class Interactions{};
	};
	class Exile_Item_BreachingCharge_Wood: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Breaching Charge (Wood)";
		descriptionShort = "A basic breaching charge to destroy wood constructions.<br/><br/>It requires three breaching charges to destroy one construction object. Can only plant one at a time per construction object.";
		mass = 20;
		model = "\A3\Weapons_F\Explosives\c4_charge_small";
		picture = "\A3\Weapons_F\Data\UI\gear_c4_charge_small_CA.paa";
	};
	class Exile_Item_BreachingCharge_Metal: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Breaching Charge (Metal)";
		descriptionShort = "Can be used to destroy reinforced wood constructions.<br/><br/>It requires three breaching charges to destroy one construction object. Can only plant one at a time per construction object.";
		mass = 80;
		model = "\A3\Weapons_F\Explosives\satchel_i";
		picture = "\A3\Weapons_f\data\UI\gear_satchel_CA.paa";
	};
	class Exile_Item_BreachingCharge_BigMomma: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Breaching Charge (Big Momma)";
		descriptionShort = "An expensive breaching charge that is used to destroy concrete constructions.<br/><br/>It requires three breaching charges to destroy one construction object. Can only plant one at a time per construction object.";
		mass = 250;
		model = "\exile_assets\model\Exile_Item_BigMomma.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_BigMomma_ca.paa";
	};
	class Exile_Item_Bandage: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Bandage";
		descriptionShort = "A small bandage to stop bleeding wounds.<br/>Health: +5%/10s";
		mass = 2;
		model = "\A3\Structures_F_EPA\Items\Medical\Bandage_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Bandage.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				stopBleeding = 1;
				effects[] = {{0,5,10}};
			};
		};
	};
	class Exile_Item_BaseCameraKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Security Camera";
		descriptionShort = "I see something you don't see!";
		mass = 25;
		model = "exile_assets\model\Exile_Construction_BaseCamera_world.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Camera.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_BBQSandwich: Exile_AbstractItem
	{
		scope = 2;
		displayName = "BBQ Sandwich (Raw)";
		descriptionShort = "Some things shouldn't be canned.<br/>Hunger +40%/60s";
		model = "\exile_assets\model\Exile_Item_BBQSandwich.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_BBQSandwich.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,40,60}};
			};
		};
	};
	class Exile_Item_BBQSandwich_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "BBQ Sandwich (Cooked)";
		descriptionShort = "Some things shouldn't be canned.<br/>Hunger +100%/30s";
		model = "\exile_assets\model\Exile_Item_BBQSandwich_Cooked.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_BBQSandwich_Cooked.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,100,30}};
			};
		};
	};
	class Exile_Item_BeefParts: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Beef Parts";
		descriptionShort = "A vegetarians nightmare. <br/>Hunger: +30%/30s";
		model = "\exile_assets\model\Exile_Item_BeefParts.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_BeefParts.paa";
		mass = 15;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,30,30}};
			};
		};
	};
	class Exile_Item_Beer: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Hausmann Beer";
		descriptionShort = "No expiration date, no problem! <br/>Thirst: +75%/30s<br/>Temperature: +0.5°C%/10s<br/>Alc. Vol.: 7‰";
		picture = "\exile_assets\texture\item\Exile_Item_Beer.paa";
		model = "\exile_assets\model\Exile_Item_Beer.p3d";
		mass = 10;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[] = {{3,75,30},{4,0.4,0},{5,0.5,10}};
			};
		};
	};
	class Exile_Item_BushKit_Green: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Bush Kit (Green)";
		descriptionShort = "We want: A SHRUBBERY!";
		mass = 50;
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				successFunction = "ExileClient_object_bush_attachGreenBush";
				successNotification = "TurnedIntoABushNotification";
			};
		};
	};
	class Exile_Item_CamoTentKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Camo Tent Kit";
		descriptionShort = "A packed tent.";
		model = "\a3\structures_f\Civ\Camping\Sleeping_bag_folded_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_CamoTentKit.paa";
		mass = 10;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_CampFireKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Camp Fire Kit";
		descriptionShort = "Camping Fire";
		mass = 10;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Construction_CampFire.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_CanOpener: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Can Opener";
		descriptionShort = "Used to open cans.";
		model = "\A3\Structures_F_EPA\Items\Tools\CanOpener_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_CanOpener.paa";
		mass = 5;
	};
	class Exile_Item_Can_Empty: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Can (Empty)";
		descriptionShort = "An empty tin can.";
		model = "\exile_assets\model\Exile_Item_Can_Empty.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Can_Empty.paa";
		mass = 5;
	};
	class Exile_Item_CarWheel: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Car Wheel";
		descriptionShort = "A simple car wheel. Looks a bit like a tire.";
		model = "\A3\Structures_F\Civ\Garbage\Tyre_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_CarWheel.paa";
		mass = 100;
	};
	class Exile_Item_CatFood: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Cat Food (Raw)";
		descriptionShort = "Meow... <br/>Hunger: +40%/40s";
		model = "\exile_assets\model\Exile_Item_Catfood.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Catfood.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,40,40}};
			};
		};
	};
	class Exile_Item_CatFood_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Cat Food (Cooked)";
		descriptionShort = "Meow... <br/>Hunger: +100%/20s";
		model = "\exile_assets\model\Exile_Item_Catfood_Cooked.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Catfood_Cooked.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,100,20}};
			};
		};
	};
	class Exile_Item_Cement: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Bag of Cement";
		picture = "\exile_assets\texture\item\Exile_Item_Cement.paa";
		model = "\exile_assets\model\Exile_Item_Cement.p3d";
		descriptionShort = "Perfect for making shoes that fits every size!";
		mass = 25;
	};
	class Exile_Item_Cheathas: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Cheathas";
		descriptionShort = "Perfect for a cozy TV evening with friends. If you have some. <br/>Hunger: +30%/30s";
		model = "\exile_assets\model\Exile_Item_Cheathas.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Cheathas.paa";
		mass = 15;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,30,30}};
			};
		};
	};
	class Exile_Item_ChocolateMilk: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Chocolate Milk";
		descriptionShort = "Half chocolate, half questionable milk.<br/>Thirst: +35%/10s";
		picture = "\exile_assets\texture\item\Exile_Item_ChocolateMilk_ca.paa";
		model = "\exile_assets\model\Exile_Item_ChocolateMilk.p3d";
		mass = 7;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[] = {{3,35,10}};
			};
		};
	};
	class Exile_Item_ChristmasTinner: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Christmas Tinner (Raw)";
		descriptionShort = "Festive!<br/>Hunger: +40%/60s";
		model = "\exile_assets\model\Exile_Item_ChristmasTinner.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_ChristmasTinner.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,40,60}};
			};
		};
	};
	class Exile_Item_ChristmasTinner_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Christmas Tinner (Cooked)";
		descriptionShort = "Festive!<br/>Hunger: +100%/30s";
		model = "\exile_assets\model\Exile_Item_ChristmasTinner_Cooked.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_ChristmasTinner_Cooked.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,100,30}};
			};
		};
	};
	class Exile_Item_CockONut: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Cock'O'Nut";
		descriptionShort = "The real candy bar. <br/>Hunger: +20%/40s";
		model = "\exile_assets\model\Exile_Item_CockONut.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_CockONut.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,20,40}};
			};
		};
	};
	class Exile_Item_Codelock: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Code Lock";
		descriptionShort = "Used to lock doors or gates on bases.";
		model = "\exile_assets\model\Exile_Item_Codelock.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Codelock.paa";
		mass = 5;
	};
	class Exile_Item_ConcreteDoorKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Concrete Door Kit";
		descriptionShort = "Obviously an even better construction for knock-knock jokes.";
		mass = 100;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_ConcreteDoorKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_ConcreteDoorwayKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Concrete Doorway Kit";
		descriptionShort = "The perfect construction for knock-knock jokes.";
		mass = 100;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_ConcreteDoorwayKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_ConcreteDrawBridgeKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Concrete DrawBridge Kit";
		descriptionShort = "A 6x3m drawbridge made out of concrete and steel.";
		mass = 100;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_ConcreteDrawBridgeKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_ConcreteFloorKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Concrete Floor Kit";
		descriptionShort = "A 6x6m floor made out of concrete.";
		mass = 100;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_ConcreteFloorKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_ConcreteFloorPortKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Concrete Floor Port Kit";
		descriptionShort = "A 6x6m floor made out of concrete. This is a special floor with a hole in it. Place stairs inside to get to the next floor or use it was a secret escape on the bottom of your base.";
		mass = 100;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_ConcreteFloorPortKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_ConcreteFloorPortSmallKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Concrete Floor Port Kit (Small)";
		descriptionShort = "A 6x6m floor made out of concrete. This is a special floor with a hole in it. Expand the functionality of this floor with a metal ladder!";
		mass = 100;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_ConcreteFloorPortSmallKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_ConcreteGateKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Concrete Gate Kit";
		descriptionShort = "Similar to a door, but is used for vehicles.";
		mass = 100;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_ConcreteGate.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_ConcreteLadderHatchKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Concrete Ladder Hatch";
		descriptionShort = "A 6x6m floor made out of concrete. But this floor is different, it has a metal ladder hatch in the center!";
		mass = 100;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_ConcreteLadderHatchKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_ConcreteStairsKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Concrete Stairs Kit";
		descriptionShort = "Since we do not have an elevator yet...";
		mass = 100;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_ConcreteStairsKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_ConcreteSupportKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Concrete Support Kit";
		descriptionShort = "An effective way to build on not-so-flat terrain.";
		mass = 100;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_ConcreteSupportKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_ConcreteWallKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Concrete Wall Kit";
		descriptionShort = "A 6x3m wall made out of concrete and steel.";
		mass = 100;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_ConcreteWallKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_ConcreteWindowKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Concrete Window Kit";
		descriptionShort = "Offers a good position to shoot out of your base. Does not contain glass.";
		mass = 100;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_ConcreteWindowKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_CookingPot: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Cooking Pot";
		descriptionShort = "If you know how to cook, this pot will surely become handy sometime.";
		model = "\exile_assets\model\Exile_Item_Cookingpot.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Cookingpot.paa";
		mass = 20;
	};
	class Exile_Item_CordlessScrewdriver: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Cordless Screwdriver";
		descriptionShort = "Let's drill some holes... :)";
		model = "\A3\Structures_F\Items\Tools\DrillAku_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_CordlessScrewdriver.paa";
		mass = 30;
	};
	class Exile_Item_Defibrillator: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Defibrillator";
		descriptionShort = "";
		model = "\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Defibrillator.paa";
		mass = 30;
	};
	class Exile_Item_DogFood: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Dog Food (Raw)";
		descriptionShort = "Woof, Woof, Bark! <br/>Hunger: +30%/30s";
		model = "\exile_assets\model\Exile_Item_DogFood.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_DogFood.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,30,30}};
			};
		};
	};
	class Exile_Item_DogFood_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Dog Food (Cooked)";
		descriptionShort = "Good boy! <br/>Hunger: +100%/20s";
		model = "\exile_assets\model\Exile_Item_DogFood_Open.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_DogFood_Open.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,100,20}};
			};
		};
	};
	class Exile_Item_DsNuts: Exile_AbstractItem
	{
		scope = 2;
		displayName = "D's Nuts";
		descriptionShort = "A tiny can with huge nuts. <br/>Hunger: +30%/60s";
		model = "\exile_assets\model\Exile_Item_DsNuts.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_DsNuts.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,30,60}};
			};
		};
	};
	class Exile_Item_DuctTape: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Duct Tape";
		descriptionShort = "Can fix almost anything. If it moves and it should not, use Duct Tape.";
		model = "\a3\structures_f_epa\Items\Tools\DuctTape_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_DuctTape.paa";
		mass = 5;
	};
	class Exile_Item_EMRE: Exile_AbstractItem
	{
		scope = 2;
		displayName = "EMRE";
		descriptionShort = "Extra delicious, well tinned remains. <br/>Hunger: +75%/60s";
		model = "\exile_assets\model\Exile_Item_EMRE.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_EMRE.paa";
		mass = 20;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,75,60}};
			};
		};
	};
	class Exile_Item_EnergyDrink: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Energy Drink";
		descriptionShort = "Gotta go fast!<br/>Thirst: +75%/20s";
		picture = "\exile_assets\texture\item\Exile_Item_EnergyDrink.paa";
		model = "\exile_assets\model\Exile_Item_EnergyDrink.p3d";
		mass = 7;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[] = {{3,75,20}};
			};
		};
	};
	class Exile_Item_ExtensionCord: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Extension Cord";
		descriptionShort = "Used to connect electronic devices to a power supply.";
		model = "\a3\structures_f\Items\Electronics\ExtensionCord_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_ExtensionCord.paa";
		mass = 5;
	};
	class Exile_Item_FireExtinguisher: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Fire Extinguisher";
		descriptionShort = "Used to put out fires.";
		model = "\A3\Structures_F_EPA\Items\Tools\FireExtinguisher_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_FireExtinguisher.paa";
		mass = 30;
	};
	class Exile_Item_Flag: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Territory Flag Kit";
		descriptionShort = "A flag in cardboard box and your cats favorite toy. Can be used to setup a base zone flag.";
		model = "\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass = 50;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_FlagStolen1: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Stolen Flag (Level 1)";
		descriptionShort = "Can be sold at the trader.";
		model = "\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass = 50;
	};
	class Exile_Item_FlagStolen10: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Stolen Flag (Level 10)";
		descriptionShort = "Can be sold at the trader.";
		model = "\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass = 50;
	};
	class Exile_Item_FlagStolen2: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Stolen Flag (Level 2)";
		descriptionShort = "Can be sold at the trader.";
		model = "\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass = 50;
	};
	class Exile_Item_FlagStolen3: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Stolen Flag (Level 3)";
		descriptionShort = "Can be sold at the trader.";
		model = "\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass = 50;
	};
	class Exile_Item_FlagStolen4: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Stolen Flag (Level 4)";
		descriptionShort = "Can be sold at the trader.";
		model = "\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass = 50;
	};
	class Exile_Item_FlagStolen5: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Stolen Flag (Level 5)";
		descriptionShort = "Can be sold at the trader.";
		model = "\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass = 50;
	};
	class Exile_Item_FlagStolen6: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Stolen Flag (Level 6)";
		descriptionShort = "Can be sold at the trader.";
		model = "\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass = 50;
	};
	class Exile_Item_FlagStolen7: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Stolen Flag (Level 7)";
		descriptionShort = "Can be sold at the trader.";
		model = "\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass = 50;
	};
	class Exile_Item_FlagStolen8: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Stolen Flag (Level 8)";
		descriptionShort = "Can be sold at the trader.";
		model = "\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass = 50;
	};
	class Exile_Item_FlagStolen9: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Stolen Flag (Level 9)";
		descriptionShort = "Can be sold at the trader.";
		model = "\exile_assets\model\Exile_Item_Flagbox.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Flagbox.paa";
		mass = 50;
	};
	class Exile_Item_FloodLightKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Flood Light Kit";
		descriptionShort = "Flood Light";
		mass = 10;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Construction_FloodLight.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_Foolbox: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Foolbox";
		picture = "\exile_assets\texture\item\Exile_Item_Toolbox.paa";
		model = "\exile_assets\model\Exile_Item_Toolbox.p3d";
		descriptionShort = "The ultimate tool box for the overly-manly-man.";
		mass = 50;
	};
	class Exile_Item_FortificationUpgrade: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Fortification Upgrade Kit";
		picture = "\exile_assets\texture\item\Exile_Item_MetalBoard.paa";
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		descriptionShort = "Used to upgrade wood constructions to fortified wood constructions";
		mass = 100;
	};
	class Exile_Item_FuelBarrelEmpty: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Fuel Barrel (Empty)";
		descriptionShort = "";
		model = "\a3\structures_f\Items\Vessels\metalbarrel_f.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_FuelBarrel.paa";
		mass = 150;
	};
	class Exile_Item_FuelBarrelFull: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Fuel Barrel (Full)";
		descriptionShort = "";
		model = "\a3\structures_f\Items\Vessels\metalbarrel_f.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_FuelBarrel.paa";
		mass = 150;
		count = 300;
	};
	class Exile_Item_FuelCanisterEmpty: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Fuel Canister (Empty)";
		descriptionShort = "";
		model = "\a3\structures_f\Items\Vessels\CanisterFuel_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_FuelCanister.paa";
		mass = 2;
	};
	class Exile_Item_FuelCanisterFull: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Fuel Canister (Full)";
		descriptionShort = "";
		model = "\a3\structures_f\Items\Vessels\CanisterFuel_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_FuelCanister.paa";
		mass = 22;
		count = 20;
	};
	class Exile_Item_GloriousKnakworst: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Glorious Knakworst (Raw)";
		descriptionShort = "As Dutch as it gets. <br/>Hunger +60%/30s";
		model = "\exile_assets\model\Exile_Item_Knakworst.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Knakworst.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,60,30}};
			};
		};
	};
	class Exile_Item_GloriousKnakworst_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Glorious Knakworst (Cooked)";
		descriptionShort = "As Dutch as it gets. <br/>Hunger +100%/20s";
		model = "\exile_assets\model\Exile_Item_Knakworst_Cooked.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Knakworst_Cooked.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,100,20}};
			};
		};
	};
	class Exile_Item_Grinder: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Grinder";
		descriptionShort = "";
		model = "\A3\Structures_F\Items\Tools\Grinder_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Grinder.paa";
		mass = 30;
	};
	class Exile_Item_Hammer: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Hammer";
		descriptionShort = "STOP... Hammer time!";
		model = "\A3\Structures_F\Items\Tools\Hammer_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Hammer.paa";
		mass = 10;
	};
	class Exile_Item_Handsaw: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Handsaw";
		descriptionShort = "";
		model = "\A3\Structures_F\Items\Tools\Saw_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Handsaw.paa";
		mass = 20;
	};
	class Exile_Item_HBarrier5Kit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "H-barrier (5 Blocks)";
		picture = "\exile_assets\texture\item\Exile_Item_HBarrier5Kit.paa";
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		descriptionShort = "Can be used to craft a 5-block H-barrier.";
		mass = 150;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_Heatpack: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Thermal Buddy";
		descriptionShort = "Can be used to warm you up a bit. You just need to rub it.<br/>Temperature: +1°C/10s";
		mass = 5;
		model = "\A3\Structures_F_EPA\Items\Medical\HeatPack_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Heatpack.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				effects[] = {{5,1,10}};
			};
		};
	};
	class Exile_Item_InstaDoc: Exile_AbstractItem
	{
		scope = 2;
		displayName = "InstaDoc";
		descriptionShort = "The universal auto-injector to regenerate health and stop bleeding wounds.<br/>Health: +100%/30s";
		mass = 15;
		model = "\exile_assets\model\Exile_Item_Instadoc.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Instadoc.paa";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				stopBleeding = 1;
				effects[] = {{0,100,30}};
			};
		};
	};
	class Exile_Item_InstantCoffee: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Instant Coffee Beanz";
		descriptionShort = "100% Beanz!<br/>Hunger +5%/10s";
		model = "\exile_assets\model\Exile_Item_InstantCoffee.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_InstantCoffee.paa";
		mass = 10;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,5,10}};
			};
		};
	};
	class Exile_Item_JunkMetal: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Junk Metal";
		descriptionShort = "This must have been something useful before. Rest in pieces.";
		picture = "\exile_assets\texture\item\Exile_Item_Junkmetal.paa";
		model = "\exile_assets\model\Exile_Item_Junkmetal.p3d";
		mass = 25;
	};
	class Exile_Item_Knife: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Knife";
		descriptionShort = "Combine this with bubble gum and do some MacGyver-like things with it.";
		model = "\exile_assets\model\Exile_Item_Knife.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Knife.paa";
		mass = 10;
	};
	class Exile_Item_Laptop: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Base Laptop";
		descriptionShort = "The best of best!";
		picture = "\exile_assets\texture\item\Exile_Item_Laptop.paa";
		model = "\exile_assets\model\Exile_Construction_Laptop.p3d";
		mass = 30;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_Leaves: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Leaves";
		descriptionShort = "A very useful stack of leaves.";
		model = "\exile_assets\model\Exile_Item_Leaves.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Leaves.paa";
		mass = 5;
	};
	class Exile_Item_LightBulb: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Light Bulb";
		descriptionShort = "How many bambis does it take it replace a light bulb? None. They do not know what a light bulb is. Haha. Ha. Okay, that was lame.";
		model = "\exile_assets\model\Exile_Item_LightBulb.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_LightBulb.paa";
		mass = 5;
	};
	class Exile_Item_MacasCheese: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Maca's Cheese (Raw)";
		descriptionShort = "#BlameMaca! <br/>Hunger: +40%/60s";
		model = "\exile_assets\model\Exile_Item_MacasCheese.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_MacasCheese.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,40,60}};
			};
		};
	};
	class Exile_Item_MacasCheese_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Maca's Cheese (Cooked)";
		descriptionShort = "Extra cheesy <br/>Hunger: +100%/20s";
		model = "\exile_assets\model\Exile_Item_MacasCheese_Open.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_MacasCheese_Open.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,100,20}};
			};
		};
	};
	class Exile_Item_Magazine01: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Better Prisoners #01";
		descriptionShort = "First edition of the Better Prisoners magazine.";
		model = "\exile_assets\model\Exile_Item_Magazine01.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Magazine01.paa";
		mass = 5;
	};
	class Exile_Item_Magazine02: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Better Prisoners #02";
		descriptionShort = "Second edition of the Better Prisoners magazine.";
		model = "\exile_assets\model\Exile_Item_Magazine02.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Magazine02.paa";
		mass = 5;
	};
	class Exile_Item_Magazine03: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Better Prisoners #03";
		descriptionShort = "Third edition of the Better Prisoners magazine.";
		model = "\exile_assets\model\Exile_Item_Magazine03.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Magazine03.paa";
		mass = 5;
	};
	class Exile_Item_Magazine04: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Better Prisoners #04";
		descriptionShort = "Fourth edition of the Better Prisoners magazine.";
		model = "\exile_assets\model\Exile_Item_Magazine04.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Magazine04.paa";
		mass = 5;
	};
	class Exile_Item_Matches: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Box of Matches";
		descriptionShort = "Kill it with fire!";
		model = "\exile_assets\model\Exile_Item_Matchbox.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Matchbox.paa";
		mass = 1;
		count = 10;
	};
	class Exile_Item_MetalBoard: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Metal Board";
		descriptionShort = "Can be used to fortify wood constructions.";
		mass = 50;
		model = "\exile_assets\model\Exile_Item_MetalBoard.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_MetalBoard.paa";
	};
	class Exile_Item_MetalHedgehogKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Metal Hedgehog Kit";
		descriptionShort = "Can be used to construct a metal hedgehog.";
		mass = 50;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Construction_Hedgehog_Metal.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_MetalLadderDoubleKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Metal Ladder Kit (Double Tall)";
		descriptionShort = "The metal ladder's bigger brother";
		mass = 130;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_MetalLadderDoubleKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_MetalLadderKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Metal Ladder Kit";
		descriptionShort = "Now with more rust!";
		mass = 100;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_MetalLadderKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_MetalPole: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Metal Pole";
		descriptionShort = "Time for a pole dance!";
		mass = 20;
		model = "\exile_assets\model\Exile_Item_MetalPole.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_MetalPole.paa";
	};
	class Exile_Item_MetalScrews: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Box of Screws";
		picture = "\exile_assets\texture\item\Exile_Item_MetalScrews.paa";
		model = "\exile_assets\model\Exile_Item_MetalScrews.p3d";
		descriptionShort = "Not only do I have a screw loose. I can't find the screw driver.";
		mass = 10;
	};
	class Exile_Item_MetalWire: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Metal Wire";
		descriptionShort = "In case you do not know what a metal wire is: It is a wire made out of metal.";
		model = "\A3\Structures_F_EPA\Items\Tools\MetalWire_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_MetalWire.paa";
		mass = 5;
	};
	class Exile_Item_MobilePhone: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Mobile Phone";
		descriptionShort = "A massive, ancient mobile phone. Magically capable of 8G network.";
		picture = "\exile_assets\texture\item\Exile_Item_Phone_ca.paa";
		model = "\exile_assets\model\Exile_Item_Phone.p3d";
		mass = 10;
	};
	class Exile_Item_Moobar: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Moobar";
		descriptionShort = "Some yummi milky chocolate! <br/>Hunger: +10%/30s";
		model = "\exile_assets\model\Exile_Item_Moobar.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Moobar.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,10,30}};
			};
		};
	};
	class Exile_Item_MountainDupe: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Mountain Dupe";
		descriptionShort = "Original Bavarian Soft Drink<br/>Thirst: +50%/20s";
		picture = "\exile_assets\texture\item\Exile_Item_MountainDupe.paa";
		model = "\exile_assets\model\Exile_Item_MountainDupe.p3d";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[] = {{3,50,20}};
			};
		};
	};
	class Exile_Item_Noodles: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Chemical Noodles";
		descriptionShort = "BIO is yesterday's quality. <br/>Hunger: +25%/50s";
		model = "\exile_assets\model\Exile_Item_Noodles.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Noodles.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,25,50}};
			};
		};
	};
	class Exile_Item_OilCanister: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Oil Canister";
		descriptionShort = "";
		model = "\A3\Structures_F\Items\Vessels\CanisterOil_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_OilCanister.paa";
		mass = 30;
	};
	class Exile_Item_OldChestKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Old Chest Kit";
		descriptionShort = "Old storage for a new world";
		mass = 150;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_OldChestKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_PlasticBottleCoffee: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Plastic Bottle (Coffee)";
		descriptionShort = "No milk, no sugar. Just pure darkness.<br/>Thirst: +100%/60s<br/>Hunger: +10%/5s<br/>Temperature: +0.5°C%/10s";
		picture = "\exile_assets\texture\item\Exile_Item_Waterbottle_Coffee.paa";
		model = "\exile_assets\model\Exile_Item_Waterbottle_Coffee.p3d";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "Exile_Item_PlasticBottleEmpty";
				effects[] = {{3,100,60},{2,10,5},{5,0.5,10}};
			};
		};
	};
	class Exile_Item_PlasticBottleDirtyWater: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Plastic Bottle (Dirty Water)";
		descriptionShort = "Contains a lot of bacteria. Drink at your own risk.<br/>Thirst: +10%/20s<br/>Health: -10%/5s";
		picture = "\exile_assets\texture\item\Exile_Item_Waterbottle_Dirty.paa";
		model = "\exile_assets\model\Exile_Item_Waterbottle_Dirty.p3d";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "Exile_Item_PlasticBottleEmpty";
				effects[] = {{3,10,20},{0,-10,5}};
			};
		};
	};
	class Exile_Item_PlasticBottleEmpty: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Plastic Bottle (Empty)";
		descriptionShort = "Fill it with salt water at the ocean or rain water at local water tanks. Or collect the deposit at a trader.";
		picture = "\exile_assets\texture\item\Exile_Item_Waterbottle_Empty.paa";
		model = "\exile_assets\model\Exile_Item_Waterbottle_Empty.p3d";
		mass = 5;
	};
	class Exile_Item_PlasticBottleFreshWater: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Plastic Bottle (Fresh Water)";
		descriptionShort = "Enjoy the refreshing taste of nothing.<br/>Thirst: +80%/15s";
		picture = "\exile_assets\texture\item\Exile_Item_Waterbottle_Clean.paa";
		model = "\exile_assets\model\Exile_Item_Waterbottle_Clean.p3d";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "Exile_Item_PlasticBottleEmpty";
				effects[] = {{3,80,15}};
			};
		};
	};
	class Exile_Item_PlasticBottleSaltWater: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Plastic Bottle (Salt Water)";
		descriptionShort = "Drink this fishy soup to commit suicide slowly.<br/>Thirst: -20%/10s<br/>Health: -30%/15s";
		picture = "\exile_assets\texture\item\Exile_Item_Waterbottle_Salty.paa";
		model = "\exile_assets\model\Exile_Item_Waterbottle_Salty.p3d";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "Exile_Item_PlasticBottleEmpty";
				effects[] = {{3,-20,10},{0,-30,15}};
			};
		};
	};
	class Exile_Item_Pliers: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Pliers";
		descriptionShort = "";
		model = "\A3\Structures_F\Items\Tools\Pliers_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Pliers.paa";
		mass = 10;
	};
	class Exile_Item_PortableGeneratorKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Portable Generator Kit";
		descriptionShort = "Can be used to switch your flood lights on and off.";
		mass = 10;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Construction_PortableGenerator.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_PowerDrink: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Power Drink";
		descriptionShort = "Recharge in seconds!<br/>Thirst: +95%/10s";
		picture = "\exile_assets\texture\item\Exile_Item_PowerDrink.paa";
		model = "\exile_assets\model\Exile_Item_PowerDrink.p3d";
		mass = 15;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[] = {{3,95,10}};
			};
		};
	};
	class Exile_Item_Raisins: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Raisins";
		descriptionShort = "There is a time in life where you don't regret to eat this. <br/>Hunger: +15%/30s";
		model = "\exile_assets\model\Exile_Item_Raisins.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Raisins.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,15,30}};
			};
		};
	};
	class Exile_Item_RazorWireKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Razor Wire Kit";
		picture = "\exile_assets\texture\item\Exile_Item_RazorWireKit.paa";
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		descriptionShort = "Good to stop infantry, but can be destroyed by driving into it. Might rip the wheels, though.";
		mass = 50;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_RepairKitConcrete: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Concrete Repair Kit";
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		descriptionShort = "Used to repair concrete constructions.";
		mass = 100;
	};
	class Exile_Item_RepairKitMetal: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Metal Repair Kit";
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		descriptionShort = "Used to repair metal constructions.";
		mass = 75;
	};
	class Exile_Item_RepairKitWood: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Repair Kit";
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		descriptionShort = "Used to repair wood constructions.";
		mass = 50;
	};
	class Exile_Item_Rope: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Rope";
		descriptionShort = "Time for some rope skipping!";
		mass = 10;
		model = "\exile_assets\model\Exile_Item_Rope.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Rope.paa";
	};
	class Exile_Item_RubberDuck: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Linus' Rubber Duck";
		descriptionShort = "A rubber duck";
		mass = 5;
		model = "\exile_assets\model\Exile_Item_RubberDuck.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_RubberDuck.paa";
	};
	class Exile_Item_SafeKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Safe Kit";
		descriptionShort = "Storage for the elite.";
		mass = 200;
		model = "\exile_assets\model\Exile_Container_Safe_Groundmodel.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Safe.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_SafeSmallKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Safe Small Kit";
		descriptionShort = "Storage for the semi-elite.";
		mass = 125;
		model = "\exile_assets\model\Exile_Container_Safe_Small_Groundmodel.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_SafeSmallKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_Sand: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Bag of Sand";
		picture = "\exile_assets\texture\item\Exile_Item_Sand.paa";
		model = "\exile_assets\model\Exile_Item_Sand.p3d";
		descriptionShort = "A portable do-it-yourself sand castle";
		mass = 25;
	};
	class Exile_Item_SandBagsKit_Corner: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Sandbags Kit (Corner)";
		picture = "\exile_assets\texture\item\Exile_Item_SandBagsKit_Corner.paa";
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		descriptionShort = "Can be used to craft a corner sandbag fence.";
		mass = 50;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_SandBagsKit_Long: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Sandbags Kit (Long)";
		picture = "\exile_assets\texture\item\Exile_Item_SandBagsKit_Long.paa";
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		descriptionShort = "Can be used to craft a long sandbag fence.";
		mass = 100;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_SausageGravy: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Sausage Gravy (Raw)";
		descriptionShort = "Looks like sea men <br/>Hunger +50%/25s";
		model = "\exile_assets\model\Exile_Item_SausageGravy.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_SausageGravy.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,50,25}};
			};
		};
	};
	class Exile_Item_SausageGravy_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Sausage Gravy (Cooked)";
		descriptionShort = "Looks like sea men <br/>Hunger +100%/20s";
		model = "\exile_assets\model\Exile_Item_SausageGravy_Cooked.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_SausageGravy_Cooked.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,100,20}};
			};
		};
	};
	class Exile_Item_Screwdriver: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Screwdriver";
		descriptionShort = "";
		model = "\A3\Structures_F\Items\Tools\Screwdriver_V1_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Screwdriver.paa";
		mass = 10;
	};
	class Exile_Item_SeedAstics: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Seed-Astics";
		descriptionShort = "Bird is the word. <br/>Hunger: +20%/40s";
		model = "\exile_assets\model\Exile_Item_SeedAstics.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_SeedAstics.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,20,40}};
			};
		};
	};
	class Exile_Item_Shovel: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Shovel";
		descriptionShort = "";
		model = "\A3\Structures_F_EPA\Items\Tools\Shovel_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Shovel.paa";
		mass = 30;
	};
	class Exile_Item_SleepingMat: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Sleeping Mat";
		descriptionShort = "";
		model = "\A3\Structures_F\Civ\Camping\Ground_sheet_folded_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_SleepingMat.paa";
		mass = 30;
	};
	class Exile_Item_Storagecratekit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Storage Crate Kit";
		descriptionShort = "Simple storage.";
		mass = 75;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Storagecrate.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_Surstromming: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Surströmming (Raw)";
		descriptionShort = "Rotten fish in pickle. Nothing more, nothing less.<br/>Hunger +55%/25s<br/>Thirst -10%/5s";
		model = "\exile_assets\model\Exile_Item_Surstromming.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Surstromming.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,55,25},{3,-10,5}};
			};
		};
	};
	class Exile_Item_Surstromming_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Surströmming (Cooked)";
		descriptionShort = "Rotten fish in pickle. Nothing more, nothing less.<br/>Hunger +100%/20s";
		model = "\exile_assets\model\Exile_Item_Surstromming_Cooked.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Surstromming_Cooked.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,100,20}};
			};
		};
	};
	class Exile_Item_ThermalScannerPro: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Thermal Scanner Pro";
		descriptionShort = "Prints a thermal image of a used code lock. Can only be used five times. Does not work in safe zones.";
		picture = "\exile_assets\texture\item\Dummy.paa";
		model = "\exile_assets\model\Exile_Item_ThermalScannerPro.p3d";
		mass = 5;
		count = 5;
	};
	class Exile_Item_ToiletPaper: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Toilet Paper";
		picture = "\exile_assets\texture\item\Exile_Item_ToiletPaper.paa";
		model = "\exile_assets\model\Exile_Item_ToiletPaper.p3d";
		descriptionShort = "How do blind people know when to stop using this?";
		mass = 5;
	};
	class Exile_Item_Vishpirin: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Vishpirin";
		descriptionShort = "Oestrogen Power Shot!<br/>Health: +25%/30s<br/>Instant Soberness!";
		model = "\exile_assets\model\Exile_Item_Vishpirin.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Vishpirin.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				effects[] = {{0,25,30},{4,-5,0}};
			};
		};
	};
	class Exile_Item_WaterBarrelKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Water Barrel Kit";
		descriptionShort = "Can be used to re-fill your water bottles with dirty water. May taste suspicious.";
		mass = 40;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Construction_WaterBarrel.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WaterCanisterDirtyWater: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Water Canister (Dirty Water)";
		descriptionShort = "A canister full of water. Surprise, surprise.";
		model = "\a3\structures_f\Items\Vessels\CanisterPlastic_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WaterCanister.paa";
		mass = 20;
	};
	class Exile_Item_WaterCanisterEmpty: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Water Canister (Empty)";
		descriptionShort = "An empty plastic canister.";
		model = "\a3\structures_f\Items\Vessels\CanisterPlastic_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WaterCanister.paa";
		mass = 10;
	};
	class Exile_Item_WireFenceKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wire Fence Kit";
		picture = "\exile_assets\texture\item\Exile_Item_WireFenceKit.paa";
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		descriptionShort = "The grass is always greener on the other side of the fence. Good that this one is look-through.";
		mass = 150;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodDoorKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Door Kit";
		descriptionShort = "A must-have for your base.";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodDoorKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodDoorwayKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Doorway Kit";
		descriptionShort = "A wall with a doorway, that is, without a door.";
		mass = 50;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodDoorwayKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodDrawBridgeKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Drawbridge Kit";
		descriptionShort = "Now all you need is a moat.";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodDrawBridgeKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodFloorKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Floor Kit";
		descriptionShort = "A 6x6m floor made out of wood.";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodFloorKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodFloorPortKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Floor Port Kit";
		descriptionShort = "A 6x6m floor made out of wood. This is a special floor with a hole in it. Place stairs inside to get to the next floor or use it was a secret escape on the bottom of your base.";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodFloorPortKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodFloorPortSmallKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Floor Port Small Kit";
		descriptionShort = "A 6x6m floor made out of wood. This is a special floor with a hole in it. Expand the functionality of this floor with a ladder!";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodFloorPortSmallKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodGateKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Gate Kit";
		descriptionShort = "Similar to a door, but is used for vehicles.";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodGateKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodLadderHatchKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Ladder Hatch Kit";
		descriptionShort = "A 6x6m floor made out of wood. Someone decided to add a nifty lockable hatch with a ladder to the center of the floor. Now you can make a tree house!";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodLadderHatchKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodLadderKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Ladder Kit";
		descriptionShort = "Since we have not mastered levitation yet...";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodLadderKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodLog: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Log";
		descriptionShort = "Timber!";
		model = "exile_assets\model\Exile_Item_Woodlog.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Woodlog.paa";
		mass = 20;
	};
	class Exile_Item_WoodPlank: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Plank";
		descriptionShort = "The reason why Planking became a trend.";
		mass = 20;
		model = "\exile_assets\model\Exile_Item_WoodPlank.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodPlank.paa";
	};
	class Exile_Item_WoodStairsKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Stairs Kit";
		descriptionShort = "Since we do not have an elevator yet...";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodStairsKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodSticks: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Sticks";
		descriptionShort = "The imaginary sword of the young and innocent.";
		model = "\exile_assets\model\Exile_Item_WoodSticks.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodSticks.paa";
		mass = 15;
	};
	class Exile_Item_WoodSupportKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Support Kit";
		descriptionShort = "An effective way to build on not-so-flat terrain.";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodSupportKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodWallHalfKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "1/2 Wood Wall Kit";
		descriptionShort = "A 6x1.5m wall made out of wood.";
		mass = 30;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodWallHalfKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodWallKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Wall Kit";
		descriptionShort = "A 6x3m wall made out of wood.";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodWallKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WoodWindowKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wood Window Kit";
		descriptionShort = "Offers a good position to shoot out of your base. Does not contain glass.";
		mass = 60;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WoodWindowKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_WorkBenchKit: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Work Bench Kit";
		descriptionShort = "Used to craft most construction items.";
		mass = 50;
		model = "\exile_assets\model\Exile_Construction_Crate.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_WorkBenchKit.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class Exile_Item_Wrench: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Wrench";
		descriptionShort = "";
		model = "\A3\Structures_F\Items\Tools\Wrench_F.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_Wrench.paa";
		mass = 10;
	};
	class Exile_Item_ZipTie: HandGrenade_Stone
	{
		scope = 2;
		displayName = "Zip Tie";
		picture = "\exile_assets\texture\item\Exile_Item_ZipTie.paa";
		model = "\exile_assets\model\Exile_Item_ZipTie.p3d";
		descriptionShort = "Can be used for handcuffing and secret, super-special operations.";
		mass = 5;
	};
	class spraycan_blk;
	class spraycan_red;
	class spraycan_grn;
	class spraycan_wht;
	class spraycan_blu;
	class burlap;
	class 556;
	class 762;
	class wpn_prt;
	class Alsatain_Ck;
	class Alsatian_Raw;
	class CatShark_Ck;
	class CatShark_Raw;
	class Chicken_Ck;
	class Chicken_Raw;
	class Fin_Ck;
	class Fin_Raw;
	class Goat_Raw;
	class Goat_Ck;
	class Mackrel_Ck;
	class Mackrel_Raw;
	class Mullet_Raw;
	class Mullet_Ck;
	class Ornate_Raw;
	class Ornate_Ck;
	class Rabbit_Ck;
	class Rabbit_Raw;
	class Rooster_Raw;
	class Rooster_Ck;
	class Salema_Ck;
	class Salema_Raw;
	class Sheep_Raw;
	class Sheep_Ck;
	class Snake_Ck;
	class Snake_Raw;
	class Tuna_Raw;
	class Tuna_Ck;
	class Turtle_Ck;
	class Turtle_Raw;
	class Exile_Item_SprayCan_Black: spraycan_blk
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Spray Can (Black)";
	};
	class Exile_Item_SprayCan_Red: spraycan_red
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Spray Can (Red)";
	};
	class Exile_Item_SprayCan_Green: spraycan_grn
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Spray Can (Green)";
	};
	class Exile_Item_SprayCan_White: spraycan_wht
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Spray Can (White)";
	};
	class Exile_Item_SprayCan_Blue: spraycan_blu
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Spray Can (Blue)";
	};
	class Exile_Item_BurlapSack: burlap
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Burlap Sack";
	};
	class Exile_Item_Bullets_556: 556
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "5.56mm Bullets";
	};
	class Exile_Item_Bullets_762: 762
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "7.62mm Bullets";
	};
	class Exile_Item_WeaponParts: wpn_prt
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Weapon Parts";
	};
	class Exile_Item_AlsatianSteak_Raw: Alsatian_Raw
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Alsatian Steak (Raw)";
		descriptionShort = "So raw, you can still hear the faint woofs<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,15,30},{0,-10,30}};
			};
		};
	};
	class Exile_Item_AlsatianSteak_Cooked: Alsatain_Ck
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Alsatian Steak (Cooked)";
		descriptionShort = "Alsatian, only the best<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,100,30}};
			};
		};
	};
	class Exile_Item_CatSharkFilet_Raw: CatShark_Raw
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Cat Shark Filet (Raw)";
		descriptionShort = "It's dangerous on land and in water. Meow...<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,25,30},{0,-20,30}};
			};
		};
	};
	class Exile_Item_CatSharkFilet_Cooked: CatShark_Ck
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Cat Shark Filet (Cooked)";
		descriptionShort = "I want my food, right meow<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,100,30}};
			};
		};
	};
	class Exile_Item_ChickenFilet_Raw: Chicken_Raw
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Chicken Filet (Raw)";
		descriptionShort = "So fresh, you can still see the feathers<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,10,30},{0,-7,30}};
			};
		};
	};
	class Exile_Item_ChickenFilet_Cooked: Chicken_Ck
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Chicken Filet (Cooked)";
		descriptionShort = "Sadly, its not deep fried<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,70,30}};
			};
		};
	};
	class Exile_Item_FinSteak_Raw: Fin_Raw
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Fin Steak (Raw)";
		descriptionShort = "Come here, good boy..........<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,15,30},{0,-10,30}};
			};
		};
	};
	class Exile_Item_FinSteak_Cooked: Fin_Ck
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Fin Steak (Cooked)";
		descriptionShort = "Now who is the monster?<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,100,30}};
			};
		};
	};
	class Exile_Item_GoatSteak_Raw: Goat_Raw
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Goat Steak (Raw)";
		descriptionShort = "Haven't goat any words....<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,15,30},{0,-10,30}};
			};
		};
	};
	class Exile_Item_GoatSteak_Cooked: Goat_Ck
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Goat Steak (Cooked)";
		descriptionShort = "That raw goat pun was baaaaaaaaaad<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,100,30}};
			};
		};
	};
	class Exile_Item_MackerelFilet_Raw: Mackrel_Raw
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Mackeral Filet (Raw)";
		descriptionShort = "The unholy mackerel<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,5,30},{0,-3,30}};
			};
		};
	};
	class Exile_Item_MackerelFilet_Cooked: Mackrel_Ck
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Mackeral Filet (Cooked)";
		descriptionShort = "A holy mackeral!<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,55,30}};
			};
		};
	};
	class Exile_Item_MulletFilet_Raw: Mullet_Raw
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Mullet Filet (Raw)";
		descriptionShort = "We aren't talking about the one on your head<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,5,30},{0,-3,30}};
			};
		};
	};
	class Exile_Item_MulletFilet_Cooked: Mullet_Ck
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Mullet Filet (Cooked)";
		descriptionShort = "Don't mistake this for your ""awesome"" hairstyle<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,65,30}};
			};
		};
	};
	class Exile_Item_OrnateFilet_Raw: Ornate_Raw
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Ornate Filet (Raw)";
		descriptionShort = "To be, ornate to be<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,5,30},{0,-3,30}};
			};
		};
	};
	class Exile_Item_OrnateFilet_Cooked: Ornate_Ck
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Ornate Filet (Cooked)";
		descriptionShort = "Maybe ornater time...<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,40,30}};
			};
		};
	};
	class Exile_Item_RabbitSteak_Raw: Rabbit_Raw
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Rabbit Steak (Raw)";
		descriptionShort = "Don't eat my carrots<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,5,30},{0,-3,30}};
			};
		};
	};
	class Exile_Item_RabbitSteak_Cooked: Rabbit_Ck
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Rabbit Steak (Cooked)";
		descriptionShort = "I'd make a veggie joke, but no one would carrot all<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,80,30}};
			};
		};
	};
	class Exile_Item_RoosterFilet_Raw: Rooster_Raw
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Rooster Filet (Raw)";
		descriptionShort = "Up since the break of dawn<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,10,30},{0,-8,30}};
			};
		};
	};
	class Exile_Item_RoosterFilet_Cooked: Rooster_Ck
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Rooster Filet (Cooked)";
		descriptionShort = "It's the year of the rooster<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,70,30}};
			};
		};
	};
	class Exile_Item_SalemaFilet_Raw: Salema_Raw
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Salema Filet (Raw)";
		descriptionShort = "Don't worry, you won't trip out<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,5,30},{0,-3,30}};
			};
		};
	};
	class Exile_Item_SalemaFilet_Cooked: Salema_Ck
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Salema Filet (Cooked)";
		descriptionShort = "Seriously, don't worry.<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,65,30}};
			};
		};
	};
	class Exile_Item_SheepSteak_Raw: Sheep_Raw
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Sheep Steak (Raw)";
		descriptionShort = "What is love? Baby don't herd me..<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,15,30},{0,-10,30}};
			};
		};
	};
	class Exile_Item_SheepSteak_Cooked: Sheep_Ck
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Sheep Steak (Cooked)";
		descriptionShort = "Don't herd me, no more...<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,100,30}};
			};
		};
	};
	class Exile_Item_SnakeFilet_Raw: Snake_Raw
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Snake Filet (Raw)";
		descriptionShort = "Hiss off! I'm serious<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,5,30},{0,-3,30}};
			};
		};
	};
	class Exile_Item_SnakeFilet_Cooked: Snake_Ck
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Snake Filet (Cooked)";
		descriptionShort = "Hiss off!<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,40,30}};
			};
		};
	};
	class Exile_Item_TunaFilet_Raw: Tuna_Raw
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Tuna Filet (Raw)";
		descriptionShort = "What's the difference between a fish and a piano? You can't tuna fish..<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,20,30},{0,-15,30}};
			};
		};
	};
	class Exile_Item_TunaFilet_Cooked: Tuna_Ck
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Tuna Filet (Cooked)";
		descriptionShort = "Tunas, huh?<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,90,30}};
			};
		};
	};
	class Exile_Item_TurtleFilet_Raw: Turtle_Raw
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Turtle Filet (Raw)";
		descriptionShort = "Be careful, they bite hard.<br/>Hunger +15%/30s<br/>Health -10%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,15,30},{0,-10,30}};
			};
		};
	};
	class Exile_Item_TurtleFilet_Cooked: Turtle_Ck
	{
		scope = 2;
		author = "Exile Mod Team";
		count = 1;
		displayName = "Turtle Filet (Cooked)";
		descriptionShort = "TMNT FTW<br/>Hunger +100%/30s";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,100,30}};
			};
		};
	};
	class 10Rnd_765x17ball;
	class Exile_Magazine_10Rnd_765x17_SA61: 10Rnd_765x17ball
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "7.65 mm 10Rnd Mag";
		descriptionShort = "Caliber: 7.65x17 mm<br />Rounds: 10<br />Used in: SA61";
	};
	class 20Rnd_765x17ball;
	class Exile_Magazine_20Rnd_765x17_SA61: 20Rnd_765x17ball
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "7.65 mm 20Rnd Mag";
		descriptionShort = "Caliber: 7.65x17 mm<br />Rounds: 20<br />Used in: SA61";
	};
	class 5Rnd_127x108_APDS_KSVK;
	class Exile_Magazine_5Rnd_127x108_APDS_KSVK: 5Rnd_127x108_APDS_KSVK
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "APDS 12.7 mm 5Rnd Mag";
		descriptionShort = "Caliber: 12.7x108 mm<br />Rounds: 5<br />Used in: KSVK";
	};
	class 5Rnd_127x108_KSVK;
	class Exile_Magazine_5Rnd_127x108_KSVK: 5Rnd_127x108_KSVK
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "12.7 mm 5Rnd Mag";
		descriptionShort = "Caliber: 12.7x108 mm<br />Rounds: 5<br />Used in: KSVK";
	};
	class 10Rnd_127x99_m107;
	class Exile_Magazine_10Rnd_127x99_m107: 10Rnd_127x99_m107
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "12.7 mm 10Rnd Mag";
		descriptionShort = "Caliber: 12.7x99 mm<br />Rounds: 10<br />Used in: M107";
	};
	class 30Rnd_762x39_AK47_M;
	class Exile_Magazine_30Rnd_762x39_AK: 30Rnd_762x39_AK47_M
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "7.62 mm 30Rnd Mag";
		descriptionShort = "Caliber: 7.62x39 mm<br />Rounds: 30<br />Used in: AK47, AKM, AKS";
	};
	class 30Rnd_545x39_AK;
	class Exile_Magazine_30Rnd_545x39_AK: 30Rnd_545x39_AK
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "5.45 mm 30Rnd Mag";
		descriptionShort = "Caliber: 5.45x39 mm<br />Rounds: 30<br />Used in: AK107, AK74";
	};
	class 30Rnd_Green_Tracer_545x39_AK;
	class Exile_Magazine_30Rnd_545x39_AK_Green: 30Rnd_Green_Tracer_545x39_AK
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "5.45 mm 30Rnd Tracer (Green) Mag";
		descriptionShort = "Caliber: 5.45x39 mm<br />Rounds: 30<br />Used in: AK107, AK74";
	};
	class 30Rnd_Red_Tracer_545x39_AK;
	class Exile_Magazine_30Rnd_545x39_AK_Red: 30Rnd_Red_Tracer_545x39_AK
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "5.45 mm 30Rnd Tracer (Red) Mag";
		descriptionShort = "Caliber: 5.45x39 mm<br />Rounds: 30<br />Used in: AK107, AK74";
	};
	class 30Rnd_White_Tracer_545x39_AK;
	class Exile_Magazine_30Rnd_545x39_AK_White: 30Rnd_White_Tracer_545x39_AK
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "5.45 mm 30Rnd Tracer (White) Mag";
		descriptionShort = "Caliber: 5.45x39 mm<br />Rounds: 30<br />Used in: AK107, AK74";
	};
	class 30Rnd_Yellow_Tracer_545x39_AK;
	class Exile_Magazine_30Rnd_545x39_AK_Yellow: 30Rnd_Yellow_Tracer_545x39_AK
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "5.45 mm 30Rnd Tracer (Yellow) Mag";
		descriptionShort = "Caliber: 5.45x39 mm<br />Rounds: 30<br />Used in: AK107, AK74";
	};
	class 45Rnd_Green_Tracer_545x39_RPK;
	class Exile_Magazine_45Rnd_545x39_RPK_Green: 45Rnd_Green_Tracer_545x39_RPK
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "5.45 mm 45Rnd Tracer (Green) Mag";
		descriptionShort = "Caliber: 5.45x39 mm<br />Rounds: 45<br />Used in: RPK";
	};
	class 75Rnd_Green_Tracer_545x39_RPK;
	class Exile_Magazine_75Rnd_545x39_RPK_Green: 75Rnd_Green_Tracer_545x39_RPK
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "5.45 mm 75Rnd Tracer (Green) Mag";
		descriptionShort = "Caliber: 5.45x39 mm<br />Rounds: 75<br />Used in: RPK";
	};
	class 20Rnd_762x51_DMR;
	class Exile_Magazine_20Rnd_762x51_DMR: 20Rnd_762x51_DMR
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "7.62 mm 20Rnd Mag";
		descriptionShort = "Caliber: 7.62x51 mm NATO<br />Rounds: 20<br />Used in: DMR";
	};
	class 20Rnd_Yellow_Tracer_762x51_DMR;
	class Exile_Magazine_20Rnd_762x51_DMR_Yellow: 20Rnd_Yellow_Tracer_762x51_DMR
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "7.62 mm 20Rnd Tracer (Yellow) Mag";
		descriptionShort = "Caliber: 7.62x51 mm NATO<br />Rounds: 20<br />Used in: DMR";
	};
	class 20Rnd_Red_Tracer_762x51_DMR;
	class Exile_Magazine_20Rnd_762x51_DMR_Red: 20Rnd_Red_Tracer_762x51_DMR
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "7.62 mm 20Rnd Tracer (Red) Mag";
		descriptionShort = "Caliber: 7.62x51 mm NATO<br />Rounds: 20<br />Used in: DMR";
	};
	class 20Rnd_Green_Tracer_762x51_DMR;
	class Exile_Magazine_20Rnd_762x51_DMR_Green: 20Rnd_Green_Tracer_762x51_DMR
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "7.62 mm 20Rnd Tracer (Green) Mag";
		descriptionShort = "Caliber: 7.62x51 mm NATO<br />Rounds: 20<br />Used in: DMR";
	};
	class 10x_303_M;
	class Exile_Magazine_10Rnd_303: 10x_303_M
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = ".303 British Mag";
		descriptionShort = "Caliber: .303 British<br />Rounds: 10<br />Used in: Lee-Enfield No.4 Mk.I";
	};
	class 100Rnd_762x54_PK_Tracer_Green;
	class Exile_Magazine_100Rnd_762x54_PK_Green: 100Rnd_762x54_PK_Tracer_Green
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "7.62 mm 100Rnd Belt Tracer (Green)";
		descriptionShort = "Caliber: 7.62x54 mm<br />Rounds: 100<br />Used in: PK, PKP";
	};
	class 7Rnd_45ACP_1911;
	class Exile_Magazine_7Rnd_45ACP: 7Rnd_45ACP_1911
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = ".45 ACP 7Rnd Mag";
		descriptionShort = "Caliber: .45 ACP<br />Rounds: 7<br />Used in: Colt 1911";
	};
	class 8Rnd_9x18_Makarov;
	class Exile_Magazine_8Rnd_9x18: 8Rnd_9x18_Makarov
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "9 mm 8Rnd Mag";
		descriptionShort = "Caliber: 9x18 mm<br />Rounds: 8<br />Used in: Makarov";
	};
	class 6Rnd_45ACP;
	class Exile_Magazine_6Rnd_45ACP: 6Rnd_45ACP
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "45 ACP 6Rnd Mag";
		descriptionShort = "Caliber: 45 ACP<br />Rounds: 6<br />Used in: Taurus";
	};
	class 5x_22_LR_17_HMR_M;
	class Exile_Magazine_5Rnd_22LR: 5x_22_LR_17_HMR_M
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = ".22LR 5Rnd Mag";
		descriptionShort = "Caliber: .22LR<br />Rounds: 5<br />Used in: CZ550";
	};
	class 10Rnd_762x54_SVD;
	class Exile_Magazine_10Rnd_762x54: 10Rnd_762x54_SVD
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "762x54 10Rnd Mag";
		descriptionShort = "Caliber: 762x54<br />Rounds: 10<br />Used in: SVD";
	};
	class 10Rnd_9x39_VSS;
	class Exile_Magazine_10Rnd_9x39: 10Rnd_9x39_VSS
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "9x39 10Rnd Mag";
		descriptionShort = "Caliber: 9x39<br />Rounds: 10<br />Used in: VSS";
	};
	class 20Rnd_9x39_VSS;
	class Exile_Magazine_20Rnd_9x39: 20Rnd_9x39_VSS
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "9x39 20Rnd Mag";
		descriptionShort = "Caliber: 9x39<br />Rounds: 20<br />Used in: VSS";
	};
	class 8rnd_B_Beneli_74Slug;
	class Exile_Magazine_8Rnd_74Slug: 8rnd_B_Beneli_74Slug
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Slug 8Rnd";
		descriptionShort = "Caliber: 12 Gauge<br />Rounds: 8<br />Used in: M1014";
	};
	class 8Rnd_B_Beneli_74Pellets;
	class Exile_Magazine_8Rnd_74Pellets: 8Rnd_B_Beneli_74Pellets
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Pellets 8Rnd";
		descriptionShort = "Caliber: 12 Gauge<br />Rounds: 8<br />Used in: M1014";
	};
	class Exile_Magazine_Battery: Exile_AbstractItem
	{
		scope = 2;
		count = 100;
		displayName = "Battery";
		ammo = "Exile_Ammo_Battery";
		mass = 3;
		picture = "\exile_assets\texture\item\Exile_Item_Battery.paa";
		model = "\A3\Structures_F_EPA\Items\Electronics\Battery_F.p3d";
		descriptionShort = "Used in electronic devices.";
		sound[] = {"A3\sounds_f\dummysound",31.622776,1,1600};
		reloadMagazineSound[] = {"A3\sounds_f\dummysound",0.01,1,10};
	};
	class 5Rnd_127x108_Mag;
	class Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "12.7 mm 5Rnd 8G Bullet Cam Mag";
		exileBulletCam = 1;
		picture = "\exile_assets\texture\item\Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag_ca.paa";
		descriptionShort = "Caliber: 12.7x108 mm Russian<br />Rounds: 5<br />Used in: GM6 Lynx<br /><br />Supports 8G Bullet Cam";
	};
	class 5Rnd_127x108_APDS_Mag;
	class Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag: 5Rnd_127x108_APDS_Mag
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "12.7 mm 5Rnd APDS 8G Bullet Cam Mag";
		exileBulletCam = 1;
		picture = "\exile_assets\texture\item\Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag_ca.paa";
		descriptionShort = "Caliber: 12.7x108 mm APDS Russian<br />Rounds: 5<br />Used in: GM6 Lynx<br /><br />Supports 8G Bullet Cam";
	};
	class 10Rnd_93x64_DMR_05_Mag;
	class Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag: 10Rnd_93x64_DMR_05_Mag
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "9.3 mm 10Rnd 8G Bullet Cam Mag";
		exileBulletCam = 1;
		picture = "\exile_assets\texture\item\Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag_ca.paa";
		descriptionShort = "Caliber: 9.3x64mm<br />Rounds: 10<br />Used in: Cyrus<br /><br />Supports 8G Bullet Cam";
	};
	class 7Rnd_408_Mag;
	class Exile_Magazine_7Rnd_408_Bullet_Cam_Mag: 7Rnd_408_Mag
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = ".408 7Rnd 8G Bullet Cam Mag";
		exileBulletCam = 1;
		picture = "\exile_assets\texture\item\Exile_Magazine_7Rnd_408_Bullet_Cam_Mag_ca.paa";
		descriptionShort = "Caliber: .408<br />Rounds: 7<br />Used in: M320 LRR<br /><br />Supports 8G Bullet Cam";
	};
	class 10Rnd_338_Mag;
	class Exile_Magazine_10Rnd_338_Bullet_Cam_Mag: 10Rnd_338_Mag
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = ".338 LM 10Rnd 8G Bullet Cam Mag";
		exileBulletCam = 1;
		picture = "\exile_assets\texture\item\Exile_Magazine_10Rnd_338_Bullet_Cam_Mag_ca.paa";
		descriptionShort = "Caliber: .338 Lapua Magnum<br />Rounds: 10<br />Used in: MAR-10<br /><br />Supports 8G Bullet Cam";
	};
	class Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag: 10Rnd_127x99_m107
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "12.7 mm 10Rnd 8G Bullet Cam Mag";
		exileBulletCam = 1;
		picture = "\exile_assets\texture\item\Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag.paa";
		descriptionShort = "Caliber: 12.7x99 mm<br />Rounds: 10<br />Used in: M107<br /><br />Supports 8G Bullet Cam";
	};
	class Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag: 5Rnd_127x108_KSVK
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "12.7 mm 5Rnd 8G Bullet Cam Mag";
		exileBulletCam = 1;
		picture = "\exile_assets\texture\item\Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag.paa";
		descriptionShort = "Caliber: 12.7x108 mm<br />Rounds: 5<br />Used in: KSVK<br /><br />Supports 8G Bullet Cam";
	};
	class Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag: 5Rnd_127x108_APDS_KSVK
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "12.7 mm 5Rnd APDS 8G Bullet Cam Mag";
		exileBulletCam = 1;
		picture = "\exile_assets\texture\item\Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag.paa";
		descriptionShort = "Caliber: 12.7x108 mm<br />Rounds: 5<br />Used in: KSVK<br /><br />Supports 8G Bullet Cam";
	};
	class Exile_Magazine_Swing: Exile_AbstractItem
	{
		scope = 2;
		count = 999;
		autoReload = 1;
		flash = "";
		flashSize = 0;
		displayName = "Swing";
		ammo = "Exile_Ammo_Swing";
		mass = 0;
		picture = "\exile_assets\texture\item\Exile_Magazine_Swing.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		initSpeed = 0.1;
		sound[] = {"A3\sounds_f\dummysound",31.622776,1,1600};
		reloadMagazineSound[] = {"A3\sounds_f\dummysound",0.01,1,10};
	};
	class Exile_Magazine_Boing: Exile_Magazine_Swing
	{
		scope = 2;
		displayName = "Boing";
		ammo = "Exile_Ammo_Boing";
		initSpeed = 0.1;
	};
	class Exile_Magazine_Swoosh: Exile_Magazine_Swing
	{
		scope = 2;
		displayName = "Swoosh";
		ammo = "Exile_Ammo_Swoosh";
		initSpeed = 0.1;
	};
};
class CfgMarkerClasses
{
	class ExileEvents
	{
		displayName = "Exile Events";
	};
	class ExileNonConstructionZone
	{
		displayName = "Exile Non-Construction Zone";
	};
	class ExileSpawnZone
	{
		displayName = "Exile Spawn Zone";
	};
	class ExileSpawnZoneIcon
	{
		displayName = "Exile Spawn Zone Icon";
	};
	class ExileTraderZone
	{
		displayName = "Exile Trader Zone";
	};
	class ExileTraderZoneIcon
	{
		displayName = "Exile Trader Zone Icon";
	};
	class ExileContaminatedZone
	{
		displayName = "Exile Contaminated Zone";
	};
	class ExileContaminatedZoneIcon
	{
		displayName = "Exile Contaminated Zone Icon";
	};
	class ExileConcreteMixerZone
	{
		displayName = "Exile Concrete Mixer Zone";
	};
	class ExileConcreteMixerZoneIcon
	{
		displayName = "Exile Concrete Mixer Zone Icon";
	};
	class ExilePlayer
	{
		displayName = "Exile Player";
	};
	class ExileLandVehicleSpawn
	{
		displayName = "Exile Land Vehicle Spawn";
	};
	class ExileAirVehicleSpawn
	{
		displayName = "Exile Air Vehicle Spawn";
	};
	class ExileSeaVehicleSpawn
	{
		displayName = "Exile Sea Vehicle Spawn";
	};
	class ExileRussianRouletteIcon
	{
		displayName = "Exile Russian Roulette Icon";
	};
	class ExileSpecOpsTraderIcon
	{
		displayName = "Exile Spec Ops Trader Icon";
	};
	class ExileAircraftTraderIcon
	{
		displayName = "Exile Aircraft Trader Icon";
	};
	class ExileBoatTraderIcon
	{
		displayName = "Exile Boat Trader Icon";
	};
	class ExileDiversTraderIcon
	{
		displayName = "Exile Divers Trader Icon";
	};
	class ExileHackingIcon
	{
		displayName = "Exile Hacking Icon";
	};
	class ExileVehicleIcon
	{
		displayName = "Exile Vehicle Icon";
	};
};
class CfgMarkers
{
	class ExileMissionHardcoreIcon
	{
		scope = 0;
		name = "Exile Mission Icon (Hardcore)";
		icon = "exile_assets\texture\marker\mission_hardcore_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileEvents";
		showEditorMarkerColor = 0;
	};
	class ExileMissionModerateIcon
	{
		scope = 0;
		name = "Exile Mission Icon (Moderate)";
		icon = "exile_assets\texture\marker\mission_moderate_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileEvents";
		showEditorMarkerColor = 0;
	};
	class ExileMissionDifficultIcon
	{
		scope = 0;
		name = "Exile Mission Icon (Difficult)";
		icon = "exile_assets\texture\marker\mission_difficult_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileEvents";
		showEditorMarkerColor = 0;
	};
	class ExileMissionEasyIcon
	{
		scope = 0;
		name = "Exile Mission Icon (Easy)";
		icon = "exile_assets\texture\marker\mission_easy_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileEvents";
		showEditorMarkerColor = 0;
	};
	class ExileMissionCapturePointIcon
	{
		scope = 0;
		name = "Exile Capture Point Icon";
		icon = "exile_assets\texture\marker\capture_point_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileEvents";
		showEditorMarkerColor = 0;
	};
	class ExileMissionStrongholdIcon
	{
		scope = 0;
		name = "Exile Stronghold Icon";
		icon = "exile_assets\texture\marker\stronghold_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileEvents";
		showEditorMarkerColor = 0;
	};
	class ExileNonConstructionZone
	{
		scope = 0;
		name = "Exile Non-Construction Zone";
		icon = "exile_assets\texture\marker\spawn_zone_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileNonConstructionZone";
		showEditorMarkerColor = 0;
	};
	class ExileSpawnZone
	{
		scope = 0;
		name = "Exile Spawn Zone";
		icon = "exile_assets\texture\marker\spawn_zone_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileSpawnZone";
		showEditorMarkerColor = 0;
	};
	class ExileSpawnZoneIcon
	{
		scope = 0;
		name = "Exile Spawn Zone Icon";
		icon = "exile_assets\texture\marker\spawn_zone_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileSpawnZoneIcon";
		showEditorMarkerColor = 0;
	};
	class ExileTraderZone
	{
		scope = 0;
		name = "Exile Trader Zone";
		icon = "exile_assets\texture\marker\trader_zone_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileTraderZone";
		showEditorMarkerColor = 0;
	};
	class ExileTraderZoneIcon
	{
		scope = 0;
		name = "Exile Trader Zone Icon";
		icon = "exile_assets\texture\marker\trader_zone_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileTraderZoneIcon";
		showEditorMarkerColor = 0;
	};
	class ExilePlayer
	{
		scope = 0;
		name = "Exile Player";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconman_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExilePlayer";
		showEditorMarkerColor = 0;
	};
	class ExileSafe
	{
		scope = 0;
		name = "Exile Safe";
		icon = "exile_assets\texture\marker\unlocked_safe_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileSafe";
		showEditorMarkerColor = 0;
	};
	class ExileHeart
	{
		scope = 0;
		name = "Exile Heart";
		icon = "exile_assets\texture\marker\supply_drop_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileHeart";
		showEditorMarkerColor = 0;
	};
	class ExileContaminatedZone
	{
		scope = 0;
		name = "Exile Heart";
		icon = "exile_assets\texture\marker\contaminated_zone_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileContaminatedZone";
		showEditorMarkerColor = 0;
	};
	class ExileContaminatedZoneIcon
	{
		scope = 0;
		name = "Exile Heart";
		icon = "exile_assets\texture\marker\contaminated_zone_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileContaminatedZoneIcon";
		showEditorMarkerColor = 0;
	};
	class ExileConcreteMixerZone
	{
		scope = 0;
		name = "Exile Concrete Mixer Zone";
		icon = "exile_assets\texture\marker\spawn_zone_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileConcreteMixerZone";
		showEditorMarkerColor = 0;
	};
	class ExileConcreteMixerZoneIcon
	{
		scope = 0;
		name = "Exile Concrete Mixer Zone Icon";
		icon = "exile_assets\texture\marker\concrete_mixer_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileConcreteMixerZoneIcon";
		showEditorMarkerColor = 0;
	};
	class ExileDiversTraderIcon
	{
		scope = 0;
		name = "Exile Divers Trader Icon";
		icon = "exile_assets\texture\marker\divers_trader_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileDiversTraderIcon";
		showEditorMarkerColor = 0;
	};
	class ExileBoatTraderIcon
	{
		scope = 0;
		name = "Exile Boat Trader Icon";
		icon = "exile_assets\texture\marker\boat_trader_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileBoatTraderIcon";
		showEditorMarkerColor = 0;
	};
	class ExileAircraftTraderIcon
	{
		scope = 0;
		name = "Exile Aircraft Trader Icon";
		icon = "exile_assets\texture\marker\aircraft_trader_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileAircraftTraderIcon";
		showEditorMarkerColor = 0;
	};
	class ExileSpecOpsTraderIcon
	{
		scope = 0;
		name = "Exile Spec Ops Trader Icon";
		icon = "exile_assets\texture\marker\spec_ops_trader_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileSpecOpsTraderIcon";
		showEditorMarkerColor = 0;
	};
	class ExileRussianRouletteIcon
	{
		scope = 0;
		name = "Exile Russian Roulette Icon";
		icon = "exile_assets\texture\marker\russian_roulette_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileRussianRouletteIcon";
		showEditorMarkerColor = 0;
	};
	class ExileHackingIcon
	{
		scope = 0;
		name = "Exile Hacking Icon";
		icon = "exile_assets\texture\marker\hacking_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileHackingIcon";
		showEditorMarkerColor = 0;
	};
	class ExileVehicleIcon
	{
		scope = 0;
		name = "Exile Vehicle Icon";
		icon = "exile_assets\texture\marker\vehicle_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "ExileVehicleIcon";
		showEditorMarkerColor = 0;
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class ExileIntro
		{
			directory = "exile_client\missions\ExileIntro.VR";
		};
	};
};
class CfgMods
{
	class Mod_Base;
	class Exile: Mod_Base
	{
		name = "Exile Mod";
		author = "Exile Mod Team";
		action = "http://www.exilemod.com";
		dir = "@Exile";
		logo = "exile_assets\texture\mod\logo.paa";
		logoOver = "exile_assets\texture\mod\logo.paa";
		logoSmall = "exile_assets\texture\mod\icon.paa";
		picture = "exile_assets\texture\mod\logo.paa";
		hidePicture = 0;
		hideName = 0;
		dlcColor[] = {0.94,0.29,0.98,1};
		version = "1.0.42";
		armaVersion = "210";
		overview = "";
		itemPrevNotifText = "";
	};
};
class CfgMovesBasic
{
	class ManActions
	{
		GestureExileAxeSwing01 = "";
		GestureExileSledgeHammerSwing01 = "";
		GestureExileSuicide01 = "";
		GestureExileSuicide02 = "";
		GestureExileSuicideCancel01 = "";
		GestureExileRussianRoulette01 = "";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureExileAxeSwing01[] = {"GestureExileAxeSwing01","Gesture"};
			GestureExileSledgeHammerSwing01[] = {"GestureExileSledgeHammerSwing01","Gesture"};
			GestureExileSuicide01[] = {"GestureExileSuicide01","Gesture"};
			GestureExileSuicide02[] = {"GestureExileSuicide02","Gesture"};
			GestureExileSuicideCancel01[] = {"GestureExileSuicideCancel01","Gesture"};
			GestureExileRussianRoulette01[] = {"GestureExileRussianRoulette01","Gesture"};
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class CutSceneAnimationBaseSit;
		class AmovPercMstpSnonWnonDnon;
		class HubSittingChairA_idle1;
		class AmovPercMstpSrasWlnrDnon;
		class AmovPercMstpSrasWpstDnon;
		class Acts_AidlPsitMstpSsurWnonDnon_loop: CutSceneAnimationBaseSit
		{
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Psit.p3d";
			head = "headDefault";
			ragdoll = 1;
			terminal = 1;
			affectedByFatigue = "false";
			canPullTrigger = 0;
			canReload = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableBinocular = 0;
			enableMissile = 0;
			enableOptics = 0;
			showHandGun = 0;
			showItemInHand = 0;
			showItemInRightHand = 0;
			showWeaponAim = 0;
			actions = "Acts_SittingTiedHands_actions";
			file = "\A3\Anims_F_Mark\data\anim\sdr\cts\Acts_AidlPsitMstpSsurWnonDnon_1";
			VariantsPlayer[] = {"Acts_AidlPsitMstpSsurWnonDnon01",0.2,"Acts_AidlPsitMstpSsurWnonDnon02",0.2,"Acts_AidlPsitMstpSsurWnonDnon03",0.2,"Acts_AidlPsitMstpSsurWnonDnon04",0.2,"Acts_AidlPsitMstpSsurWnonDnon05",0.2};
			VariantsAI[] = {"Acts_AidlPsitMstpSsurWnonDnon01",0.2,"Acts_AidlPsitMstpSsurWnonDnon02",0.2,"Acts_AidlPsitMstpSsurWnonDnon03",0.2,"Acts_AidlPsitMstpSsurWnonDnon04",0.2,"Acts_AidlPsitMstpSsurWnonDnon05",0.2};
			VariantAfter[] = {20,20,20};
			InterpolateTo[] = {"Acts_AidlPsitMstpSsurWnonDnon01",0.001,"Acts_AidlPsitMstpSsurWnonDnon02",0.001,"Acts_AidlPsitMstpSsurWnonDnon03",0.001,"Acts_AidlPsitMstpSsurWnonDnon04",0.001,"Acts_AidlPsitMstpSsurWnonDnon05",0.001,"Acts_AidlPsitMstpSsurWnonDnon_out",0.1,"Unconscious",0.01};
		};
		class Exile_Acts_RepairVehicle01: CutSceneAnimationBaseSit
		{
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Psit.p3d";
			head = "headDefault";
			ragdoll = 1;
			terminal = 1;
			affectedByFatigue = "false";
			canPullTrigger = 0;
			canReload = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableBinocular = 0;
			enableMissile = 0;
			enableOptics = 0;
			showHandGun = 0;
			showItemInHand = 0;
			showItemInRightHand = 0;
			showWeaponAim = 0;
			actions = "Acts_SittingTiedHands_actions";
			file = "A3\anims_f\data\Anim\sdr\cts\InBaseMoves_repairVehicleKnl";
			VariantsPlayer[] = {"Exile_Acts_RepairVehicle01_Animation01",0.2};
			VariantsAI[] = {"Exile_Acts_RepairVehicle01_Animation01",0.2};
			VariantAfter[] = {20,20,20};
			InterpolateTo[] = {"Exile_Acts_RepairVehicle01_Animation01",0.001,"Unconscious",0.01};
		};
		class Exile_Acts_RepairVehicle01_Animation01: Exile_Acts_RepairVehicle01
		{
			equivalentTo = "Exile_Acts_RepairVehicle01";
			speed = -25;
			VariantsPlayer[] = {};
			VariantsAI[] = {};
			interpolationSpeed = 0.5;
			InterpolateTo[] = {"Exile_Acts_RepairVehicle01",0.001,"Unconscious",0.01};
		};
		class Exile_Acts_Suicide01: AmovPercMstpSrasWpstDnon
		{
			looped = 0;
			file = "\exile_assets\animation\Exile_Suicide01";
			terminal = 0;
			speed = 0.143541;
			showHandGun = 1;
			head = "headNo";
			forceAim = 1;
			ConnectTo[] = {"DeadState",1};
			InterpolateTo[] = {};
		};
		class Exile_Acts_Suicide02: AmovPercMstpSrasWpstDnon
		{
			looped = 0;
			file = "\exile_assets\animation\Exile_Suicide02";
			terminal = 0;
			speed = 0.124481;
			showHandGun = 1;
			head = "headNo";
			forceAim = 1;
			ConnectTo[] = {"DeadState",1};
			InterpolateTo[] = {};
		};
		class Exile_Acts_Suicide03: Exile_Acts_Suicide01
		{
			terminal = 1;
			ragdoll = 1;
		};
		class Exile_Acts_Suicide04: Exile_Acts_Suicide02
		{
			terminal = 1;
			ragdoll = 1;
		};
		class Exile_RouletteSitting01: CutSceneAnimationBaseSit
		{
			collisionShape = "A3\anims_f\Data\Geom\Sdr\geom_empty.p3d";
			head = "headDefault";
			ragdoll = 1;
			terminal = 0;
			affectedByFatigue = "false";
			canPullTrigger = 0;
			canReload = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableBinocular = 0;
			enableMissile = 0;
			enableOptics = 0;
			showHandGun = 1;
			showItemInHand = 0;
			showItemInRightHand = 0;
			showWeaponAim = 0;
			actions = "Acts_SittingTiedHands_actions";
			file = "\A3\Anims_F_EPA\data\Anim\sdr\cts\HubCleaned\SittingChair\HubSittingChairA_idle1";
			VariantsPlayer[] = {"Exile_RouletteSitting01_Animation01",0.2};
			VariantsAI[] = {"Exile_RouletteSitting01_Animation01",0.2};
			VariantAfter[] = {20,20,20};
			InterpolateTo[] = {"Exile_RouletteSitting01_Animation01",0.001,"DeadState",0.01};
		};
		class Exile_RouletteSitting01_Animation01: Exile_RouletteSitting01
		{
			equivalentTo = "Exile_RouletteSitting01";
			speed = -25;
			VariantsPlayer[] = {};
			VariantsAI[] = {};
			interpolationSpeed = 0.2;
			InterpolateTo[] = {"Exile_RouletteSitting01",0.001,"DeadState",0.01};
		};
		class Exile_Shovel_Dig01: AmovPercMstpSrasWlnrDnon
		{
			file = "\exile_assets\animation\Exile_Shovel_Dig01";
			looped = 0;
			speed = 0.1;
			duty = 0.7;
			mask = "BodyFull";
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			weaponIK = 4;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableBinocular = 0;
			enableMissile = 0;
			enableOptics = 0;
			canReload = 0;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			forceAim = 1;
			limitGunMovement = 9.1;
			headBobMode = 0;
			headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPercMstpSrasWlnrDnon",2,"AmovPercMstpSlowWlnrDnon",2};
			ConnectTo[] = {"AmovPercMstpSrasWlnrDnon",2,"AmovPercMstpSlowWlnrDnon",2};
			InterpolateTo[] = {"DeadState",0.01};
			showHandGun = 0;
			showItemInRightHand = 0;
			soundEnabled = 1;
		};
		class Exile_Funny_Dab01: AmovPercMstpSnonWnonDnon
		{
			file = "\exile_assets\animation\Exile_Funny_Dab01";
			looped = 0;
			speed = 0.4;
			duty = 0.7;
			mask = "BodyFull";
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			weaponIK = 4;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableBinocular = 0;
			enableMissile = 0;
			enableOptics = 0;
			canReload = 0;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			forceAim = 1;
			limitGunMovement = 9.1;
			headBobMode = 0;
			headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"AmovPercMstpSnonWnonDnon",2};
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",2};
			InterpolateTo[] = {"DeadState",0.01};
			showHandGun = 0;
			showItemInRightHand = 0;
			soundEnabled = 1;
		};
	};
};
class CfgMusic
{
	class ExileTrack01
	{
		duration = 170;
		musicClass = "Lead";
		name = "Exile Track 01 - Main Theme";
		sound[] = {"exile_assets\music\track01.ogg",1,1};
	};
	class ExileTrack02
	{
		duration = 223;
		musicClass = "Lead";
		name = "Exile Track 02 - Welcome to Exile (Menu Version)";
		sound[] = {"exile_assets\music\track02.ogg",1,1};
	};
	class ExileTrack03
	{
		duration = 170;
		musicClass = "Lead";
		name = "Exile Track 03 - Welcome to Exile (Original Composition)";
		sound[] = {"exile_assets\music\track03.ogg",1,1};
	};
	class ExileTrack04
	{
		duration = 317;
		musicClass = "Calm";
		name = "Exile Track 04 - The Island (Roaming Ambience)";
		sound[] = {"exile_assets\music\track04.ogg",1,1};
	};
	class ExileTrack05
	{
		duration = 317;
		musicClass = "Calm";
		name = "Exile Track 05 - The Island Minor (Roaming Ambience)";
		sound[] = {"exile_assets\music\track05.ogg",1,1};
	};
	class ExileTrack06
	{
		duration = 115;
		musicClass = "Action";
		name = "Exile Track 06 - Lethal Force (Combat Soundtrack)";
		sound[] = {"exile_assets\music\track06.ogg",1,1};
	};
	class ExileTrack07
	{
		duration = 157;
		musicClass = "Action";
		name = "Exile Track 07 - LethalForce v2 (Combat Soundtrack)";
		sound[] = {"exile_assets\music\track07.ogg",1,1};
	};
};
class CfgNetworkMessages
{
	class kickClient
	{
		module = "object_player";
		parameters[] = {};
	};
	class youWonMate
	{
		module = "object_player";
		parameters[] = {};
	};
	class playerStart
	{
		module = "object_player";
		parameters[] = {};
	};
	class tagSpectateRequest
	{
		module = "object_player";
		parameters[] = {"STRING"};
	};
	class spectateRequest
	{
		module = "object_player";
		parameters[] = {"OBJECT","STRING"};
	};
	class spectateResponse
	{
		module = "object_player";
		parameters[] = {"STRING","STRING"};
	};
	class escapeVariables
	{
		module = "object_player";
		parameters[] = {"SCALAR","SCALAR"};
	};
	class announceAnimalRequest
	{
		module = "object_animal";
		parameters[] = {"STRING"};
	};
	class gutAnimalRequest
	{
		module = "object_animal";
		parameters[] = {"STRING"};
	};
	class playEarthQuakeEffectRequest
	{
		module = "system_earthQuake";
		parameters[] = {"SCALAR"};
	};
	class requestJoinRussianRouletteDialogRequest
	{
		module = "system_russianRoulette";
		parameters[] = {};
	};
	class requestJoinRussianRouletteDialogResponse
	{
		module = "system_russianRoulette";
		parameters[] = {"SCALAR","SCALAR"};
	};
	class concreteMixerStartRequest
	{
		module = "object_concreteMixer";
		parameters[] = {"STRING","STRING"};
	};
	class concreteMixerAddSmokeRequest
	{
		module = "object_concreteMixer";
		parameters[] = {"STRING"};
	};
	class concreteMixerRemoveSmokeRequest
	{
		module = "object_concreteMixer";
		parameters[] = {"STRING"};
	};
	class winRussianRouletteRequest
	{
		module = "system_russianRoulette";
		parameters[] = {"ARRAY","SCALAR","SCALAR"};
	};
	class joinRussianRouletteRequest
	{
		module = "system_russianRoulette";
		parameters[] = {};
	};
	class joinRussianRouletteResponse
	{
		module = "system_russianRoulette";
		parameters[] = {"STRING"};
	};
	class leaveRussianRouletteRequest
	{
		module = "system_russianRoulette";
		parameters[] = {};
	};
	class leaveRussianRouletteResponse
	{
		module = "system_russianRoulette";
		parameters[] = {"ARRAY","SCALAR"};
	};
	class updateRussianRouletteGameStatusRequest
	{
		module = "system_russianRoulette";
		parameters[] = {"SCALAR","SCALAR","ARRAY","STRING","SCALAR","SCALAR"};
	};
	class fireRussianRouletteRevolverRequest
	{
		module = "system_russianRoulette";
		parameters[] = {"BOOL"};
	};
	class fireRussianRouletteRevolverResponse
	{
		module = "system_russianRoulette";
		parameters[] = {};
	};
	class startSessionRequest
	{
		module = "system_session";
		parameters[] = {"STRING"};
	};
	class startSessionResponse
	{
		module = "system_session";
		parameters[] = {"STRING"};
	};
	class updateSessionRequest
	{
		module = "system_session";
		parameters[] = {"STRING"};
	};
	class switchMoveRequest
	{
		module = "object_player";
		parameters[] = {"STRING","STRING"};
	};
	class updateStatsRequest
	{
		module = "object_player";
		parameters[] = {"STRING","SCALAR","SCALAR"};
	};
	class showFragRequest
	{
		module = "gui";
		parameters[] = {"ARRAY"};
	};
	class hasPlayerRequest
	{
		module = "object_player";
		parameters[] = {};
	};
	class hasPlayerResponse
	{
		module = "object_player";
		parameters[] = {"BOOL"};
	};
	class createPlayerRequest
	{
		module = "object_player";
		parameters[] = {"STRING"};
	};
	class createPlayerResponse
	{
		module = "object_player";
		parameters[] = {"OBJECT","STRING","STRING","SCALAR","SCALAR","SCALAR","SCALAR","SCALAR","SCALAR","ARRAY","SCALAR"};
	};
	class loadPlayerRequest
	{
		module = "object_player";
		parameters[] = {};
	};
	class loadPlayerResponse
	{
		module = "object_player";
		parameters[] = {"STRING","STRING","SCALAR","SCALAR","SCALAR","SCALAR","SCALAR","ARRAY","SCALAR","SCALAR"};
	};
	class updatePlayerIncapacitatedRequest
	{
		module = "object_player";
		parameters[] = {"BOOL"};
	};
	class savePlayerRequest
	{
		module = "object_player";
		parameters[] = {"SCALAR","SCALAR","SCALAR","SCALAR","SCALAR"};
	};
	class hideBodyRequest
	{
		module = "object_player";
		parameters[] = {"OBJECT"};
	};
	class chopTreeRequest
	{
		module = "object_tree";
		parameters[] = {"STRING"};
	};
	class smashShippingContainerRequest
	{
		module = "object_shippingContainer";
		parameters[] = {"OBJECT"};
	};
	class chopBushRequest
	{
		module = "object_bush";
		parameters[] = {"STRING"};
	};
	class systemChatRequest
	{
		module = "gui";
		parameters[] = {"STRING"};
	};
	class advancedHintRequest
	{
		module = "gui";
		parameters[] = {"STRING"};
	};
	class standardHintRequest
	{
		module = "gui";
		parameters[] = {"STRING"};
	};
	class toastRequest
	{
		module = "gui";
		parameters[] = {"STRING","ARRAY"};
	};
	class baguetteRequest
	{
		module = "gui";
		parameters[] = {"STRING"};
	};
	class dynamicTextRequest
	{
		module = "gui";
		parameters[] = {"STRING","SCALAR","SCALAR","STRING"};
	};
	class resetPlayerRequest
	{
		module = "object_player";
		parameters[] = {};
	};
	class buildConstructionRequest
	{
		module = "object_construction";
		parameters[] = {"STRING","ARRAY"};
	};
	class repairConstructionRequest
	{
		module = "object_construction";
		parameters[] = {"OBJECT"};
	};
	class repairConstructionResponse
	{
		module = "object_construction";
		parameters[] = {"STRING"};
	};
	class payTerritoryProtectionMoneyRequest
	{
		module = "system_territory";
		parameters[] = {"STRING"};
	};
	class buildTerritoryRequest
	{
		module = "object_construction";
		parameters[] = {"STRING","ARRAY","STRING","STRING"};
	};
	class constructionResponse
	{
		module = "object_construction";
		parameters[] = {"STRING"};
	};
	class swapConstructionRequest
	{
		module = "object_construction";
		parameters[] = {"STRING","STRING","ARRAY"};
	};
	class deconstructConstructionRequest
	{
		module = "object_construction";
		parameters[] = {"STRING"};
	};
	class moveConstructionRequest
	{
		module = "object_construction";
		parameters[] = {"STRING"};
	};
	class constructionMoveResponse
	{
		module = "object_construction";
		parameters[] = {"BOOL","STRING"};
	};
	class upgradeConstructionRequest
	{
		module = "object_construction";
		parameters[] = {"OBJECT"};
	};
	class upgradeConstructionResponse
	{
		module = "object_construction";
		parameters[] = {"OBJECT"};
	};
	class flipVehRequest
	{
		module = "object_vehicle";
		parameters[] = {"STRING"};
	};
	class pushVehicleRequest
	{
		module = "object_vehicle";
		parameters[] = {"STRING","SCALAR","SCALAR","STRING"};
	};
	class rotateVehicleRequest
	{
		module = "object_vehicle";
		parameters[] = {"STRING","SCALAR"};
	};
	class lockVehicleRequest
	{
		module = "object_vehicle";
		parameters[] = {"STRING","BOOL"};
	};
	class lockResponse
	{
		module = "object_vehicle";
		parameters[] = {"STRING","BOOL","STRING","STRING","SCALAR"};
	};
	class spawnLootRequest
	{
		module = "system_lootManager";
		parameters[] = {"ARRAY"};
	};
	class toggleFloodLightRequest
	{
		module = "object_floodLight";
		parameters[] = {"STRING","SCALAR"};
	};
	class connectionTest
	{
		module = "object_player";
		parameters[] = {"BOOL"};
	};
	class purchaseVehicleRequest
	{
		module = "system_trading";
		parameters[] = {"STRING","STRING"};
	};
	class purchaseVehicleResponse
	{
		module = "system_trading";
		parameters[] = {"SCALAR","STRING","SCALAR"};
	};
	class vehicleSaveRequest
	{
		module = "system_vehicleSaveQueue";
		parameters[] = {"STRING"};
	};
	class purchaseVehicleSkinRequest
	{
		module = "system_trading";
		parameters[] = {"STRING","ARRAY"};
	};
	class purchaseVehicleSkinResponse
	{
		module = "system_trading";
		parameters[] = {"SCALAR","SCALAR"};
	};
	class endBambiStateRequest
	{
		module = "object_player";
		parameters[] = {};
	};
	class purchaseItemRequest
	{
		module = "system_trading";
		parameters[] = {"STRING","SCALAR","SCALAR","STRING"};
	};
	class purchaseItemResponse
	{
		module = "system_trading";
		parameters[] = {"SCALAR","SCALAR","STRING","SCALAR","SCALAR","STRING"};
	};
	class sellItemRequest
	{
		module = "system_trading";
		parameters[] = {"STRING","SCALAR","SCALAR","STRING"};
	};
	class sellItemResponse
	{
		module = "system_trading";
		parameters[] = {"SCALAR","SCALAR","STRING","SCALAR","SCALAR","STRING","STRING"};
	};
	class hotwireLockRequest
	{
		module = "object_lock";
		parameters[] = {"STRING"};
	};
	class lockToggle
	{
		module = "object_lock";
		parameters[] = {"STRING","STRING","BOOL"};
	};
	class setPin
	{
		module = "object_lock";
		parameters[] = {"STRING","STRING","STRING"};
	};
	class setPinResponse
	{
		module = "object_lock";
		parameters[] = {"ARRAY","STRING","STRING"};
	};
	class packRequest
	{
		module = "object_container";
		parameters[] = {"STRING","STRING"};
	};
	class setFuelRequest
	{
		module = "object_vehicle";
		parameters[] = {"STRING","SCALAR"};
	};
	class registerClanRequest
	{
		module = "system_clan";
		parameters[] = {"STRING"};
	};
	class registerClanResponse
	{
		module = "system_clan";
		parameters[] = {"SCALAR","SCALAR","ARRAY"};
	};
	class leaveClanRequest
	{
		module = "system_clan";
		parameters[] = {};
	};
	class leaveClanResponse
	{
		module = "system_clan";
		parameters[] = {"BOOL","STRING"};
	};
	class updateClanInfoFull
	{
		module = "system_clan";
		parameters[] = {"STRING","STRING","ARRAY","ARRAY","ARRAY","GROUP"};
	};
	class updateClanGotKicked
	{
		module = "system_clan";
		parameters[] = {"STRING","ARRAY"};
	};
	class updateMarkers
	{
		module = "system_clan";
		parameters[] = {"ARRAY"};
	};
	class updatePolys
	{
		module = "system_clan";
		parameters[] = {"ARRAY"};
	};
	class inviteToClanRequest
	{
		module = "system_clan";
		parameters[] = {"STRING"};
	};
	class inviteToClanRequestClient
	{
		module = "system_clan";
		parameters[] = {"STRING","STRING"};
	};
	class inviteToClanRequestClientResponse
	{
		module = "system_clan";
		parameters[] = {"BOOL"};
	};
	class clanInviteServerResponse
	{
		module = "system_clan";
		parameters[] = {"BOOL"};
	};
	class kickClanPlayerRequest
	{
		module = "system_clan";
		parameters[] = {"STRING"};
	};
	class addMarkerRequest
	{
		module = "system_clan";
		parameters[] = {"STRING","ARRAY","ARRAY","SCALAR","STRING","SCALAR"};
	};
	class addPolyRequest
	{
		module = "system_clan";
		parameters[] = {"ARRAY","ARRAY"};
	};
	class removeMarkerRequest
	{
		module = "system_clan";
		parameters[] = {"SCALAR","SCALAR"};
	};
	class inviteToPartyRequest
	{
		module = "system_party";
		parameters[] = {"STRING"};
	};
	class joinPartyRequest
	{
		module = "system_party";
		parameters[] = {"STRING"};
	};
	class kickFromPartyRequest
	{
		module = "system_party";
		parameters[] = {"STRING"};
	};
	class announceTerritoryRequest
	{
		module = "system_territory";
		parameters[] = {"STRING"};
	};
	class addToTerritoryRequest
	{
		module = "system_territory";
		parameters[] = {"STRING","STRING"};
	};
	class removeFromTerritoryRequest
	{
		module = "system_territory";
		parameters[] = {"STRING","STRING"};
	};
	class moderationTerritoryRequest
	{
		module = "system_territory";
		parameters[] = {"STRING","STRING","BOOL"};
	};
	class purchaseTerritory
	{
		module = "system_territory";
		parameters[] = {};
	};
	class purchaseTerritoryResponse
	{
		module = "system_territory";
		parameters[] = {"SCALAR"};
	};
	class requestTerritoryUpgradeDialog
	{
		module = "system_territory";
		parameters[] = {"OBJECT"};
	};
	class payFlagRansomRequest
	{
		module = "system_territory";
		parameters[] = {"STRING"};
	};
	class restoreFlagRequest
	{
		module = "system_territory";
		parameters[] = {"STRING"};
	};
	class addLockRequest
	{
		module = "object_construction";
		parameters[] = {"OBJECT","STRING"};
	};
	class addLockResponse
	{
		module = "object_construction";
		parameters[] = {"STRING"};
	};
	class territoryUpgradeDialogResponse
	{
		module = "gui_upgradeTerritoryDialog";
		parameters[] = {"SCALAR"};
	};
	class territoryUpgradeRequest
	{
		module = "system_territory";
		parameters[] = {"OBJECT"};
	};
	class deleteGroupPlz
	{
		module = "system";
		parameters[] = {"GROUP"};
	};
	class wasteDumpRequest
	{
		module = "system_trading";
		parameters[] = {"STRING","SCALAR"};
	};
	class wasteDumpResponse
	{
		module = "system_trading";
		parameters[] = {"SCALAR","SCALAR","STRING"};
	};
	class beginTakeAllRequest
	{
		module = "object_player";
		parameters[] = {"STRING"};
	};
	class beginTakeAllResponse
	{
		module = "object_player";
		parameters[] = {"STRING"};
	};
	class endTakeAllRequest
	{
		module = "object_player";
		parameters[] = {"STRING"};
	};
	class scanCodeLockRequest
	{
		module = "object_lock";
		parameters[] = {"STRING"};
	};
	class scanCodeLockResponse
	{
		module = "object_lock";
		parameters[] = {"STRING"};
	};
	class enableSimulationRequest
	{
		module = "system_simulationMonitor";
		parameters[] = {"STRING"};
	};
	class attachSupplyBoxRequest
	{
		module = "object_supplyBox";
		parameters[] = {"STRING"};
	};
	class detachSupplyBoxRequest
	{
		module = "object_supplyBox";
		parameters[] = {"STRING"};
	};
	class installSupplyBoxRequest
	{
		module = "object_supplyBox";
		parameters[] = {"STRING"};
	};
	class handcuffRequest
	{
		module = "object_handcuffs";
		parameters[] = {"STRING"};
	};
	class handcuffResponse
	{
		module = "object_handcuffs";
		parameters[] = {"STRING"};
	};
	class freeRequest
	{
		module = "object_handcuffs";
		parameters[] = {"STRING"};
	};
	class freeResponse
	{
		module = "object_handcuffs";
		parameters[] = {"STRING"};
	};
	class breakFreeRequest
	{
		module = "object_handcuffs";
		parameters[] = {};
	};
	class breakFreeResponse
	{
		module = "object_handcuffs";
		parameters[] = {"STRING"};
	};
	class updateMyPartyMarkerRequest
	{
		module = "system_party";
		parameters[] = {"BOOL","ARRAY"};
	};
	class updatePartyMarkerRequest
	{
		module = "system_party";
		parameters[] = {"STRING","BOOL","ARRAY"};
	};
	class resetCodeRequest
	{
		module = "object_vehicle";
		parameters[] = {"STRING","STRING","STRING"};
	};
	class resetCodeResponse
	{
		module = "object_vehicle";
		parameters[] = {"ARRAY","STRING","STRING"};
	};
	class rekeyVehicleRequest
	{
		module = "object_vehicle";
		parameters[] = {"STRING","STRING"};
	};
	class rekeyVehicleDialogRequest
	{
		module = "object_vehicle";
		parameters[] = {"STRING","SCALAR"};
	};
	class rekeyVehicleDialogResponse
	{
		module = "gui_vehicleRekeyDialog";
		parameters[] = {"STRING","STRING","SCALAR"};
	};
	class resetCodeDialogRequest
	{
		module = "object_vehicle";
		parameters[] = {"STRING"};
	};
	class resetCodeDialogResponse
	{
		module = "gui_vehicleRekeyDialog";
		parameters[] = {"STRING","STRING"};
	};
	class putMoneyRequest
	{
		module = "system_money";
		parameters[] = {"STRING","SCALAR"};
	};
	class takeMoneyRequest
	{
		module = "system_money";
		parameters[] = {"STRING","SCALAR"};
	};
	class moneyTransactionResponse
	{
		module = "system_money";
		parameters[] = {"STRING","SCALAR"};
	};
	class flagStolenRequest
	{
		module = "system_territory";
		parameters[] = {"OBJECT"};
	};
	class lockerDepositRequest
	{
		module = "system_locker";
		parameters[] = {"STRING"};
	};
	class lockerWithdrawRequest
	{
		module = "system_locker";
		parameters[] = {"STRING"};
	};
	class lockerResponse
	{
		module = "system_locker";
		parameters[] = {};
	};
	class slothMachineRequest
	{
		module = "system_slothMachine";
		parameters[] = {};
	};
	class slothMachineResponse
	{
		module = "system_slothMachine";
		parameters[] = {"STRING","SCALAR","SCALAR","ARRAY"};
	};
	class breachingStart
	{
		module = "system_breaching";
		parameters[] = {"OBJECT"};
	};
	class breachingResponse
	{
		module = "system_breaching";
		parameters[] = {"OBJECT","OBJECT"};
	};
	class breachingPlaceRequest
	{
		module = "system_breaching";
		parameters[] = {"ARRAY","ARRAY","OBJECT"};
	};
	class breachingCancel
	{
		module = "system_breaching";
		parameters[] = {"OBJECT"};
	};
	class breachingPlaceResponse
	{
		module = "system_breaching";
		parameters[] = {"OBJECT"};
	};
	class chargePlanted
	{
		module = "system_breaching";
		parameters[] = {};
	};
	class detonateAllCharges
	{
		module = "system_breaching";
		parameters[] = {};
	};
	class hackLockRequest
	{
		module = "object_lock";
		parameters[] = {"STRING"};
	};
	class updateHackAttemptRequest
	{
		module = "object_lock";
		parameters[] = {"STRING"};
	};
	class startHackRequest
	{
		module = "object_lock";
		parameters[] = {"STRING"};
	};
	class grindNotificationRequest
	{
		module = "object_lock";
		parameters[] = {"STRING"};
	};
	class grindLockRequest
	{
		module = "object_lock";
		parameters[] = {"STRING"};
	};
	class storeVehicleRequest
	{
		module = "object_vehicle";
		parameters[] = {"STRING","STRING"};
	};
	class storeVehicleResponse
	{
		module = "object_vehicle";
		parameters[] = {"BOOL","STRING"};
	};
	class retrieveVehicleRequest
	{
		module = "object_vehicle";
		parameters[] = {"STRING"};
	};
	class retrieveVehicleResponse
	{
		module = "object_vehicle";
		parameters[] = {"BOOL"};
	};
};
class CfgRemoteExec
{
	class Functions
	{
		mode = 1;
		jip = 0;
		class ExileServer_system_network_dispatchIncomingMessage
		{
			allowedTargets = 2;
		};
	};
	class Commands
	{
		mode = 0;
		jip = 0;
	};
};
class CfgRespawnTemplates
{
	class Exile
	{
		isCall = 1;
		onPlayerKilled = "ExileClient_object_player_event_onPlayerKilled";
		onPlayerRespawn = "ExileClient_object_player_event_onPlayerRespawn";
		respawnDelay = 30;
		respawnOnStart = 0;
		respawnButton = 1;
	};
};
class CfgSFX
{
	class Exile_Sfx_Flies
	{
		name = "Exile Flies";
		sounds[] = {"flies01"};
		flies01[] = {"\exile_assets\sound\flies.ogg",3,1,60,1,0,0,0};
		empty[] = {"",0,0,0,0,1,3,5};
	};
	class Exile_Sfx_PortableGenerator
	{
		name = "Exile Exile_Sfx_PortableGenerator";
		sounds[] = {"noise01"};
		noise01[] = {"\a3\sounds_f\ambient\objects\aircontition_5.wss",1,1,50,1,0,0,0};
		empty[] = {"",0,0,0,0,1,3,5};
	};
	class Exile_Sfx_Grinding
	{
		name = "Exile Exile_Sfx_Grinding";
		sounds[] = {"grind01"};
		grind01[] = {"\exile_assets\sound\Exile_Grinding01.wss",1.5,1,50,1,0,0,0};
		empty[] = {"",0,0,0,0,1,3,5};
	};
};
class CfgSounds
{
	class SndExileTwinkleTwisterCharge01
	{
		name = "";
		sound[] = {"exile_assets\sound\twinkle_twister_charge_01",1,1};
		titles[] = {};
	};
	class SndExileTwinkleTwisterCharge02
	{
		name = "";
		sound[] = {"exile_assets\sound\twinkle_twister_charge_02",1,1};
		titles[] = {};
	};
	class SndExileTwinkleTwisterCharge03
	{
		name = "";
		sound[] = {"exile_assets\sound\twinkle_twister_charge_03",1,1};
		titles[] = {};
	};
	class SndExileTwinkleTwisterChargeDone01
	{
		name = "";
		sound[] = {"exile_assets\sound\twinkle_twister_charge_done_01",1,1};
		titles[] = {};
	};
	class SndExileTwinkleTwisterChargeDone02
	{
		name = "";
		sound[] = {"exile_assets\sound\twinkle_twister_charge_done_02",1,1};
		titles[] = {};
	};
	class SndExileTwinkleTwisterChargeDone03
	{
		name = "";
		sound[] = {"exile_assets\sound\twinkle_twister_charge_done_03",1,1};
		titles[] = {};
	};
	class SndExileTwinkleTwisterSuccess
	{
		name = "";
		sound[] = {"exile_assets\sound\twinkle_twister_success",1,1};
		titles[] = {};
	};
	class SndExileTwinkleTwisterFail
	{
		name = "";
		sound[] = {"exile_assets\sound\twinkle_twister_fail",1,1};
		titles[] = {};
	};
	class SndXM8PowerOn
	{
		name = "";
		sound[] = {"exile_assets\sound\xm8_power_on",1,1};
		titles[] = {};
	};
	class SndXM8PowerOff
	{
		name = "";
		sound[] = {"exile_assets\sound\xm8_power_off",1,1};
		titles[] = {};
	};
	class SndExileHeartbeatFast
	{
		name = "";
		sound[] = {"exile_assets\sound\heartbeat_fast.ogg",1,1};
		titles[] = {};
	};
	class SndExileHeartbeatSlow
	{
		name = "";
		sound[] = {"exile_assets\sound\heartbeat_slow.ogg",1,1};
		titles[] = {};
	};
	class SndExileHeartbeatSlowSingle
	{
		name = "";
		sound[] = {"exile_assets\sound\heartbeat_slow_single.ogg",1,1};
		titles[] = {};
	};
	class SndExileHeartbeatStopping
	{
		name = "";
		sound[] = {"exile_assets\sound\heartbeat_stopping.ogg",1,1};
		titles[] = {};
	};
	class SndExileHeartbeatEating01
	{
		name = "";
		sound[] = {"exile_assets\sound\eating01.ogg",1,1};
		titles[] = {};
	};
	class SndExileHeartbeatEating02
	{
		name = "";
		sound[] = {"exile_assets\sound\eating02.ogg",1,1};
		titles[] = {};
	};
	class SndExileHeartbeatDrinking01
	{
		name = "";
		sound[] = {"exile_assets\sound\drinking01.ogg",1,1};
		titles[] = {};
	};
	class BaDumTss
	{
		name = "";
		sound[] = {"exile_assets\sound\ba_dum_tss",10,1};
		titles[] = {};
	};
	class ExileIntro01
	{
		name = "";
		sound[] = {"\a3\dubbing_f_bootcamp\BOOT_m02\15_Introduction\boot_m02_15_introduction_ADA_0.ogg",1,1};
		titles[] = {};
	};
	class ExileIntro02
	{
		name = "";
		sound[] = {"\a3\dubbing_f_bootcamp\BOOT_m02\15_Introduction\boot_m02_15_introduction_ADA_1.ogg",1,1};
		titles[] = {};
	};
	class ExileIntro03
	{
		name = "";
		sound[] = {"a3\dubbing_f_bootcamp\BOOT_m02\d05_AAF_Anger\boot_m02_d05_aaf_anger_ADA_0.ogg",1,1};
		titles[] = {};
	};
	class ExileIntro04
	{
		name = "";
		sound[] = {"a3\dubbing_f_bootcamp\BOOT_m02\d05_AAF_Anger\boot_m02_d05_aaf_anger_ADA_1.ogg",1,1};
		titles[] = {};
	};
	class ExileIntro05
	{
		name = "";
		sound[] = {"a3\dubbing_f_bootcamp\BOOT_m02\d05_AAF_Anger\boot_m02_15_introduction_ADA_2.ogg",1,1};
		titles[] = {};
	};
	class ExileIntro06
	{
		name = "";
		sound[] = {"\a3\dubbing_f_bootcamp\BOOT_m03\20_Lesson\boot_m03_20_lesson_ADA_0.ogg",1,1};
		titles[] = {};
	};
	class ExileIntro07
	{
		name = "";
		sound[] = {"a3\dubbing_f_bootcamp\BOOT_m03\75_Orders\boot_m03_75_orders_ADA_0.ogg",1,1};
		titles[] = {};
	};
	class ExileIntro08
	{
		name = "";
		sound[] = {"\a3\dubbing_f_bootcamp\BOOT_m03\80_Get_In\boot_m03_80_get_in_ADA_0.ogg",1,1};
		titles[] = {};
	};
	class ExileIntro09
	{
		name = "";
		sound[] = {"\a3\dubbing_f_bootcamp\BOOT_m04\65_Regroup\boot_m04_65_regroup_ADA_0.ogg",1,1};
		titles[] = {};
	};
	class ExileIntro10
	{
		name = "";
		sound[] = {"\a3\sounds_f\characters\movements\bodyfallsbodyfall_concrete_3.wss",1,1};
		titles[] = {};
	};
	class Exile_Sound_GeigerCounter_Low01
	{
		name = "Geiger Counter";
		sound[] = {"\exile_assets\sound\Exile_GeigerCounter_Low01.wss",0.5,1.0};
		titles[] = {};
	};
	class Exile_Sound_GeigerCounter_Low02
	{
		name = "Geiger Counter";
		sound[] = {"\exile_assets\sound\Exile_GeigerCounter_Low02.wss",0.5,1.0};
		titles[] = {};
	};
	class Exile_Sound_GeigerCounter_Low03
	{
		name = "Geiger Counter";
		sound[] = {"\exile_assets\sound\Exile_GeigerCounter_Low03.wss",0.5,1.0};
		titles[] = {};
	};
	class Exile_Sound_GeigerCounter_Medium01
	{
		name = "Geiger Counter";
		sound[] = {"\exile_assets\sound\Exile_GeigerCounter_Medium01.wss",0.5,1.0};
		titles[] = {};
	};
	class Exile_Sound_GeigerCounter_Medium02
	{
		name = "Geiger Counter";
		sound[] = {"\exile_assets\sound\Exile_GeigerCounter_Medium02.wss",0.5,1.0};
		titles[] = {};
	};
	class Exile_Sound_GeigerCounter_Medium03
	{
		name = "Geiger Counter";
		sound[] = {"\exile_assets\sound\Exile_GeigerCounter_Medium03.wss",0.5,1.0};
		titles[] = {};
	};
	class Exile_Sound_GeigerCounter_High01
	{
		name = "Geiger Counter";
		sound[] = {"\exile_assets\sound\Exile_GeigerCounter_High01.wss",0.5,1.0};
		titles[] = {};
	};
	class Exile_Sound_GeigerCounter_High02
	{
		name = "Geiger Counter";
		sound[] = {"\exile_assets\sound\Exile_GeigerCounter_High02.wss",0.5,1.0};
		titles[] = {};
	};
	class Exile_Sound_GeigerCounter_High03
	{
		name = "Geiger Counter";
		sound[] = {"\exile_assets\sound\Exile_GeigerCounter_High03.wss",0.5,1.0};
		titles[] = {};
	};
	class Exile_Sound_GasMaskBreathing01
	{
		name = "Gas Mask Breathing";
		sound[] = {"\a3\sounds_f\characters\human-sfx\diver-breath-1.wss",0.25,1.0};
		titles[] = {};
	};
	class Exile_Sound_GasMaskBreathing02
	{
		name = "Gas Mask Breathing";
		sound[] = {"\a3\sounds_f\characters\human-sfx\diver-breath-3.wss",0.25,1.0};
		titles[] = {};
	};
};
class CfgTasks
{
	class Exile_Animal_Rooster
	{
		name = "Rooster Main Task";
		fsm = "\exile_client\fsm\Exile_Animal_Rooster.fsm";
		condition = "\A3\animals_f\Data\scripts\createSingleTask.sqf";
		description = "";
		destination = "";
		resources[] = {};
	};
	class Exile_Animal_Hen
	{
		name = "Hen Main Task";
		fsm = "\exile_client\fsm\Exile_Animal_Hen.fsm";
		condition = "\A3\animals_f\Data\scripts\createSingleTask.sqf";
		description = "";
		destination = "";
		resources[] = {};
	};
	class Exile_Animal_Goat
	{
		name = "Goat Main Task";
		fsm = "\exile_client\fsm\Exile_Animal_Goat.fsm";
		condition = "\A3\animals_f\Data\scripts\createSingleTask.sqf";
		description = "";
		destination = "";
		resources[] = {};
	};
	class Exile_Animal_Sheep
	{
		name = "Sheep Main Task";
		fsm = "\exile_client\fsm\Exile_Animal_Sheep.fsm";
		condition = "\A3\animals_f\Data\scripts\createSingleTask.sqf";
		description = "";
		destination = "";
		resources[] = {};
	};
};
class CfgTwinkleTwister
{
	chances[] = {{30,""},{40,"FreeRound"},{70,"GloriousKnakworst"},{80,"InstaDoc"},{95,"CookingPot"},{100,"Rangefinder"}};
	class Prizes
	{
		class FreeRound
		{
			name = "100 Pop Tabs";
			symbol = "Banana";
			color = "#e4e645";
			type = 0;
			prize = 100;
		};
		class GloriousKnakworst
		{
			name = "Glorious Knakworst";
			symbol = "Strawberry";
			color = "#c90d0d";
			type = 1;
			prize = "Exile_Item_GloriousKnakworst";
		};
		class InstaDoc
		{
			name = "InstaDoc";
			symbol = "Cucumber";
			color = "#9eed3f";
			type = 1;
			prize = "Exile_Item_InstaDoc";
		};
		class CookingPot
		{
			name = "Cooking Pot";
			symbol = "Pineapple";
			color = "#e4e645";
			type = 1;
			prize = "Exile_Item_CookingPot";
		};
		class Rangefinder
		{
			name = "Rangefinder";
			symbol = "Grape";
			color = "#304bef";
			type = 1;
			prize = "Rangefinder";
		};
	};
};
class CfgUnitInsignia
{
	class ExileBrunswik
	{
		author = "Exile Mod Team";
		displayName = "Brunswik";
		texture = "\exile_assets\texture\insignia\brunswik_ca.paa";
		textureVehicle = "";
		scopeArsenal = 2;
	};
	class Exile
	{
		author = "Exile Mod Team";
		displayName = "Exile";
		texture = "\exile_assets\texture\insignia\exile_co.paa";
		textureVehicle = "";
		scopeArsenal = 2;
	};
};
class CfgVehicleClasses
{
	class ExileConstructions
	{
		displayName = "Exile Constructions";
	};
	class ExileContainers
	{
		displayName = "Exile Containers";
	};
	class ExileCars
	{
		displayName = "Exile Cars";
	};
	class ExileBikes
	{
		displayName = "Exile Bikes";
	};
	class ExilePlanes
	{
		displayName = "Exile Planes";
	};
	class ExileBoats
	{
		displayName = "Exile Boats";
	};
	class ExileChoppers
	{
		displayName = "Exile Choppers";
	};
};
class UniformSlotInfo;
class SmallFire;
class DefaultEventHandlers;
class AnimationSources;
class CfgVehicles
{
	class VirtualMan_F;
	class Man;
	class NATO_Box_Base;
	class thing;
	class thingX;
	class NonStrategic;
	class FlagCarrier;
	class Land_PortableLight_single_F;
	class Land_WorkStand_F;
	class SignAd_Sponsor_F;
	class SignAd_SponsorS_F;
	class Static;
	class Headgear_Base_F;
	class ReammoBox;
	class Sound;
	class CAManBase: Man
	{
		class ViewPilot;
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};
	class LootWeaponHolder: ReammoBox
	{
		author = "Exile Mod Team";
		displayName = "Loot Weapon Holder";
		scope = 1;
		scopeCurator = 0;
		model = "\A3\Weapons_f\dummyweapon.p3d";
		accuracy = 0.2;
		forceSupply = 1;
		showWeaponCargo = 1;
		transportMaxMagazines = 1e+009;
		transportMaxWeapons = 1e+009;
		destrType = "DestructNo";
		transportMaxBackpacks = 0;
		isGround = 1;
		icon = "iconObject_1x1";
		class TransportMagazines{};
	};
	class B_Soldier_diver_base_F;
	class I_G_engineer_F;
	class I_G_medic_F;
	class I_G_officer_F;
	class I_G_Soldier_A_F;
	class I_G_Soldier_exp_F;
	class I_G_Soldier_F;
	class I_G_Soldier_GL_F;
	class I_G_Soldier_LAT_F;
	class I_G_Soldier_lite_F;
	class I_G_Soldier_M_F;
	class I_G_Soldier_SL_F;
	class I_G_Soldier_TL_F;
	class C_man_1;
	class Civilian;
	class I_Soldier_diver_base_F;
	class O_Soldier_diver_base_F;
	class I_G_Soldier_AR_F;
	class SoldierWB: CAManBase
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class SoldierEB: CAManBase
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class SoldierGB: CAManBase
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_diver_F: B_Soldier_diver_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_engineer_F: I_G_engineer_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_medic_F: I_G_medic_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_officer_F: I_G_officer_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_Soldier_A_F: I_G_Soldier_A_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_Soldier_exp_F: I_G_Soldier_exp_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_Soldier_F: I_G_Soldier_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_Soldier_GL_F: I_G_Soldier_GL_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_Soldier_LAT_F: I_G_Soldier_LAT_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_Soldier_lite_F: I_G_Soldier_lite_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_Soldier_M_F: I_G_Soldier_M_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_Soldier_SL_F: I_G_Soldier_SL_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_G_Soldier_TL_F: I_G_Soldier_TL_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_Soldier_base_F: SoldierWB
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_Soldier_02_f: B_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_Soldier_03_f: B_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_Soldier_04_f: B_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_Soldier_05_f: B_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_Helipilot_F: B_Soldier_04_f
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_helicrew_F: B_Helipilot_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_Pilot_F: B_Soldier_05_f
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_RangeMaster_F: B_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class b_soldier_survival_F: B_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class B_Story_SF_Captain_F: B_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class C_journalist_F: C_man_1
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class C_Driver_1_F: C_man_1
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class C_man_1_1_F: C_man_1
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class Civilian_F: Civilian
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class C_man_hunter_1_F: C_man_1
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class C_man_p_fugitive_F: C_man_1
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class C_man_p_beggar_F: C_man_p_fugitive_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class C_man_pilot_F: C_man_1
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class C_man_w_worker_F: C_man_1
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class C_Marshal_F: B_RangeMaster_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class C_scientist_F: C_man_w_worker_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class I_diver_F: I_Soldier_diver_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class I_G_Soldier_base_F: SoldierGB
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class I_G_Story_SF_Captain_F: B_G_Soldier_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class I_Soldier_base_F: SoldierGB
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class I_officer_F: I_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class I_Soldier_03_F: I_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class I_Soldier_04_F: I_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_diver_F: O_Soldier_diver_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_engineer_F: I_G_engineer_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_medic_F: I_G_medic_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_officer_F: I_G_officer_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_Soldier_A_F: I_G_Soldier_A_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_Soldier_AR_F: I_G_Soldier_AR_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_Soldier_exp_F: I_G_Soldier_exp_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_Soldier_F: I_G_Soldier_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_Soldier_GL_F: I_G_Soldier_GL_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_Soldier_LAT_F: I_G_Soldier_LAT_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_Soldier_lite_F: I_G_Soldier_lite_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_Soldier_M_F: I_G_Soldier_M_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_Soldier_SL_F: I_G_Soldier_SL_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_G_Soldier_TL_F: I_G_Soldier_TL_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_Soldier_base_F: SoldierEB
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_officer_F: O_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class O_Soldier_02_F: O_Soldier_base_F
	{
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
	};
	class DemoCharge_F;
	class SatchelCharge_F;
	class Exile_Ammo_BreachingCharge_BigMomma_Veh: DemoCharge_F
	{
		displayName = "Breaching Charge (Big Momma)";
		model = "\exile_assets\model\Exile_Item_BigMomma.p3d";
		ammo = "Exile_Ammo_BreachingCharge_BigMomma";
		simulation = "thingX";
		submerged = 0;
		submergeSpeed = 0;
		timetolive = 2147483647;
		disappearAtContact = 0;
		airFriction2[] = {0.01,0.01,0.01};
		airFriction1[] = {0.01,0.01,0.01};
		airFriction0[] = {0.01,0.01,0.01};
		airRotation = 0;
		gravityFactor = 0;
		minHeight = 0;
		maxHeight = 0;
		avgHeight = 0;
	};
	class Exile_Ammo_BreachingCharge_Wood_Veh: DemoCharge_F
	{
		displayName = "Breaching Charge (Wood)";
		ammo = "Exile_Ammo_BreachingCharge_Wood";
		simulation = "thingX";
		submerged = 0;
		submergeSpeed = 0;
		timetolive = 2147483647;
		disappearAtContact = 0;
		airFriction2[] = {0.01,0.01,0.01};
		airFriction1[] = {0.01,0.01,0.01};
		airFriction0[] = {0.01,0.01,0.01};
		airRotation = 0;
		gravityFactor = 0;
		minHeight = 0;
		maxHeight = 0;
		avgHeight = 0;
	};
	class Exile_Ammo_BreachingCharge_Metal_Veh: SatchelCharge_F
	{
		displayName = "Breaching Charge (Metal)";
		ammo = "Exile_Ammo_BreachingCharge_Metal";
		simulation = "thingX";
		submerged = 0;
		submergeSpeed = 0;
		timetolive = 2147483647;
		disappearAtContact = 0;
		airFriction2[] = {0.01,0.01,0.01};
		airFriction1[] = {0.01,0.01,0.01};
		airFriction0[] = {0.01,0.01,0.01};
		airRotation = 0;
		gravityFactor = 0;
		minHeight = 0;
		maxHeight = 0;
		avgHeight = 0;
	};
	class Exile_ConcreteMixer: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Concrete Mixer";
		model = "\exile_assets\model\Exile_ConcreteMixer.p3d";
		destrType = "DestructNo";
		class EventHandlers
		{
			init = "";
		};
		class AnimationSources
		{
			class SpinSource
			{
				source = "user";
				initPhase = 0;
				animPeriod = 60;
				sound = "";
			};
		};
	};
	class Exile_Cutscene_Abstract: B_Soldier_base_F
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Guard Base";
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
		vehicleClass = "Men";
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};
		respawnItems[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		backpack = "";
		canCarryBackPack = 1;
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_F\common\coveralls";
		uniformClass = "";
		class EventHandlers
		{
			init = "";
		};
		class UserActions{};
		actionBegin1 = "";
		actionEnd1 = "";
	};
	class Exile_Cutscene_Player: Exile_Cutscene_Abstract
	{
		displayName = "Exile Cutcene Player";
		uniformClass = "Exile_Uniform_BambiOverall";
		linkedItems[] = {};
		weapons[] = {};
	};
	class Exile_Cutscene_Prisoner01: Exile_Cutscene_Abstract
	{
		displayName = "Exile Cutcene Prisoner 01";
		uniformClass = "Exile_Uniform_BambiOverall";
		linkedItems[] = {"G_Bandanna_beast"};
		weapons[] = {};
	};
	class Exile_Cutscene_Prisoner02: Exile_Cutscene_Abstract
	{
		displayName = "Exile Cutcene Prisoner 02";
		uniformClass = "Exile_Uniform_BambiOverall";
		linkedItems[] = {"G_Sport_Blackred"};
		weapons[] = {};
	};
	class Exile_Cutscene_Pilot: Exile_Cutscene_Abstract
	{
		displayName = "Exile Cutcene Pilot";
		uniformClass = "U_B_PilotCoveralls";
		linkedItems[] = {"H_CrewHelmetHeli_B"};
		weapons[] = {"arifle_MXC_Black_F"};
	};
	class Exile_Cutscene_Police01: Exile_Cutscene_Abstract
	{
		displayName = "Exile Cutcene Police 01";
		uniformClass = "U_C_Journalist";
		linkedItems[] = {"V_TacVest_blk_POLICE","G_Diving","H_Watchcap_blk"};
		weapons[] = {"arifle_MXC_Black_F"};
	};
	class Exile_Cutscene_Police02: Exile_Cutscene_Abstract
	{
		displayName = "Exile Cutcene Police 01";
		uniformClass = "U_Rangemaster";
		linkedItems[] = {"V_TacVest_blk_POLICE","G_Shades_Blue","H_Cap_police"};
		weapons[] = {"arifle_MXC_Black_F"};
	};
	class Exile_Guard_Abstract: B_Soldier_base_F
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Guard Base";
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
		vehicleClass = "Men";
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};
		respawnItems[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		backpack = "";
		canCarryBackPack = 1;
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_F\common\coveralls";
		uniformClass = "";
		class EventHandlers
		{
			init = "";
		};
		class UserActions{};
		actionBegin1 = "";
		actionEnd1 = "";
	};
	class Exile_Guard_01: Exile_Guard_Abstract
	{
		displayName = "Exile Guard 01";
		uniformClass = "U_BG_Guerrilla_6_1";
		linkedItems[] = {"V_TacVest_khk","H_ShemagOpen_tan"};
		weapons[] = {"srifle_DMR_03_F"};
	};
	class Exile_Guard_02: Exile_Guard_Abstract
	{
		displayName = "Exile Guard 02";
		uniformClass = "U_BG_Guerilla1_1";
		linkedItems[] = {"V_PlateCarrierIA2_dgtl","H_Hat_camo"};
		weapons[] = {"arifle_Mk20_GL_F"};
	};
	class Exile_Guard_03: Exile_Guard_Abstract
	{
		displayName = "Exile Guard 03";
		uniformClass = "U_BG_Guerilla2_3";
		linkedItems[] = {"V_TacVestIR_blk","H_Bandanna_camo","G_Squares_Tinted"};
		weapons[] = {"SMG_02_F"};
	};
	class UserTexture10m_F;
	class Exile_Helper_50mBox: UserTexture10m_F
	{
		model = "\exile_assets\model\Exile_Helper_50mBox.p3d";
	};
	class Exile_Helper_175mSafeZone: UserTexture10m_F
	{
		model = "\exile_assets\model\Exile_Helper_175mSafeZone.p3d";
	};
	class Exile_Locker: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Locker";
		model = "\exile_assets\model\Exile_Locker.p3d";
		destrType = "DestructNo";
		class EventHandlers
		{
			init = "";
		};
		class UserActions
		{
			class play
			{
				displayName = "Inventory";
				position = "left";
				radius = 3;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_lockerDialog_show";
			};
		};
	};
	class Exile_PopTabs: thing
	{
		author = "Exile Mod Team";
		scope = 1;
		side = 2;
		mapSize = 0.15;
		displayName = "Pop Tabs";
		simulation = "thing";
		animated = 0;
		vehicleClass = "Small_items";
		faction = "None";
		icon = "iconObject";
		editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Default";
		destrType = "DestructNo";
		armor = 999999;
		cost = 100;
		model = "\exile_assets\model\Exile_Item_PopTabs.p3d";
		class Eventhandlers
		{
			init = "";
			killed = "";
		};
		class UserActions
		{
			class Take
			{
				available = 1;
				displayNameDefault = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\take_ca.paa' size='2' shadow='true' />";
				condition = "true";
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\take_ca.paa' size='1' shadow='true' /> Take Pop Tabs";
				onlyForPlayer = 1;
				position = "Supply";
				priority = 6;
				radius = 2;
				showWindow = 1;
				statement = "this call ExileClient_system_money_take";
			};
		};
	};
	class Exile_Preloader: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Preloader";
		model = "\exile_assets\model\Exile_Preloader.p3d";
		destrType = "DestructNo";
		class EventHandlers
		{
			init = "";
		};
	};
	class Land_ChairWood_F;
	class Exile_RussianRouletteChair: Land_ChairWood_F
	{
		scope = 2;
		author = "Exile Mod Team";
		destrType = "DestructNo";
		displayName = "Exile Russian Roulette Chair";
	};
	class Exile_Sound_Flies: Sound
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Flies Sound";
		sound = "Exile_Sfx_Flies";
	};
	class Exile_Sound_PortableGenerator: Sound
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Portable Generator Sound";
		sound = "Exile_Sfx_PortableGenerator";
	};
	class Exile_Sound_Grinding: Sound
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Grinding Sound";
		sound = "Exile_Sfx_Grinding";
	};
	class Exile_Trader_Abstract: B_Soldier_base_F
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Trader Base";
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
		vehicleClass = "Men";
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};
		respawnItems[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		backpack = "";
		canCarryBackPack = 1;
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_F\common\coveralls";
		uniformClass = "";
		class EventHandlers
		{
			init = "";
		};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Trade";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show";
			};
		};
		actionBegin1 = "trade";
		actionEnd1 = "trade";
	};
	class Exile_Trader_Armory: Exile_Trader_Abstract
	{
		displayName = "Exile Armory Trader";
		uniformClass = "U_Rangemaster";
		linkedItems[] = {"V_Rangemaster_belt","H_Cap_headphones","G_Shades_Black"};
		weapons[] = {"srifle_DMR_06_olive_F"};
	};
	class Exile_Trader_Diving: Exile_Trader_Abstract
	{
		displayName = "Exile Dive Trader";
		linkedItems[] = {"V_RebreatherIA","G_I_Diving"};
		uniformClass = "U_I_Wetsuit";
		weapons[] = {"arifle_SDAR_F"};
	};
	class Exile_Trader_SpecialOperations: Exile_Trader_Abstract
	{
		displayName = "Exile Special Operations Trader";
		backpack = "B_Parachute";
		linkedItems[] = {"V_PlateCarrierGL_blk","H_HelmetB_light_black","G_Balaclava_lowprofile","NVGoggles_OPFOR","muzzle_snds_H","acc_pointer_IR","optic_KHS_blk","bipod_03_F_blk"};
		uniformClass = "U_B_CTRG_1";
		weapons[] = {"arifle_MX_Black_F"};
	};
	class Exile_Trader_Equipment: Exile_Trader_Abstract
	{
		displayName = "Exile Equipment Trader";
		uniformClass = "U_BG_Guerrilla_6_1";
		linkedItems[] = {"V_I_G_resistanceLeader_F","H_Watchcap_khk","optic_KHS_blk"};
		weapons[] = {"arifle_MX_GL_Black_F"};
	};
	class Exile_Trader_Food: Exile_Trader_Abstract
	{
		displayName = "Exile Food Trader";
		uniformClass = "U_C_Poloshirt_blue";
		linkedItems[] = {"H_Cap_tan"};
	};
	class Exile_Trader_Hardware: Exile_Trader_Abstract
	{
		displayName = "Exile Hardware Trader";
		backpack = "B_UAV_01_backpack_F";
		uniformClass = "U_C_WorkerCoveralls";
		linkedItems[] = {"V_BandollierB_rgr","H_Booniehat_khk_hs"};
		weapons[] = {};
	};
	class Exile_Trader_Vehicle: Exile_Trader_Abstract
	{
		displayName = "Exile Vehicle Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {"H_RacingHelmet_4_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Purchase Vehicle";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show";
			};
		};
	};
	class Exile_Trader_Aircraft: Exile_Trader_Abstract
	{
		displayName = "Exile Aircraft Trader";
		uniformClass = "U_I_pilotCoveralls";
		linkedItems[] = {"H_PilotHelmetHeli_O"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Purchase Aircraft";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show";
			};
		};
	};
	class Exile_Trader_Boat: Exile_Trader_Abstract
	{
		displayName = "Exile Boat Trader";
		uniformClass = "U_OrestesBody";
		linkedItems[] = {"H_Cap_surfer"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Purchase Boat";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show";
			};
		};
	};
	class Exile_Trader_WasteDump: Exile_Trader_Abstract
	{
		displayName = "Exile Waste Dump Trader";
		uniformClass = "U_I_G_Story_Protagonist_F";
		linkedItems[] = {"V_Rangemaster_belt","H_MilCap_gry"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Recycle Goods";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_wasteDumpDialog_show";
			};
		};
	};
	class Exile_Trader_Office: Exile_Trader_Abstract
	{
		displayName = "Exile Office Trader";
		uniformClass = "U_I_G_resistanceLeader_F";
		linkedItems[] = {"V_Rangemaster_belt","H_Hat_brown"};
		class UserActions
		{
			class clanCreate
			{
				displayName = "Create a family";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_registerClanDialog_show";
			};
			class territory
			{
				displayName = "Purchase Territory";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_purchaseTerritoryDialog_show";
			};
			class upgradeTerritory
			{
				displayName = "Upgrade Territory";
				position = "ohniste";
				radius = 3;
				priority = 5;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_upgradeTerritoryDialog_show";
			};
			class territoryProtectionMoney
			{
				displayName = "Pay Territory Protection Money";
				position = "ohniste";
				radius = 3;
				priority = 5;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_payTerritoryProtectionMoneyDialog_show";
			};
			class payFlagRansom
			{
				displayName = "Pay Territory Flag Ransom";
				position = "ohniste";
				radius = 3;
				priority = 5;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_payFlagRansomDialog_show";
			};
		};
	};
	class Exile_Trader_VehicleCustoms: Exile_Trader_Abstract
	{
		displayName = "Exile Vehicle Customs Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' shadow='false' />Purchase Paintjob";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show";
			};
			class changePin
			{
				displayName = "<img image='\exile_assets\texture\ui\code_pad_ca.paa' size='1' shadow='false' /> Change Pin";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleRekeyDialog_show";
			};
		};
	};
	class Exile_Trader_AircraftCustoms: Exile_Trader_Abstract
	{
		displayName = "Exile Aircraft Customs Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {"H_PilotHelmetFighter_B","V_RebreatherB"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' shadow='false' />Purchase Paintjob";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show";
			};
			class pin
			{
				displayName = "<img image='\exile_assets\texture\ui\code_pad_ca.paa' size='1' shadow='false' /> Change Pin";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this spawn ExileClient_gui_vehicleRekeyDialog_show";
			};
		};
	};
	class Exile_Trader_BoatCustoms: Exile_Trader_Abstract
	{
		displayName = "Exile Boat Customs Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' shadow='false' />Purchase Paintjob";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show";
			};
			class pin
			{
				displayName = "<img image='\exile_assets\texture\ui\code_pad_ca.paa' size='1' shadow='false' /> Change Pin";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this spawn ExileClient_gui_vehicleRekeyDialog_show";
			};
		};
	};
	class Exile_Trader_RussianRoulette: Exile_Trader_Abstract
	{
		displayName = "Exile Russian Roulette Trader";
		uniformClass = "U_Marshal";
		linkedItems[] = {"V_Rangemaster_belt","H_Cap_marshal","G_Sport_Blackyellow"};
		weapons[] = {"hgun_Pistol_Signal_F"};
		class UserActions
		{
			class join
			{
				displayName = "Play Russian Roulette";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_system_russianRoulette_requestJoinDialog";
			};
		};
	};
	class Exile_Trader_CommunityCustoms: Exile_Trader_Abstract
	{
		displayName = "Exile Community Customs Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
	};
	class Exile_Trader_CommunityCustoms2: Exile_Trader_Abstract
	{
		displayName = "Exile Community Customs Trader 2";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
	};
	class Exile_Trader_CommunityCustoms3: Exile_Trader_Abstract
	{
		displayName = "Exile Community Customs Trader 3";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
	};
	class Exile_Trader_CommunityCustoms4: Exile_Trader_Abstract
	{
		displayName = "Exile Community Customs Trader 4";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
	};
	class Exile_Trader_CommunityCustoms5: Exile_Trader_Abstract
	{
		displayName = "Exile Community Customs Trader 5";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
	};
	class Exile_Trader_CommunityCustoms6: Exile_Trader_Abstract
	{
		displayName = "Exile Community Customs Trader 6";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
	};
	class Exile_Trader_CommunityCustoms7: Exile_Trader_Abstract
	{
		displayName = "Exile Community Customs Trader 7";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
	};
	class Exile_Trader_CommunityCustoms8: Exile_Trader_Abstract
	{
		displayName = "Exile Community Customs Trader 8";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
	};
	class Exile_Trader_CommunityCustoms9: Exile_Trader_Abstract
	{
		displayName = "Exile Community Customs Trader 9";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
	};
	class Exile_Trader_CommunityCustoms10: Exile_Trader_Abstract
	{
		displayName = "Exile Community Customs Trader 10";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {};
	};
	class Exile_Loot_XmasPresent_Abstract: LootWeaponHolder
	{
		model = "\exile_assets\model\Exile_Item_XmasPresent.p3d";
		hiddenSelections[] = {"bow","box"};
	};
	class Exile_Loot_XmasPresent_Blue: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.901,0.843,0.207,1,co)","\exile_assets\model\Exile_Item_XmasPresent_blue.paa"};
	};
	class Exile_Loot_XmasPresent_Gold: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.172,0.180,0.196,1,co)","\exile_assets\model\Exile_Item_XmasPresent_golden.paa"};
	};
	class Exile_Loot_XmasPresent_Green: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.725,0.945,0.964,1,co)","\exile_assets\model\Exile_Item_XmasPresent_green01.paa"};
	};
	class Exile_Loot_XmasPresent_Mint: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.305,0.564,0.062,1,co)","\exile_assets\model\Exile_Item_XmasPresent_green02.paa"};
	};
	class Exile_Loot_XmasPresent_Pink: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.929,0.815,0.890,1,co)","\exile_assets\model\Exile_Item_XmasPresent_pink.paa"};
	};
	class Exile_Loot_XmasPresent_Purple: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.862,0.505,0.792,1,co)","\exile_assets\model\Exile_Item_XmasPresent_purple.paa"};
	};
	class Exile_Loot_XmasPresent_Magenta: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.576,0.894,0.972,1,co)","\exile_assets\model\Exile_Item_XmasPresent_red01.paa"};
	};
	class Exile_Loot_XmasPresent_Red: Exile_Loot_XmasPresent_Abstract
	{
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.9,0.9,0.9,1,co)","\exile_assets\model\Exile_Item_XmasPresent_red02.paa"};
	};
	class Exile_Construction_Abstract_Physics: thingX
	{
		scope = 1;
		author = "Exile Mod Team";
		mapSize = 1;
		armor = 1000;
		cost = 1000;
		icon = "iconObject_1x1";
		destrType = "DestructNo";
		vehicleclass = "ExileConstructions";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	};
	class Exile_Construction_Abstract_Static: NonStrategic
	{
		scope = 1;
		author = "Exile Mod Team";
		mapSize = 1;
		armor = 10000;
		cost = 1000;
		icon = "iconObject_1x1";
		destrType = "DestructNo";
		vehicleclass = "ExileConstructions";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		exileRequiresSimulation = 0;
	};
	class Exile_Construction_BaseCamera_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "exile_assets\model\Exile_Construction_BaseCamera.p3d";
		displayName = "Base Camera (Preview)";
		class AnimationSources
		{
			class ExileCctvPitch
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "";
			};
			class ExileCctvYaw
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "";
			};
		};
	};
	class Exile_Construction_BaseCamera_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "exile_assets\model\Exile_Construction_BaseCamera.p3d";
		displayName = "Base Camera";
		exileRequiresSimulation = 1;
		class AnimationSources
		{
			class ExileCctvPitch
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "";
			};
			class ExileCctvYaw
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "";
			};
		};
	};
	class Exile_Construction_CamoTent_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\a3\structures_f\Civ\Camping\TentA_F.p3d";
		displayName = "Camo Tent";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_CampFire_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\a3\structures_f\Civ\Camping\Campfire_F.p3d";
		displayName = "Camp Fire";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_CampFire_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\a3\structures_f\Civ\Camping\Campfire_F.p3d";
		displayName = "Camp Fire";
		simulation = "fire";
		exileRequiresSimulation = 1;
		class Effects: SmallFire
		{
			class Light1
			{
				simulation = "light";
				type = "SmallFireLight";
			};
			class sound
			{
				simulation = "sound";
				type = "Fire_camp";
			};
			class Smoke1
			{
				simulation = "particles";
				type = "SmallFireS";
			};
			class Fire1: Smoke1
			{
				simulation = "particles";
				type = "SmallFireF";
			};
			class Refract1
			{
				simulation = "particles";
				type = "SmallFireFRefract";
			};
		};
		class UserActions
		{
			class lightup
			{
				displayNameDefault = "Light fire";
				displayName = "Light fire";
				position = "ohniste";
				radius = 3;
				onlyForPlayer = 0;
				condition = "!(inflamed this)";
				statement = "this call ExileClient_object_fire_inflame";
			};
			class putout
			{
				displayNameDefault = "Put out fire";
				displayName = "Put out fire";
				position = "ohniste";
				radius = 3;
				onlyForPlayer = 0;
				condition = "(inflamed this)";
				statement = "this call ExileClient_object_fire_extinguish";
			};
		};
		actionBegin1 = "lightup";
		actionEnd1 = "lightup";
	};
	class Exile_Construction_ConcreteDoorway_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteDoorway_Preview.p3d";
		displayName = "Concrete Doorway";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_ConcreteDoorway_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteDoorway.p3d";
		displayName = "Concrete Doorway";
		armor = 20000;
		hiddenSelections[] = {"Concrete"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Construction_Concrete_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_Construction_Concrete.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"};
	};
	class Exile_Construction_ConcreteDoor_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteDoor_Preview.p3d";
		displayName = "Concrete Door";
		hiddenSelections[] = {"Component01","Component02"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_ConcreteDoor_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteDoor.p3d";
		displayName = "Concrete Door";
		exileIsDoor = 1;
		exileIsLockable = 1;
		exileRequiresSimulation = 1;
		armor = 20000;
		hiddenSelections[] = {"Concrete"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Construction_Concrete_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_Construction_Concrete.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"};
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "MetalDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "DoorTrigger";
				priority = 6;
				radius = 3;
				onlyForPlayer = "true";
				condition = "this call ExileClient_object_construction_openShow";
				statement = "this animate ['DoorRotation', 1]";
			};
			class CloseDoor: OpenDoor
			{
				displayName = "Close Door";
				condition = "this animationPhase 'DoorRotation' >= 0.5";
				statement = "this animate ['DoorRotation', 0]";
			};
		};
		actionBegin1 = "OpenDoor";
		actionEnd1 = "OpenDoor";
		numberOfDoors = 1;
	};
	class Exile_Construction_ConcreteDrawBridge_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteDrawBridge_Preview.p3d";
		displayName = "Concrete DrawBridge";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_Abstract_DrawBridge: Exile_Construction_Abstract_Static
	{
		scope = 1;
		author = "Exile Mod Team";
	};
	class Exile_Construction_ConcreteDrawBridge_Static: Exile_Construction_Abstract_DrawBridge
	{
		scope = 2;
		model = "exile_assets\model\Exile_Construction_ConcreteDrawBridge.p3d";
		displayName = "Concrete DrawBridge";
		exileIsDoor = 1;
		exileIsLockable = 1;
		exileRequiresSimulation = 1;
		armor = 20000;
		hiddenSelections[] = {"Concrete","Gate"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Construction_Concrete_co.paa","exile_assets\model\Exile_MetalGate_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_Construction_Concrete.rvmat","exile_assets\model\Exile_MetalGate.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa","exile_assets\model\Exile_MetalGate_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat","exile_assets\model\Exile_MetalGate_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa","exile_assets\model\Exile_MetalGate_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat","exile_assets\model\Exile_MetalGate_Damage02.rvmat"};
		class AnimationSources
		{
			class DrawBridge_Source
			{
				source = "user";
				initPhase = 2;
				animPeriod = 2;
				sound = "MetalBigDoorsSound";
			};
		};
	};
	class Exile_Construction_ConcreteFloorHatch_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteFloorPort_Preview.p3d";
		displayName = "Concrete Floor Hatch";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_ConcreteFloorHatch_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteFloorHatch.p3d";
		displayName = "Concrete Floor Hatch";
		exileIsDoor = 1;
		exileIsLockable = 1;
		exileRequiresSimulation = 1;
		armor = 20000;
		hiddenSelections[] = {"Concrete"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Construction_Concrete_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_Construction_Concrete.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"};
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "MetalDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "DoorTrigger";
				priority = 0.4;
				radius = 3;
				onlyForPlayer = "true";
				condition = "this call ExileClient_object_construction_openShow";
				statement = "this animate ['DoorRotation', 1]";
			};
			class CloseDoor: OpenDoor
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = "this animationPhase 'DoorRotation' >= 0.5";
				statement = "this animate ['DoorRotation', 0]";
			};
		};
		actionBegin1 = "OpenDoor";
		actionEnd1 = "OpenDoor";
		numberOfDoors = 1;
	};
	class Exile_Construction_ConcreteFloorPortSmall_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteFloorPortSmall_Preview.p3d";
		displayName = "Concrete Floor Port (Small)";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_ConcreteFloorPortSmall_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteFloorPortSmall.p3d";
		displayName = "Concrete Floor Port (Small)";
		armor = 20000;
		hiddenSelections[] = {"Concrete"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Construction_Concrete_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_Construction_Concrete.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"};
	};
	class Exile_Construction_ConcreteFloorPort_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteFloorPort_Preview.p3d";
		displayName = "Concrete Floor Port";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_ConcreteFloorPort_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteFloorPort.p3d";
		displayName = "Concrete Floor Port";
		armor = 20000;
		hiddenSelections[] = {"Concrete"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Construction_Concrete_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_Construction_Concrete.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"};
	};
	class Exile_Construction_ConcreteFloor_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteFloor_Preview.p3d";
		displayName = "Concrete Floor";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_ConcreteFloor_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteFloor.p3d";
		displayName = "Concrete Floor";
		armor = 20000;
		hiddenSelections[] = {"Concrete"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Construction_Concrete_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_Construction_Concrete.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"};
	};
	class Exile_Construction_ConcreteGate_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteGate_Preview.p3d";
		displayName = "Concrete Gate";
		hiddenSelections[] = {"Component01","Component02","Component03","Component04"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_ConcreteGate_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteGate.p3d";
		displayName = "Concrete Gate";
		exileIsDoor = 1;
		exileIsLockable = 1;
		exileRequiresSimulation = 1;
		armor = 20000;
		hiddenSelections[] = {"Concrete","Gate"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Construction_Concrete_co.paa","exile_assets\model\Exile_MetalGate_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_Construction_Concrete.rvmat","exile_assets\model\Exile_MetalGate.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa","exile_assets\model\Exile_MetalGate_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat","exile_assets\model\Exile_MetalGate_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa","exile_assets\model\Exile_MetalGate_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat","exile_assets\model\Exile_MetalGate_Damage02.rvmat"};
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source = "user";
				initPhase = 0;
				animPeriod = 2;
				sound = "MetalBigDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "DoorHandle";
				priority = 0.4;
				radius = 3.5;
				onlyForPlayer = "true";
				condition = "this call ExileClient_object_construction_openGateShow";
				statement = "this animate ['DoorRotationLeft', 1]; this animate ['DoorRotationRight', 1];";
			};
			class CloseDoor: OpenDoor
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = "this animationPhase 'DoorRotationLeft' >= 0.5";
				statement = "this animate ['DoorRotationLeft', 0]; this animate ['DoorRotationRight', 0]";
			};
		};
		actionBegin1 = "OpenDoor";
		actionEnd1 = "OpenDoor";
		numberOfDoors = 1;
	};
	class Exile_Construction_ConcreteLadderHatch_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteLadderHatch_Preview.p3d";
		displayName = "Concrete Ladder Hatch";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_ConcreteLadderHatch_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteLadderHatch.p3d";
		displayName = "Concrete Ladder Hatch";
		exileIsDoor = 1;
		exileIsLockable = 1;
		exileRequiresSimulation = 1;
		armor = 20000;
		hiddenSelections[] = {"Concrete"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Construction_Concrete_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_Construction_Concrete.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"};
		class AnimationSources
		{
			class TrapDoor_Source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 2;
				sound = "MetalDoorsSound";
			};
		};
		ladders[] = {{"ladder_start","ladder_end",2.5,"ladder_action"}};
		class UserActions
		{
			class OpenTrap
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Trapdoor";
				position = "DoorHandle";
				priority = 6;
				radius = 3;
				onlyForPlayer = 1;
				condition = "this call ExileClient_object_construction_openHatchShow";
				statement = "this animateSource ['TrapDoor_Source', 1.75];";
			};
			class CloseTrap: OpenTrap
			{
				displayName = "Close Trapdoor";
				condition = "this call ExileClient_object_construction_closeHatchShow";
				statement = "this animateSource ['TrapDoor_Source', 0];";
			};
		};
	};
	class Exile_Construction_ConcreteStairs_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteStairs_Preview.p3d";
		displayName = "Concrete Stairs";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_ConcreteStairs_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteStairs.p3d";
		displayName = "Concrete Stairs";
		armor = 20000;
		hiddenSelections[] = {"Concrete"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Construction_Concrete_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_Construction_Concrete.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"};
	};
	class Exile_Construction_ConcreteSupport_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteSupport_Preview.p3d";
		displayName = "Concrete Support";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_ConcreteSupport_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteSupport.p3d";
		displayName = "Concrete Support";
		armor = 20000;
		hiddenSelections[] = {"Concrete"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Construction_Concrete_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_Construction_Concrete.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"};
	};
	class Exile_Construction_ConcreteWall_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteWall_Preview.p3d";
		displayName = "Concrete Wall";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_ConcreteWall_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteWall.p3d";
		displayName = "Concrete Wall";
		armor = 20000;
		hiddenSelections[] = {"Concrete"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Construction_Concrete_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_Construction_Concrete.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"};
	};
	class Exile_Construction_ConcreteWindowHatch_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteWindowHatch_Preview.p3d";
		displayName = "Concrete Window Hatch";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_ConcreteWindowHatch_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteWindowHatch.p3d";
		displayName = "Concrete Window Hatch";
		exileIsDoor = 1;
		exileIsLockable = 1;
		exileRequiresSimulation = 1;
		armor = 20000;
		hiddenSelections[] = {"Concrete"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Construction_Concrete_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_Construction_Concrete.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"};
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "RollDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Hatch";
				position = "DoorTrigger";
				priority = 0.4;
				radius = 1.5;
				onlyForPlayer = "true";
				condition = "this call ExileClient_object_construction_openShow";
				statement = "this animate ['DoorRotation', 1]";
			};
			class CloseDoor: OpenDoor
			{
				displayName = "Close Hatch";
				priority = 0.2;
				condition = "this animationPhase 'DoorRotation' >= 0.5";
				statement = "this animate ['DoorRotation', 0]";
			};
		};
		actionBegin1 = "OpenDoor";
		actionEnd1 = "OpenDoor";
		numberOfDoors = 1;
	};
	class Exile_Construction_ConcreteWindow_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteWindow_Preview.p3d";
		displayName = "Concrete Window";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_ConcreteWindow_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_ConcreteWindow.p3d";
		displayName = "Concrete Window";
		armor = 20000;
		hiddenSelections[] = {"Concrete"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Construction_Concrete_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_Construction_Concrete.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_Construction_Concrete_Damage02.rvmat"};
	};
	class Exile_Construction_Flag_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\a3\Structures_F\Mil\Flags\Mast_F.p3d";
		displayName = "Territory Flag";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_Flag_Static: FlagCarrier
	{
		scope = 2;
		model = "\a3\Structures_F\Mil\Flags\Mast_F.p3d";
		displayName = "Territory Flag";
		exileRequiresSimulation = 1;
		armor = 10000;
		destrType = "DestructNo";
	};
	class Exile_Construction_FloodLight_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\a3\structures_f_epa\civ\constructions\PortableLight_single_F.p3d";
		displayName = "Flood Light";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_FloodLight_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\a3\structures_f_epa\civ\constructions\PortableLight_single_F.p3d";
		displayName = "Flood Light";
		exileRequiresSimulation = 1;
		destrType = "DestructTree";
		class EventHandlers
		{
			init = "(_this select 0) setHit ['light_1_hitpoint', 0.92];";
		};
		class AnimationSources
		{
			class Light_1_jaw_source
			{
				animPeriod = 2;
				initPhase = 0.13;
				source = "user";
			};
			class Light_1_pitch_source
			{
				animPeriod = "1/45";
				initPhase = 0;
				source = "user";
			};
		};
		class Reflectors
		{
			class Light_1
			{
				color[] = {1000,1000,1200};
				ambient[] = {10,10,12};
				intensity = 5;
				size = 1;
				innerAngle = 60;
				outerAngle = 130;
				coneFadeCoef = 6;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 0.9;
				flareMaxDistance = 250;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 2;
					quadratic = 0.5;
					hardLimitStart = 50;
					hardLimitEnd = 70;
				};
			};
		};
	};
	class Exile_Construction_HBarrier5_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "A3\Structures_F\Mil\Fortification\HBarrier_5_F.p3d";
		displayName = "H-barrier (5 Blocks)";
	};
	class Exile_Construction_HBarrier5_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "H-barrier (5 Blocks)";
		mapSize = 3.12;
		model = "A3\Structures_F\Mil\Fortification\HBarrier_5_F.p3d";
		icon = "iconObject_7x1";
		armor = 1000;
		destrType = "DestructTent";
	};
	class Exile_Construction_Laptop_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "exile_assets\model\exile_construction_laptop.p3d";
		displayName = "Base Laptop";
		class AnimationSources
		{
			class LaptopLidRotation
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "GenericDoorsSound";
			};
		};
	};
	class Exile_Construction_Laptop_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "exile_assets\model\exile_construction_laptop.p3d";
		displayName = "Base Laptop";
		exileRequiresSimulation = 1;
		class AnimationSources
		{
			class LaptopLidRotation
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "GenericDoorsSound";
			};
		};
		class UserActions
		{
			class OpenLid
			{
				displayNameDefault = "<img image='exile_assets\texture\hud\hud_icon_laptop.paa' size='2'/>";
				displayName = "Open Laptop";
				position = "LaptopLid";
				priority = 0.4;
				radius = 1;
				onlyForPlayer = "true";
				condition = "this call ExileClient_gui_baseCamera_lidOpenShow";
				statement = "this animate ['LaptopLidRotation', 1]; call ExileClient_gui_interactionMenu_unhook";
			};
			class CloseLid: OpenLid
			{
				displayName = "Close Laptop";
				priority = 0.2;
				condition = "this animationPhase 'LaptopLidRotation' >= 0.5";
				statement = "this animate ['LaptopLidRotation', 0]; call ExileClient_gui_interactionMenu_unhook";
			};
		};
	};
	class Exile_Construction_MetalHedgehog_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_Hedgehog_Metal.p3d";
		displayName = "Metal Hedgehog";
	};
	class Exile_Construction_MetalHedgehog_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_Hedgehog_Metal.p3d";
		displayName = "Metal Hedgehog";
		destrType = "DestructNo";
		requiresTerritory = 0;
		canBePlacedOnRoad = 1;
	};
	class Exile_Construction_MetalLadderDouble_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_MetalLadder_Double_Preview.p3d";
		displayName = "Metal Ladder (Double Tall)";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_MetalLadderDouble_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_MetalLadder_Double.p3d";
		displayName = "Metal Ladder (Double Tall)";
		exileIsDoor = 1;
		exileIsLockable = 0;
		exileRequiresSimulation = 1;
		armor = 4000;
		ladders[] = {{"start","end"}};
	};
	class Exile_Construction_MetalLadder_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodLadder_Preview.p3d";
		displayName = "Metal Ladder";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_MetalLadder_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_MetalLadder.p3d";
		displayName = "Metal Ladder";
		exileIsDoor = 1;
		exileIsLockable = 0;
		exileRequiresSimulation = 1;
		armor = 4000;
		ladders[] = {{"start","end"}};
	};
	class Exile_Construction_OldChest_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Container_OldChest.p3d";
		displayName = "Old Chest";
		exileContainer = 1;
	};
	class Exile_Construction_PortableGenerator_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\a3\structures_f\Items\Electronics\Portable_generator_F.p3d";
		displayName = "Portable Generator";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_PortableGenerator_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\a3\structures_f\Items\Electronics\Portable_generator_F.p3d";
		displayName = "Portable Generator";
		exileRequiresSimulation = 1;
		armor = 1000;
		destrType = "DestructTent";
		class EventHandlers
		{
			init = "(_this select 0) setVariable['isRunning', false];";
		};
		class UserActions
		{
			class switchOn
			{
				displayName = "Switch On";
				position = "left";
				radius = 3;
				onlyForPlayer = 1;
				condition = "!(this getVariable 'isRunning')";
				statement = "this call ExileClient_object_portableGenerator_switchOn;";
			};
			class switchOff
			{
				displayName = "Switch Off";
				position = "left";
				radius = 3;
				onlyForPlayer = 1;
				condition = "(this getVariable 'isRunning')";
				statement = "this call ExileClient_object_portableGenerator_switchOff;";
			};
		};
	};
	class Exile_Construction_RazorWire_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\A3\Structures_F\Mil\Fortification\Razorwire_F.p3d";
		displayName = "Razor Wire";
	};
	class Exile_Construction_Safe_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Container_Safe.p3d";
		displayName = "Safe";
		exileContainer = 1;
	};
	class Exile_Construction_Safe_Small_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Container_Safe_Small.p3d";
		displayName = "Safe (Small)";
		exileContainer = 1;
	};
	class Exile_Construction_SandBags_Corner_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "A3\Structures_F\Mil\BagFence\BagFence_Corner_F.p3d";
		displayName = "Sandbags (Corner)";
	};
	class Exile_Construction_SandBags_Corner_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Sandbags (Corner)";
		mapSize = 3.12;
		model = "A3\Structures_F\Mil\BagFence\BagFence_Corner_F.p3d";
		icon = "iconObject_7x1";
		armor = 1000;
		destrType = "DestructTent";
	};
	class Exile_Construction_SandBags_Long_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "A3\Structures_F\Mil\BagFence\BagFence_Long_F.p3d";
		displayName = "Sand Bags (Long)";
	};
	class Exile_Construction_SandBags_Long_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Sand Bags (Long)";
		mapSize = 3.12;
		model = "A3\Structures_F\Mil\BagFence\BagFence_Long_F.p3d";
		icon = "iconObject_7x1";
		armor = 1000;
		destrType = "DestructTent";
	};
	class Exile_Construction_StorageCrate_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Container_Storagecrate.p3d";
		displayName = "Crate";
		exileContainer = 1;
	};
	class Exile_Construction_SupplyBox_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
		displayName = "Supply Box";
		exileContainer = 1;
	};
	class Exile_Construction_WaterBarrel_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\A3\Structures_F\Items\Vessels\WaterBarrel_F.p3d";
		displayName = "Water Barrel";
	};
	class Exile_Construction_WaterBarrel_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\A3\Structures_F\Items\Vessels\WaterBarrel_F.p3d";
		displayName = "Water Barrel";
		armor = 1000;
		destrType = "DestructTent";
	};
	class Exile_Construction_WiredFence_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\A3\Structures_F\Walls\Mil_WiredFence_F.p3d";
		displayName = "Wired Fence";
	};
	class Exile_Construction_WiredFence_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Wired Fence";
		mapSize = 7.97;
		model = "\A3\Structures_F\Walls\Mil_WiredFence_F.p3d";
		icon = "iconObject_5x1";
		armor = 100;
		destrType = "DestructTent";
	};
	class Exile_Construction_WoodDoorway_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDoorway_Preview.p3d";
		displayName = "Wood Doorway";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodDoorway_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDoorway_Preview.p3d";
		displayName = "Wood Doorway (Reinforced)";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodDoorway_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDoorway_Reinforced.p3d";
		displayName = "Wood Doorway (Reinforced)";
		armor = 4000;
		hiddenSelections[] = {"WoodPlank","MetalBoard"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_WoodPlank_co.paa","exile_assets\model\Exile_CorrugatedMetal_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_WoodPlank.rvmat","exile_assets\model\Exile_CorrugatedMetal.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_WoodPlank_Damage01_co.paa","exile_assets\model\Exile_CorrugatedMetal_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_WoodPlank_Damage01.rvmat","exile_assets\model\Exile_CorrugatedMetal_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_WoodPlank_Damage02_co.paa","exile_assets\model\Exile_CorrugatedMetal_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_WoodPlank_Damage02.rvmat","exile_assets\model\Exile_CorrugatedMetal_Damage02.rvmat"};
	};
	class Exile_Construction_WoodDoorway_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDoorway.p3d";
		displayName = "Wood Doorway";
		armor = 1000;
		hiddenSelections[] = {"WoodBoard","WoodPlank"};
		hiddenSelectionsTextures[] = {"exile_assets\model\exile_woodboard_co.paa","exile_assets\model\exile_woodplank_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\exile_woodboard.rvmat","exile_assets\model\exile_woodplank.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\exile_woodboard_damage01_co.paa","exile_assets\model\exile_woodplank_damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\exile_woodboard_damage01.rvmat","exile_assets\model\exile_woodplank_damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\exile_woodboard_damage02_co.paa","exile_assets\model\exile_woodplank_damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\exile_woodboard_damage02.rvmat","exile_assets\model\exile_woodplank_damage02.rvmat"};
	};
	class Exile_Construction_WoodDoor_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDoor_Preview.p3d";
		displayName = "Wood Door";
		hiddenSelections[] = {"Component01","Component02"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodDoor_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDoor_Preview.p3d";
		displayName = "Wood Door (Reinforced)";
		hiddenSelections[] = {"Component01","Component02"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodDoor_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDoor_Reinforced.p3d";
		displayName = "Wood Door (Reinforced)";
		exileIsDoor = 1;
		exileIsLockable = 1;
		exileRequiresSimulation = 1;
		armor = 4000;
		hiddenSelections[] = {"WoodPlank","MetalBoard"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_WoodPlank_co.paa","exile_assets\model\Exile_CorrugatedMetal_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_WoodPlank.rvmat","exile_assets\model\Exile_CorrugatedMetal.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_WoodPlank_Damage01_co.paa","exile_assets\model\Exile_CorrugatedMetal_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_WoodPlank_Damage01.rvmat","exile_assets\model\Exile_CorrugatedMetal_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_WoodPlank_Damage02_co.paa","exile_assets\model\Exile_CorrugatedMetal_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_WoodPlank_Damage02.rvmat","exile_assets\model\Exile_CorrugatedMetal_Damage02.rvmat"};
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "FenceGateDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "DoorTrigger";
				priority = 0.4;
				radius = 1.5;
				onlyForPlayer = "true";
				condition = "this call ExileClient_object_construction_openShow";
				statement = "this animate ['DoorRotation', 1]";
			};
			class CloseDoor: OpenDoor
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = "this animationPhase 'DoorRotation' >= 0.5";
				statement = "this animate ['DoorRotation', 0]";
			};
		};
		actionBegin1 = "OpenDoor";
		actionEnd1 = "OpenDoor";
		numberOfDoors = 1;
	};
	class Exile_Construction_WoodDoor_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDoor.p3d";
		displayName = "Wood Door";
		exileIsDoor = 1;
		exileIsLockable = 1;
		exileRequiresSimulation = 1;
		armor = 1000;
		hiddenSelections[] = {"WoodBoard","WoodPlank"};
		hiddenSelectionsTextures[] = {"exile_assets\model\exile_woodboard_co.paa","exile_assets\model\exile_woodplank_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\exile_woodboard.rvmat","exile_assets\model\exile_woodplank.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\exile_woodboard_damage01_co.paa","exile_assets\model\exile_woodplank_damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\exile_woodboard_damage01.rvmat","exile_assets\model\exile_woodplank_damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\exile_woodboard_damage02_co.paa","exile_assets\model\exile_woodplank_damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\exile_woodboard_damage02.rvmat","exile_assets\model\exile_woodplank_damage02.rvmat"};
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "GenericDoorsSound";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "DoorTrigger";
				priority = 0.4;
				radius = 1.5;
				onlyForPlayer = "true";
				condition = "this call ExileClient_object_construction_openShow";
				statement = "this animate ['DoorRotation', 1]";
			};
			class CloseDoor: OpenDoor
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = "this animationPhase 'DoorRotation' >= 0.5";
				statement = "this animate ['DoorRotation', 0]";
			};
		};
		actionBegin1 = "OpenDoor";
		actionEnd1 = "OpenDoor";
		numberOfDoors = 1;
	};
	class Exile_Construction_WoodDrawBridge_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDrawBridge_Preview.p3d";
		displayName = "Wood DrawBridge";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodDrawBridge_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDrawBridge_Preview.p3d";
		displayName = "Wood DrawBridge (Reinforced)";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodDrawBridge_Reinforced_Static: Exile_Construction_Abstract_DrawBridge
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDrawBridge_Reinforced.p3d";
		displayName = "Wood DrawBridge (Reinforced)";
		exileIsDoor = 1;
		exileIsLockable = 1;
		exileRequiresSimulation = 1;
		armor = 1000;
		hiddenSelections[] = {"WoodPlank","MetalBoard"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_WoodPlank_co.paa","exile_assets\model\Exile_CorrugatedMetal_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_WoodPlank.rvmat","exile_assets\model\Exile_CorrugatedMetal.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_WoodPlank_Damage01_co.paa","exile_assets\model\Exile_CorrugatedMetal_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_WoodPlank_Damage01.rvmat","exile_assets\model\Exile_CorrugatedMetal_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_WoodPlank_Damage02_co.paa","exile_assets\model\Exile_CorrugatedMetal_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_WoodPlank_Damage02.rvmat","exile_assets\model\Exile_CorrugatedMetal_Damage02.rvmat"};
		class AnimationSources
		{
			class DrawBridge_Source
			{
				source = "user";
				initPhase = 2;
				animPeriod = 2;
				sound = "FenceGateDoorsSound";
			};
		};
	};
	class Exile_Construction_WoodDrawBridge_Static: Exile_Construction_Abstract_DrawBridge
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodDrawBridge.p3d";
		displayName = "Wood DrawBridge";
		exileIsDoor = 1;
		exileIsLockable = 1;
		exileRequiresSimulation = 1;
		armor = 1000;
		hiddenSelections[] = {"WoodBoard","WoodPlank"};
		hiddenSelectionsTextures[] = {"exile_assets\model\exile_woodboard_co.paa","exile_assets\model\exile_woodplank_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\exile_woodboard.rvmat","exile_assets\model\exile_woodplank.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\exile_woodboard_damage01_co.paa","exile_assets\model\exile_woodplank_damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\exile_woodboard_damage01.rvmat","exile_assets\model\exile_woodplank_damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\exile_woodboard_damage02_co.paa","exile_assets\model\exile_woodplank_damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\exile_woodboard_damage02.rvmat","exile_assets\model\exile_woodplank_damage02.rvmat"};
		class AnimationSources
		{
			class DrawBridge_Source
			{
				source = "user";
				initPhase = 2;
				animPeriod = 2;
				sound = "RoadGateDoors";
			};
		};
	};
	class Exile_Construction_WoodFloorPortSmall_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodFloorPortSmall_Preview.p3d";
		displayName = "Wood Floor Port (Small)";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodFloorPortSmall_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodFloorPortSmall_Reinforced.p3d";
		displayName = "Wood Floor Port (Small - Reinforced)";
		armor = 4000;
		hiddenSelections[] = {"WoodPlank","MetalBoard"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_WoodPlank_co.paa","exile_assets\model\Exile_CorrugatedMetal_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_WoodPlank.rvmat","exile_assets\model\Exile_CorrugatedMetal.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_WoodPlank_Damage01_co.paa","exile_assets\model\Exile_CorrugatedMetal_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_WoodPlank_Damage01.rvmat","exile_assets\model\Exile_CorrugatedMetal_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_WoodPlank_Damage02_co.paa","exile_assets\model\Exile_CorrugatedMetal_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_WoodPlank_Damage02.rvmat","exile_assets\model\Exile_CorrugatedMetal_Damage02.rvmat"};
	};
	class Exile_Construction_WoodFloorPortSmall_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodFloorPortSmall.p3d";
		displayName = "Wood Floor Port (Small)";
		armor = 1000;
		hiddenSelections[] = {"WoodBoard","WoodPlank"};
		hiddenSelectionsTextures[] = {"exile_assets\model\exile_woodboard_co.paa","exile_assets\model\exile_woodplank_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\exile_woodboard.rvmat","exile_assets\model\exile_woodplank.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\exile_woodboard_damage01_co.paa","exile_assets\model\exile_woodplank_damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\exile_woodboard_damage01.rvmat","exile_assets\model\exile_woodplank_damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\exile_woodboard_damage02_co.paa","exile_assets\model\exile_woodplank_damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\exile_woodboard_damage02.rvmat","exile_assets\model\exile_woodplank_damage02.rvmat"};
	};
	class Exile_Construction_WoodFloorPort_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodFloorPort_Preview.p3d";
		displayName = "Wood Floor Port";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodFloorPort_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodFloorPort.p3d";
		displayName = "Wood Floor Port";
		armor = 1000;
		hiddenSelections[] = {"WoodBoard","WoodPlank"};
		hiddenSelectionsTextures[] = {"exile_assets\model\exile_woodboard_co.paa","exile_assets\model\exile_woodplank_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\exile_woodboard.rvmat","exile_assets\model\exile_woodplank.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\exile_woodboard_damage01_co.paa","exile_assets\model\exile_woodplank_damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\exile_woodboard_damage01.rvmat","exile_assets\model\exile_woodplank_damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\exile_woodboard_damage02_co.paa","exile_assets\model\exile_woodplank_damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\exile_woodboard_damage02.rvmat","exile_assets\model\exile_woodplank_damage02.rvmat"};
	};
	class Exile_Construction_WoodFloor_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodFloor_Preview.p3d";
		displayName = "Wood Floor";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodFloor_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodFloor_Reinforced_Preview.p3d";
		displayName = "Wood Floor (Reinforced)";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodFloor_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodFloor_Reinforced.p3d";
		displayName = "Wood Floor (Reinforced)";
		armor = 4000;
		hiddenSelections[] = {"WoodPlank","MetalBoard"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_WoodPlank_co.paa","exile_assets\model\Exile_CorrugatedMetal_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_WoodPlank.rvmat","exile_assets\model\Exile_CorrugatedMetal.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_WoodPlank_Damage01_co.paa","exile_assets\model\Exile_CorrugatedMetal_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_WoodPlank_Damage01.rvmat","exile_assets\model\Exile_CorrugatedMetal_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_WoodPlank_Damage02_co.paa","exile_assets\model\Exile_CorrugatedMetal_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_WoodPlank_Damage02.rvmat","exile_assets\model\Exile_CorrugatedMetal_Damage02.rvmat"};
	};
	class Exile_Construction_WoodFloor_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodFloor.p3d";
		displayName = "Wood Floor";
		armor = 1000;
		hiddenSelections[] = {"WoodBoard","WoodPlank"};
		hiddenSelectionsTextures[] = {"exile_assets\model\exile_woodboard_co.paa","exile_assets\model\exile_woodplank_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\exile_woodboard.rvmat","exile_assets\model\exile_woodplank.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\exile_woodboard_damage01_co.paa","exile_assets\model\exile_woodplank_damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\exile_woodboard_damage01.rvmat","exile_assets\model\exile_woodplank_damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\exile_woodboard_damage02_co.paa","exile_assets\model\exile_woodplank_damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\exile_woodboard_damage02.rvmat","exile_assets\model\exile_woodplank_damage02.rvmat"};
	};
	class Exile_Construction_WoodGate_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodGate_Preview.p3d";
		displayName = "Wood Gate";
		hiddenSelections[] = {"Component01","Component02","Component03","Component04"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodGate_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodGate_Preview.p3d";
		displayName = "Wood Gate (Reinforced)";
		hiddenSelections[] = {"Component01","Component02","Component03","Component04"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)","#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodGate_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodGate_Reinforced.p3d";
		displayName = "Wood Gate (Reinforced)";
		exileIsDoor = 1;
		exileIsLockable = 1;
		exileRequiresSimulation = 1;
		armor = 4000;
		hiddenSelections[] = {"WoodPlank","MetalBoard"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_WoodPlank_co.paa","exile_assets\model\Exile_CorrugatedMetal_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_WoodPlank.rvmat","exile_assets\model\Exile_CorrugatedMetal.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_WoodPlank_Damage01_co.paa","exile_assets\model\Exile_CorrugatedMetal_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_WoodPlank_Damage01.rvmat","exile_assets\model\Exile_CorrugatedMetal_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_WoodPlank_Damage02_co.paa","exile_assets\model\Exile_CorrugatedMetal_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_WoodPlank_Damage02.rvmat","exile_assets\model\Exile_CorrugatedMetal_Damage02.rvmat"};
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source = "user";
				initPhase = 0;
				animPeriod = 2;
				sound = "RoadGateDoors";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "DoorHandle";
				priority = 0.4;
				radius = 3.5;
				onlyForPlayer = "true";
				condition = "this call ExileClient_object_construction_openGateShow";
				statement = "this animate ['DoorRotationLeft', 1]; this animate ['DoorRotationRight', 1];";
			};
			class CloseDoor: OpenDoor
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = "this animationPhase 'DoorRotationLeft' >= 0.5";
				statement = "this animate ['DoorRotationLeft', 0]; this animate ['DoorRotationRight', 0]";
			};
		};
		actionBegin1 = "OpenDoor";
		actionEnd1 = "OpenDoor";
		numberOfDoors = 1;
	};
	class Exile_Construction_WoodGate_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodGate.p3d";
		displayName = "Wood Gate";
		exileIsDoor = 1;
		exileIsLockable = 1;
		exileRequiresSimulation = 1;
		armor = 1000;
		hiddenSelections[] = {"WoodBoard","WoodPlank"};
		hiddenSelectionsTextures[] = {"exile_assets\model\exile_woodboard_co.paa","exile_assets\model\exile_woodplank_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\exile_woodboard.rvmat","exile_assets\model\exile_woodplank.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\exile_woodboard_damage01_co.paa","exile_assets\model\exile_woodplank_damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\exile_woodboard_damage01.rvmat","exile_assets\model\exile_woodplank_damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\exile_woodboard_damage02_co.paa","exile_assets\model\exile_woodplank_damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\exile_woodboard_damage02.rvmat","exile_assets\model\exile_woodplank_damage02.rvmat"};
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source = "user";
				initPhase = 0;
				animPeriod = 2;
				sound = "RoadGateDoors";
			};
		};
		class UserActions
		{
			class OpenDoor
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Door";
				position = "DoorHandle";
				priority = 0.4;
				radius = 3.5;
				onlyForPlayer = "true";
				condition = "this call ExileClient_object_construction_openGateShow";
				statement = "this animate ['DoorRotationLeft', 1]; this animate ['DoorRotationRight', 1];";
			};
			class CloseDoor: OpenDoor
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = "this animationPhase 'DoorRotationLeft' >= 0.5";
				statement = "this animate ['DoorRotationLeft', 0]; this animate ['DoorRotationRight', 0]";
			};
		};
		actionBegin1 = "OpenDoor";
		actionEnd1 = "OpenDoor";
		numberOfDoors = 1;
	};
	class Exile_Construction_WoodLadderHatch_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodLadderHatch_Preview.p3d";
		displayName = "Wood Ladder Hatch";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodLadderHatch_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodLadderHatch_Reinforced.p3d";
		displayName = "Wood Ladder Hatch (Reinforced)";
		exileIsDoor = 1;
		exileIsLockable = 1;
		exileRequiresSimulation = 1;
		armor = 4000;
		hiddenSelections[] = {"WoodPlank","MetalBoard"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_WoodPlank_co.paa","exile_assets\model\Exile_CorrugatedMetal_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_WoodPlank.rvmat","exile_assets\model\Exile_CorrugatedMetal.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_WoodPlank_Damage01_co.paa","exile_assets\model\Exile_CorrugatedMetal_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_WoodPlank_Damage01.rvmat","exile_assets\model\Exile_CorrugatedMetal_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_WoodPlank_Damage02_co.paa","exile_assets\model\Exile_CorrugatedMetal_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_WoodPlank_Damage02.rvmat","exile_assets\model\Exile_CorrugatedMetal_Damage02.rvmat"};
		class AnimationSources
		{
			class TrapDoor_Source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 2;
				sound = "GenericDoorsSound";
			};
		};
		ladders[] = {{"ladder_start","ladder_end",2.5,"ladder_action"}};
		class UserActions
		{
			class OpenTrap
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Trapdoor";
				position = "DoorHandle";
				priority = 6;
				radius = 3;
				onlyForPlayer = 1;
				condition = "this call ExileClient_object_construction_openHatchShow";
				statement = "this animateSource ['TrapDoor_Source', 1.75];";
			};
			class CloseTrap: OpenTrap
			{
				displayName = "Close Trapdoor";
				condition = "this call ExileClient_object_construction_closeHatchShow";
				statement = "this animateSource ['TrapDoor_Source', 0];";
			};
		};
	};
	class Exile_Construction_WoodLadderHatch_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodLadderHatch.p3d";
		displayName = "Wood Ladder Hatch";
		exileIsDoor = 1;
		exileIsLockable = 1;
		exileRequiresSimulation = 1;
		armor = 1000;
		hiddenSelections[] = {"WoodBoard","WoodPlank"};
		hiddenSelectionsTextures[] = {"exile_assets\model\exile_woodboard_co.paa","exile_assets\model\exile_woodplank_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\exile_woodboard.rvmat","exile_assets\model\exile_woodplank.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\exile_woodboard_damage01_co.paa","exile_assets\model\exile_woodplank_damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\exile_woodboard_damage01.rvmat","exile_assets\model\exile_woodplank_damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\exile_woodboard_damage02_co.paa","exile_assets\model\exile_woodplank_damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\exile_woodboard_damage02.rvmat","exile_assets\model\exile_woodplank_damage02.rvmat"};
		class AnimationSources
		{
			class TrapDoor_Source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 2;
				sound = "GenericDoorsSound";
			};
		};
		ladders[] = {{"ladder_start","ladder_end",2.5,"ladder_action"}};
		class UserActions
		{
			class OpenTrap
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Trapdoor";
				position = "DoorHandle";
				priority = 6;
				radius = 3;
				onlyForPlayer = 1;
				condition = "this call ExileClient_object_construction_openHatchShow";
				statement = "this animateSource ['TrapDoor_Source', 1.75];";
			};
			class CloseTrap: OpenTrap
			{
				displayName = "Close Trapdoor";
				condition = "this call ExileClient_object_construction_closeHatchShow";
				statement = "this animateSource ['TrapDoor_Source', 0];";
			};
		};
	};
	class Exile_Construction_WoodLadder_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodLadder_Preview.p3d";
		displayName = "Wood Ladder";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodLadder_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodLadder.p3d";
		displayName = "Wood Ladder";
		exileIsDoor = 1;
		exileIsLockable = 0;
		exileRequiresSimulation = 1;
		armor = 1000;
		hiddenSelections[] = {"WoodPlank"};
		hiddenSelectionsTextures[] = {"exile_assets\model\exile_woodplank_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\exile_woodplank.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\exile_woodplank_damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\exile_woodplank_damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\exile_woodplank_damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\exile_woodplank_damage02.rvmat"};
		ladders[] = {{"start","end"}};
	};
	class Exile_Construction_WoodStairs_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodStairs_Preview.p3d";
		displayName = "Wood Stairs";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodStairs_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodStairs.p3d";
		displayName = "Wood Stairs";
		armor = 1000;
		hiddenSelections[] = {"WoodPlank"};
		hiddenSelectionsTextures[] = {"exile_assets\model\exile_woodplank_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\exile_woodplank.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\exile_woodplank_damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\exile_woodplank_damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\exile_woodplank_damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\exile_woodplank_damage02.rvmat"};
	};
	class Exile_Construction_WoodSupport_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodSupport_Preview.p3d";
		displayName = "Wood Support";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodSupport_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodSupport.p3d";
		displayName = "Wood Support";
		armor = 1000;
		hiddenSelections[] = {"WoodPlank"};
		hiddenSelectionsTextures[] = {"exile_assets\model\exile_woodplank_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\exile_woodplank.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\exile_woodplank_damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\exile_woodplank_damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\exile_woodplank_damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\exile_woodplank_damage02.rvmat"};
	};
	class Exile_Construction_WoodWallHalf_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWallHalf_Preview.p3d";
		displayName = "1/2 Wood Wall";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodWallHalf_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWallHalf_Preview.p3d";
		displayName = "1/2 Wood Wall (Reinforced)";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodWallHalf_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWallHalf_Reinforced.p3d";
		displayName = "1/2 Wood Wall (Reinforced)";
		armor = 4000;
		hiddenSelections[] = {"WoodPlank","MetalBoard"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_WoodPlank_co.paa","exile_assets\model\Exile_CorrugatedMetal_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_WoodPlank.rvmat","exile_assets\model\Exile_CorrugatedMetal.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_WoodPlank_Damage01_co.paa","exile_assets\model\Exile_CorrugatedMetal_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_WoodPlank_Damage01.rvmat","exile_assets\model\Exile_CorrugatedMetal_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_WoodPlank_Damage02_co.paa","exile_assets\model\Exile_CorrugatedMetal_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_WoodPlank_Damage02.rvmat","exile_assets\model\Exile_CorrugatedMetal_Damage02.rvmat"};
	};
	class Exile_Construction_WoodWallHalf_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWallHalf.p3d";
		displayName = "1/2 Wood Wall";
		armor = 1000;
		hiddenSelections[] = {"WoodBoard","WoodPlank"};
		hiddenSelectionsTextures[] = {"exile_assets\model\exile_woodboard_co.paa","exile_assets\model\exile_woodplank_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\exile_woodboard.rvmat","exile_assets\model\exile_woodplank.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\exile_woodboard_damage01_co.paa","exile_assets\model\exile_woodplank_damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\exile_woodboard_damage01.rvmat","exile_assets\model\exile_woodplank_damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\exile_woodboard_damage02_co.paa","exile_assets\model\exile_woodplank_damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\exile_woodboard_damage02.rvmat","exile_assets\model\exile_woodplank_damage02.rvmat"};
	};
	class Exile_Construction_WoodWall_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWall_Preview.p3d";
		displayName = "Wood Wall";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodWall_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWall_Preview.p3d";
		displayName = "Wood Wall (Reinforced)";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodWall_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWall_Reinforced.p3d";
		displayName = "Wood Wall (Reinforced)";
		armor = 4000;
		hiddenSelections[] = {"WoodPlank","MetalBoard"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_WoodPlank_co.paa","exile_assets\model\Exile_CorrugatedMetal_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_WoodPlank.rvmat","exile_assets\model\Exile_CorrugatedMetal.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_WoodPlank_Damage01_co.paa","exile_assets\model\Exile_CorrugatedMetal_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_WoodPlank_Damage01.rvmat","exile_assets\model\Exile_CorrugatedMetal_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_WoodPlank_Damage02_co.paa","exile_assets\model\Exile_CorrugatedMetal_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_WoodPlank_Damage02.rvmat","exile_assets\model\Exile_CorrugatedMetal_Damage02.rvmat"};
	};
	class Exile_Construction_WoodWall_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWall.p3d";
		displayName = "Wood Wall";
		armor = 1000;
		hiddenSelections[] = {"WoodBoard","WoodPlank"};
		hiddenSelectionsTextures[] = {"exile_assets\model\exile_woodboard_co.paa","exile_assets\model\exile_woodplank_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\exile_woodboard.rvmat","exile_assets\model\exile_woodplank.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\exile_woodboard_damage01_co.paa","exile_assets\model\exile_woodplank_damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\exile_woodboard_damage01.rvmat","exile_assets\model\exile_woodplank_damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\exile_woodboard_damage02_co.paa","exile_assets\model\exile_woodplank_damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\exile_woodboard_damage02.rvmat","exile_assets\model\exile_woodplank_damage02.rvmat"};
	};
	class Exile_Construction_WoodWindow_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWindow_Preview.p3d";
		displayName = "Wood Window";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodWindow_Reinforced_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWindow_Preview.p3d";
		displayName = "Wood Window (Reinforced)";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WoodWindow_Reinforced_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWindow_Reinforced.p3d";
		displayName = "Wood Window (Reinforced)";
		armor = 4000;
		hiddenSelections[] = {"WoodPlank","MetalBoard"};
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_WoodPlank_co.paa","exile_assets\model\Exile_CorrugatedMetal_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\Exile_WoodPlank.rvmat","exile_assets\model\Exile_CorrugatedMetal.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\Exile_WoodPlank_Damage01_co.paa","exile_assets\model\Exile_CorrugatedMetal_Damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\Exile_WoodPlank_Damage01.rvmat","exile_assets\model\Exile_CorrugatedMetal_Damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\Exile_WoodPlank_Damage02_co.paa","exile_assets\model\Exile_CorrugatedMetal_Damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\Exile_WoodPlank_Damage02.rvmat","exile_assets\model\Exile_CorrugatedMetal_Damage02.rvmat"};
	};
	class Exile_Construction_WoodWindow_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Construction_WoodWindow.p3d";
		displayName = "Wood Window";
		armor = 1000;
		hiddenSelections[] = {"WoodBoard","WoodPlank"};
		hiddenSelectionsTextures[] = {"exile_assets\model\exile_woodboard_co.paa","exile_assets\model\exile_woodplank_co.paa"};
		hiddenSelectionMaterials[] = {"exile_assets\model\exile_woodboard.rvmat","exile_assets\model\exile_woodplank.rvmat"};
		damageLevel1Textures[] = {"exile_assets\model\exile_woodboard_damage01_co.paa","exile_assets\model\exile_woodplank_damage01_co.paa"};
		damageLevel1Materials[] = {"exile_assets\model\exile_woodboard_damage01.rvmat","exile_assets\model\exile_woodplank_damage01.rvmat"};
		damageLevel2Textures[] = {"exile_assets\model\exile_woodboard_damage02_co.paa","exile_assets\model\exile_woodplank_damage02_co.paa"};
		damageLevel2Materials[] = {"exile_assets\model\exile_woodboard_damage02.rvmat","exile_assets\model\exile_woodplank_damage02.rvmat"};
	};
	class Exile_Construction_WorkBench_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\a3\structures_f\civ\constructions\WorkStand_F.p3d";
		displayName = "Work Bench";
		hiddenSelections[] = {"Component01"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class Exile_Construction_WorkBench_Static: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Work Bench";
		model = "\A3\Structures_F\Civ\Constructions\WorkStand_F.p3d";
	};
	class ReammoBox_F;
	class Exile_Container_Abstract: ReammoBox_F
	{
		author = "Exile Mod Team";
		scope = 1;
		vehicleClass = "Ammo";
		exileContainer = 1;
		icon = "iconCrateWpns";
		simulation = "thingX";
		exileRequiresSimulation = 0;
		maximumLoad = 500;
		armor = 1000;
		destrType = "DestructNo";
		exileIsLockable = 0;
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
	};
	class Exile_Container_Abstract_Safe: Exile_Container_Abstract
	{
		scope = 1;
		destrType = "DestructNo";
		exileIsLockable = 1;
		simulation = "house";
	};
	class Exile_Container_CamoTent: Exile_Container_Abstract
	{
		scope = 2;
		model = "\a3\structures_f\Civ\Camping\TentA_F.p3d";
		displayName = "Camo Tent";
		destrType = "DestructTent";
		icon = "iconObject_2x3";
		maximumLoad = 500;
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class Exile_Container_OldChest: Exile_Container_Abstract
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Container_OldChest.p3d";
		shortDescription = "An old rusted chest, just big enough to store a dead body in.";
		displayName = "Old Chest";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 2500;
		armor = 5000;
		simulation = "house";
		class AnimationSources
		{
			class OldChest_Source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 2;
				sound = "MetalDoorsSound";
			};
		};
		class UserActions
		{
			class OpenChest
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='1.5' />";
				displayName = "Open Chest";
				position = "ActionPoint";
				priority = 0.4;
				radius = 2.5;
				onlyForPlayer = 1;
				condition = "((this animationSourcePhase 'OldChest_Source') < 0.5)";
				statement = "this animateSource ['OldChest_Source', 1];";
			};
			class CloseChest: OpenChest
			{
				displayName = "Close Chest";
				priority = 0.2;
				condition = "((this animationSourcePhase 'OldChest_Source') >= 0.5)";
				statement = "this animateSource ['OldChest_Source', 0];";
			};
		};
	};
	class Exile_Container_Safe: Exile_Container_Abstract_Safe
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Container_Safe.p3d";
		displayName = "Safe";
		maximumLoad = 3000;
		armor = 2000;
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "MetalDoorsSound";
			};
		};
	};
	class Exile_Container_Safe_Small: Exile_Container_Abstract_Safe
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Container_Safe_Small.p3d";
		displayName = "Safe (Small)";
		maximumLoad = 175;
		armor = 2000;
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source = "user";
				initPhase = 0;
				animPeriod = 2;
				sound = "MetalDoorsSound";
			};
		};
	};
	class Exile_Container_Storagecrate: Exile_Container_Abstract
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Container_Storagecrate.p3d";
		shortDescription = "Will explode when shot. Powered by Michael Bay.";
		displayName = "Storage Crate";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 600;
		armor = 5000;
		simulation = "house";
	};
	class Exile_Container_SupplyBox: Exile_Container_Abstract
	{
		scope = 2;
		model = "\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
		shortDescription = "A supply box that can hold a lot of things.";
		displayName = "Supply Box";
		destrType = "DestructBuilding";
		icon = "iconCrate";
		explosionEffect = "BasicAmmoExplosion";
		maximumLoad = 5000;
		armor = 5000;
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",""};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
	};
	class Land_TacticalBacon_F;
	class Exile_Cosmetic_BBQSandwich: Land_TacticalBacon_F
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "BBQ Sandwich (Cosmetic)";
		destrType = "DestructNo";
		model = "\exile_assets\model\Exile_Item_BBQSandwich.p3d";
		class SimpleObject;
	};
	class Exile_Cosmetic_BeefParts: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Beef Parts (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_BeefParts.p3d";
	};
	class Exile_Cosmetic_Beer: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Hausmann Beer (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_Beer.p3d";
	};
	class Exile_Cosmetic_CatFood: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Cat Food (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_Catfood.p3d";
	};
	class Exile_Cosmetic_Cheathas: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Cheathas (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_Cheathas.p3d";
	};
	class Exile_Cosmetic_CockONut: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Cock'O'Nut (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_CockONut.p3d";
	};
	class Exile_Cosmetic_DogFood: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Dog Food (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_DogFood.p3d";
	};
	class Exile_Cosmetic_EnergyDrink: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Energy Drink (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_EnergyDrink.p3d";
	};
	class Exile_Cosmetic_EMRE: Exile_Cosmetic_BBQSandwich
	{
		displayName = "EMRE (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_EMRE.p3d";
	};
	class Exile_Cosmetic_InstantCoffee: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Instant Coffee Beanz (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_InstantCoffee.p3d";
	};
	class Exile_Cosmetic_MacasCheese: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Maca's Cheese (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_MacasCheese.p3d";
	};
	class Exile_Cosmetic_Moobar: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Moobar (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_Moobar.p3d";
	};
	class Exile_Cosmetic_Raisins: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Raisins (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_Raisins.p3d";
	};
	class Exile_Cosmetic_PowerDrink: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Power Drink (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_PowerDrink.p3d";
	};
	class Exile_Cosmetic_Surstromming: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Surströmming (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_Surstromming.p3d";
	};
	class Exile_Cosmetic_Magazine01: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Better Prisoners #01 (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_Magazine01.p3d";
	};
	class Exile_Cosmetic_Magazine02: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Better Prisoners #02 (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_Magazine02.p3d";
	};
	class Exile_Cosmetic_Magazine03: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Better Prisoners #03 (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_Magazine03.p3d";
	};
	class Exile_Cosmetic_Magazine04: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Better Prisoners #04 (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_Magazine04.p3d";
	};
	class Exile_Cosmetic_PopTabs: Exile_Cosmetic_BBQSandwich
	{
		displayName = "PopTabs (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_PopTabs.p3d";
	};
	class Exile_Cosmetic_GasMask: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Gas Mask (Cosmetic)";
		model = "\exile_assets\model\Exile_Clothing_Gasmask_World.p3d";
	};
	class Exile_Cosmetic_Knife: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Knife (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_Knife.p3d";
	};
	class Exile_Cosmetic_Foolbox: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Foolbox (Cosmetic)";
		model = "\exile_assets\model\Exile_Item_Toolbox.p3d";
	};
	class Exile_Cosmetic_Axe: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Axe (Cosmetic)";
		model = "\exile_assets\model\Exile_Melee_Axe.p3d";
	};
	class Exile_Cosmetic_SledgeHammer: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Sledge Hammer (Cosmetic)";
		model = "\exile_assets\model\Exile_Melee_SledgeHammer.p3d";
	};
	class Exile_Cosmetic_Shovel: Exile_Cosmetic_BBQSandwich
	{
		displayName = "Shovel (Cosmetic)";
		model = "\exile_assets\model\Exile_Melee_Shovel.p3d";
	};
	class Exile_Cosmetic_MG: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Cosmetic MG";
		model = "\A3\Static_F_Gamma\HMG_01\HMG_01_F.p3d";
		destrType = "DestructNo";
	};
	class Exile_Cosmetic_UAV: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Cosmetic UAV";
		model = "\A3\Drones_F\Air_F_Gamma\UAV_01\UAV_01_F.p3d";
		destrType = "DestructNo";
	};
	class Exile_Sign_Aircraft: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Aircraft)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Aircraft_co.paa"};
	};
	class Exile_Sign_AircraftCustoms: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Aircraft Customs)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_AircraftCustoms_co.paa"};
	};
	class Exile_Sign_AircraftCustoms_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (AircraftCustoms, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_AircraftCustoms_Small_co.paa"};
	};
	class Exile_Sign_Aircraft_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Aircraft, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Aircraft_Small_co.paa"};
	};
	class Exile_Sign_Armory: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Armory)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Armory_co.paa"};
	};
	class Exile_Sign_Armory_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Armory, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Armory_Small_co.paa"};
	};
	class Exile_Sign_Boat: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Boat)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Boat_co.paa"};
	};
	class Exile_Sign_BoatAndDiving_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Boat and Diving, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Boat_Diving_co.paa"};
	};
	class Exile_Sign_BoatCustoms: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Boat Customs)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_BoatCustoms_co.paa"};
	};
	class Exile_Sign_BoatCustoms_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (BoatCustoms, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_BoatCustoms_Small_co.paa"};
	};
	class Exile_Sign_Boat_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Boat, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Boat_Small_co.paa"};
	};
	class Exile_Sign_Diving_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Diving, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Diving_co.paa"};
	};
	class Exile_Sign_Equipment: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Equipment)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Equipment_co.paa"};
	};
	class Exile_Sign_Equipment_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Equipment, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Equipment_Small_co.paa"};
	};
	class Land_Billboard_F;
	class Exile_Sign_Escape: Land_Billboard_F
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Sign (Escape)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Escape_co.paa"};
	};
	class Exile_Sign_Food: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Food)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Food_co.paa"};
	};
	class Exile_Sign_Food_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Food, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Food_Small_co.paa"};
	};
	class Exile_Sign_Foolbox: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Foolbox)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Foolbox_co.paa"};
	};
	class Exile_Sign_Hardware: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Hardware)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Hardware_co.paa"};
	};
	class Exile_Sign_Hardware_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Hardware, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Hardware_Small_co.paa"};
	};
	class Exile_Sign_Hausmann: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Hausmann)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Hausmann_co.paa"};
	};
	class Exile_Sign_Locker: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Locker)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Locker_co.paa"};
	};
	class Exile_Sign_Office: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Office)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Office_co.paa"};
	};
	class Exile_Sign_Office_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Office, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Office_Small_co.paa"};
	};
	class Exile_Sign_RussianRoulette: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Russian Roulette)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_RussianRoulette_co.paa"};
	};
	class Exile_Sign_SpecialOperations: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Special Operations)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_SpecialOperations_co.paa"};
	};
	class Exile_Sign_SpecialOperations_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Special Operations, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_SpecialOperations_Small_co.paa"};
	};
	class Exile_Sign_TraderCity: Land_Billboard_F
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Sign (Trader City)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_TraderCity_co.paa"};
	};
	class Exile_Sign_VehicleCustoms: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Vehicle Customs)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_VehicleCustoms_co.paa"};
	};
	class Exile_Sign_VehicleCustoms_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Vehicle Customs, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_VehicleCustoms_Small_co.paa"};
	};
	class Exile_Sign_Vehicles: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Vehicles)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Vehicles_co.paa"};
	};
	class Exile_Sign_Vehicles_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Vehicles, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_Vehicles_Small_co.paa"};
	};
	class Exile_Sign_WasteDump: SignAd_Sponsor_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Waste Dump)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_WasteDump_co.paa"};
	};
	class Exile_Sign_WasteDump_Small: SignAd_SponsorS_F
	{
		author = "Exile Mod Team";
		displayName = "Exile Sign (Waste Dump, small)";
		hiddenSelectionsTextures[] = {"exile_assets\model\Exile_Sign_WasteDump_Small_co.paa"};
	};
	class Exile_Unit_Abstract: C_man_w_worker_F
	{
		scope = 0;
		author = "Exile Mod Team";
		displayName = "Exile Unit Abstract";
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
		vehicleClass = "Men";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};
		respawnItems[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		canCarryBackPack = 1;
		nakedUniform = "U_BasicBody";
		model = "";
		uniformClass = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {""};
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Googles: UniformSlotInfo
				{
					slotType = 603;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class Exile_Unit_ExileCustoms: Exile_Unit_Abstract
	{
		scope = 2;
		displayName = "Exile Customs";
		model = "\A3\characters_F\common\coveralls";
		uniformClass = "Exile_Unitform_ExileCustoms";
		hiddenSelectionsTextures[] = {"\exile_assets\model\Exile_Uniform_ExileCustoms_co.paa"};
	};
	class Exile_Unit_GhostPlayer: VirtualMan_F
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Player Slot";
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
		vehicleClass = "Men";
	};
	class Exile_Unit_Player: Exile_Unit_Abstract
	{
		scope = 2;
		displayName = "Exile Player";
		model = "\A3\characters_F\common\coveralls";
		uniformClass = "Exile_Uniform_BambiOverall";
		hiddenSelectionsTextures[] = {"\exile_assets\model\Exile_Uniform_BambiOverall_co.paa"};
	};
	class Exile_Unit_Wetsuit_NATO: B_diver_F
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Diver (NATO, Forced)";
		hiddenUnderwaterSelections[] = {};
	};
	class Exile_Unit_Wetsuit_AAF: I_diver_F
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Diver (AAF, Forced)";
		hiddenSelections[] = {"Camo1","Camo2","insignia","hide"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\diver_suit_rus_co.paa","\A3\Characters_F\Common\Data\diver_equip_rus_co.paa"};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\data\visors_ca.paa"};
		shownUnderwaterSelections[] = {};
	};
	class Exile_Unit_Wetsuit_CSAT: O_diver_F
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Diver (CSAT, Forced)";
		hiddenUnderwaterSelections[] = {};
	};
	class Exile_Unit_Woodland: Exile_Unit_Abstract
	{
		scope = 2;
		displayName = "Exile Woodland";
		uniformClass = "Exile_Unitform_Woodland";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing_wdl_co.paa"};
	};
	class BRDM2_HQ_CHDKZ;
	class Exile_Car_BRDM2_HQ_Abstract: BRDM2_HQ_CHDKZ
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "BRDM-2 (HQ)";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad = 1500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_BRDM2_HQ: Exile_Car_BRDM2_HQ_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"Exile_psycho_brdm\data\brdm2_01_co.paa","Exile_psycho_brdm\data\brdm2_02_co.paa"};
	};
	class BTR40_MG_base_EP1;
	class Exile_Car_BTR40_MG_Abstract: BTR40_MG_base_EP1
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "BTR 40 MG";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad = 1500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_BTR40_MG_Green: Exile_Car_BTR40_MG_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"exile_psycho_btr40\data\btr40ext_co.paa"};
	};
	class Exile_Car_BTR40_MG_Camo: Exile_Car_BTR40_MG_Abstract
	{
		scope = 2;
		skinName = "Camo";
		hiddenSelectionsTextures[] = {"exile_psycho_btr40\data\btr40extcamo_co.paa"};
	};
	class BTR40_base_EP1;
	class Exile_Car_BTR40_Abstract: BTR40_base_EP1
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "BTR 40";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad = 1500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_BTR40_Green: Exile_Car_BTR40_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"exile_psycho_btr40\data\btr40ext_co.paa"};
	};
	class Exile_Car_BTR40_Camo: Exile_Car_BTR40_Abstract
	{
		scope = 2;
		skinName = "Camo";
		hiddenSelectionsTextures[] = {"exile_psycho_btr40\data\btr40extcamo_co.paa"};
	};
	class Golf_Civ_Base;
	class Exile_Car_Golf_Abstract: Golf_Civ_Base
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Golf";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1000;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Golf_Red: Exile_Car_Golf_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenSelectionsTextures[] = {"exile_psycho_VWGolf\data\vwgolf_body_co.paa"};
	};
	class Exile_Car_Golf_Black: Exile_Car_Golf_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"exile_psycho_VWGolf\data\texture\black_co.paa"};
	};
	class C_Hatchback_01_F;
	class Exile_Car_Hatchback_Abstract: C_Hatchback_01_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Hatchback";
		fuelConsumptionRate = "0.03f";
		maximumLoad = 1300;
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Hatchback_Beige: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Beige";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa"};
	};
	class Exile_Car_Hatchback_Green: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa"};
	};
	class Exile_Car_Hatchback_Blue: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa"};
	};
	class Exile_Car_Hatchback_BlueCustom: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Blue Custom";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa"};
	};
	class Exile_Car_Hatchback_BeigeCustom: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Beige Custom";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa"};
	};
	class Exile_Car_Hatchback_Yellow: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Yellow";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa"};
	};
	class Exile_Car_Hatchback_Grey: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Grey";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa"};
	};
	class Exile_Car_Hatchback_Black: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"};
	};
	class Exile_Car_Hatchback_Dark: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Dark";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa"};
	};
	class Exile_Car_Hatchback_Rusty1: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Rusty White";
		hiddenSelectionsTextures[] = {"\exile_assets\model\RTV\Exile_Car_Hatchback_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\exile_assets\model\RTV\Exile_Car_Hatchback.rvmat","\exile_assets\model\RTV\Exile_Car_Hatchback.rvmat"};
	};
	class Exile_Car_Hatchback_Rusty2: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Rusty Red";
		hiddenSelectionsTextures[] = {"\exile_assets\model\RTV\Exile_Car_Hatchback_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\exile_assets\model\RTV\Exile_Car_Hatchback.rvmat","\exile_assets\model\RTV\Exile_Car_Hatchback.rvmat"};
	};
	class Exile_Car_Hatchback_Rusty3: Exile_Car_Hatchback_Abstract
	{
		scope = 2;
		skinName = "Rusty Yellow";
		hiddenSelectionsTextures[] = {"\exile_assets\model\RTV\Exile_Car_Hatchback_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\exile_assets\model\RTV\Exile_Car_Hatchback.rvmat","\exile_assets\model\RTV\Exile_Car_Hatchback.rvmat"};
	};
	class C_Hatchback_01_sport_F;
	class Exile_Car_Hatchback_Sport_Abstract: C_Hatchback_01_sport_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Hatchback (Sport)";
		fuelConsumptionRate = "0.04f";
		maximumLoad = 1300;
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Hatchback_Sport_Red: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT01_CO.paa"};
	};
	class Exile_Car_Hatchback_Sport_Blue: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT02_CO.paa"};
	};
	class Exile_Car_Hatchback_Sport_Orange: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Orange";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT03_CO.paa"};
	};
	class Exile_Car_Hatchback_Sport_White: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT04_CO.paa"};
	};
	class Exile_Car_Hatchback_Sport_Beige: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Beige";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT05_CO.paa"};
	};
	class Exile_Car_Hatchback_Sport_Green: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"};
	};
	class Exile_Car_Hatchback_Sport_Admin: Exile_Car_Hatchback_Sport_Abstract
	{
		scope = 2;
		skinName = "Admin Speedster";
		maxSpeed = 600;
		acceleration = 100;
		brakeTorque = 12000;
		redRpm = 9900;
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"};
	};
	class B_Truck_01_transport_F;
	class Exile_Car_HEMMT_Abstract: B_Truck_01_transport_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "HEMMT (Transport)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 4600;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_HEMMT: Exile_Car_HEMMT_Abstract
	{
		scope = 2;
	};
	class HMMWV_M134;
	class Exile_Car_HMMWV_M134_Abstract: HMMWV_M134
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "HMMWV (M134)";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad = 1500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_HMMWV_M134_Green: Exile_Car_HMMWV_M134_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};
	};
	class Exile_Car_HMMWV_M134_Desert: Exile_Car_HMMWV_M134_Abstract
	{
		scope = 2;
		skinName = "Desert";
		hiddenSelectionsTextures[] = {"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};
	};
	class HMMWV_M2;
	class Exile_Car_HMMWV_M2_Abstract: HMMWV_M2
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "HMMWV (M2)";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad = 1200;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_HMMWV_M2_Green: Exile_Car_HMMWV_M2_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};
	};
	class Exile_Car_HMMWV_M2_Desert: Exile_Car_HMMWV_M2_Abstract
	{
		scope = 2;
		skinName = "Desert";
		hiddenSelectionsTextures[] = {"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};
	};
	class HMMWV_MEV;
	class Exile_Car_HMMWV_MEV_Abstract: HMMWV_MEV
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "HMMWV (MEV)";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad = 2000;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_HMMWV_MEV_Green: Exile_Car_HMMWV_MEV_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"Exile_psycho_hmmw\data\hmmwv_body_cm.paa"};
	};
	class Exile_Car_HMMWV_MEV_Desert: Exile_Car_HMMWV_MEV_Abstract
	{
		scope = 2;
		skinName = "Desert";
		hiddenSelectionsTextures[] = {"Exile_psycho_hmmw\data\des\hmmwv_body_cm.paa"};
	};
	class HMMWV_UNA;
	class Exile_Car_HMMWV_UNA_Abstract: HMMWV_UNA
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "HMMWV (Unarmed)";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad = 2000;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_HMMWV_UNA_Green: Exile_Car_HMMWV_UNA_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};
	};
	class Exile_Car_HMMWV_UNA_Desert: Exile_Car_HMMWV_UNA_Abstract
	{
		scope = 2;
		skinName = "Desert";
		hiddenSelectionsTextures[] = {"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};
	};
	class B_MRAP_01_F;
	class Exile_Car_Hunter_Abstract: B_MRAP_01_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Hunter";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 2200;
		armor = 200;
		driverDoor = "Door_LF";
		cargoDoors[] = {"Door_RF","Door_LB","Door_RB"};
		crewVulnerable = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Hunter: Exile_Car_Hunter_Abstract
	{
		scope = 2;
	};
	class O_MRAP_02_F;
	class Exile_Car_Ifrit_Abstract: O_MRAP_02_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Ifrit";
		fuelConsumptionRate = "0.05f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1800;
		armor = 150;
		driverDoor = "Door_LF";
		cargoDoors[] = {"Door_RF","Door_LB","Door_RB","Door_rear"};
		crewVulnerable = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Ifrit: Exile_Car_Ifrit_Abstract
	{
		scope = 2;
	};
	class Ikarus_Civ_02;
	class Exile_Car_Ikarus_Abstract: Ikarus_Civ_02
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Ikarus";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "Exile_psycho_Ikarus\Data\sounds\d1opn_r";
		maximumLoad = 4000;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Ikarus_Blue: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"Exile_psycho_Ikarus\Data\bus_exterior_co.paa"};
	};
	class Exile_Car_Ikarus_Red: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};
	};
	class Exile_Car_Ikarus_Party: Exile_Car_Ikarus_Abstract
	{
		scope = 2;
		skinName = "Party";
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};
	};
	class C_Kart_01_black_F;
	class Exile_Car_Kart_Abstract: C_Kart_01_black_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Kart";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Kart_BluKing: Exile_Car_Kart_Abstract
	{
		scope = 2;
		skinName = "BluKing";
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
	};
	class Exile_Car_Kart_RedStone: Exile_Car_Kart_Abstract
	{
		scope = 2;
		skinName = "RedStone";
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
	};
	class Exile_Car_Kart_Vrana: Exile_Car_Kart_Abstract
	{
		scope = 2;
		skinName = "Vrana";
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
	};
	class Exile_Car_Kart_Green: Exile_Car_Kart_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
	};
	class Exile_Car_Kart_Blue: Exile_Car_Kart_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
	};
	class Exile_Car_Kart_Orange: Exile_Car_Kart_Abstract
	{
		scope = 2;
		skinName = "Orange";
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
	};
	class Exile_Car_Kart_White: Exile_Car_Kart_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
	};
	class Exile_Car_Kart_Yellow: Exile_Car_Kart_Abstract
	{
		scope = 2;
		skinName = "Yellow";
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
	};
	class Exile_Car_Kart_Black: Exile_Car_Kart_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};
	};
	class Lada_Base;
	class Exile_Car_Lada_Abstract: Lada_Base
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Lada";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_lada\sounds\lada_door";
		maximumLoad = 1500;
		maxSpeed = 110;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Lada_Green: Exile_Car_Lada_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenselections[] = {"Camo1","Camo2"};
		hiddenselectionstextures[] = {"exile_psycho_lada\data\lada_eciv1_co.paa","exile_psycho_lada\data\Lada_glass_ECIV1_CA.paa"};
	};
	class Exile_Car_Lada_Taxi: Exile_Car_Lada_Abstract
	{
		scope = 2;
		skinName = "Taxi";
		hiddenselections[] = {"Camo1","Camo2"};
		hiddenselectionstextures[] = {"exile_psycho_lada\data\Lada_red_CO.paa"};
		model = "\exile_psycho_lada\Lada_LM.p3d";
	};
	class Exile_Car_Lada_Red: Exile_Car_Lada_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"exile_psycho_lada\data\Lada_red_CO.paa"};
	};
	class Exile_Car_Lada_White: Exile_Car_Lada_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenSelectionsTextures[] = {};
	};
	class Exile_Car_Lada_Hipster: Exile_Car_Lada_Abstract
	{
		scope = 2;
		skinName = "Hipster";
		hiddenselections[] = {"Camo1","Camo2"};
		hiddenselectionstextures[] = {"exile_psycho_lada\data\lada_eciv2_co.paa","exile_psycho_lada\data\Lada_glass_ECIV2_CA.paa"};
	};
	class Landrover_Civ_02;
	class Exile_Car_LandRover_Abstract: Landrover_Civ_02
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Land Rover";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_lrc\data\sounds\LRover_door";
		maximumLoad = 2200;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_LandRover_Red: Exile_Car_LandRover_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenSelectionsTextures[] = {"Exile_psycho_LRC\data\r_lr_base_co.paa","Exile_psycho_LRC\data\r_lr_special_co.paa"};
	};
	class Exile_Car_LandRover_Urban: Exile_Car_LandRover_Abstract
	{
		scope = 2;
		skinName = "Urban";
		hiddenSelectionsTextures[] = {"Exile_psycho_LRC\data\textures\lr_base_urbancamo_co.paa","Exile_psycho_LRC\data\textures\lr_special_urbancamo_co.paa"};
	};
	class Exile_Car_LandRover_Green: Exile_Car_LandRover_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};
	};
	class Exile_Car_LandRover_Sand: Exile_Car_LandRover_Abstract
	{
		scope = 2;
		skinName = "Sand";
		hiddenSelectionsTextures[] = {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};
	};
	class Exile_Car_LandRover_Desert: Exile_Car_LandRover_Abstract
	{
		scope = 2;
		skinName = "Desert";
		hiddenSelectionsTextures[] = {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};
	};
	class LR_Ambulance_Base;
	class Exile_Car_LandRover_Ambulance_Abstract: LR_Ambulance_Base
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Land Rover (Ambulance)";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_lrc\data\sounds\LRover_door";
		maximumLoad = 2500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_LandRover_Ambulance_Green: Exile_Car_LandRover_Ambulance_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};
	};
	class Exile_Car_LandRover_Ambulance_Desert: Exile_Car_LandRover_Ambulance_Abstract
	{
		scope = 2;
		skinName = "Desert";
		hiddenSelectionsTextures[] = {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};
	};
	class Exile_Car_LandRover_Ambulance_Sand: Exile_Car_LandRover_Ambulance_Abstract
	{
		scope = 2;
		skinName = "Sand";
		hiddenSelectionsTextures[] = {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};
	};
	class C_Offroad_02_unarmed_orange_F;
	class Exile_Car_MB4WD: C_Offroad_02_unarmed_orange_F
	{
		author = "Exile Mod Team";
		scope = 2;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "Orange";
		displayName = "MB 4WD";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 3000;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class I_C_Offroad_02_unarmed_F;
	class Exile_Car_MB4WDOpen: I_C_Offroad_02_unarmed_F
	{
		author = "Exile Mod Team";
		scope = 2;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "Orange";
		displayName = "MB 4WD (Open)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 3000;
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Octavia_Civ_01;
	class Exile_Car_Octavius_Abstract: Octavia_Civ_01
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Octavius";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad = 1500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Octavius_White: Exile_Car_Octavius_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenSelectionsTextures[] = {"exile_psycho_Octavia\Data\car_body_co.paa"};
	};
	class Exile_Car_Octavius_Black: Exile_Car_Octavius_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"exile_psycho_Octavia\Data\car_body_bl_co.paa"};
	};
	class Offroad_01_civil_base_F;
	class Exile_Car_Offroad_Abstract: Offroad_01_civil_base_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Offroad";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 2000;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Offroad_Red: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};
	};
	class Exile_Car_Offroad_Beige: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Beige";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};
	};
	class Exile_Car_Offroad_White: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};
	};
	class Exile_Car_Offroad_Blue: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};
	};
	class Exile_Car_Offroad_DarkRed: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Dark Red";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};
	};
	class Exile_Car_Offroad_BlueCustom: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Blue Custom";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla01: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 01";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla02: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 02";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla03: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 03";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla04: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 04";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla05: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 05";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla06: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 06";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla07: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 07";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla08: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 08";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla09: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 09";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla10: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 10";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla11: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 11";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};
	};
	class Exile_Car_Offroad_Guerilla12: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Guerilla 12";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};
	};
	class Exile_Car_Offroad_Rusty1: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Rusty Red";
		hiddenSelectionsTextures[] = {"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\exile_assets\model\RTV\Exile_offroad_01.rvmat","\exile_assets\model\RTV\Exile_offroad_01.rvmat"};
	};
	class Exile_Car_Offroad_Rusty2: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Rusty Blue";
		hiddenSelectionsTextures[] = {"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\exile_assets\model\RTV\Exile_offroad_01.rvmat","\exile_assets\model\RTV\Exile_offroad_01.rvmat"};
	};
	class Exile_Car_Offroad_Rusty3: Exile_Car_Offroad_Abstract
	{
		scope = 2;
		skinName = "Rusty White";
		hiddenSelectionsTextures[] = {"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\exile_assets\model\RTV\Exile_offroad_01.rvmat","\exile_assets\model\RTV\Exile_offroad_01.rvmat"};
	};
	class I_G_Offroad_01_armed_F;
	class Exile_Car_Offroad_Armed_Abstract: I_G_Offroad_01_armed_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Offroad (Armed)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1100;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Offroad_Armed_Guerilla01: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 01";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla02: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 02";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla03: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 03";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla04: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 04";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla05: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 05";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla06: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 06";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla07: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 07";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla08: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 08";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla09: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 09";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla10: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 10";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla11: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 11";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};
	};
	class Exile_Car_Offroad_Armed_Guerilla12: Exile_Car_Offroad_Armed_Abstract
	{
		scope = 2;
		skinName = "Guerilla 12";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};
	};
	class C_Offroad_01_repair_F;
	class Exile_Car_Offroad_Repair_Abstract: C_Offroad_01_repair_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		crew = "";
		skinName = "";
		displayName = "Offroad (Repair)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1300;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Offroad_Repair_Civillian: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Civillian";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext.rvmat","\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"};
	};
	class Exile_Car_Offroad_Repair_Red: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Beige: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Beige";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_White: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Blue: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_DarkRed: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Dark Red";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_BlueCustom: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Blue Custom";
		hiddenSelectionsTextures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla01: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 01";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla02: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 02";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla03: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 03";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla04: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 04";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla05: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 05";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla06: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 06";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla07: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 07";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla08: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 08";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla09: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 09";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla10: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 10";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla11: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 11";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};
	};
	class Exile_Car_Offroad_Repair_Guerilla12: Exile_Car_Offroad_Repair_Abstract
	{
		scope = 2;
		skinName = "Guerilla 12";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};
	};
	class TractorOld;
	class Exile_Car_OldTractor_Abstract: TractorOld
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Old Tractor";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_lada\sounds\lada_door";
		maxSpeed = 35;
		maximumLoad = 1100;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_OldTractor_Red: Exile_Car_OldTractor_Abstract
	{
		scope = 2;
		skinName = "Red";
	};
	class B_CTRG_LSV_01_light_F;
	class Exile_Car_ProwlerLight: B_CTRG_LSV_01_light_F
	{
		author = "Exile Mod Team";
		scope = 2;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "Olive";
		displayName = "Prowler (Light)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 3800;
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class B_T_LSV_01_unarmed_black_F;
	class Exile_Car_ProwlerUnarmed: B_T_LSV_01_unarmed_black_F
	{
		author = "Exile Mod Team";
		scope = 2;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "Black";
		displayName = "Prowler (Unarmed)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 3800;
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class O_T_LSV_02_unarmed_black_F;
	class Exile_Car_QilinUnarmed: O_T_LSV_02_unarmed_black_F
	{
		author = "Exile Mod Team";
		scope = 2;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "Black";
		displayName = "Qilin (Unarmed)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 3800;
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class I_MRAP_03_F;
	class Exile_Car_Strider_Abstract: I_MRAP_03_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Strider";
		fuelConsumptionRate = "0.05f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1800;
		armor = 250;
		driverDoor = "Door_LF";
		cargoDoors[] = {"Door_RF"};
		crewVulnerable = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Strider: Exile_Car_Strider_Abstract
	{
		scope = 2;
	};
	class C_SUV_01_F;
	class Exile_Car_SUV_Abstract: C_SUV_01_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "SUV";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1600;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_SUV_Red: Exile_Car_SUV_Abstract
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa"};
		skinName = "Red";
	};
	class Exile_Car_SUV_Black: Exile_Car_SUV_Abstract
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"};
		skinName = "Black";
	};
	class Exile_Car_SUV_Grey: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Grey";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa"};
	};
	class Exile_Car_SUV_Orange: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Orange";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa"};
	};
	class Exile_Car_SUV_Rusty1: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Rusty White";
		hiddenSelectionsTextures[] = {"\exile_assets\model\RTV\Exile_Car_Suv_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\exile_assets\model\RTV\Exile_Car_Suv.rvmat","\exile_assets\model\RTV\Exile_Car_Suv.rvmat"};
	};
	class Exile_Car_SUV_Rusty2: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Rusty Dark";
		hiddenSelectionsTextures[] = {"\exile_assets\model\RTV\Exile_Car_Suv_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\exile_assets\model\RTV\Exile_Car_Suv.rvmat","\exile_assets\model\RTV\Exile_Car_Suv.rvmat"};
	};
	class Exile_Car_SUV_Rusty3: Exile_Car_SUV_Abstract
	{
		scope = 2;
		skinName = "Rusty Red";
		hiddenSelectionsTextures[] = {"\exile_assets\model\RTV\Exile_Car_Suv_03_co.paa"};
		hiddenSelectionsMaterials[] = {"\exile_assets\model\RTV\Exile_Car_Suv.rvmat","\exile_assets\model\RTV\Exile_Car_Suv.rvmat"};
	};
	class SUV_Base;
	class Exile_Car_SUVXL_Abstract: SUV_Base
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "SUV (Classic)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "Exile_psycho_SUV_a3\sound\SUV_ext_door";
		maximumLoad = 1800;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_SUVXL_Black: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		skinName = "Black";
	};
	class SUV_armored_Base;
	class Exile_Car_SUV_Armed_Abstract: SUV_armored_Base
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "SUV (Armed)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "Exile_psycho_SUV_a3\sound\SUV_ext_door";
		maximumLoad = 1500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
		class UserActions
		{
			class Hide
			{
				condition = "((driver this) == player) && ((this animationPhase 'HideGun_01') == 0) && (isNull (this turretUnit [0]))";
				displayName = "Hide Gun";
				displayNameDefault = "Hide Gun";
				onlyForPlayer = 1;
				position = "hideaction";
				radius = 3;
				statement = "this animate['HideGun_01', 1]; this animate['HideGun_02', 1]; this animate['HideGun_03', 1]; this animate['HideGun_04', 1]; this animate['CloseCover1', 1]; this animate['CloseCover2', 1]; this lockTurret [[0], true];";
			};
			class Unhide
			{
				condition = "((driver this) == player) && ((this animationPhase 'HideGun_01') == 1)";
				displayName = "Show Gun";
				displayNameDefault = "Show Gun";
				onlyForplayer = 1;
				position = "hideaction";
				radius = 3;
				statement = "this animate['HideGun_01', 0]; this animate['HideGun_02', 0]; this animate['HideGun_03', 0]; this animate['HideGun_04', 0]; this animate['CloseCover1', 0]; this animate['CloseCover2', 0]; this lockTurret [[0], false];";
			};
		};
	};
	class Exile_Car_SUV_Armed_Black: Exile_Car_SUV_Armed_Abstract
	{
		scope = 2;
		skinName = "Black";
	};
	class O_Truck_03_transport_F;
	class Exile_Car_Tempest_Abstract: O_Truck_03_transport_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Tempest (Transport)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 3800;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Tempest: Exile_Car_Tempest_Abstract
	{
		scope = 2;
	};
	class TowingTractor;
	class Exile_Car_TowTractor_Abstract: TowingTractor
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Tow Tractor";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_lada\sounds\lada_door";
		maxSpeed = 25;
		maximumLoad = 500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_TowTractor_White: Exile_Car_TowTractor_Abstract
	{
		scope = 2;
		skinName = "White";
	};
	class Tractor_Base;
	class Exile_Car_Tractor_Abstract: Tractor_Base
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "Red";
		displayName = "Tractor";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_lada\sounds\lada_door";
		maxSpeed = 45;
		maximumLoad = 1200;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Tractor_Red: Exile_Car_Tractor_Abstract
	{
		scope = 2;
		skinName = "Red";
	};
	class UAZ_Base;
	class Exile_Car_UAZ_Abstract: UAZ_Base
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "UAZ";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad = 1800;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_UAZ_Green: Exile_Car_UAZ_Abstract
	{
		scope = 2;
		skinName = "Green";
	};
	class UAZ_Open_Base;
	class Exile_Car_UAZ_Open_Abstract: UAZ_Open_Base
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "Green";
		displayName = "UAZ (Open)";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "exile_psycho_uaz\sounds\ext-uaz-getout";
		maximumLoad = 1800;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_UAZ_Open_Green: Exile_Car_UAZ_Open_Abstract
	{
		scope = 2;
		skinName = "Green";
	};
	class Ural_RU;
	class Exile_Car_Ural_Covered_Abstract: Ural_RU
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Ural (Covered)";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "Exile_psycho_Ural\Sounds\int-ural-getout.wss";
		maximumLoad = 4500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Ural_Covered_Blue: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"Exile_psycho_Ural\data\ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};
	};
	class Exile_Car_Ural_Covered_Yellow: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Yellow";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};
	};
	class Exile_Car_Ural_Covered_Worker: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Worker";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};
	};
	class Exile_Car_Ural_Covered_Military: Exile_Car_Ural_Covered_Abstract
	{
		scope = 2;
		skinName = "Military";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};
	};
	class Ural_Open_RU;
	class Exile_Car_Ural_Open_Abstract: Ural_Open_RU
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Ural (Open)";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "Exile_psycho_Ural\Sounds\int-ural-getout.wss";
		maximumLoad = 4500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Ural_Open_Blue: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"Exile_psycho_Ural\data\Ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};
	};
	class Exile_Car_Ural_Open_Yellow: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Yellow";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};
	};
	class Exile_Car_Ural_Open_Worker: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Worker";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};
	};
	class Exile_Car_Ural_Open_Military: Exile_Car_Ural_Open_Abstract
	{
		scope = 2;
		skinName = "Military";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};
	};
	class V3S_Base_EP1;
	class Exile_Car_V3S_Covered_Abstract: V3S_Base_EP1
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "V3S (Covered)";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "Exile_psycho_Ural\Sounds\int-ural-getout.wss";
		maximumLoad = 4500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_V3S_Covered: Exile_Car_V3S_Covered_Abstract
	{
		scope = 2;
		skinName = "Camo";
	};
	class V3S_base;
	class Exile_Car_V3S_Open_Abstract: V3S_base
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "V3S (Open)";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "Exile_psycho_Ural\Sounds\int-ural-getout.wss";
		maximumLoad = 4500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_V3S_Open: Exile_Car_V3S_Open_Abstract
	{
		scope = 2;
		skinName = "Green";
	};
	class C_Van_01_transport_F;
	class Exile_Car_Van_Abstract: C_Van_01_transport_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Van";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 3600;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Van_Black: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
	};
	class Exile_Car_Van_White: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
	};
	class Exile_Car_Van_Red: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
	};
	class Exile_Car_Van_Guerilla01: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Guerilla 01";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};
	};
	class Exile_Car_Van_Guerilla02: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Guerilla 02";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};
	};
	class Exile_Car_Van_Guerilla03: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Guerilla 03";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};
	};
	class Exile_Car_Van_Guerilla04: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Guerilla 04";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};
	};
	class Exile_Car_Van_Guerilla05: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Guerilla 05";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};
	};
	class Exile_Car_Van_Guerilla06: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Guerilla 06";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};
	};
	class Exile_Car_Van_Guerilla07: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Guerilla 07";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};
	};
	class Exile_Car_Van_Guerilla08: Exile_Car_Van_Abstract
	{
		scope = 2;
		skinName = "Guerilla 08";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};
	};
	class C_Van_01_box_F;
	class Exile_Car_Van_Box_Abstract: C_Van_01_box_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Van (Box)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 4600;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Van_Box_Black: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
	};
	class Exile_Car_Van_Box_White: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
	};
	class Exile_Car_Van_Box_Red: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};
	};
	class Exile_Car_Van_Box_Guerilla01: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Guerilla 01";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};
	};
	class Exile_Car_Van_Box_Guerilla02: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Guerilla 02";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};
	};
	class Exile_Car_Van_Box_Guerilla03: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Guerilla 03";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};
	};
	class Exile_Car_Van_Box_Guerilla04: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Guerilla 04";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};
	};
	class Exile_Car_Van_Box_Guerilla05: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Guerilla 05";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};
	};
	class Exile_Car_Van_Box_Guerilla06: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Guerilla 06";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};
	};
	class Exile_Car_Van_Box_Guerilla07: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Guerilla 07";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};
	};
	class Exile_Car_Van_Box_Guerilla08: Exile_Car_Van_Box_Abstract
	{
		scope = 2;
		skinName = "Guerilla 08";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};
	};
	class C_Van_01_fuel_F;
	class Exile_Car_Van_Fuel_Abstract: C_Van_01_fuel_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Van (Fuel)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1100;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Van_Fuel_Black: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};
	};
	class Exile_Car_Van_Fuel_White: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};
	};
	class Exile_Car_Van_Fuel_Red: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};
	};
	class Exile_Car_Van_Fuel_Guerilla01: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Guerilla 01";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"};
	};
	class Exile_Car_Van_Fuel_Guerilla02: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Guerilla 02";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"};
	};
	class Exile_Car_Van_Fuel_Guerilla03: Exile_Car_Van_Fuel_Abstract
	{
		scope = 2;
		skinName = "Guerilla 03";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"};
	};
	class volha_Base;
	class Exile_Car_Volha_Abstract: volha_Base
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Volha";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "Exile_psycho_Gaz_volha\sounds\gaz\gaz_door";
		maximumLoad = 1800;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Volha_Blue: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"Exile_psycho_Gaz_volha\data\Volha_ECIV_CO.paa"};
	};
	class Exile_Car_Volha_White: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"Exile_psycho_Gaz_volha\data\Volha_Gray_ECIV_CO.paa"};
	};
	class Exile_Car_Volha_Black: Exile_Car_Volha_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"Exile_psycho_Gaz_volha\data\Volha_Black_ECIV_CO.paa"};
	};
	class I_Truck_02_transport_F;
	class Exile_Car_Zamak_Abstract: I_Truck_02_transport_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Zamak (Transport)";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 4200;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Car_Zamak: Exile_Car_Zamak_Abstract
	{
		scope = 2;
	};
	class dbo_CIV_new_bike;
	class Exile_Bike_MountainBike: dbo_CIV_new_bike
	{
		author = "Exile Mod Team";
		scope = 2;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileBikes";
		displayName = "Mountain Bike";
		skinName = "";
	};
	class dbo_CIV_ol_bike;
	class Exile_Bike_OldBike: dbo_CIV_ol_bike
	{
		author = "Exile Mod Team";
		scope = 2;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileBikes";
		displayName = "Old Bike";
		skinName = "";
	};
	class Car_F;
	class Quadbike_01_base_F: Car_F
	{
		class Turrets;
	};
	class Exile_Bike_QuadBike_Abstract: Quadbike_01_base_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileCars";
		skinName = "";
		displayName = "Quad Bike";
		fuelConsumptionRate = "0.03f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 600;
		cargoProxyIndexes[] = {1};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment2"};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerGetInAction = "GetInLOW";
				gunnerGetOutAction = "GetOutLOW";
				gunnerAction = "passenger_inside_1";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "Gunner (Passenger)";
				proxyIndex = 1;
				initElev = 0;
				maxElev = 15;
				minElev = -5;
				initTurn = 0;
				maxTurn = 90;
				minTurn = -90;
				isPersonTurret = 1;
				ejectDeadGunner = "true";
			};
		};
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Bike_QuadBike_Black: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"};
	};
	class Exile_Bike_QuadBike_Blue: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"};
	};
	class Exile_Bike_QuadBike_Red: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"};
	};
	class Exile_Bike_QuadBike_White: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "White";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"};
	};
	class Exile_Bike_QuadBike_Nato: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "NATO";
		hiddenSelectionsTextures[] = {"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"};
	};
	class Exile_Bike_QuadBike_Csat: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "CSAT";
		hiddenSelectionsTextures[] = {"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"};
	};
	class Exile_Bike_QuadBike_Fia: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "FIA";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_INDP_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_INDP_CO.paa"};
	};
	class Exile_Bike_QuadBike_Guerilla01: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Guerilla 01";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"};
	};
	class Exile_Bike_QuadBike_Guerilla02: Exile_Bike_QuadBike_Abstract
	{
		scope = 2;
		skinName = "Guerilla 02";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"};
	};
	class I_Heli_light_03_unarmed_F;
	class Exile_Chopper_Hellcat_Abstract: I_Heli_light_03_unarmed_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "WY-55 Hellcat";
		fuelConsumptionRate = "0.515";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 2600;
		driverCanEject = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Hellcat_Green: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"};
	};
	class Exile_Chopper_Hellcat_FIA: Exile_Chopper_Hellcat_Abstract
	{
		scope = 2;
		skinName = "FIA";
		hiddenSelectionsTextures[] = {"\A3\Air_F_EPB\Heli_Light_03\data\heli_light_03_base_indp_co.paa"};
	};
	class UH1H_Clo;
	class Exile_Chopper_Huey_Abstract: UH1H_Clo
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "UH-1H Huey";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		driverCanEject = 1;
		maximumLoad = 2500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Huey_Green: Exile_Chopper_Huey_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};
	};
	class Exile_Chopper_Huey_Desert: Exile_Chopper_Huey_Abstract
	{
		scope = 2;
		skinName = "Desert";
		hiddenSelectionsTextures[] = {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};
	};
	class UH1H_M240;
	class Exile_Chopper_Huey_Armed_Abstract: UH1H_M240
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "UH-1H Huey (Armed)";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		driverCanEject = 1;
		maximumLoad = 2500;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Huey_Armed_Green: Exile_Chopper_Huey_Armed_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};
	};
	class Exile_Chopper_Huey_Armed_Desert: Exile_Chopper_Huey_Armed_Abstract
	{
		scope = 2;
		skinName = "Desert";
		hiddenSelectionsTextures[] = {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};
	};
	class B_Heli_Light_01_F;
	class Exile_Chopper_Hummingbird_Abstract: B_Heli_Light_01_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "MH-9 Hummingbird";
		fuelConsumptionRate = "0.0966";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1300;
		driverCanEject = 1;
		driverDoor = "DoorL_Front_Open";
		cargoDoors[] = {"DoorR_Front_Open","DoorL_Back_Open","DoorR_Back_Open"};
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Hummingbird_Green: Exile_Chopper_Hummingbird_Abstract
	{
		scope = 2;
		skinName = "Green";
	};
	class C_Heli_Light_01_civil_F;
	class Exile_Chopper_Hummingbird_Civillian_Abstract: C_Heli_Light_01_civil_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "M-900 (Civillian)";
		fuelConsumptionRate = "0.0966";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1300;
		driverCanEject = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Hummingbird_Civillian_Blue: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Blue";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Red: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Red";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_ION: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "ION";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_BlueLine: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Blue Line";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Digital: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Digital";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Elliptical: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Elliptical";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Furious: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Furious";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_GrayWatcher: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Gray Watcher";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Jeans: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Jeans";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Light: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Light";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Shadow: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Shadow";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Sheriff: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Sheriff";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Speedy: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Speedy";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Sunset: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Sunset";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Vrana: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Vrana";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Wasp: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Wasp";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"};
	};
	class Exile_Chopper_Hummingbird_Civillian_Wave: Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		scope = 2;
		skinName = "Wave";
		hiddenSelectionsTextures[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"};
	};
	class B_Heli_Transport_03_unarmed_F;
	class Exile_Chopper_Huron_Abstract: B_Heli_Transport_03_unarmed_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "CH-67 Huron";
		fuelConsumptionRate = "0.378";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 6000;
		driverCanEject = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Huron_Black: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"};
	};
	class Exile_Chopper_Huron_Green: Exile_Chopper_Huron_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"};
	};
	class I_Heli_Transport_02_F;
	class Exile_Chopper_Mohawk_Abstract: I_Heli_Transport_02_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "CH-49 Mohawk";
		fuelConsumptionRate = "0.406";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 4800;
		driverCanEject = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Mohawk_FIA: Exile_Chopper_Mohawk_Abstract
	{
		scope = 2;
		skinName = "FIA";
	};
	class O_Heli_Light_02_unarmed_F;
	class Exile_Chopper_Orca_Abstract: O_Heli_Light_02_unarmed_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "PO-30 Orca";
		fuelConsumptionRate = "0.33";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 4600;
		driverCanEject = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Orca_CSAT: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "CSAT";
		hiddenSelectionsTextures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"};
	};
	class Exile_Chopper_Orca_Black: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};
	};
	class Exile_Chopper_Orca_BlackCustom: Exile_Chopper_Orca_Abstract
	{
		scope = 2;
		skinName = "Black Custom";
		hiddenSelectionsTextures[] = {"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"};
	};
	class O_Heli_Transport_04_bench_F;
	class Exile_Chopper_Taru_Abstract: O_Heli_Transport_04_bench_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "MI-280 Taru";
		fuelConsumptionRate = "0.406";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 3200;
		driverCanEject = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Taru_CSAT: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "CSAT";
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};
	};
	class Exile_Chopper_Taru_Black: Exile_Chopper_Taru_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};
	};
	class O_Heli_Transport_04_covered_black_F;
	class Exile_Chopper_Taru_Covered_Abstract: O_Heli_Transport_04_covered_black_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "MI-280 Taru (Covered)";
		fuelConsumptionRate = "0.406";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 4300;
		driverCanEject = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Taru_Covered_CSAT: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "CSAT";
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"};
	};
	class Exile_Chopper_Taru_Covered_Black: Exile_Chopper_Taru_Covered_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"};
	};
	class O_Heli_Transport_04_F;
	class Exile_Chopper_Taru_Transport_Abstract: O_Heli_Transport_04_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "MI-280 Taru (Transport)";
		fuelConsumptionRate = "0.406";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1100;
		driverCanEject = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Chopper_Taru_Transport_CSAT: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "CSAT";
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};
	};
	class Exile_Chopper_Taru_Transport_Black: Exile_Chopper_Taru_Transport_Abstract
	{
		scope = 2;
		skinName = "Black";
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};
	};
	class Boat_Civil_01_base_F;
	class Exile_Boat_MotorBoat_Abstract: Boat_Civil_01_base_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileBoats";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "Motor Boat";
		fuelConsumptionRate = "0.03f";
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Boat_MotorBoat_Police: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Police";
		displayName = "Motor Boat (Police)";
		class AnimationSources: AnimationSources
		{
			class Proxy
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Beacons
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class Eventhandlers: EventHandlers
		{
			init = "_this select 0 animate [""HidePoliceSigns"",0]; _this select 0 animate [""HideRescueSigns"",1]; _this select 0 animate [""HidePolice"",0];";
		};
		class UserActions
		{
			class beacons_start
			{
				userActionID = 50;
				displayName = "$STR_A3_CfgVehicles_beacons_on";
				displayNameDefault = "$STR_A3_CfgVehicles_beacons_on";
				position = "mph_axis";
				priority = 1.5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 0;
				condition = "this animationPhase ""BeaconsStart"" < 0.5 AND Alive(this) AND driver this == player";
				statement = "this animate [""BeaconsStart"",1];";
			};
			class beacons_stop: beacons_start
			{
				userActionID = 51;
				displayName = "$STR_A3_CfgVehicles_beacons_off";
				displayNameDefault = "$STR_A3_CfgVehicles_beacons_off";
				condition = "this animationPhase ""BeaconsStart"" > 0.5 AND Alive(this) AND driver this == player";
				statement = "this animate [""BeaconsStart"",0];";
			};
		};
		hiddenSelectionsTextures[] = {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"};
		textureList[] = {"police",1};
		animationList[] = {"hidePolice",0,"HideRescueSigns",1,"HidePoliceSigns",0};
	};
	class Exile_Boat_MotorBoat_Orange: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "Orange";
		displayName = "Motor Boat (Orange)";
		hiddenSelectionsTextures[] = {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"};
	};
	class Exile_Boat_MotorBoat_White: Exile_Boat_MotorBoat_Abstract
	{
		scope = 2;
		skinName = "White";
		displayName = "Motor Boat (White)";
		textures[] = {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};
	};
	class B_G_Boat_Transport_02_F;
	class Exile_Boat_RHIB_Abstract: B_G_Boat_Transport_02_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileBoats";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "RHIB";
		fuelConsumptionRate = "0.03f";
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Boat_RHIB: Exile_Boat_RHIB_Abstract
	{
		scope = 2;
		skinName = "Gray";
		displayName = "RHIB";
	};
	class C_Rubberboat;
	class Exile_Boat_RubberDuck_Abstract: C_Rubberboat
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileBoats";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "Rubber Duck";
		fuelConsumptionRate = "0.03f";
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Boat_RubberDuck_CSAT: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "CSAT";
		displayName = "Rubber Duck (CSAT)";
		hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"};
	};
	class Exile_Boat_RubberDuck_Digital: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Digital";
		displayName = "Rubber Duck (Digital)";
		hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"};
	};
	class Exile_Boat_RubberDuck_Orange: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Orange";
		displayName = "Rubber Duck (Orange)";
		hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"};
	};
	class Exile_Boat_RubberDuck_Blue: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Blue";
		displayName = "Rubber Duck (Blue)";
		hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"};
	};
	class Exile_Boat_RubberDuck_Black: Exile_Boat_RubberDuck_Abstract
	{
		scope = 2;
		skinName = "Black";
		displayName = "Rubber Duck (Black)";
		hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"};
	};
	class SDV_01_base_F;
	class Exile_Boat_SDV_Abstract: SDV_01_base_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileBoats";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "SDV";
		fuelConsumptionRate = "0.03f";
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Boat_SDV_CSAT: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "CSAT";
		displayName = "SDV (CSAT)";
		hiddenSelectionsTextures[] = {"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"};
	};
	class Exile_Boat_SDV_Digital: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Digital";
		displayName = "SDV (Digital)";
		hiddenSelectionsTextures[] = {"\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"};
	};
	class Exile_Boat_SDV_Grey: Exile_Boat_SDV_Abstract
	{
		scope = 2;
		skinName = "Grey";
		displayName = "SDV (Grey)";
		hiddenSelectionsTextures[] = {"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"};
	};
	class C_Scooter_Transport_01_F;
	class Exile_Boat_WaterScooter_Abstract: C_Scooter_Transport_01_F
	{
		author = "Exile Mod Team";
		scope = 0;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExileBoats";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "Water Scooter";
		fuelConsumptionRate = "0.03f";
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class Exile_Boat_WaterScooter: Exile_Boat_WaterScooter_Abstract
	{
		scope = 2;
		skinName = "Black";
		displayName = "Water Scooter";
		hiddenSelectionsTextures[] = {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"};
	};
	class an2_base;
	class Exile_Plane_AN2_Abstract: an2_base
	{
		author = "Exile Mod Team";
		scope = 2;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExilePlanes";
		displayName = "An-2";
		skinName = "";
		fuelExplosionPower = 3;
		fuelConsumptionRate = "0.05f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 2500;
		class AnimationSources
		{
			class door
			{
				animPeriod = 1;
				initPhase = 1;
				source = "user";
			};
		};
		class TransportItems{};
		class UserActions
		{
			class opendoor
			{
				condition = "((driver this) == player) && ((this animationPhase 'door') == 0) && (isNull (this turretUnit [3]))";
				displayName = "Open Door";
				hideOnUse = 1;
				onlyforplayer = 1;
				position = "pos cargo";
				radius = 8;
				showWindow = 0;
				statement = "this animate ['door', 1]; this lockTurret [[3], true];";
			};
			class closedoor
			{
				condition = "((driver this) == player) && ((this animationPhase 'door') == 1)";
				displayName = "Close Door";
				hideOnUse = 1;
				onlyforplayer = 1;
				position = "pos cargo";
				radius = 40;
				showWindow = 0;
				statement = "this animate ['door', 0]; this lockTurret [[3], true];";
			};
		};
	};
	class Exile_Plane_AN2_Green: Exile_Plane_AN2_Abstract
	{
		scope = 2;
		skinName = "Green";
		hiddenSelectionsTextures[] = {"Exile_psycho_An2\data\an2_1_co.paa","Exile_psycho_An2\data\an2_2_co.paa","Exile_psycho_An2\data\an2_wings_co.paa"};
	};
	class Exile_Plane_AN2_White: Exile_Plane_AN2_Abstract
	{
		scope = 2;
		skinName = "Red, White & Blue";
		hiddenSelectionsTextures[] = {"Exile_psycho_An2\data\an2_1_a_co.paa","Exile_psycho_An2\data\an2_2_a_co.paa","Exile_psycho_An2\data\an2_wings_a_co.paa"};
	};
	class Exile_Plane_AN2_Stripe: Exile_Plane_AN2_Abstract
	{
		scope = 2;
		skinName = "Green Stripe";
		hiddenSelectionsTextures[] = {"Exile_psycho_An2\data\an2_1_b_co.paa","Exile_psycho_An2\data\an2_2_b_co.paa","Exile_psycho_An2\data\an2_wings_b_co.paa"};
	};
	class B_T_VTOL_01_infantry_F;
	class Exile_Plane_BlackfishInfantry: B_T_VTOL_01_infantry_F
	{
		author = "Exile Mod Team";
		scope = 2;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExilePlanes";
		crew = "";
		typicalCargo[] = {};
		skinName = "Olive";
		displayName = "V-44 X Blackfish (Infantry Transport)";
		fuelConsumptionRate = "0.406";
		maximumLoad = 7000;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class B_T_VTOL_01_vehicle_F;
	class Exile_Plane_BlackfishVehicle: B_T_VTOL_01_vehicle_F
	{
		author = "Exile Mod Team";
		scope = 2;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExilePlanes";
		crew = "";
		typicalCargo[] = {};
		skinName = "Olive";
		displayName = "V-44 X Blackfish (Vehicle Transport)";
		fuelConsumptionRate = "0.406";
		maximumLoad = 7000;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class C_Plane_Civil_01_F;
	class Exile_Plane_Ceasar: C_Plane_Civil_01_F
	{
		author = "Exile Mod Team";
		scope = 2;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExilePlanes";
		crew = "";
		typicalCargo[] = {};
		skinName = "Redline";
		displayName = "Ceasar BTT";
		fuelConsumptionRate = "0.03f";
		maximumLoad = 1300;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class GNT_C185;
	class Exile_Plane_Cessna: GNT_C185
	{
		author = "Exile Mod Team";
		scope = 2;
		side = 3;
		faction = "CIV_F";
		vehicleclass = "ExilePlanes";
		displayName = "Cessna 185 Skywagon";
		skinName = "";
		fuelExplosionPower = 3;
		fuelConsumptionRate = "0.05f";
		exileLockSound = "exile_assets\sound\lock01.wss";
		exileUnlockSound = "a3\sounds_f\vehicles\soft\Hatchback_01\Hatchback_01_door.wss";
		maximumLoad = 1300;
		class TransportItems{};
	};
	class Exile_Casino_TwinkleTwister: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Twinkle Twister";
		model = "\exile_assets\model\Exile_Test_OAB.p3d";
		destrType = "DestructNo";
		class EventHandlers
		{
			init = "";
		};
		class AnimationSources
		{
			class RotorLeft
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "";
			};
			class RotorMiddle
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "";
			};
			class RotorRight
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "";
			};
			class Light01
			{
				source = "MarkerLight";
				markerLight = "Light01";
			};
		};
		class MarkerLights
		{
			class Light01
			{
				color[] = {1.0,0.0,0.0};
				ambient[] = {0.01,0.0,0.0};
				intensity = 1000;
				name = "Light01";
				useFlare = 1;
				flareSize = 1.7;
				flareMaxDistance = 2000;
				activeLight = 0;
				dayLight = 1;
				blinking = 1;
				blinkingPattern[] = {0.2,1.3};
				blinkingPatternGuarantee = 0;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				class Attenuation
				{
					start = 0;
					constant = 10;
					linear = 6;
					quadratic = 4;
					hardLimitStart = 12;
					hardLimitEnd = 15;
				};
			};
		};
		class UserActions
		{
			class play
			{
				displayName = "Play";
				position = "left";
				radius = 3;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_object_twinkleTwister_play";
			};
		};
	};
	class Exile_Plant_GreenBush: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Bush (Green)";
		model = "\A3\plants_f\Bush\b_FicusC1s_F.p3d";
		destrType = "DestructNo";
	};
	class Exile_Plant_GreenBush2: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Bush (Green)";
		model = "\A3\plants_f\Bush\b_ficusC2d_F.p3d";
		destrType = "DestructNo";
	};
	class Exile_Plant_GreenBush3: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Bush (Green)";
		model = "\A3\plants_f\Bush\b_FicusC2s_F.p3d";
		destrType = "DestructNo";
	};
	class Exile_Plant_BrownBush: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Bush (Brown)";
		model = "\A3\plants_f\Bush\b_NeriumO2d_F.p3d";
		destrType = "DestructNo";
	};
	class Exile_Plant_GreenBush5: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Bush (Green)";
		model = "\A3\plants_f\Bush\b_NeriumO2s_F.p3d";
		destrType = "DestructNo";
	};
	class Exile_Plant_GreenBush6: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Bush (Green)";
		model = "\A3\plants_f\Bush\b_ArundoD2s_F.p3d";
		destrType = "DestructNo";
	};
	class Exile_Plant_GreenBush7: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Bush (Green)";
		model = "\A3\plants_f\Bush\b_ArundoD3s_F.p3d";
		destrType = "DestructNo";
	};
	class Exile_Plant_GreenBush8: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Bush (Green)";
		model = "\A3\plants_f\Bush\b_Thistle_Thorn_Green.p3d";
		destrType = "DestructNo";
	};
	class Exile_Effect_Abstract: thing
	{
		author = "Exile Mod Team";
		scope = 1;
		side = 2;
		animated = 0;
		faction = "None";
		vehicleClass = "Emitters";
		simulation = "thing";
		icon = "iconExplosiveAP";
		mapSize = 1;
		displayName = "Exile Effect";
		picture = "\A3\weapons_f\ammoBoxes\data\ui\map_AmmoBox_F_CA.paa";
		model = "\A3\Weapons_F\empty.p3d";
		class Eventhandlers
		{
			init = "";
			killed = "";
		};
	};
	class Exile_Effect_Flies: Exile_Effect_Abstract
	{
		displayName = "Exile Flies Effect";
		class EventHandlers
		{
			init = "(_this select 0) call ExileClient_object_flies_event_onInit";
			killed = "(_this select 0) call ExileClient_object_flies_event_onKilled";
		};
	};
	class Animal_Base_F;
	class Exile_Animal_Abstract: Animal_Base_F
	{
		scope = 1;
		author = "Exile Mod Team";
		hiddenSelectionsTextures[] = {};
		hiddenSelectionMaterials[] = {};
		class EventHandlers
		{
			init = "";
		};
		class Exile
		{
			variations[] = {};
			fleeMove = "";
			idleMove = "";
			gutItems[] = {};
			dangerSounds[] = {};
			deathSounds[] = {};
			idleSounds[] = {};
		};
	};
	class Exile_Animal_Goat_Abstract: Exile_Animal_Abstract
	{
		scope = 1;
		displayName = "Goat";
		model = "\A3\animals_f_beta\Goat\Goat_F.p3d";
		hasGeometry = 1;
		moves = "CfgMovesGoat_F";
		hiddenSelections[] = {"camo"};
		agentTasks[] = {"Exile_Animal_Goat"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"a3\animals_f_beta\Goat\data\goat.rvmat","a3\animals_f_beta\Goat\data\W1_goat.rvmat","a3\animals_f_beta\Goat\data\W2_goat.rvmat"};
		};
		class Exile
		{
			variations[] = {"Exile_Animal_Goat_Black","Exile_Animal_Goat_Dirty","Exile_Animal_Goat_White","Exile_Animal_Goat_Old","Exile_Animal_Goat_Spotted"};
			fleeMove = "Goat_Run";
			idleMove = "Goat_Idle_Stop";
			idleSounds[] = {{"a3\animals_f_beta\Sheep\Data\sound\sheep1.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep2.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep3.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep4.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep5.wss",100,4}};
			dangerSounds[] = {{"a3\animals_f_beta\Sheep\Data\sound\sheep1.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep2.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep3.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep4.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep5.wss",100,4}};
			deathSounds[] = {{"a3\animals_f_beta\Sheep\Data\sound\sheep1.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep2.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep3.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep4.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep5.wss",100,4}};
			gutItems[] = {{3,"Exile_Item_GoatSteak_Raw"}};
			bestPlaces = "hills * (1 - trees) * (1 - forest)";
		};
	};
	class Exile_Animal_Goat_Black: Exile_Animal_Goat_Abstract
	{
		scope = 2;
		displayName = "Goat (Black)";
		hiddenSelectionsTextures[] = {"a3\animals_f_beta\Goat\Data\black_goat_co.paa"};
		hiddenSelectionMaterials[] = {"a3\animals_f_beta\goat\data\goat_black.rvmat"};
	};
	class Exile_Animal_Goat_Dirty: Exile_Animal_Goat_Abstract
	{
		scope = 2;
		displayName = "Goat (Dirty)";
		hiddenSelectionsTextures[] = {"a3\animals_f_beta\Goat\Data\dirt_goat_co.paa"};
		hiddenSelectionMaterials[] = {"a3\animals_f_beta\goat\data\goat_dirt.rvmat"};
	};
	class Exile_Animal_Goat_White: Exile_Animal_Goat_Abstract
	{
		scope = 2;
		displayName = "Goat (White)";
		hiddenSelectionsTextures[] = {"a3\animals_f_beta\Goat\Data\goat_co.paa"};
		hiddenSelectionMaterials[] = {"a3\animals_f_beta\goat\data\goat_white.rvmat"};
	};
	class Exile_Animal_Goat_Old: Exile_Animal_Goat_Abstract
	{
		scope = 2;
		displayName = "Goat (Old)";
		hiddenSelectionsTextures[] = {"a3\animals_f_beta\Goat\Data\old_goat_co.paa"};
		hiddenSelectionMaterials[] = {"a3\animals_f_beta\goat\data\goat_old.rvmat"};
	};
	class Exile_Animal_Goat_Spotted: Exile_Animal_Goat_Abstract
	{
		scope = 2;
		displayName = "Goat (Spotted)";
		hiddenSelectionsTextures[] = {"a3\animals_f_beta\Goat\Data\white_goat_co.paa"};
		hiddenSelectionMaterials[] = {"a3\animals_f_beta\goat\data\goat_white.rvmat"};
	};
	class Exile_Animal_Hen_Abstract: Exile_Animal_Abstract
	{
		scope = 1;
		displayName = "Hen";
		model = "\A3\animals_f_beta\chicken\Hen_F.p3d";
		hasGeometry = 1;
		moves = "CfgMovesHen_F";
		hiddenSelections[] = {"camo"};
		agentTasks[] = {"Exile_Animal_Hen"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"a3\animals_f_beta\Chicken\data\cock_white.rvmat","a3\animals_f_beta\Chicken\data\W1_cock.rvmat","a3\animals_f_beta\Chicken\data\W2_cock.rvmat"};
		};
		class Exile
		{
			variations[] = {"Exile_Animal_Hen_White"};
			fleeMove = "Hen_Run";
			idleMove = "Hen_Idle_Stop";
			idleSounds[] = {{"a3\sounds_f\environment\animals\hen1.wss",100,4},{"a3\sounds_f\environment\animals\hen2.wss",100,4},{"a3\sounds_f\environment\animals\hen3.wss",100,4}};
			dangerSounds[] = {{"a3\sounds_f\environment\animals\hen1.wss",100,4},{"a3\sounds_f\environment\animals\hen2.wss",100,4},{"a3\sounds_f\environment\animals\hen3.wss",100,4}};
			deathSounds[] = {{"a3\sounds_f\environment\animals\hen1.wss",100,4},{"a3\sounds_f\environment\animals\hen2.wss",100,4},{"a3\sounds_f\environment\animals\hen3.wss",100,4}};
			gutItems[] = {{2,"Exile_Item_ChickenFilet_Raw"}};
			bestPlaces = "houses * (1 - sea)";
		};
	};
	class Exile_Animal_Hen_White: Exile_Animal_Hen_Abstract
	{
		scope = 2;
		displayName = "Hen (White)";
		hiddenSelectionsTextures[] = {"a3\animals_f_beta\Chicken\data\hen_co.paa"};
		hiddenSelectionMaterials[] = {"a3\animals_f_beta\Chicken\data\hen.rvmat"};
	};
	class Exile_Animal_Rooster_Abstract: Exile_Animal_Abstract
	{
		scope = 1;
		displayName = "Rooster";
		model = "\A3\animals_f_beta\chicken\Cock_F.p3d";
		hasGeometry = 1;
		moves = "CfgMovesCock_F";
		hiddenSelections[] = {"camo"};
		agentTasks[] = {"Exile_Animal_Rooster"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"a3\animals_f_beta\Chicken\data\hen.rvmat","a3\animals_f_beta\Chicken\data\W1_hen.rvmat","a3\animals_f_beta\Chicken\data\W2_hen.rvmat"};
		};
		class Exile
		{
			variations[] = {"Exile_Animal_Rooster_Gold","Exile_Animal_Rooster_Brown","Exile_Animal_Rooster_White"};
			fleeMove = "Cock_Run";
			idleMove = "Cock_Idle_Stop";
			idleSounds[] = {{"a3\sounds_f\environment\animals\hen1.wss",100,4},{"a3\sounds_f\environment\animals\hen2.wss",100,4},{"a3\sounds_f\environment\animals\hen3.wss",100,4}};
			dangerSounds[] = {{"a3\sounds_f\environment\animals\hen1.wss",100,4},{"a3\sounds_f\environment\animals\hen2.wss",100,4},{"a3\sounds_f\environment\animals\hen3.wss",100,4}};
			deathSounds[] = {{"a3\sounds_f\environment\animals\hen1.wss",100,4},{"a3\sounds_f\environment\animals\hen2.wss",100,4},{"a3\sounds_f\environment\animals\hen3.wss",100,4}};
			gutItems[] = {{2,"Exile_Item_RoosterFilet_Raw"}};
			bestPlaces = "houses * (1 - sea)";
		};
	};
	class Exile_Animal_Rooster_Brown: Exile_Animal_Rooster_Abstract
	{
		scope = 2;
		displayName = "Rooster (Brown)";
		hiddenSelectionsTextures[] = {"a3\animals_f_beta\Chicken\data\brown_rooster_CO.paa"};
		hiddenSelectionMaterials[] = {"a3\animals_f_beta\Chicken\data\cock_brown.rvmat"};
	};
	class Exile_Animal_Rooster_White: Exile_Animal_Rooster_Abstract
	{
		scope = 2;
		displayName = "Rooster (White)";
		hiddenSelectionsTextures[] = {"a3\animals_f_beta\Chicken\data\white_rooster_CO.paa"};
		hiddenSelectionMaterials[] = {"a3\animals_f_beta\Chicken\data\cock_white.rvmat"};
	};
	class Exile_Animal_Rooster_Gold: Exile_Animal_Rooster_Abstract
	{
		scope = 2;
		displayName = "Rooster (Gold)";
		hiddenSelectionsTextures[] = {"a3\animals_f_beta\Chicken\data\kohout_co.paa"};
		hiddenSelectionMaterials[] = {"a3\animals_f_beta\Chicken\data\cock_brown.rvmat"};
	};
	class Exile_Animal_Sheep_Abstract: Exile_Animal_Abstract
	{
		scope = 1;
		displayName = "Sheep";
		model = "\A3\animals_f_beta\Sheep\Sheep_F.p3d";
		hasGeometry = 1;
		moves = "CfgMovesSheep_F";
		hiddenSelections[] = {"camo"};
		agentTasks[] = {"Exile_Animal_Sheep"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\animals_f_beta\sheep\data\sheep.rvmat","A3\animals_f_beta\sheep\data\W1_sheep.rvmat","A3\animals_f_beta\sheep\data\W2_sheep.rvmat"};
		};
		class Exile
		{
			variations[] = {"Exile_Animal_Sheep_Beige","Exile_Animal_Sheep_White","Exile_Animal_Sheep_Brown","Exile_Animal_Sheep_Spotted","Exile_Animal_Sheep_Tricolor"};
			fleeMove = "Sheep_Run";
			idleMove = "Sheep_Idle_Stop";
			idleSounds[] = {{"a3\animals_f_beta\Sheep\Data\sound\sheep1.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep2.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep3.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep4.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep5.wss",100,4}};
			dangerSounds[] = {{"a3\animals_f_beta\Sheep\Data\sound\sheep1.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep2.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep3.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep4.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep5.wss",100,4}};
			deathSounds[] = {{"a3\animals_f_beta\Sheep\Data\sound\sheep1.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep2.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep3.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep4.wss",100,4},{"a3\animals_f_beta\Sheep\Data\sound\sheep5.wss",100,4}};
			gutItems[] = {{3,"Exile_Item_SheepSteak_Raw"}};
			bestPlaces = "meadow * (1 - hills) * (1 - sea) * (1 - trees) * (1 - forest) * (1 - houses)";
		};
	};
	class Exile_Animal_Sheep_Beige: Exile_Animal_Sheep_Abstract
	{
		scope = 2;
		displayName = "Sheep (Beige)";
		hiddenSelectionsTextures[] = {"a3\animals_f_beta\Sheep\Data\sheep_co.paa"};
	};
	class Exile_Animal_Sheep_White: Exile_Animal_Sheep_Abstract
	{
		scope = 2;
		displayName = "Sheep (White)";
		hiddenSelectionsTextures[] = {"a3\animals_f_beta\Sheep\Data\white_sheep_co.paa"};
	};
	class Exile_Animal_Sheep_Brown: Exile_Animal_Sheep_Abstract
	{
		scope = 2;
		displayName = "Sheep (Brown)";
		hiddenSelectionsTextures[] = {"a3\animals_f_beta\Sheep\Data\brown_sheep_co.paa"};
	};
	class Exile_Animal_Sheep_Spotted: Exile_Animal_Sheep_Abstract
	{
		scope = 2;
		displayName = "Sheep (Spotted)";
		hiddenSelectionsTextures[] = {"a3\animals_f_beta\Sheep\Data\blackwhite_sheep_co.paa"};
	};
	class Exile_Animal_Sheep_Tricolor: Exile_Animal_Sheep_Abstract
	{
		scope = 2;
		displayName = "Sheep (Tricolor)";
		hiddenSelectionsTextures[] = {"a3\animals_f_beta\Sheep\Data\tricolor_sheep_co.paa"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class Item_Base_F;
	class InventoryItem_Base_F;
	class SlotInfo;
	class Rifle;
	class Pistol;
	class TruckHorn;
	class H_Cap_red;
	class Vest_Camo_Base;
	class VestItem;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class UniformItem: InventoryItem_Base_F
	{
		type = 801;
	};
	class Uniform_Base: ItemCore
	{
		scope = 0;
		allowedSlots[] = {901};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Exile_Unit_Player";
			containerClass = "Supply0";
			mass = 0;
		};
	};
	class arifle_MX_Base_F;
	class MMG_01_base_F;
	class MMG_02_base_F;
	class arifle_SPAR_02_base_F;
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "";
				slot = "";
			};
		};
	};
	class arifle_MX_SW_Black_F: arifle_MX_SW_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "";
				slot = "";
			};
		};
	};
	class MMG_01_hex_F: MMG_01_base_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "";
				slot = "";
			};
		};
	};
	class MMG_01_tan_F: MMG_01_hex_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "";
				slot = "";
			};
		};
	};
	class MMG_02_camo_F: MMG_02_base_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "";
				slot = "";
			};
		};
	};
	class MMG_02_black_F: MMG_02_camo_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "";
				slot = "";
			};
		};
	};
	class MMG_02_sand_F: MMG_02_camo_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "";
				slot = "";
			};
		};
	};
	class arifle_SPAR_02_blk_F: arifle_SPAR_02_base_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "";
				slot = "";
			};
		};
	};
	class arifle_SPAR_02_khk_F: arifle_SPAR_02_base_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "";
				slot = "";
			};
		};
	};
	class arifle_SPAR_02_snd_F: arifle_SPAR_02_base_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "";
				slot = "";
			};
		};
	};
	class Default;
	class GrenadeLauncher: Default{};
	class Throw: GrenadeLauncher
	{
		muzzles[] = {"HandGrenade_Stone","HandGrenadeMuzzle","MiniGrenadeMuzzle","SmokeShellMuzzle","SmokeShellYellowMuzzle","SmokeShellGreenMuzzle","SmokeShellRedMuzzle","SmokeShellPurpleMuzzle","SmokeShellOrangeMuzzle","SmokeShellBlueMuzzle","ChemlightGreenMuzzle","ChemlightRedMuzzle","ChemlightYellowMuzzle","ChemlightBlueMuzzle","IRGrenade","Exile_Item_ZipTie"};
		class ThrowMuzzle;
		class Exile_Item_ZipTie: ThrowMuzzle
		{
			magazines[] = {"Exile_Item_ZipTie"};
		};
	};
	class InventoryOpticsItem_Base_F;
	class optic_Nightstalker: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class NCTALKEP
				{
					visionMode[] = {"Normal","NVG"};
				};
			};
		};
	};
	class Rifle_Long_Base_F;
	class GM6_base_F: Rifle_Long_Base_F
	{
		magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag","Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag"};
	};
	class DMR_05_base_F: Rifle_Long_Base_F
	{
		magazines[] = {"10Rnd_93x64_DMR_05_Mag","Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"};
	};
	class LRR_base_F: Rifle_Long_Base_F
	{
		magazines[] = {"7Rnd_408_Mag","Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"};
	};
	class DMR_02_base_F: Rifle_Long_Base_F
	{
		magazines[] = {"10Rnd_338_Mag","Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"};
	};
	class Exile_Cap_Exile: H_Cap_red
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Cap (Exile)";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_press_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPC\Civil\Data\Headgear_capb_press_co.paa"};
	};
	class Exile_Headgear_GasMask: ItemCore
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Gas Mask";
		descriptionShort = "No Armor";
		picture = "\exile_assets\texture\item\Exile_Clothing_Gasmask.paa";
		model = "\exile_assets\model\Exile_Clothing_Gasmask_World.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		weaponPoolAvailable = 1;
		simulation = "Weapon";
		optics = 0;
		useModelOptics = 0;
		class ItemInfo
		{
			hmdType = 0;
			mass = 60;
			modelOff = "\exile_assets\model\Exile_Clothing_Gasmask.p3d";
			type = 616;
			uniformModel = "\exile_assets\model\Exile_Clothing_Gasmask.p3d";
		};
	};
	class Exile_Headgear_SafetyHelmet: ItemCore
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Security Helmet";
		descriptionShort = "Armor Level 1";
		picture = "\exile_assets\texture\item\Exile_Clothing_SafetyHelmet.paa";
		model = "\exile_assets\model\Exile_Clothing_SafetyHelmet.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		weaponPoolAvailable = 1;
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\exile_assets\model\Exile_Clothing_SafetyHelmet.p3d";
			modelSides[] = {2};
			armor = 10;
			passThrough = 0.8;
		};
	};
	class Exile_Headgear_SantaHat: ItemCore
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Santa Hat";
		descriptionShort = "No Armor";
		picture = "\exile_assets\texture\item\Exile_Clothing_Santahat.paa";
		model = "\exile_assets\model\Exile_Clothing_Santahat.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		weaponPoolAvailable = 1;
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\exile_assets\model\Exile_Clothing_Santahat.p3d";
			modelSides[] = {2};
			armor = 0;
			passThrough = 0.8;
		};
	};
	class Exile_Horn_Abstract: TruckHorn
	{
		scope = 1;
		author = "Exile Mod Team";
		displayName = "Exile Horn Base";
	};
	class Exile_Horn_01: Exile_Horn_Abstract
	{
		scope = 2;
		displayName = "Horn 01";
		drySound[] = {"A3\Sounds_F\weapons\horns\car_horn_1",1,1,200};
	};
	class Exile_Horn_02: Exile_Horn_Abstract
	{
		scope = 2;
		displayName = "Horn 02";
		drySound[] = {"A3\Sounds_F\weapons\horns\car_horn_2",1,1,200};
	};
	class Exile_Horn_03: Exile_Horn_Abstract
	{
		scope = 2;
		displayName = "Horn 03";
		drySound[] = {"A3\Sounds_F\weapons\horns\MRAP_02_horn_1",1,1,200};
	};
	class Exile_Horn_04: Exile_Horn_Abstract
	{
		scope = 2;
		displayName = "Horn 04";
		drySound[] = {"A3\Sounds_F\weapons\horns\MRAP_02_horn_2",1,1,200};
	};
	class Exile_Horn_05: Exile_Horn_Abstract
	{
		scope = 2;
		displayName = "Horn 05";
		drySound[] = {"A3\Sounds_F\weapons\horns\truck_horn_1",1,1,200};
	};
	class Exile_Horn_06: Exile_Horn_Abstract
	{
		scope = 2;
		displayName = "Horn 06";
		drySound[] = {"A3\Sounds_F\weapons\horns\truck_horn_2",1,1,200};
	};
	class Exile_Horn_07: Exile_Horn_Abstract
	{
		scope = 2;
		displayName = "Horn 07";
		drySound[] = {"A3\Sounds_F\weapons\horns\truck_horn_3",1,1,200};
	};
	class Exile_Horn_08: Exile_Horn_Abstract
	{
		scope = 2;
		displayName = "Horn 08";
		drySound[] = {"A3\Sounds_F\weapons\horns\truck_horn_4",1,1,200};
	};
	class ItemWatch;
	class Exile_Item_XM8: ItemWatch
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "XM8";
		descriptionShort = "Your personal assistant in Exile.";
		model = "\exile_assets\model\Exile_Item_XM8.p3d";
		picture = "\exile_assets\texture\item\Exile_Item_XM8.paa";
	};
	class Exile_Melee_Abstract: Rifle
	{
		scope = 1;
		author = "Exile Mod Team";
		displayName = "Dummy";
		descriptionShort = "Dummy";
		type = 4;
		optics = 0;
		primary = 0;
		model = "\exile_assets\model\Dummy.p3d";
		picture = "\exile_assets\texture\item\Dummy.paa";
		cursor = "EmptyCursor";
		cursorAim = "throw";
		cursorSize = 1;
		autoreload = 1;
		canDrop = 1;
		distanceZoomMin = 2;
		distanceZoomMax = 2;
		drySound[] = {"",0,1,20};
		fireLightDuration = 0;
		fireLightIntensity = 0;
		isFakeWeapon = 0;
		minRange = 0.3;
		minRangeProbab = 0.33;
		midRange = 0.3;
		midRangeProbab = 0.33;
		maxRange = 0.3;
		maxRangeProbab = 0.34;
		modelOptics = "-";
		magazines[] = {"Exile_Magazine_Swing"};
		recoil = "recoil_pistol_heavy";
		recoilProne = "recoil_prone_pistol_heavy";
		reloadAction = "GestureReloadPistolHeavy02";
		reloadMagazineSound[] = {"",1};
		reloadTime = 1;
		closure1[] = {"",1};
		soundClosure[] = {"closure1",1};
		weaponInfoType = "RscWeaponEmpty";
		weaponReloadtime = 1;
		weaponSoundEffect = "DefaultRifle";
		modes[] = {"Hack"};
		craterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		class Library
		{
			libTextDesc = "Long Description";
		};
	};
	class Exile_Melee_Axe: Exile_Melee_Abstract
	{
		scope = 2;
		author = "Exile Mod Team";
		_generalMacro = "Exile_Melee_Axe";
		model = "\exile_assets\model\Exile_Melee_Axe.p3d";
		displayName = "Axe";
		descriptionShort = "An old-fashioned tool used to chop wood.";
		picture = "\exile_assets\texture\item\Exile_Item_Axe.paa";
		handAnim[] = {"OFP2_ManSkeleton","\exile_assets\animation\Exile_Axe_Idle01.rtm"};
		class WeaponSlotsInfo
		{
			mass = 35;
		};
		class Hack: Mode_FullAuto
		{
			burst = 0;
			autoFire = 1;
			flashSize = 0;
			dispersion = 0;
			sounds[] = {"StandardSound"};
			minRange = 0.3;
			minRangeProbab = 0.33;
			midRange = 0.3;
			midRangeProbab = 0.33;
			maxRange = 0.3;
			maxRangeProbab = 0.34;
			reloadTime = 1.0;
			class StandardSound
			{
				begin1[] = {"\exile_assets\sound\swoosh01.ogg","db3",1,100};
				begin2[] = {"\exile_assets\sound\swoosh02.ogg","db3",1,100};
				closure1[] = {"",1};
				soundBegin[] = {"begin1",1,"begin2",1};
				soundClosure[] = {"closure1",1};
				weaponSoundEffect = "DefaultRifle";
			};
		};
	};
	class Exile_Melee_Shovel: Exile_Melee_Abstract
	{
		scope = 2;
		author = "Exile Mod Team";
		_generalMacro = "Exile_Melee_Shovel";
		model = "\exile_assets\model\Exile_Melee_Shovel.p3d";
		displayName = "Shovel";
		descriptionShort = "Everyday I'm shovelling!";
		picture = "\exile_assets\texture\item\Exile_Item_Shovel.paa";
		handAnim[] = {"OFP2_ManSkeleton","\exile_assets\animation\Exile_SledgeHammer_Idle01.rtm"};
		magazines[] = {"Exile_Magazine_Boing"};
		class WeaponSlotsInfo
		{
			mass = 70;
		};
		class Hack: Mode_FullAuto
		{
			burst = 0;
			autoFire = 1;
			flashSize = 0;
			dispersion = 0;
			sounds[] = {"StandardSound"};
			minRange = 0.3;
			minRangeProbab = 0.33;
			midRange = 0.3;
			midRangeProbab = 0.33;
			maxRange = 0.3;
			maxRangeProbab = 0.34;
			reloadTime = 1.75;
			class StandardSound
			{
				begin1[] = {"\exile_assets\sound\swoosh01.ogg","db3",1,100};
				begin2[] = {"\exile_assets\sound\swoosh02.ogg","db3",1,100};
				closure1[] = {"",1};
				soundBegin[] = {"begin1",1,"begin2",1};
				soundClosure[] = {"closure1",1};
				weaponSoundEffect = "DefaultRifle";
			};
		};
	};
	class Exile_Melee_SledgeHammer: Exile_Melee_Abstract
	{
		scope = 2;
		author = "Exile Mod Team";
		_generalMacro = "Exile_Melee_SledgeHammer";
		model = "\exile_assets\model\Exile_Melee_SledgeHammer.p3d";
		displayName = "Sledge Hammer";
		descriptionShort = "The ultimate solution when a normal hammer is simply not enough.";
		picture = "\exile_assets\texture\item\Exile_Item_SledgeHammer.paa";
		handAnim[] = {"OFP2_ManSkeleton","\exile_assets\animation\Exile_SledgeHammer_Idle01.rtm"};
		magazines[] = {"Exile_Magazine_Swoosh"};
		class WeaponSlotsInfo
		{
			mass = 70;
		};
		class Hack: Mode_FullAuto
		{
			burst = 0;
			autoFire = 1;
			flashSize = 0;
			dispersion = 0;
			sounds[] = {"StandardSound"};
			minRange = 0.3;
			minRangeProbab = 0.33;
			midRange = 0.3;
			midRangeProbab = 0.33;
			maxRange = 0.3;
			maxRangeProbab = 0.34;
			reloadTime = 1.75;
			class StandardSound
			{
				begin1[] = {"\exile_assets\sound\swoosh01.ogg","db3",1,100};
				begin2[] = {"\exile_assets\sound\swoosh02.ogg","db3",1,100};
				closure1[] = {"",1};
				soundBegin[] = {"begin1",1,"begin2",1};
				soundClosure[] = {"closure1",1};
				weaponSoundEffect = "DefaultRifle";
			};
		};
	};
	class Exile_Uniform_BambiOverall: Uniform_Base
	{
		scope = 2;
		displayName = "Bambi Overall";
		author = "Exile Mod Team";
		picture = "\exile_assets\texture\item\Exile_Uniform_BambiOverall.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\exile_assets\model\Exile_Uniform_BambiOverall_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "\A3\characters_F\common\coveralls.p3d";
			uniformClass = "Exile_Unit_Player";
			containerClass = "Supply40";
			mass = 30;
		};
	};
	class Exile_Uniform_ExileCustoms: Uniform_Base
	{
		scope = 2;
		displayName = "Exile Customs";
		author = "Exile Mod Team";
		picture = "\exile_assets\texture\item\Exile_Uniform_BambiOverall.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\exile_assets\model\Exile_Uniform_ExileCustoms_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Exile_Unit_ExileCustoms";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_O_Wetsuit;
	class U_I_Wetsuit;
	class U_B_Wetsuit;
	class Exile_Uniform_Wetsuit_NATO: U_B_Wetsuit
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Wetsuit (NATO, Forced)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Exile_Unit_Wetsuit_NATO";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class Exile_Uniform_Wetsuit_CSAT: U_O_Wetsuit
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Wetsuit (CSAT, Forced)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Exile_Unit_Wetsuit_CSAT";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class Exile_Uniform_Wetsuit_AAF: U_I_Wetsuit
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Wetsuit (AAF, Forced)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Exile_Unit_Wetsuit_AAF";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class Exile_Uniform_Woodland: Uniform_Base
	{
		scope = 2;
		displayName = "Exile Woodland";
		author = "Exile Mod Team";
		picture = "\exile_assets\texture\item\Exile_Uniform_Woodland.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\exile_assets\model\Exile_Uniform_Woodland_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Exile_Unit_Woodland";
			containerClass = "Supply80";
			mass = 40;
		};
	};
	class V_RebreatherB;
	class V_RebreatherIA;
	class V_RebreatherIR;
	class Exile_Vest_Rebreather_NATO: V_RebreatherB
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Rebreather (NATO, Forced)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa"};
		hiddenUnderwaterSelections[] = {"hide"};
		hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\data\visors_ca.paa"};
		class ItemInfo: VestItem
		{
			hiddenSelections[] = {"camo"};
			hiddenUnderwaterSelections[] = {"hide"};
			hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\data\visors_ca.paa"};
			containerClass = "Supply0";
			mass = 80;
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			scope = 0;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "\A3\Characters_F\Common\equip_rebreather";
			uniformType = "Default";
			vestType = "Rebreather";
		};
	};
	class Exile_Vest_Rebreather_AAF: V_RebreatherIA
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Rebreather (AAF, Forced)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_rus_co.paa"};
		hiddenUnderwaterSelections[] = {"hide"};
		hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_rus_co.paa","\A3\characters_f\common\data\diver_equip_rus_co.paa","\A3\characters_f\data\visors_ca.paa"};
		class ItemInfo: VestItem
		{
			hiddenSelections[] = {"camo"};
			hiddenUnderwaterSelections[] = {"hide"};
			hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\data\visors_ca.paa"};
			containerClass = "Supply0";
			mass = 80;
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			scope = 0;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "\A3\Characters_F\Common\equip_rebreather";
			uniformType = "Default";
			vestType = "Rebreather";
		};
	};
	class Exile_Vest_Rebreather_CSAT: V_RebreatherIR
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Rebreather (CSAT, Forced)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_iran_co.paa"};
		hiddenUnderwaterSelections[] = {"hide"};
		hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_iran_co.paa","\A3\characters_f\common\data\diver_equip_iran_co.paa","\A3\characters_f\data\visors_ca.paa"};
		class ItemInfo: VestItem
		{
			hiddenSelections[] = {"camo"};
			hiddenUnderwaterSelections[] = {"hide"};
			hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\data\visors_ca.paa"};
			containerClass = "Supply0";
			mass = 80;
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			scope = 0;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "\A3\Characters_F\Common\equip_rebreather";
			uniformType = "Default";
			vestType = "Rebreather";
		};
	};
	class Exile_Vest_Snow: Vest_Camo_Base
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Snow Vest";
		descriptionShort = "Armor Level IV";
		picture = "\A3\Characters_F\data\ui\icon_V_plate_carrier_2_blk_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\exile_assets\texture\item\Exile_Clothing_SnowVest.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass = "Supply140";
			mass = 100;
			hiddenSelections[] = {"camo"};
			overlaySelctionsInfo[] = {"Ghillie_hide"};
			type = 701;
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor = 20;
					hipointName = "HitAbdomen";
					passThrough = 0.2;
				};
				class Body
				{
					hipointName = "HitBody";
					passThrough = 0.2;
				};
				class Chest
				{
					armor = 20;
					hipointName = "HitChest";
					passThrough = 0.2;
				};
				class Diaphragm
				{
					armor = 20;
					hipointName = "HitDiaphragm";
					passThrough = 0.2;
				};
			};
		};
	};
	class arifle_AK107;
	class Exile_Weapon_AK107: arifle_AK107
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "AK-107 5.45 mm";
		descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";
		magazines[] = {"Exile_Magazine_30Rnd_545x39_AK","Exile_Magazine_30Rnd_545x39_AK_Green","Exile_Magazine_30Rnd_545x39_AK_Red","Exile_Magazine_30Rnd_545x39_AK_White","Exile_Magazine_30Rnd_545x39_AK_Yellow"};
	};
	class arifle_AK107_GL;
	class Exile_Weapon_AK107_GL: arifle_AK107_GL
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "AK-107 GL 5.45 mm";
		descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";
		magazines[] = {"Exile_Magazine_30Rnd_545x39_AK","Exile_Magazine_30Rnd_545x39_AK_Green","Exile_Magazine_30Rnd_545x39_AK_Red","Exile_Magazine_30Rnd_545x39_AK_White","Exile_Magazine_30Rnd_545x39_AK_Yellow"};
	};
	class arifle_AK74;
	class Exile_Weapon_AK74: arifle_AK74
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "AK-74 5.45 mm";
		descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm<br />Caliber: 40 mm";
		magazines[] = {"Exile_Magazine_30Rnd_545x39_AK","Exile_Magazine_30Rnd_545x39_AK_Green","Exile_Magazine_30Rnd_545x39_AK_Red","Exile_Magazine_30Rnd_545x39_AK_White","Exile_Magazine_30Rnd_545x39_AK_Yellow"};
	};
	class arifle_AK74_GL;
	class Exile_Weapon_AK74_GL: arifle_AK74_GL
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "AK-74 3GL 5.45 mm";
		descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm<br />Grenade Laucher<br />Caliber: 40 mm";
		magazines[] = {"Exile_Magazine_30Rnd_545x39_AK","Exile_Magazine_30Rnd_545x39_AK_Green","Exile_Magazine_30Rnd_545x39_AK_Red","Exile_Magazine_30Rnd_545x39_AK_White","Exile_Magazine_30Rnd_545x39_AK_Yellow"};
	};
	class arifle_AK47;
	class Exile_Weapon_AK47: arifle_AK47
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "AK-47 7.62 mm";
		descriptionShort = "Assault Rifle<br />Caliber: 7.62x39 mm";
		magazines[] = {"Exile_Magazine_30Rnd_762x39_AK"};
	};
	class arifle_AKM;
	class Exile_Weapon_AKM: arifle_AKM
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "AKM 7.62 mm";
		descriptionShort = "Assault Rifle<br />Caliber: 7.62x39 mm<br />Grenade Laucher<br />Caliber: 40 mm";
		magazines[] = {"Exile_Magazine_30Rnd_762x39_AK"};
	};
	class arifle_AKS;
	class Exile_Weapon_AKS: arifle_AKS
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "AKS 7.62 mm";
		descriptionShort = "Assault Rifle<br />Caliber: 7.62x39 mm";
		magazines[] = {"Exile_Magazine_30Rnd_762x39_AK"};
	};
	class arifle_AKS_Gold;
	class Exile_Weapon_AKS_Gold: arifle_AKS_Gold
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "AKS 7.62 mm (Gold)";
		descriptionShort = "Assault Rifle<br />Caliber: 7.62x39 mm";
		magazines[] = {"Exile_Magazine_30Rnd_762x39_AK"};
	};
	class exile_arifle_M16A4;
	class Exile_Weapon_M16A4: exile_arifle_M16A4
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "M16A4 5.56 mm";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
	};
	class exile_arifle_M16A2;
	class Exile_Weapon_M16A2: exile_arifle_M16A2
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "M16A2 5.56 mm";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
	};
	class exile_arifle_M4;
	class Exile_Weapon_M4: exile_arifle_M4
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "M4 5.56 mm";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
	};
	class srifle_DMR;
	class Exile_Weapon_DMR: srifle_DMR
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "DMR 7.62 mm";
		descriptionShort = "Sniper Rifle<br />Caliber: 7.62x51 mm NATO";
		magazines[] = {"Exile_Magazine_20Rnd_762x51_DMR","Exile_Magazine_20Rnd_762x51_DMR_Yellow","Exile_Magazine_20Rnd_762x51_DMR_Red","Exile_Magazine_20Rnd_762x51_DMR_Green"};
	};
	class ksvk;
	class Exile_Weapon_ksvk: ksvk
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "KSVK";
		descriptionShort = "KSVK or Degtyarev sniper rifle is a 12.7mm anti-materiel sniper rifle developed in Russia for the purpose of counter sniping and penetrating thick walls, as well as light armored vehicles.<br />Caliber: 127x108";
		magazines[] = {"Exile_Magazine_5Rnd_127x108_APDS_KSVK","Exile_Magazine_5Rnd_127x108_KSVK","Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag","Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag"};
	};
	class exile_weapons_m107;
	class Exile_Weapon_m107: exile_weapons_m107
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "M107";
		descriptionShort = "M107, is a recoil-operated, semi-automatic sniper rifle.<br />Caliber: 127x99";
		magazines[] = {"Exile_Magazine_10Rnd_127x99_m107","Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag"};
	};
	class srifle_LeeEnfield;
	class Exile_Weapon_LeeEnfield: srifle_LeeEnfield
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Lee-Enfield MkI .303";
		descriptionShort = "Marksman Rifle<br />Caliber: .303 British";
		magazines[] = {"Exile_Magazine_10Rnd_303"};
	};
	class srifle_CZ550_base;
	class Exile_Weapon_CZ550: srifle_CZ550_base
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "CZ550 .22LR";
		descriptionShort = "Marksman Rifle<br />Caliber: .22LR";
		magazines[] = {"Exile_Magazine_5Rnd_22LR"};
	};
	class srifle_SVD;
	class Exile_Weapon_SVD: srifle_SVD
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "SVD 762x54";
		descriptionShort = "Marksman Rifle<br />Caliber: 762x54";
		magazines[] = {"Exile_Magazine_10Rnd_762x54"};
	};
	class srifle_SVD_des;
	class Exile_Weapon_SVDCamo: srifle_SVD_des
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "SVD (Camo) 762x54";
		descriptionShort = "Marksman Rifle<br />Caliber: 762x54";
		picture = "\exile_psycho_weapons\ico\w_svd_camo_ca.paa";
		magazines[] = {"Exile_Magazine_10Rnd_762x54"};
	};
	class srifle_VSSVintorez;
	class Exile_Weapon_VSSVintorez: srifle_VSSVintorez
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "VSS Vintorez 9x39";
		descriptionShort = "Marksman Rifle<br />Caliber: 9x39";
		magazines[] = {"Exile_Magazine_10Rnd_9x39","Exile_Magazine_20Rnd_9x39"};
	};
	class arifle_RPK74;
	class Exile_Weapon_RPK: arifle_RPK74
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "RPK 5.45 mm";
		descriptionShort = "Light Machine Gun<br />Caliber: 5.45x39 mm";
		magazines[] = {"Exile_Magazine_45Rnd_545x39_RPK_Green","Exile_Magazine_75Rnd_545x39_RPK_Green"};
	};
	class PKP;
	class Exile_Weapon_PK: PKP
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "PK 7.62 mm";
		descriptionShort = "Light Machine Gun<br />Caliber: 7.62x54 mm";
		magazines[] = {"Exile_Magazine_100Rnd_762x54_PK_Green"};
	};
	class Pecheneg;
	class Exile_Weapon_PKP: Pecheneg
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "PKP 7.62 mm";
		descriptionShort = "Light Machine Gun<br />Caliber: 7.62x54 mm";
		magazines[] = {"Exile_Magazine_100Rnd_762x54_PK_Green"};
	};
	class Colt1911;
	class Exile_Weapon_Colt1911: Colt1911
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Colt 1911 .45 ACP";
		descriptionShort = "Handgun<br />Caliber: .45 ACP";
		magazines[] = {"Exile_Magazine_7Rnd_45ACP"};
	};
	class Makarov;
	class Exile_Weapon_Makarov: Makarov
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Makarov 9mm";
		descriptionShort = "Handgun<br />Caliber: 9x18 mm";
		picture = "\exile_psycho_weapons\ico\w_makarov_ca.paa";
		magazines[] = {"Exile_Magazine_8Rnd_9x18"};
	};
	class TaurusTracker455;
	class Exile_Weapon_Taurus: TaurusTracker455
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Taurus";
		descriptionShort = "Revolver<br />Caliber: 45 ACP";
		magazines[] = {"Exile_Magazine_6Rnd_45ACP"};
	};
	class TaurusTracker455_gold;
	class Exile_Weapon_TaurusGold: TaurusTracker455_gold
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Taurus (Gold)";
		descriptionShort = "Revolver<br />Caliber: 45 ACP";
		magazines[] = {"Exile_Magazine_6Rnd_45ACP"};
	};
	class exile_rifle_SA61;
	class Exile_Weapon_SA61: exile_rifle_SA61
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "SA61";
		descriptionShort = "Semi Auto pistol<br />Caliber: 7.65x17 mm";
		magazines[] = {"Exile_Magazine_10Rnd_765x17_SA61","Exile_Magazine_20Rnd_765x17_SA61"};
	};
	class M1014;
	class Exile_Weapon_M1014: M1014
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "M1014 12 Gauge";
		descriptionShort = "Shotgun<br />Caliber: 12 Gauge";
		magazines[] = {"Exile_Magazine_8Rnd_74Slug","Exile_Magazine_8Rnd_74Pellets"};
	};
};
class CfgWorlds
{
	class CAWorld;
	class Altis: CAWorld
	{
		cutscenes[] = {"ExileIntro"};
		class AmbientA3
		{
			class Radius40_60
			{
				class Species
				{
					delete CatShark_F;
					delete Mackerel_F;
					delete Mullet_F;
					delete Ornate_random_F;
					delete Salema_F;
					delete Snake_random_F;
					delete Tuna_F;
					delete Turtle_F;
				};
			};
			class Radius440_500
			{
				class Species
				{
					delete Rabbit_F;
				};
			};
		};
	};
	class Stratis: CAWorld
	{
		cutscenes[] = {"ExileIntro"};
	};
	class VR: CAWorld
	{
		cutscenes[] = {"ExileIntro"};
	};
	initWorld = "VR";
	demoWorld = "VR";
	groupNameFormat = "Inmate %ExileAlphabet-%ExileNumbers";
	class ExileAlphabet
	{
		class A
		{
			name = "A";
		};
		class B
		{
			name = "B";
		};
		class C
		{
			name = "C";
		};
		class D
		{
			name = "D";
		};
		class E
		{
			name = "E";
		};
		class F
		{
			name = "F";
		};
		class G
		{
			name = "G";
		};
		class H
		{
			name = "H";
		};
		class I
		{
			name = "I";
		};
		class J
		{
			name = "J";
		};
		class K
		{
			name = "K";
		};
		class L
		{
			name = "L";
		};
		class M
		{
			name = "M";
		};
		class N
		{
			name = "N";
		};
		class O
		{
			name = "O";
		};
		class P
		{
			name = "P";
		};
		class Q
		{
			name = "Q";
		};
		class R
		{
			name = "R";
		};
		class S
		{
			name = "S";
		};
		class T
		{
			name = "T";
		};
		class U
		{
			name = "U";
		};
		class V
		{
			name = "V";
		};
		class W
		{
			name = "W";
		};
		class X
		{
			name = "X";
		};
		class Y
		{
			name = "Y";
		};
		class Z
		{
			name = "Z";
		};
	};
	class ExileNumbers
	{
		class Number1
		{
			name = "1";
		};
		class Number2
		{
			name = "2";
		};
		class Number3
		{
			name = "3";
		};
		class Number4
		{
			name = "4";
		};
		class Number5
		{
			name = "5";
		};
		class Number6
		{
			name = "6";
		};
		class Number7
		{
			name = "7";
		};
		class Number8
		{
			name = "8";
		};
		class Number9
		{
			name = "9";
		};
	};
};
class CfgXM8
{
	class apps
	{
		controlID = 4040;
		title = "XM8";
	};
	class players
	{
		controlID = 4110;
		title = "8G Network";
	};
	class clan
	{
		controlID = 4060;
		title = "Family";
	};
	class hostParty
	{
		controlID = 4080;
		title = "Host Party";
	};
	class party
	{
		controlID = 4100;
		title = "Party";
	};
	class server
	{
		controlID = 4090;
		title = "Server Rules";
	};
	class territory
	{
		controlID = 4130;
		title = "Territory";
	};
	class mobileXm8
	{
		controlID = 4200;
		title = "Mobile XM8";
	};
	class extraApps
	{
		controlID = 5000;
		title = "XM8";
	};
};
class Attributes;
class RscStandardDisplay;
class RscProgress;
class RscStructuredText;
class RscPicture;
class RscButton;
class RscShortcutButton;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscText;
class RscVignette;
class RscDisplayGetReady;
class RscActiveText;
class RscListBox;
class RscListNBox;
class RscCombo;
class RscXListBox;
class RscHTML;
class RscPictureKeepAspect;
class RscActivePicture;
class RscMapControl;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscFrame;
class RscTitle;
class CA_Title;
class RscDebugConsole;
class RscTrafficLight;
class RscFeedback;
class RscMessageBox;
class RscControlsGroup;
class RscTextCheckbox;
class RscDisplayInventory_DLCTemplate;
class RscEdit;
class RscCheckBox;
class RscIGProgress;
class RscHitZones;
class RscIGUIText;
class RscIGUIValue;
class RscOpticsValue;
class RscOpticsText;
class Scrollbar;
class RscIGUIShortcutButton;
class RscActivePictureKeepAspect;
class RscTree;
class RscXSliderH;
class RscObject;
class ctrlMenu;
class ctrlStaticPicture;
class RscButtonMenuSteam;
class RscButtonTextOnly;
class RscVehicleToggles
{
	y = -1;
};
class RscPictureButton: RscActivePicture
{
	color[] = {1,1,1,0.7};
	tooltip = "";
	text = "";
	action = "";
	style = 2096;
};
class RscPictureMenuButton: RscButtonMenu
{
	style = 2;
};
class RscExileQuickStats: RscStructuredText
{
	size = "1 * pixelH";
};
class RscExileItemListBox: RscListBox
{
	sizeEx = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	sizeEx2 = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	rowHeight = "2 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	canDrag = 0;
	itemSpacing = 0.001;
	period = 1.2;
	shadow = 0;
	maxHistoryDelay = 1;
	fade = 0;
	deletable = 0;
	type = 5;
	style = 16;
	colorBackground[] = {0,0,0,0.3};
	colorDisabled[] = {1,1,1,0.25};
	colorPicture[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	colorPictureSelected[] = {1,1,1,1};
	colorScrollbar[] = {1,0,0,0};
	colorSelect2[] = {0,0,0,1};
	colorSelect2Right[] = {0,0,0,1};
	colorSelectBackground2[] = {1,1,1,0.5};
	colorSelectBackground[] = {0.95,0.95,0.95,1};
	colorSelectRight[] = {0,0,0,1};
	colorShadow[] = {0,0,0,0.5};
	colorText[] = {1,1,1,1};
	colorTextRight[] = {1,1,1,1};
	disabledCtrlColor[] = {1,1,1,0.5};
	itemBackground[] = {1,1,1,0.1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	tooltipColorText[] = {1,1,1,1};
};
class RscExilePrimaryButton: RscButton
{
	w = "300 * pixelW";
	h = "60 * pixelH";
	colorBackground[] = {"199/255","38/255","81/255",1};
	colorText[] = {1,1,1,1};
	shadow = 0;
	font = "RobotoMedium";
	sizeEx = "30 * pixelH";
	colorFocused[] = {"199/255","38/255","81/255",0.8};
	colorBackgroundActive[] = {"199/255","38/255","81/255",0.8};
};
class RscDisplayClient: RscStandardDisplay
{
	delete scriptName;
	delete scriptPath;
	access = 3;
	onLoad = "with uiNameSpace do { [_this select 0, 'RscDisplayClient'] call ExileClient_gui_loadingScreen_load; };";
	onUnload = "with uiNameSpace do { (_this select 0) call ExileClient_gui_loadingScreen_unload; };";
	class controlsBackground
	{
		class Black: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Map: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Noise: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_Vignette: RscVignette
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Line: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ExileBlackBackground: RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,1};
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};
		class ExileBackgroundPicture: RscPicture
		{
			idc = 66000;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneW * 4/3";
			text = "exile_assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class Controls
	{
		class Disclaimer: RscControlsGroupNoScrollbars
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapAuthor: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapBackBottom: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapBackTop: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapName: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapDescription: RscStructuredText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ProgressMap: RscProgress
		{
			x = "safeZoneX";
			y = "safeZoneY";
			w = "safeZoneW";
			h = "5 * pixelH";
			colorBar[] = {"199/255","38/255","81/255",1};
		};
		class ProgressMission: ProgressMap
		{
			x = "safeZoneX";
			y = "safeZoneY";
			w = "safeZoneW";
			h = "5 * pixelH";
			colorBar[] = {"199/255","38/255","81/255",1};
		};
		class ExileSpinnerPicture: RscPicture
		{
			idc = 66001;
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 64) * pixelH";
			w = "64 * pixelW";
			h = "64 * pixelH";
			text = "exile_assets\texture\loading\spinner_ca.paa";
			type = 0;
			centerU = 0.5;
			centerV = 0.5;
			angle = 90;
			show = 0;
		};
		class ExileSpinnerTitle: RscStructuredText
		{
			idc = 66002;
			text = "<t>Still loading...</t>";
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
			w = "safeZoneW - (60 + 64 + 15) * pixelW";
			h = "64 * pixelH";
			size = "44 * pixelH";
			sizeEx = "44 * pixelH";
			colorText[] = {1,1,1,1};
			shadow = 0;
			class Attributes
			{
				font = "RobotoMedium";
				color = "#ffffff";
				colorLink = "#ffffff";
				align = "left";
				shadow = 0;
			};
		};
		class ExileLogo: RscControlsGroupNoScrollbars
		{
			idc = -1;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + 60 * pixelH";
			w = "380 * pixelW";
			h = "60 * pixelH";
			class controls
			{
				class ExileModBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModIcon: RscPictureKeepAspect
				{
					idc = 66011;
					text = "exile_assets\texture\mod\icon.paa";
					x = 0;
					y = 0;
					w = "60 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModName: RscText
				{
					idc = 66012;
					text = "Exile Mod";
					font = "RobotoMedium";
					x = "(60 + 10) * pixelW";
					y = "1 * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "(30 + 15) * pixelH";
					sizeEx = "30 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
				};
				class ExileModUrl: RscText
				{
					idc = -1;
					text = "www.exilemod.com";
					font = "RobotoCondensedLight";
					x = "(60 + 10) * pixelW";
					y = "(1 + 30) * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMap: RscControlsGroupNoScrollbars
		{
			idc = 66003;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMapBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMapPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapPicture: RscPicture
				{
					idc = 66004;
					text = "a3\ui_f\data\Logos\arma3_white_ca.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapName: RscText
				{
					idc = 66005;
					text = "RscDisplayLoadMission";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMapAuthor: RscText
				{
					idc = 66006;
					text = "by some special person";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMission: RscControlsGroupNoScrollbars
		{
			idc = 66007;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMissionBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMissionPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionPicture: RscPictureKeepAspect
				{
					idc = 66008;
					text = "exile_assets\texture\mod\logo.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionName: RscText
				{
					idc = 66009;
					text = "RscDisplayLoadMission";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMissionAuthor: RscText
				{
					idc = 66010;
					text = "by Community";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
	};
};
class RscDisplayLoadMission: RscStandardDisplay
{
	movingEnable = 0;
	enableSimulation = 0;
	enableDisplay = 1;
	access = 3;
	onLoad = "with uiNameSpace do { [_this select 0, 'RscDisplayLoadMission'] call ExileClient_gui_loadingScreen_load; };";
	onUnload = "with uiNameSpace do { (_this select 0) call ExileClient_gui_loadingScreen_unload; };";
	delete scriptName;
	delete scriptPath;
	class controlsBackground
	{
		class Black: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_Vignette: RscVignette
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Line: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Map: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Noise: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ExileBlackBackground: RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,1};
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};
		class ExileBackgroundPicture: RscPicture
		{
			idc = 66000;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneW * 4/3";
			text = "exile_assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class controls
	{
		class Disclaimer: RscControlsGroupNoScrollbars
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class LoadingStart: RscControlsGroup
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapAuthor: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapBackBottom: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapBackTop: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapDescription: RscStructuredText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapName: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Mission: RscControlsGroupNoScrollbars
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ProgressMap: RscProgress
		{
			x = "safeZoneX";
			y = "safeZoneY";
			w = "safeZoneW";
			h = "5 * pixelH";
			colorBar[] = {"199/255","38/255","81/255",1};
		};
		class ProgressMission: ProgressMap
		{
			x = "safeZoneX";
			y = "safeZoneY";
			w = "safeZoneW";
			h = "5 * pixelH";
			colorBar[] = {"199/255","38/255","81/255",1};
		};
		class Logo3DEN: ctrlStaticPicture
		{
			x = "safeZoneX + safeZoneW - 60 * pixelW - 0.3";
			y = "safeZoneY + safeZoneH - 60 * pixelW - 0.2";
		};
		class ExileSpinnerPicture: RscPicture
		{
			idc = 66001;
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 64) * pixelH";
			w = "64 * pixelW";
			h = "64 * pixelH";
			text = "exile_assets\texture\loading\spinner_ca.paa";
			type = 0;
			centerU = 0.5;
			centerV = 0.5;
			angle = 90;
			show = 0;
		};
		class ExileSpinnerTitle: RscStructuredText
		{
			idc = 66002;
			text = "<t>Still loading...</t>";
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
			w = "safeZoneW - (60 + 64 + 15) * pixelW";
			h = "64 * pixelH";
			size = "44 * pixelH";
			sizeEx = "44 * pixelH";
			colorText[] = {1,1,1,1};
			shadow = 0;
			class Attributes
			{
				font = "RobotoMedium";
				color = "#ffffff";
				colorLink = "#ffffff";
				align = "left";
				shadow = 0;
			};
		};
		class ExileLogo: RscControlsGroupNoScrollbars
		{
			idc = -1;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + 60 * pixelH";
			w = "380 * pixelW";
			h = "60 * pixelH";
			class controls
			{
				class ExileModBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModIcon: RscPictureKeepAspect
				{
					idc = 66011;
					text = "exile_assets\texture\mod\icon.paa";
					x = 0;
					y = 0;
					w = "60 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModName: RscText
				{
					idc = 66012;
					text = "Exile Mod";
					font = "RobotoMedium";
					x = "(60 + 10) * pixelW";
					y = "1 * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "(30 + 15) * pixelH";
					sizeEx = "30 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
				};
				class ExileModUrl: RscText
				{
					idc = -1;
					text = "www.exilemod.com";
					font = "RobotoCondensedLight";
					x = "(60 + 10) * pixelW";
					y = "(1 + 30) * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMap: RscControlsGroupNoScrollbars
		{
			idc = 66003;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMapBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMapPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapPicture: RscPicture
				{
					idc = 66004;
					text = "a3\ui_f\data\Logos\arma3_white_ca.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapName: RscText
				{
					idc = 66005;
					text = "RscDisplayLoadMission";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMapAuthor: RscText
				{
					idc = 66006;
					text = "by some special person";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMission: RscControlsGroupNoScrollbars
		{
			idc = 66007;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMissionBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMissionPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionPicture: RscPictureKeepAspect
				{
					idc = 66008;
					text = "exile_assets\texture\mod\logo.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionName: RscText
				{
					idc = 66009;
					text = "RscDisplayLoadMission";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMissionAuthor: RscText
				{
					idc = 66010;
					text = "by Community";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
	};
};
class RscDisplayMultiplayerSetup: RscStandardDisplay
{
	access = 3;
	onLoad = "with uiNameSpace do { [_this select 0, 'RscDisplayLoadMission'] call ExileClient_gui_loadingScreen_load; };";
	onUnload = "with uiNameSpace do { (_this select 0) call ExileClient_gui_loadingScreen_unload; };";
	delete scriptName;
	delete scriptPath;
	class controlsbackground
	{
		class TileGroup: RscControlsGroupNoScrollbars
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Vignette: RscVignette
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class RscTitleBackground: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MainBackground: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MissionSettingsBackground: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class NumOfPlayersBackground: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class SideBackground: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class PlayersPoolHeaderBackground: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class RolesBackground: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ChatBackground: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class PlayersPoolBackground: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ExileBlackBackground: RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,1};
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};
		class ExileBackgroundPicture: RscPicture
		{
			idc = 66000;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneW * 4/3";
			text = "exile_assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class controls
	{
		class SortPing: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class SortPlayers: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Y_GamerCard: RscActiveText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class PartyGUI: RscActiveText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MuteAll: RscCheckBox
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class AssignRole: RscActiveText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ButtonPlayers: RscButtonTextOnly
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ButtonPing: ButtonPlayers
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Title: RscTitle
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class PlayersName: RscTitle
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_TextVotingTimeLeft: RscTitle
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ValueMission: RscTitle
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_TextDescription: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_ValueDescription: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class TextIsland: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ValueIsland: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class TextSide: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_B_West: RscActiveText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_B_Logic: CA_B_West
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_B_East: CA_B_West
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_B_Guerrila: CA_B_West
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_B_Civilian: CA_B_West
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_B_Virtual: CA_B_West
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_ValueRoles: RscListBox
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_ValuePool: RscListNBox
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_B_EnableAll: RscButtonMenu
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_B_Lock: RscButtonMenu
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_B_Params: RscButtonMenu
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ButtonSteamWorkshop: RscButtonMenuSteam
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_B_Kick: RscButtonMenu
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_ButtonContinue: RscButtonMenuOK
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_ButtonCancel: RscButtonMenuCancel
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class TextMission: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class TextRole: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class TextPlayersPool: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class TextListedPlayers: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ValueListedPlayers: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ExileSpinnerPicture: RscPicture
		{
			idc = 66001;
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 64) * pixelH";
			w = "64 * pixelW";
			h = "64 * pixelH";
			text = "exile_assets\texture\loading\spinner_ca.paa";
			type = 0;
			centerU = 0.5;
			centerV = 0.5;
			angle = 90;
			show = 0;
		};
		class ExileSpinnerTitle: RscStructuredText
		{
			idc = 66002;
			text = "<t>Still loading...</t>";
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
			w = "safeZoneW - (60 + 64 + 15) * pixelW";
			h = "64 * pixelH";
			size = "44 * pixelH";
			sizeEx = "44 * pixelH";
			colorText[] = {1,1,1,1};
			shadow = 0;
			class Attributes
			{
				font = "RobotoMedium";
				color = "#ffffff";
				colorLink = "#ffffff";
				align = "left";
				shadow = 0;
			};
		};
		class ExileLogo: RscControlsGroupNoScrollbars
		{
			idc = -1;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + 60 * pixelH";
			w = "380 * pixelW";
			h = "60 * pixelH";
			class controls
			{
				class ExileModBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModIcon: RscPictureKeepAspect
				{
					idc = 66011;
					text = "exile_assets\texture\mod\icon.paa";
					x = 0;
					y = 0;
					w = "60 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModName: RscText
				{
					idc = 66012;
					text = "Exile Mod";
					font = "RobotoMedium";
					x = "(60 + 10) * pixelW";
					y = "1 * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "(30 + 15) * pixelH";
					sizeEx = "30 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
				};
				class ExileModUrl: RscText
				{
					idc = -1;
					text = "www.exilemod.com";
					font = "RobotoCondensedLight";
					x = "(60 + 10) * pixelW";
					y = "(1 + 30) * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMap: RscControlsGroupNoScrollbars
		{
			idc = 66003;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMapBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMapPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapPicture: RscPicture
				{
					idc = 66004;
					text = "a3\ui_f\data\Logos\arma3_white_ca.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapName: RscText
				{
					idc = 66005;
					text = "RscDisplayLoadMission";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMapAuthor: RscText
				{
					idc = 66006;
					text = "by some special person";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMission: RscControlsGroupNoScrollbars
		{
			idc = 66007;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMissionBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMissionPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionPicture: RscPictureKeepAspect
				{
					idc = 66008;
					text = "exile_assets\texture\mod\logo.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionName: RscText
				{
					idc = 66009;
					text = "RscDisplayLoadMission";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMissionAuthor: RscText
				{
					idc = 66010;
					text = "by Community";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
	};
};
class RscDisplayNotFreeze: RscStandardDisplay
{
	enableSimulation = 1;
	access = 3;
	onLoad = "with uiNameSpace do { [_this select 0, 'RscDisplayNotFreeze'] call ExileClient_gui_loadingScreen_load; };";
	onUnload = "with uiNameSpace do { (_this select 0) call ExileClient_gui_loadingScreen_unload; };";
	delete scriptName;
	delete scriptPath;
	class controlsBackground
	{
		class Black: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_Vignette: RscVignette
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Line: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Map: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Noise: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ExileBlackBackground: RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,1};
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};
		class ExileBackgroundPicture: RscPicture
		{
			idc = 66000;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneW * 4/3";
			text = "exile_assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class controls
	{
		class Disclaimer: RscControlsGroupNoScrollbars
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class LoadingStart: RscControlsGroup
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapAuthor: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapBackBottom: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapBackTop: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapDescription: RscStructuredText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapName: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Mission: RscControlsGroupNoScrollbars
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ProgressMap: RscProgress
		{
			x = "safeZoneX";
			y = "safeZoneY";
			w = "safeZoneW";
			h = "5 * pixelH";
			colorBar[] = {"199/255","38/255","81/255",1};
		};
		class ProgressMission: ProgressMap
		{
			x = "safeZoneX";
			y = "safeZoneY";
			w = "safeZoneW";
			h = "5 * pixelH";
			colorBar[] = {"199/255","38/255","81/255",1};
		};
		class Logo3DEN: ctrlStaticPicture
		{
			x = "safeZoneX + safeZoneW - 60 * pixelW - 0.3";
			y = "safeZoneY + safeZoneH - 60 * pixelW - 0.2";
		};
		class ExileSpinnerPicture: RscPicture
		{
			idc = 66001;
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 64) * pixelH";
			w = "64 * pixelW";
			h = "64 * pixelH";
			text = "exile_assets\texture\loading\spinner_ca.paa";
			type = 0;
			centerU = 0.5;
			centerV = 0.5;
			angle = 90;
			show = 0;
		};
		class ExileSpinnerTitle: RscStructuredText
		{
			idc = 66002;
			text = "<t>Almost there...</t>";
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
			w = "safeZoneW - (60 + 64 + 15) * pixelW";
			h = "64 * pixelH";
			size = "44 * pixelH";
			sizeEx = "44 * pixelH";
			colorText[] = {1,1,1,1};
			shadow = 0;
			class Attributes
			{
				font = "RobotoMedium";
				color = "#ffffff";
				colorLink = "#ffffff";
				align = "left";
				shadow = 0;
			};
		};
		class ExileLogo: RscControlsGroupNoScrollbars
		{
			idc = -1;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + 60 * pixelH";
			w = "380 * pixelW";
			h = "60 * pixelH";
			class controls
			{
				class ExileModBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModIcon: RscPictureKeepAspect
				{
					idc = 66011;
					text = "exile_assets\texture\mod\icon.paa";
					x = 0;
					y = 0;
					w = "60 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModName: RscText
				{
					idc = 66012;
					text = "Exile Mod";
					font = "RobotoMedium";
					x = "(60 + 10) * pixelW";
					y = "1 * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "(30 + 15) * pixelH";
					sizeEx = "30 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
				};
				class ExileModUrl: RscText
				{
					idc = -1;
					text = "www.exilemod.com";
					font = "RobotoCondensedLight";
					x = "(60 + 10) * pixelW";
					y = "(1 + 30) * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMap: RscControlsGroupNoScrollbars
		{
			idc = 66003;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMapBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMapPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapPicture: RscPicture
				{
					idc = 66004;
					text = "a3\ui_f\data\Logos\arma3_white_ca.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapName: RscText
				{
					idc = 66005;
					text = "RscDisplayNotFreeze";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMapAuthor: RscText
				{
					idc = 66006;
					text = "by some special person";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMission: RscControlsGroupNoScrollbars
		{
			idc = 66007;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMissionBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMissionPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionPicture: RscPictureKeepAspect
				{
					idc = 66008;
					text = "exile_assets\texture\mod\logo.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionName: RscText
				{
					idc = 66009;
					text = "RscDisplayNotFreeze";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMissionAuthor: RscText
				{
					idc = 66010;
					text = "by Community";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
	};
};
class RscExileLoadingScreen: RscDisplayLoadMission
{
	idd = 24001;
	access = 3;
	onLoad = "uiNamespace setVariable ['RscExileLoadingScreen', _this select 0]; with uiNameSpace do { [_this select 0, 'RscExileLoadingScreen'] call ExileClient_gui_loadingScreen_load; };";
	onUnload = "with uiNameSpace do { (_this select 0) call ExileClient_gui_loadingScreen_unload; }; uiNamespace setVariable ['RscExileLoadingScreen', displayNull]";
};
class RscExileSelectSpawnLocationDialog
{
	idd = 24002;
	access = 3;
	duration = -1;
	onLoad = "uiNamespace setVariable ['RscExileSelectSpawnLocationDialog', _this select 0]; with uiNameSpace do { [_this select 0, 'RscExileSelectSpawnLocationDialog'] call ExileClient_gui_loadingScreen_load; };";
	onUnload = "with uiNameSpace do { (_this select 0) call ExileClient_gui_loadingScreen_unload; }; uiNamespace setVariable ['RscExileSelectSpawnLocationDialog', displayNull]";
	class controlsBackground
	{
		class ExileBlackBackground: RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,1};
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};
		class ExileBackgroundPicture: RscPicture
		{
			idc = 66000;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneW * 4/3";
			text = "exile_assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class controls
	{
		class ExileLogo: RscControlsGroupNoScrollbars
		{
			idc = -1;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + 60 * pixelH";
			w = "380 * pixelW";
			h = "60 * pixelH";
			class controls
			{
				class ExileModBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModIcon: RscPictureKeepAspect
				{
					idc = 66011;
					text = "exile_assets\texture\mod\icon.paa";
					x = 0;
					y = 0;
					w = "60 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModName: RscText
				{
					idc = 66012;
					text = "Exile Mod";
					font = "RobotoMedium";
					x = "(60 + 10) * pixelW";
					y = "1 * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "(30 + 15) * pixelH";
					sizeEx = "30 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
				};
				class ExileModUrl: RscText
				{
					idc = -1;
					text = "www.exilemod.com";
					font = "RobotoCondensedLight";
					x = "(60 + 10) * pixelW";
					y = "(1 + 30) * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMap: RscControlsGroupNoScrollbars
		{
			idc = 66003;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMapBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMapPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapPicture: RscPicture
				{
					idc = 66004;
					text = "a3\ui_f\data\Logos\arma3_white_ca.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapName: RscText
				{
					idc = 66005;
					text = "RscMPSetupMessage";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMapAuthor: RscText
				{
					idc = 66006;
					text = "by some special person";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMission: RscControlsGroupNoScrollbars
		{
			idc = 66007;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMissionBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMissionPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionPicture: RscPictureKeepAspect
				{
					idc = 66008;
					text = "exile_assets\texture\mod\logo.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionName: RscText
				{
					idc = 66009;
					text = "RscMPSetupMessage";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMissionAuthor: RscText
				{
					idc = 66010;
					text = "by Community";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class DialogBackground: RscText
		{
			idc = -1;
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + 60 * pixelH";
			w = "safeZoneW - (60 + 60 + 380 + 60) * pixelW";
			h = "safeZoneH - (60 + 60) * pixelH";
			colorBackground[] = {"32/255","36/255","42/255",1};
		};
		class DialogTitleBackground: RscText
		{
			idc = -1;
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + 60 * pixelH";
			w = "safeZoneW - (60 + 60 + 380 + 60) * pixelW";
			h = "60 * pixelH";
			colorBackground[] = {0,0,0,1};
		};
		class DialogTitle: RscText
		{
			idc = -1;
			x = "safeZoneX + (60 + 15) * pixelW";
			y = "safeZoneY + 60 * pixelH";
			w = "safeZoneW - (60 + 60 + 380 + 60 + 60 + 10) * pixelW";
			h = "60 * pixelH";
			text = "Spawn Location";
			sizeEx = "30 * pixelH";
			font = "RobotoCondensed";
		};
		class ListBoxLocations: RscListBox
		{
			idc = 24002;
			text = "Locations";
			font = "RobotoCondensed";
			x = "safeZoneX + (60 + 15) * pixelW";
			y = "safeZoneY + (60 + 60 + 15) * pixelH";
			w = "300 * pixelW";
			h = "safeZoneH - (60 + 60 + 60 + 15 + 15 + 60 + 15) * pixelH";
			colorBackground[] = {0,0,0,0.25};
			onLBSelChanged = "_this call ExileClient_gui_selectSpawnLocation_event_onListBoxSelectionChanged;";
		};
		class Map: RscMapControl
		{
			idc = 24001;
			text = "";
			x = "safeZoneX + (60 + 15 + 300 + 15) * pixelW";
			y = "safeZoneY + (60 + 60 + 15) * pixelH";
			w = "safeZoneW - (60 + 15 + 300 + 15 + 15 + 60 + 380 + 60) * pixelW";
			h = "safeZoneH - (60 + 60 + 15 + 60 + 15) * pixelH";
			moveOnEdges = 0;
			maxSatelliteAlpha = 0.75;
			alphaFadeStartScale = 1.15;
			alphaFadeEndScale = 1.29;
		};
		class ButtonSpawn: RscExilePrimaryButton
		{
			idc = 24003;
			text = "OKAY";
			x = "safeZoneX + (60 + 15) * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 15 + 60) * pixelH";
			w = "300 * pixelW";
			h = "60 * pixelH";
			onButtonClick = "[] call ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick";
		};
	};
};
class RscMPSetupMessage
{
	access = 3;
	onLoad = "with uiNameSpace do { [_this select 0, 'RscMPSetupMessage'] call ExileClient_gui_loadingScreen_load; };";
	onUnload = "with uiNameSpace do { (_this select 0) call ExileClient_gui_loadingScreen_unload; };";
	class controlsBackground
	{
		class FullscreenBackground: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Vignette: RscVignette
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ExileBlackBackground: RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,1};
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};
		class ExileBackgroundPicture: RscPicture
		{
			idc = 66000;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneW * 4/3";
			text = "exile_assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class Controls
	{
		class BackgroundFull: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class BackgroundProgress: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class DownloadText: RscStructuredText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ExileProgress: RscProgress
		{
			idc = 102;
			x = "safeZoneX";
			y = "safeZoneY";
			w = "safeZoneW";
			h = "5 * pixelH";
			colorBar[] = {"199/255","38/255","81/255",1};
		};
		class ExileSpinnerTitle: RscStructuredText
		{
			idc = 101;
			text = "<t>Downloading...</t>";
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
			w = "safeZoneW - (60 + 64 + 15) * pixelW";
			h = "64 * pixelH";
			size = "44 * pixelH";
			sizeEx = "44 * pixelH";
			colorText[] = {1,1,1,1};
			shadow = 0;
			class Attributes
			{
				font = "RobotoMedium";
				color = "#ffffff";
				colorLink = "#ffffff";
				align = "left";
				shadow = 0;
			};
		};
		class ExileLogo: RscControlsGroupNoScrollbars
		{
			idc = -1;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + 60 * pixelH";
			w = "380 * pixelW";
			h = "60 * pixelH";
			class controls
			{
				class ExileModBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModIcon: RscPictureKeepAspect
				{
					idc = 66011;
					text = "exile_assets\texture\mod\icon.paa";
					x = 0;
					y = 0;
					w = "60 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModName: RscText
				{
					idc = 66012;
					text = "Exile Mod";
					font = "RobotoMedium";
					x = "(60 + 10) * pixelW";
					y = "1 * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "(30 + 15) * pixelH";
					sizeEx = "30 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
				};
				class ExileModUrl: RscText
				{
					idc = -1;
					text = "www.exilemod.com";
					font = "RobotoCondensedLight";
					x = "(60 + 10) * pixelW";
					y = "(1 + 30) * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMap: RscControlsGroupNoScrollbars
		{
			idc = 66003;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMapBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMapPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapPicture: RscPicture
				{
					idc = 66004;
					text = "a3\ui_f\data\Logos\arma3_white_ca.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapName: RscText
				{
					idc = 66005;
					text = "RscMPSetupMessage";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMapAuthor: RscText
				{
					idc = 66006;
					text = "by some special person";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMission: RscControlsGroupNoScrollbars
		{
			idc = 66007;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMissionBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMissionPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionPicture: RscPictureKeepAspect
				{
					idc = 66008;
					text = "exile_assets\texture\mod\logo.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionName: RscText
				{
					idc = 66009;
					text = "RscMPSetupMessage";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMissionAuthor: RscText
				{
					idc = 66010;
					text = "by Community";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
	};
};
class RscChatListDefault
{
	shadow = 1;
	shadowPlayer = 0;
	shadowColor[] = {0,0,0,0.5};
	x = "safeZoneX + 60 * pixelW";
	y = "(safeZoneY + safeZoneH) - 140 * pixelH - 40 * pixelH";
	w = "320 * pixelW";
	h = "400 * pixelH";
	font = "PuristaMedium";
	size = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows = "((5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))+ 0.3*(safezoneH -     (   ((safezoneW / safezoneH) min 1.2) / 1.2))) /   (   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	colorBackground[] = {0,0,0,0.3};
	colorGlobalChannel[] = {"0.606*1.4","0.606*1.4","0.606*1.4",1};
	colorGlobalChannelPlayerBackground[] = {"0.606*1.4","0.606*1.4","0.606*1.4",0.5};
	colorGlobalChannelPlayerText[] = {0,0,0,1};
	colorSideChannel[] = {"0.196*1.4","0.592*1.4","0.706*1.4",1};
	colorSideChannelPlayerBackground[] = {"0.196*1.4","0.592*1.4","0.706*1.4",0.5};
	colorSideChannelPlayerText[] = {0,0,0,1};
	colorCommandChannel[] = {"0.8275*1.4","0.8196*1.4","0.1961*1.4",1};
	colorCommandChannelPlayerBackground[] = {"0.8275*1.4","0.8196*1.4","0.1961*1.4",0.5};
	colorCommandChannelPlayerText[] = {0,0,0,1};
	colorGroupChannel[] = {0.709,0.972,0.384,1};
	colorGroupChannelPlayerBackground[] = {0.709,0.972,0.384,0.5};
	colorGroupChannelPlayerText[] = {0,0,0,1};
	colorVehicleChannel[] = {"0.863*1.4","0.584*1.4","0.0*1.4",1};
	colorVehicleChannelPlayerBackground[] = {"0.863*1.4","0.584*1.4","0.0*1.4",0.5};
	colorVehicleChannelPlayerText[] = {0,0,0,1};
	colorDirectChannel[] = {1,1,1,1};
	colorDirectChannelPlayerBackground[] = {1,1,1,0.5};
	colorDirectChannelPlayerText[] = {0,0,0,1};
	colorPlayerChannel[] = {0.8,0.7,1,1};
	colorPlayerChannelPlayerBackground[] = {0.8,0.7,1,0.5};
	colorPlayerChannelPlayerText[] = {0,0,0,1};
	colorMessage[] = {1,1,1,1};
	colorMessageProtocol[] = {0.65,0.65,0.65,1};
};
class RscChatListMission: RscChatListDefault
{
	colorBackground[] = {0,0,0,0.3};
	x = "safeZoneX + 60 * pixelW";
	y = "(profilenamespace getvariable [""IGUI_GRID_CHAT_Y"",  (safezoneY + safezoneH - 10.5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	w = "(profilenamespace getvariable [""IGUI_GRID_CHAT_W"",  (20 *    (   ((safezoneW / safezoneH) min 1.2) / 40))])";
	h = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows = "(profilenamespace getvariable [""IGUI_GRID_CHAT_H"",  (5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) /   (   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
};
class RscChatListBriefing: RscChatListDefault
{
	x = "1.2 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (SafezoneX)";
	y = "14.8 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (safezoneY)";
	w = "(18.5 *      (   ((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW -     ((safezoneW / safezoneH) min 1.2))";
	h = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows = "(SafezoneH - (17.1 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) /   (   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
};
class RscChatListMap: RscChatListDefault
{
	x = "safeZoneX + 60 * pixelW";
	y = "(profilenamespace getvariable [""IGUI_GRID_CHAT_Y"",  (safezoneY + safezoneH - 10.5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	w = "(profilenamespace getvariable [""IGUI_GRID_CHAT_W"",  (20 *    (   ((safezoneW / safezoneH) min 1.2) / 40))])";
	h = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows = "(profilenamespace getvariable [""IGUI_GRID_CHAT_H"",  (5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) /   (   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
};
class RscDisplayChannel
{
	idd = 63;
	class controls
	{
		delete Channel;
		class CA_Channel: RscText
		{
			idc = 101;
			style = 0;
			x = "safeZoneX + 60 * pixelW + 10 * pixelW";
			y = "(safeZoneY + safeZoneH) - 50 * pixelH";
			w = "155 * pixelW - 10 * pixelW";
			h = "30 * pixelH";
			colorBackground[] = {0,0,0,0};
			sizeEx = "18 * pixelH";
		};
		class Background: RscText
		{
			x = "safeZoneX + 60 * pixelW";
			y = "(safeZoneY + safeZoneH) - 50 * pixelH";
			w = "155 * pixelW";
			h = "30 * pixelH";
			colorBackground[] = {"19/255","22/255","27/255",0.8};
		};
		class Picture: RscPicture
		{
			idc = 102;
			x = -10.01;
			y = 0.72;
			w = 0.03;
			h = 0.05;
		};
		class MuteChat: RscActiveText
		{
			x = -1;
			y = -1;
			w = 0;
			h = 0;
		};
		class MuteVON: RscActiveText
		{
			x = -1;
			y = -1;
			w = 0;
			h = 0;
		};
	};
};
class RscDisplayChat
{
	class controls
	{
		delete Line;
		delete Background;
		class CA_Background: RscText
		{
			x = "safeZoneX + 215 * pixelW";
			y = "(safeZoneY + safeZoneH) - 50 * pixelH";
			w = "400 * pixelW";
			h = "30 * pixelH";
			colorBackground[] = {"19/255","22/255","27/255",0.5};
			colorText[] = {0,0,0,0};
		};
		class CA_Line: RscEdit
		{
			idc = 101;
			x = "safeZoneX + 215 * pixelW + 10 * pixelW";
			y = "(safeZoneY + safeZoneH) - 50 * pixelH";
			w = "400 * pixelW - 20 * pixelW";
			h = "30 * pixelH";
			sizeEx = "25 * pixelH";
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			autocomplete = "general";
			style = "0x00 + 0x200";
		};
	};
};
class RscDisplayClientGetReady: RscDisplayGetReady
{
	onLoad = "missionNamespace setVariable ['ExileClientServerIsInitializing', true]; ctrlActivate ((_this select 0) displayCtrl 1); (_this select 0) closeDisplay 1";
};
class RscDisplayDebriefing: RscStandardDisplay
{
	onLoad = "(_this select 0) closeDisplay 0";
};
class RscDisplayInventory
{
	scriptName = "RscDisplayInventory";
	scriptPath = "IGUI";
	onLoad = "[""onLoad"",_this,""RscDisplayInventory"",'IGUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn ExileClient_gui_inventory_event_onLoad";
	onUnload = "[""onUnload"",_this,""RscDisplayInventory"",'IGUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
	idd = 602;
	enableSimulation = 1;
	class Colors
	{
		dragValidBgr[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",0.5};
		dragInvalidBgr[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])",0.5};
		dragValidBar[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])","(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])",0.5};
		dragInvalidBar[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])","(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])","(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])",0.5};
		progressBar[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",1};
		progressBarBgr[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",0.75};
		highlight[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",0.5};
	};
	class controlsBackground{};
	class controls
	{
		delete Background;
		delete Title;
		delete ButtonOK;
		delete ButtonCancel;
		delete BackgroundSlotPrimary;
		delete BackgroundSlotHeadgear;
		delete BackgroundSlotGoggles;
		delete BackgroundSlotHMD;
		delete BackgroundSlotBinoculars;
		delete BackgroundSlotPrimaryMuzzle;
		delete BackgroundSlotPrimaryUnderBarrel;
		delete BackgroundSlotPrimaryFlashlight;
		delete BackgroundSlotPrimaryOptics;
		delete BackgroundSlotPrimaryMagazineGL;
		delete BackgroundSlotPrimaryMagazine;
		delete BackgroundSlotSecondary;
		delete BackgroundSlotSecondaryMuzzle;
		delete BackgroundSlotSecondaryUnderBarrel;
		delete BackgroundSlotSecondaryFlashlight;
		delete BackgroundSlotSecondaryOptics;
		delete BackgroundSlotSecondaryMagazine;
		delete BackgroundSlotHandgunFlashlight;
		delete BackgroundSlotHandgunOptics;
		delete BackgroundSlotHandgunMagazine;
		delete BackgroundSlotHandgun;
		delete BackgroundSlotMap;
		delete BackgroundSlotGPS;
		delete BackgroundSlotHandgunMuzzle;
		delete BackgroundSlotHandgunUnderBarrel;
		delete BackgroundSlotRadio;
		delete BackgroundSlotCompass;
		delete BackgroundSlotWatch;
		class GroundTab: RscActiveText
		{
			colorBackgroundSelected[] = {1,1,1,1};
			colorFocused[] = {1,1,1,0};
			soundDoubleClick[] = {"",0.1,1};
			color[] = {1,1,1,1};
			idc = 6321;
			x = "7 * (0.03) + (-0.25)";
			y = "8 * (0.04) + (-0.25)";
			w = "6 * (0.03)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,1};
		};
		class RankBackground: RscText
		{
			idc = 1014;
			x = -1;
			y = -1;
			w = "0.6 * (0.03)";
			h = "0.6 * (0.04)";
			colorBackground[] = {1,1,1,0.2};
		};
		class RankPicture: RscPicture
		{
			idc = 1203;
			text = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
			x = -1;
			y = -1;
			w = "0.6 * (0.03)";
			h = "0.6 * (0.04)";
		};
		class UniformTab: GroundTab
		{
			idc = 6332;
			x = -1;
			y = -1;
			w = "4 * (0.03)";
			h = "4 * (0.04)";
			colorBackground[] = {1,1,0,1};
		};
		class VestTab: UniformTab
		{
			idc = 6382;
			x = -1;
			y = -1;
			w = "4 * (0.03)";
			h = "4 * (0.04)";
			colorBackground[] = {1,1,0,1};
		};
		class BackpackTab: UniformTab
		{
			idc = 6192;
			x = -1;
			y = -1;
			w = "4 * (0.03)";
			h = "4 * (0.04)";
			colorBackground[] = {1,1,0,1};
		};
		class CA_ContainerBackground: RscText
		{
			idc = 1001;
			x = "6.5 * (0.03) + (-0.25)";
			y = "7.5 * (0.04) + (-0.25)";
			w = "13 * (0.03)";
			h = "23 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class CA_PlayerBackground: RscText
		{
			idc = 1002;
			x = "20 * (0.03) + (-0.25)";
			y = "7.5 * (0.04) + (-0.25)";
			w = "23.5 * (0.03)";
			h = "23 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class TitleBackground: RscText
		{
			idc = 1020;
			x = "20 * (0.03) + (-0.25)";
			y = "6.4 * (0.04) + (-0.25)";
			w = "23.5 * (0.03)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class PlayersName: RscText
		{
			idc = 111;
			text = "Player name:";
			x = "20 * (0.03) + (-0.25)";
			y = "6.4 * (0.04) + (-0.25)";
			w = "11.5 * (0.03)";
			h = "1 * (0.04)";
		};
		class ExileContainerLoadBackground: RscText
		{
			idc = -1;
			text = "";
			x = "7 * (0.03) + (-0.25)";
			y = "29.5 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "0.5 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class ExilePlayerLoadBackground: RscText
		{
			idc = -1;
			text = "";
			x = "20.5 * (0.03) + (-0.25)";
			y = "29.5 * (0.04) + (-0.25)";
			w = "22.5 * (0.03)";
			h = "0.5 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class ExileEquipmentLoadBackground: RscText
		{
			idc = -1;
			text = "";
			x = "20.5 * (0.03) + (-0.25)";
			y = "12 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "0.5 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class ButtonBack: RscActiveText
		{
			color[] = {1,1,1,0.7};
			idc = 2;
			style = 48;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			x = "42.4 * (0.03) + (-0.25)";
			y = "6.4 * (0.04) + (-0.25)";
			w = "1 * (0.03)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.7};
			colorActive[] = {1,1,1,1};
			tooltip = "Close";
		};
		class ExternalContainerBackground: RscPicture
		{
			idc = 1240;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = "7 * (0.03) + (-0.25)";
			y = "11 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "16 * (0.04)";
			colorText[] = {1,1,1,0.1};
		};
		class PlayerContainerBackground: ExternalContainerBackground
		{
			idc = 1241;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = "20.5 * (0.03) + (-0.25)";
			y = "13 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "14 * (0.04)";
			colorText[] = {1,1,1,0.1};
		};
		class SoldierTab: GroundTab
		{
			idc = 6401;
			x = "13 * (0.03) + (-0.25)";
			y = "8 * (0.04) + (-0.25)";
			w = "6 * (0.03)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,1};
		};
		class GroundContainer: RscListBox
		{
			itemBackground[] = {1,1,1,0.1};
			idc = 632;
			sizeEx2 = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			rowHeight = "2 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			canDrag = 1;
			itemSpacing = 0.001;
			x = "7 * (0.03) + (-0.25)";
			y = "11 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "16 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class SoldierContainer: GroundContainer
		{
			idc = 640;
			x = "7 * (0.03) + (-0.25)";
			y = "11 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "16 * (0.04)";
			colorBackground[] = {0,0,0,0};
			sizeEx = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class GroundFilter: RscCombo
		{
			idc = 6554;
			x = "7 * (0.03) + (-0.25)";
			y = "9.5 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "1 * (0.04)";
		};
		class GroundLoad: RscProgress
		{
			colorBar[] = {0.9,0.9,0.9,0.9};
			colorExtBar[] = {1,1,1,1};
			idc = 6307;
			texture = "";
			textureExt = "";
			x = "7 * (0.03) + (-0.25)";
			y = "29.5 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "0.5 * (0.04)";
			colorFrame[] = {0,0,0,0};
		};
		class SlotPrimary: GroundTab
		{
			color[] = {1,1,1,1};
			colorBackgroundSelected[] = {1,1,1,0.1};
			colorFocused[] = {0,0,0,0};
			idc = 610;
			style = "0x30 + 0x800";
			canDrag = 1;
			onMouseButtonDblClick = "_this call ExileClient_gui_inventory_event_onSlotDoubleClick";
			x = "33 * (0.03) + (-0.25)";
			y = "13 * (0.04) + (-0.25)";
			w = "10 * (0.03)";
			h = "3.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotPrimaryMuzzle: SlotPrimary
		{
			idc = 620;
			x = "34 * (0.03) + (-0.25)";
			y = "16.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotPrimaryUnderBarrel: SlotPrimary
		{
			idc = 641;
			x = "35.5 * (0.03) + (-0.25)";
			y = "16.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotPrimaryFlashlight: SlotPrimary
		{
			idc = 622;
			x = "37 * (0.03) + (-0.25)";
			y = "16.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotPrimaryOptics: SlotPrimary
		{
			idc = 621;
			x = "38.5 * (0.03) + (-0.25)";
			y = "16.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotPrimaryMagazineGL: SlotPrimary
		{
			idc = 644;
			x = "40 * (0.03) + (-0.25)";
			y = "16.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotPrimaryMagazine: SlotPrimary
		{
			idc = 623;
			x = "41.5 * (0.03) + (-0.25)";
			y = "16.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotSecondary: SlotPrimary
		{
			idc = 611;
			x = "33 * (0.03) + (-0.25)";
			y = "18.5 * (0.04) + (-0.25)";
			w = "10 * (0.03)";
			h = "3.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotSecondaryMuzzle: SlotPrimary
		{
			idc = 624;
			x = "35.5 * (0.03) + (-0.25)";
			y = "22 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotSecondaryUnderBarrel: SlotPrimary
		{
			idc = 642;
			x = "37 * (0.03) + (-0.25)";
			y = "22 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotSecondaryFlashlight: SlotPrimary
		{
			idc = 626;
			x = "38.5 * (0.03) + (-0.25)";
			y = "22 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotSecondaryOptics: SlotPrimary
		{
			idc = 625;
			x = "40 * (0.03) + (-0.25)";
			y = "22 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotSecondaryMagazine: SlotPrimary
		{
			idc = 627;
			x = "41.5 * (0.03) + (-0.25)";
			y = "22 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotHandgun: SlotPrimary
		{
			idc = 612;
			x = "33 * (0.03) + (-0.25)";
			y = "24 * (0.04) + (-0.25)";
			w = "10 * (0.03)";
			h = "3.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotHandgunMuzzle: SlotPrimary
		{
			idc = 628;
			x = "35.5 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotHandgunUnderBarrel: SlotPrimary
		{
			idc = 643;
			x = "37 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotHandgunFlashlight: SlotPrimary
		{
			idc = 630;
			x = "38.5 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotHandgunOptics: SlotPrimary
		{
			idc = 629;
			x = "40 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotHandgunMagazine: SlotPrimary
		{
			idc = 631;
			x = "41.5 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotHeadgear: SlotPrimary
		{
			idc = 6240;
			x = "33 * (0.03) + (-0.25)";
			y = "8 * (0.04) + (-0.25)";
			w = "2.5 * (0.03)";
			h = "2.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotGoggles: SlotPrimary
		{
			idc = 6216;
			x = "35.5 * (0.03) + (-0.25)";
			y = "8 * (0.04) + (-0.25)";
			w = "2.5 * (0.03)";
			h = "2.5 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
		};
		class SlotHMD: SlotPrimary
		{
			idc = 6217;
			x = "38 * (0.03) + (-0.25)";
			y = "8 * (0.04) + (-0.25)";
			w = "2.5 * (0.03)";
			h = "2.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotBinoculars: SlotPrimary
		{
			idc = 6238;
			x = "40.5 * (0.03) + (-0.25)";
			y = "8 * (0.04) + (-0.25)";
			w = "2.5 * (0.03)";
			h = "2.5 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotMap: SlotPrimary
		{
			idc = 6211;
			x = "35 * (0.03) + (-0.25)";
			y = "10.5 * (0.04) + (-0.25)";
			w = "2 * (0.03)";
			h = "2 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotGPS: SlotPrimary
		{
			idc = 6215;
			x = "37 * (0.03) + (-0.25)";
			y = "10.5 * (0.04) + (-0.25)";
			w = "2 * (0.03)";
			h = "2 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotCompass: SlotPrimary
		{
			idc = 6212;
			x = "39 * (0.03) + (-0.25)";
			y = "10.5 * (0.04) + (-0.25)";
			w = "2 * (0.03)";
			h = "2 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotRadio: SlotPrimary
		{
			idc = 6214;
			x = "41 * (0.03) + (-0.25)";
			y = "10.5 * (0.04) + (-0.25)";
			w = "2 * (0.03)";
			h = "2 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class SlotWatch: SlotPrimary
		{
			idc = 6213;
			x = "33 * (0.03) + (-0.25)";
			y = "10.5 * (0.04) + (-0.25)";
			w = "2 * (0.03)";
			h = "2 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {0,0,0,0};
		};
		class UniformSlot: SlotPrimary
		{
			idc = 6331;
			x = "20.5 * (0.03) + (-0.25)";
			y = "8 * (0.04) + (-0.25)";
			w = "4 * (0.03)";
			h = "4 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {1,1,1,0.1};
		};
		class UniformLoad: GroundLoad
		{
			idc = 6304;
			x = "20.5 * (0.03) + (-0.25)";
			y = "12 * (0.04) + (-0.25)";
			w = "4 * (0.03)";
			h = "0.5 * (0.04)";
			colorFrame[] = {0,0,0,0};
		};
		class UniformContainer: GroundContainer
		{
			idc = 633;
			onLBDblClick = "_this call ExileClient_gui_inventory_event_onItemDoubleClick";
			x = "20.5 * (0.03) + (-0.25)";
			y = "13 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "14 * (0.04)";
			colorBackground[] = {0,0,0,0};
			sizeEx = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class VestSlot: SlotPrimary
		{
			idc = 6381;
			x = "24.5 * (0.03) + (-0.25)";
			y = "8 * (0.04) + (-0.25)";
			w = "4 * (0.03)";
			h = "4 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {1,1,1,0.1};
		};
		class VestLoad: GroundLoad
		{
			idc = 6305;
			x = "24.5 * (0.03) + (-0.25)";
			y = "12 * (0.04) + (-0.25)";
			w = "4 * (0.03)";
			h = "0.5 * (0.04)";
			colorFrame[] = {0,0,0,0};
		};
		class VestContainer: UniformContainer
		{
			idc = 638;
			onLBDblClick = "_this call ExileClient_gui_inventory_event_onItemDoubleClick";
			x = "20.5 * (0.03) + (-0.25)";
			y = "13 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "14 * (0.04)";
			colorBackground[] = {0,0,0,0};
			sizeEx = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackpackSlot: SlotPrimary
		{
			idc = 6191;
			x = "28.5 * (0.03) + (-0.25)";
			y = "8 * (0.04) + (-0.25)";
			w = "4 * (0.03)";
			h = "4 * (0.04)";
			colorText[] = {0,0,0,0.5};
			colorBackground[] = {1,1,1,0.1};
		};
		class BackpackLoad: GroundLoad
		{
			idc = 6306;
			x = "28.5 * (0.03) + (-0.25)";
			y = "12 * (0.04) + (-0.25)";
			w = "4 * (0.03)";
			h = "0.5 * (0.04)";
			colorFrame[] = {0,0,0,0};
		};
		class BackpackContainer: UniformContainer
		{
			idc = 619;
			onLBDblClick = "_this call ExileClient_gui_inventory_event_onItemDoubleClick";
			x = "20.5 * (0.03) + (-0.25)";
			y = "13 * (0.04) + (-0.25)";
			w = "12 * (0.03)";
			h = "14 * (0.04)";
			colorBackground[] = {0,0,0,0};
			sizeEx = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TotalLoad: GroundLoad
		{
			idc = 6308;
			x = "20.5 * (0.03) + (-0.25)";
			y = "29.5 * (0.04) + (-0.25)";
			w = "22.5 * (0.03)";
			h = "0.5 * (0.04)";
			colorFrame[] = {0,0,0,0};
		};
		class ContainerMarker: GroundTab
		{
			idc = 6325;
			x = "-5.5 * (0.03) + (-0.25)";
			y = "32.5 * (0.04) + (-0.25)";
			w = "1 * (0.03)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,1};
		};
		class GroundMarker: ContainerMarker
		{
			idc = 6385;
			x = "-3.5 * (0.03) + (-0.25)";
			y = "32.5 * (0.04) + (-0.25)";
			w = "1 * (0.03)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,1};
		};
		class SoldierMarker: ContainerMarker
		{
			idc = 6405;
			x = "-2 * (0.03) + (-0.25)";
			y = "32.5 * (0.04) + (-0.25)";
			w = "1 * (0.03)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,1};
		};
		class ExileSecondaryBackground: RscText
		{
			idc = 1055;
			x = "33 * (0.03) + (-0.25)";
			y = "18.5 * (0.04) + (-0.25)";
			w = "10 * (0.03)";
			h = "5 * (0.04)";
			colorBackground[] = {1,1,1,0.05};
		};
		class ExileHandgunBackground: RscText
		{
			idc = 1056;
			x = "33 * (0.03) + (-0.25)";
			y = "24 * (0.04) + (-0.25)";
			w = "10 * (0.03)";
			h = "5 * (0.04)";
			colorBackground[] = {1,1,1,0.05};
		};
		class ExilePrimaryBackground: RscText
		{
			idc = 1057;
			x = "33 * (0.03) + (-0.25)";
			y = "13 * (0.04) + (-0.25)";
			w = "10 * (0.03)";
			h = "5 * (0.04)";
			colorBackground[] = {1,1,1,0.05};
		};
		class ExileItemsBackground: RscText
		{
			idc = 1058;
			x = "33 * (0.03) + (-0.25)";
			y = "8 * (0.04) + (-0.25)";
			w = "10 * (0.03)";
			h = "4.5 * (0.04)";
			colorBackground[] = {1,1,1,0.05};
		};
		class ExileButtonTakeAll: RscButtonMenu
		{
			idc = 20001;
			onMouseButtonDown = "call ExileClient_gui_inventory_takeAll";
			text = "TAKE ALL";
			x = "6.5 * (0.03) + (-0.25)";
			y = "31 * (0.04) + (-0.25)";
			w = "8.5 * (0.03)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			style = 2;
			class Attributes
			{
				align = "center";
			};
		};
		class ExileButtonCombineMags: RscButtonMenu
		{
			idc = 20002;
			onMouseButtonDown = "call ExileClient_gui_inventory_combineMagazines";
			text = "COMBINE MAGS";
			x = "(6.5 + 8.5 + 0.5) * (0.03) + (-0.25)";
			y = "31 * (0.04) + (-0.25)";
			w = "8.5 * (0.03)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			style = 2;
			class Attributes
			{
				align = "center";
			};
		};
		class ExileButtonClose: RscButtonMenu
		{
			idc = -1;
			onMouseButtonDown = "closeDialog 0";
			text = "CLOSE";
			x = "35 * (0.03) + (-0.25)";
			y = "31 * (0.04) + (-0.25)";
			w = "8.5 * (0.03)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			style = 2;
			class Attributes
			{
				align = "center";
			};
		};
		class ExileContainerPopTabsBackground: RscText
		{
			idc = -1;
			x = "7 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "6.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorBackground[] = {1,1,1,0.1};
		};
		class ExileContainerPopTabs: RscStructuredText
		{
			idc = 25000;
			size = "24 * pixelH";
			sizeEx = "24 * pixelH";
			text = "<t size='1' font='RobotoCondensed' align='right'>999999 / 999999 <img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>";
			x = "7 * (0.03) + (-0.25)";
			y = "(27.5 + 0.25) * (0.04) + (-0.25)";
			w = "6.5 * (0.03)";
			h = "(1.5 - 0.25) * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class ExilePlayerPopTabsBackground: RscText
		{
			idc = -1;
			x = "26 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "6.5 * (0.03)";
			h = "1.5 * (0.04)";
			colorBackground[] = {1,1,1,0.1};
		};
		class ExilePlayerPopTabs: RscStructuredText
		{
			idc = 25001;
			size = "24 * pixelH";
			sizeEx = "24 * pixelH";
			text = "<t size='1' font='RobotoCondensed' align='right'>999999 <img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>";
			x = "26 * (0.03) + (-0.25)";
			y = "(27.5 + 0.25) * (0.04) + (-0.25)";
			w = "6.5 * (0.03)";
			h = "(1.5 - 0.25) * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class ExileTakePopTabsInput: RscEdit
		{
			idc = 25002;
			text = "";
			x = "14 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "3.5 * (0.03)";
			h = "1.5 * (0.04)";
			style = 2;
			onKeyUp = "_this call ExileClient_gui_inventory_event_onTakePopTabsInputKeyUp";
		};
		class ExileTakePopTabsButton: RscButton
		{
			idc = 25003;
			text = ">";
			x = "17.5 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			onMouseButtonClick = "_this call ExileClient_gui_inventory_event_onTakePopTabsButtonClick";
		};
		class ExilePutPopTabsButton: RscButton
		{
			idc = 25004;
			text = "<";
			x = "20.5 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "1.5 * (0.03)";
			h = "1.5 * (0.04)";
			onMouseButtonClick = "_this call ExileClient_gui_inventory_event_onPutPopTabsButtonClick";
		};
		class ExilePutPopTabsInput: RscEdit
		{
			idc = 25005;
			text = "";
			x = "22 * (0.03) + (-0.25)";
			y = "27.5 * (0.04) + (-0.25)";
			w = "3.5 * (0.03)";
			h = "1.5 * (0.04)";
			style = 2;
			onKeyUp = "_this call ExileClient_gui_inventory_event_onPutPopTabsInputKeyUp";
		};
		class ContainerCaptionBackground: RscText
		{
			idc = 1020;
			text = "Container";
			x = "6.5 * (0.03) + (-0.25)";
			y = "6.4 * (0.04) + (-0.25)";
			w = "13 * (0.03)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
	};
};
class RscDisplayMain
{
	class controlsBackground
	{
		delete TileGroup;
	};
};
class RscExileMapCreateMenu: RscControlsGroupNoScrollbars
{
	onLoad = "uiNamespace setVariable ['RscExileMapCreateMenu', _this select 0]";
	onUnload = "uiNamespace setVariable ['RscExileMapCreateMenu', controlNull]";
	x = 0;
	y = 0;
	w = "21.5 * (0.025)";
	h = "13.5 * (0.04)";
	class controls
	{
		class DialogBackground: RscText
		{
			idc = -1;
			x = "0 * (0.025) + (0)";
			y = "1.1 * (0.04) + (0)";
			w = "21.5 * (0.025)";
			h = "9.9 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCaption: RscText
		{
			idc = -1;
			text = "Add Family Marker";
			x = "0 * (0.025) + (0)";
			y = "0 * (0.04) + (0)";
			w = "21.5 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class NameLabel: RscText
		{
			idc = -1;
			text = "Name:";
			x = "0.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1.5 * (0.04)";
		};
		class NameInput: RscEdit
		{
			idc = 4000;
			x = "6.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "14.5 * (0.025)";
			h = "1.5 * (0.04)";
			autocomplete = "";
			font = "EtelkaMonospacePro";
			colorText[] = {0.95,0.95,0.95,1};
			style = 16;
			sizeEx = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ColorLabel: RscText
		{
			idc = -1;
			text = "Color:";
			x = "0.5 * (0.025) + (0)";
			y = "3.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class ColorDropDown: RscCombo
		{
			idc = 4002;
			x = "6.5 * (0.025) + (0)";
			y = "3.5 * (0.04) + (0)";
			w = "14.5 * (0.025)";
			h = "1 * (0.04)";
			onLBSelChanged = "_this call ExileClient_gui_clan_markerAddMenu_event_onColorLbSelectionChanged;";
		};
		class IconLabel: RscText
		{
			idc = -1;
			text = "Icon:";
			x = "0.5 * (0.025) + (0)";
			y = "5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class IconDropDown: RscCombo
		{
			idc = 4001;
			x = "6.5 * (0.025) + (0)";
			y = "5 * (0.04) + (0)";
			w = "14.5 * (0.025)";
			h = "1 * (0.04)";
			onLBSelChanged = "_this call ExileClient_gui_clan_markerAddMenu_event_onIconLbSelectionChanged;";
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc = -1;
			x = "14 * (0.025) + (0)";
			y = "9.5 * (0.04) + (0)";
			w = "7 * (0.025)";
			h = "1 * (0.04)";
			action = "call ExileClient_gui_clan_markerAddMenu_event_onUnload;";
		};
		class AddButton: RscButtonMenuOK
		{
			idc = -1;
			text = "ADD";
			x = "6.5 * (0.025) + (0)";
			y = "9.5 * (0.04) + (0)";
			w = "7 * (0.025)";
			h = "1 * (0.04)";
			action = "call ExileClient_gui_clan_markerAddMenu_event_onAddButtonClick;";
		};
		class IconSizeLabel: RscText
		{
			idc = -1;
			text = "Icon size:";
			x = "0.5 * (0.025) + (0)";
			y = "6.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class TextSizeLabel: RscText
		{
			idc = -1;
			text = "Text size:";
			x = "0.5 * (0.025) + (0)";
			y = "8 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class IconSizeSlider: RscXSliderH
		{
			idc = 4004;
			x = "6.5 * (0.025) + (0)";
			y = "6.5 * (0.04) + (0)";
			w = "14.5 * (0.025)";
			h = "1 * (0.04)";
			sliderPosition = 30;
			sliderRange[] = {20,50};
			onSliderPosChanged = "_this call ExileClient_gui_clan_markerAddMenu_event_onIconResize; false";
			color[] = {"63/255","212/255","252/255",1};
			colorActive[] = {"63/255","212/255","252/255",1};
		};
		class TextSizeSlider: RscXSliderH
		{
			idc = 4005;
			x = "6.5 * (0.025) + (0)";
			y = "8 * (0.04) + (0)";
			w = "14.5 * (0.025)";
			h = "1 * (0.04)";
			sliderPosition = 0.06;
			sliderRange[] = {0.02,0.2};
			onSliderPosChanged = "call ExileClient_gui_clan_markerAddMenu_event_onTextResize; false";
			color[] = {"63/255","212/255","252/255",1};
			colorActive[] = {"63/255","212/255","252/255",1};
		};
	};
};
class RscExileMapCreatePoly: RscControlsGroupNoScrollbars
{
	onLoad = "uiNamespace setVariable ['RscExileMapCreatePoly', _this select 0]";
	onUnload = "uiNamespace setVariable ['RscExileMapCreatePoly', controlNull]";
	x = "0 * (0.025) + (0)";
	y = "0 * (0.04) + (0)";
	w = "15 * (0.025)";
	h = "7.5 * (0.04)";
	class controls
	{
		class DialogCaption: RscText
		{
			idc = -1;
			text = "Add Family Polygon";
			x = "0 * (0.025) + (0)";
			y = "0 * (0.04) + (0)";
			w = "15 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class DialogBackground: RscText
		{
			idc = -1;
			x = "0 * (0.025) + (0)";
			y = "1.2 * (0.04) + (0)";
			w = "15 * (0.025)";
			h = "6 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class ColorLabel: RscText
		{
			idc = -1;
			text = "Color:";
			x = "0 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "3.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class ColorDropDown: RscCombo
		{
			idc = 4000;
			x = "3.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class LinkedLabel: RscText
		{
			idc = -1;
			text = "Linked:";
			x = "0 * (0.025) + (0)";
			y = "3 * (0.04) + (0)";
			w = "3.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class LinkedStatus: RscStructuredText
		{
			idc = 4001;
			x = "3.5 * (0.025) + (0)";
			y = "3 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class AddButton: RscButtonMenuOK
		{
			idc = 4002;
			text = "ADD";
			x = "4 * (0.025) + (0)";
			y = "6 * (0.04) + (0)";
			w = "5 * (0.025)";
			h = "1 * (0.04)";
			default = 0;
			action = "call ExileClient_gui_clan_polyAddMenu_event_onAddButtonClick;";
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc = -1;
			x = "9.5 * (0.025) + (0)";
			y = "6 * (0.04) + (0)";
			w = "5 * (0.025)";
			h = "1 * (0.04)";
			action = "call ExileClient_gui_clan_polyAddMenu_event_onUnload;";
		};
		class LinesStatus: RscProgress
		{
			idc = 4003;
			x = "3.5 * (0.025) + (0)";
			y = "4.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBar[] = {0,0.78,0.93,0.6};
		};
		class LinesLabel: RscText
		{
			idc = 4004;
			text = "Lines:";
			x = "0 * (0.025) + (0)";
			y = "4.5 * (0.04) + (0)";
			w = "3.5 * (0.025)";
			h = "1 * (0.04)";
		};
	};
};
class RscDisplayMainMap
{
	class controls
	{
		class ExileMarkerMenu: RscExileMapCreateMenu
		{
			show = 0;
		};
		class ExilePolyMenu: RscExileMapCreatePoly
		{
			show = 0;
		};
	};
	class controlsBackground
	{
		class CA_Map: RscMapControl
		{
			onDraw = "_this call ExileClient_gui_map_event_onDraw; _this call ExileClient_gui_clan_renderLines; _this call ExileClient_gui_clan_renderIcons; _this call ExileClient_gui_clan_renderPolys; call ExileClient_gui_toaster_thread; ";
			onMouseButtonUp = "_this call ExileClient_gui_map_event_onMouseButtonUp";
			onMouseButtonDown = "_this call ExileClient_gui_map_event_onMouseButtonDown";
		};
	};
};
class RscDisplayMPInterrupt: RscStandardDisplay
{
	onLoad = "[""onLoad"",_this,""RscDisplayMPInterrupt"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay'); [] spawn ExileClient_gui_escape_abort;";
};
class RscDisplayVoiceChat
{
	onLoad = "uiNamespace setVariable ['ExileIsUsingVON', true];";
	onUnload = "uiNamespace setVariable ['ExileIsUsingVON', false];";
	class controls
	{
		class Background: RscText
		{
			idc = -1;
			x = -1;
			y = -1;
			w = 0;
			h = 0;
		};
		class Picture: RscText
		{
			idc = 101;
			x = -1;
			y = -1;
			w = 0;
			h = 0;
		};
		class ExilePicture: RscPicture
		{
			idc = -1;
			x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
			y = "(safeZoneY + safeZoneH) - 185 * pixelH - 64 * pixelH";
			w = "64 * pixelW";
			h = "64 * pixelH";
			text = "\exile_assets\texture\hud\hud_icon_voice_ca.paa";
			colorText[] = {1,1,1,1};
			shadow = 0;
		};
	};
};
class RscExileBaguette: RscControlsGroupNoScrollbars
{
	idc = -1;
	x = "safezoneX + safezoneW * 0.5 - ((60 + 5 + 400) * 0.5) * pixelW";
	y = "safezoneY + 60 * pixelH";
	w = "(60 + 5 + 400) * pixelW";
	h = "60 * pixelH";
	class controls
	{
		class TextGroup: RscControlsGroupNoScrollbars
		{
			idc = 5001;
			x = "(60 + 5) * pixelW";
			y = 0;
			w = "400 * pixelW";
			h = "60 * pixelH";
			fade = 0;
			class controls
			{
				class TextBackground: RscText
				{
					idc = -1;
					x = 0;
					y = 0;
					w = "400 * pixelW";
					h = "60 * pixelH";
					colorBackground[] = {"19/255","22/255","27/255",0.8};
				};
				class Text: RscText
				{
					idc = 5002;
					x = "5 * pixelW";
					y = 0;
					w = "(400 - 5) * pixelW";
					h = "60 * pixelH";
					colorText[] = {1,1,1,1};
					font = "PuristaSemibold";
					sizeEx = "29 * pixelH";
					shadow = 0;
				};
			};
		};
		class IconGroup: RscControlsGroupNoScrollbars
		{
			idc = 5000;
			x = 0;
			y = 0;
			w = "60 * pixelW";
			h = "60 * pixelH";
			fade = 0;
			class controls
			{
				class IconBackground: RscText
				{
					idc = -1;
					x = 0;
					y = 0;
					w = "60 * pixelW";
					h = "60 * pixelH";
					colorBackground[] = {"19/255","22/255","27/255",0.8};
				};
				class Icon: RscPictureKeepAspect
				{
					idc = 5003;
					text = "exile_assets\texture\mod\icon.paa";
					x = 0;
					y = 0;
					w = "60 * pixelW";
					h = "60 * pixelH";
				};
			};
		};
	};
};
class RscExileCameraView
{
	idd = 20023;
	onLoad = "uiNamespace setVariable ['RscExileCameraView', _this select 0]; (_this call ExileClient_gui_baseCamera_event_onLoad) lbSetCurSel 0";
	onUnload = "uiNamespace setVariable ['RscExileCameraView', displayNull]; _this call ExileClient_gui_baseCamera_event_onUnLoad";
	hideControls[] = {"HideMiddle","HideRight","HideLeft","HideInfo"};
	class controlsBackground
	{
		class StyleHeader: RscText
		{
			x = "-0.00416666 * safezoneW + safezoneX";
			y = "-0.00599999 * safezoneH + safezoneY";
			w = "1.00833 * safezoneW";
			h = "0.1144 * safezoneH";
			colorBackground[] = {0.101961,0.101961,0.101961,1};
		};
		class StyleHeaderLogo: RscPicture
		{
			x = "-0.015625 * safezoneW + safezoneX";
			y = "0.016 * safezoneH + safezoneY";
			w = "0.200521 * safezoneW";
			h = "0.088 * safezoneH";
			colorBackground[] = {0.235294,0.270588,0.298039,1};
			text = "\exile_assets\texture\ui\cameraView\masheen_logo.paa";
		};
		class StyleHeaderUserInfo: RscText
		{
			x = "0.184896 * safezoneW + safezoneX";
			y = "0.016 * safezoneH + safezoneY";
			w = "0.120313 * safezoneW";
			h = "0.088 * safezoneH";
			colorBackground[] = {0.164706,0.188235,0.207843,1};
		};
		class StyleHeaderMiddle: RscText
		{
			x = "0.305208 * safezoneW + safezoneX";
			y = "0.016 * safezoneH + safezoneY";
			w = "0.389583 * safezoneW";
			h = "0.088 * safezoneH";
			colorBackground[] = {0.235294,0.270588,0.298039,1};
		};
		class StyleTimeDate: RscText
		{
			x = "0.694792 * safezoneW + safezoneX";
			y = "0.016 * safezoneH + safezoneY";
			w = "0.120313 * safezoneW";
			h = "0.088 * safezoneH";
			colorBackground[] = {0.164706,0.188235,0.207843,1};
		};
		class StyleWeather: RscText
		{
			x = "0.815104 * safezoneW + safezoneX";
			y = "0.016 * safezoneH + safezoneY";
			w = "0.0630208 * safezoneW";
			h = "0.088 * safezoneH";
			colorBackground[] = {0.235294,0.270588,0.298039,1};
		};
		class StyleWifi: RscText
		{
			x = "0.878125 * safezoneW + safezoneX";
			y = "0.016 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0293333 * safezoneH";
			colorBackground[] = {0.164706,0.188235,0.207843,1};
		};
		class StyleNV: RscText
		{
			x = "0.878125 * safezoneW + safezoneX";
			y = "0.0754 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0293333 * safezoneH";
			colorBackground[] = {0.164706,0.188235,0.207843,1};
		};
		class StyleHD: RscText
		{
			x = "0.878125 * safezoneW + safezoneX";
			y = "0.0446 * safezoneH + safezoneY";
			w = "0.0171875 * safezoneW";
			h = "0.0315333 * safezoneH";
			colorBackground[] = {0.203922,0.231373,0.25098,1};
		};
		class StyleUserInfoPicture: RscPictureKeepAspect
		{
			x = "0.196354 * safezoneW + safezoneX";
			y = "0.038 * safezoneH + safezoneY";
			w = "0.0286458 * safezoneW";
			h = "0.044 * safezoneH";
			text = "\exile_assets\texture\ui\cameraView\superUser.paa";
		};
		class StyleWlanPicture: RscPictureKeepAspect
		{
			x = "0.880417 * safezoneW + safezoneX";
			y = "0.0182 * safezoneH + safezoneY";
			w = "0.0126041 * safezoneW";
			h = "0.0242 * safezoneH";
			text = "\exile_assets\texture\ui\cameraView\wlan.paa";
		};
		class StyleNVPicture: RscPictureKeepAspect
		{
			x = "0.880417 * safezoneW + safezoneX";
			y = "0.0798 * safezoneH + safezoneY";
			w = "0.0126041 * safezoneW";
			h = "0.022 * safezoneH";
			text = "\exile_assets\texture\ui\cameraView\nv.paa";
		};
		class StyleHDDPicture: RscPictureKeepAspect
		{
			x = "0.880416 * safezoneW + safezoneX";
			y = "0.049 * safezoneH + safezoneY";
			w = "0.0126041 * safezoneW";
			h = "0.0242 * safezoneH";
			text = "\exile_assets\texture\ui\cameraView\hdd.paa";
		};
		class StyleFooter: RscText
		{
			x = "-0.00416666 * safezoneW + safezoneX";
			y = "0.9444 * safezoneH + safezoneY";
			w = "1.0049 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.101961,0.101961,0.101961,1};
		};
		class StyleFooterOver: RscText
		{
			x = "-0.000729111 * safezoneW + safezoneX";
			y = "0.951 * safezoneH + safezoneY";
			w = "1.00034 * safezoneW";
			h = "0.0528 * safezoneH";
			colorBackground[] = {0.235294,0.270588,0.298039,1};
		};
		class StyleFooterInfo: RscPictureKeepAspect
		{
			x = "0.00729166 * safezoneW + safezoneX";
			y = "0.962 * safezoneH + safezoneY";
			w = "0.435417 * safezoneW";
			h = "0.033 * safezoneH";
			text = "\exile_assets\texture\ui\cameraView\footer.paa";
		};
	};
	class controls
	{
		class HideMiddle: RscText
		{
			idc = 4001;
			x = "0.305208 * safezoneW + safezoneX";
			y = "0.1084 * safezoneH + safezoneY";
			w = "0.389583 * safezoneW";
			h = "0.836 * safezoneH";
			colorBackground[] = {0.235294,0.270588,0.298039,1};
		};
		class HideRight: RscText
		{
			idc = 4002;
			x = "0.694792 * safezoneW + safezoneX";
			y = "0.1084 * safezoneH + safezoneY";
			w = "0.309375 * safezoneW";
			h = "0.836 * safezoneH";
			colorBackground[] = {0.164706,0.188235,0.207843,1};
		};
		class HideLeft: RscText
		{
			idc = 4003;
			x = "-0.00416666 * safezoneW + safezoneX";
			y = "0.1084 * safezoneH + safezoneY";
			w = "0.309375 * safezoneW";
			h = "0.836 * safezoneH";
			colorBackground[] = {0.164706,0.188235,0.207843,1};
		};
		class HideInfo: RscStructuredText
		{
			idc = 4004;
			x = "0.3625 * safezoneW + safezoneX";
			y = "0.456 * safezoneH + safezoneY";
			w = "0.275 * safezoneW";
			h = "0.11 * safezoneH";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,0.8};
			onLoad = "_this call ExileClient_gui_baseCamera_event_info_onLoadInfo";
		};
		class MainCaptureArea: RscListBox
		{
			idc = 4009;
			access = 0;
			colorBackground[] = {0,0,0,0};
			x = "0 * safezoneW + safezoneX";
			y = "0 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "1 * safezoneH";
			onMouseMoving = "_this call ExileClient_gui_baseCamera_event_main_onMouseMoving";
			onMouseButtonDown = "_this call ExileClient_gui_baseCamera_event_main_onMouseButtonDown";
			onMouseButtonUp = "_this call ExileClient_gui_baseCamera_event_main_onMouseButtonUp";
			onMouseZChanged = "_this call ExileClient_gui_baseCamera_event_main_onMouseZChanged";
			onLoad = "      ['RscExileCameraView','MainCaptureArea']      call ExileClient_util_display_mouseControl_buildLimits;      ExileClientDisplayResetFocus = true      ";
			onUnLoad = "ExileBaseManagementLimits = []";
			class CaptureArea
			{
				x = "0 * safezoneW + safezoneX";
				y = "0.1084 * safezoneH + safezoneY";
				w = "1 * safezoneW";
				h = "0.836 * safezoneH";
			};
		};
		class StyleBigRedButton: RscButton
		{
			idc = 4000;
			style = 48;
			x = "0.895313 * safezoneW + safezoneX";
			y = "0.016 * safezoneH + safezoneY";
			w = "0.105417 * safezoneW";
			h = "0.088 * safezoneH";
			colorBackground[] = {0.560784,0,0.113725,1};
			text = "\exile_assets\texture\ui\cameraView\button_off.paa";
			action = "closeDialog 0;";
			onMouseMoving = "[_this,'RscExileCameraView','StyleBigRedButton'] call ExileClient_gui_handle_animButton_onMouseMoving";
			onButtonDown = "[_this,'RscExileCameraView','StyleBigRedButton'] call ExileClient_gui_handle_animButton_onButtonDown";
			onButtonUp = "[_this,'RscExileCameraView','StyleBigRedButton'] call ExileClient_gui_handle_animButton_onButtonUp";
			onLoad = "ExileGuiControlClick = false";
			class buttonPictures
			{
				none = "\exile_assets\texture\ui\cameraView\button_off.paa";
				hover = "\exile_assets\texture\ui\cameraView\button_hover.paa";
				click = "\exile_assets\texture\ui\cameraView\button_click.paa";
			};
		};
		class ComboMiddleCameraSelect: RscCombo
		{
			idc = 4005;
			style = 2;
			x = "0.328125 * safezoneW + safezoneX";
			y = "0.049 * safezoneH + safezoneY";
			w = "0.349479 * safezoneW";
			h = "0.022 * safezoneH";
			onLBSelChanged = "_this call ExileClient_gui_baseCamera_event_main_onCameraDropDownChanged";
			onMouseButtonClick = "_this call ExileClient_gui_baseCamera_event_onLoad";
		};
		class StyleTime: RscStructuredText
		{
			idc = 4006;
			x = "0.70625 * safezoneW + safezoneX";
			y = "0.038 * safezoneH + safezoneY";
			w = "0.0572917 * safezoneW";
			h = "0.044 * safezoneH";
			onLoad = "_this call ExileClient_gui_baseCamera_event_info_onLoadTime";
		};
		class StyleDate: RscStructuredText
		{
			idc = 4007;
			x = "0.763542 * safezoneW + safezoneX";
			y = "0.049 * safezoneH + safezoneY";
			w = "0.0458333 * safezoneW";
			h = "0.0242 * safezoneH";
			onLoad = "_this call ExileClient_gui_baseCamera_event_info_onLoadDate";
		};
		class StyleUserInfoText: RscStructuredText
		{
			idc = 4008;
			x = "0.227291 * safezoneW + safezoneX";
			y = "0.038 * safezoneH + safezoneY";
			w = "0.0630208 * safezoneW";
			h = "0.044 * safezoneH";
			onLoad = "_this call ExileClient_gui_baseCamera_event_info_onLoadPlayerInfo";
		};
		class StyleWeatherPicture: RscPictureKeepAspect
		{
			x = "0.820833 * safezoneW + safezoneX";
			y = "0.027 * safezoneH + safezoneY";
			w = "0.0515625 * safezoneW";
			h = "0.066 * safezoneH";
			onLoad = "_this call ExileClient_gui_baseCamera_event_info_onLoadWeather";
		};
	};
};
class RscExileCraftItemDialog
{
	idd = 24005;
	onLoad = "uiNamespace setVariable ['RscExileCraftItemDialog', _this select 0]";
	onUnload = "uiNamespace setVariable ['RscExileCraftItemDialog', displayNull]";
	class controlsBackground
	{
		class BackgroundLeft: RscText
		{
			idc = 100;
			x = "0 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "12 * (0.025)";
			h = "21 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class TopLeftCaption: RscText
		{
			idc = 101;
			text = "ITEM";
			x = "0 * (0.025) + (0)";
			y = "0.25 * (0.04) + (0)";
			w = "12 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class BackgroundBottom: RscText
		{
			idc = 102;
			x = "0 * (0.025) + (0)";
			y = "23 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class BackgroundRight: RscText
		{
			idc = 103;
			x = "12.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "27.5 * (0.025)";
			h = "21 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class TopRightCaption: RscText
		{
			idc = 104;
			text = "COMPONENTS";
			x = "12.5 * (0.025) + (0)";
			y = "0.25 * (0.04) + (0)";
			w = "27.5 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class ButtonCloseCross: RscActiveText
		{
			idc = 105;
			style = 2096;
			color[] = {1,1,1,0.7};
			action = "closeDialog 0;";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			x = "39 * (0.025) + (0)";
			y = "0.25 * (0.04) + (0)";
			w = "1 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.7};
			colorActive[] = {1,1,1,1};
			tooltip = "Close";
		};
	};
	class controls
	{
		class ItemPicture: RscPictureKeepAspect
		{
			idc = 5000;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = "0.5 * (0.025) + (0)";
			y = "2 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "9 * (0.04)";
		};
		class ButtonCraft: RscButton
		{
			idc = 5001;
			text = "CRAFT";
			x = "0.5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
			action = "[uiNamespace getVariable 'RscExileCraftItemRecipeClassName', (lbCurSel 5002) + 1] call ExileClient_object_item_craft; closeDialog 0;";
		};
		class DropdownQuantity: RscCombo
		{
			idc = 5002;
			x = "6.5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			x = "34 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class Description: RscStructuredText
		{
			idc = 5003;
			x = "13 * (0.025) + (0)";
			y = "2 * (0.04) + (0)";
			w = "26.5 * (0.025)";
			h = "20 * (0.04)";
		};
	};
};
class RscExileItemDetailsDialog
{
	idd = 24004;
	onLoad = "uiNamespace setVariable ['RscExileItemDetailsDialog', _this select 0]";
	onUnload = "uiNamespace setVariable ['RscExileItemDetailsDialog', displayNull]";
	class controlsBackground
	{
		class BackgroundLeft: RscText
		{
			idc = 1000;
			x = "0 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "12 * (0.025)";
			h = "21 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class BackgroundBottom: RscText
		{
			idc = 1005;
			x = "0 * (0.025) + (0)";
			y = "23 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class BackgroundRight: RscText
		{
			idc = 1006;
			x = "12.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "27.5 * (0.025)";
			h = "21 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class TopLeftCaption: RscText
		{
			idc = 1001;
			text = "ITEM";
			x = "0 * (0.025) + (0)";
			y = "0.25 * (0.04) + (0)";
			w = "12 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class TopRightCaption: RscText
		{
			idc = 1002;
			text = "";
			x = "12.5 * (0.025) + (0)";
			y = "0.25 * (0.04) + (0)";
			w = "27.5 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class ButtonCloseCross: RscActiveText
		{
			idc = 100;
			style = 2096;
			color[] = {1,1,1,0.7};
			action = "closeDialog 0;";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			x = "39 * (0.025) + (0)";
			y = "0.25 * (0.04) + (0)";
			w = "1 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.7};
			colorActive[] = {1,1,1,1};
			tooltip = "Close";
		};
	};
	class controls
	{
		class ItemPicture: RscPictureKeepAspect
		{
			idc = 5000;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = "0.5 * (0.025) + (0)";
			y = "2 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "9 * (0.04)";
		};
		class TabButtonDetails: RscButton
		{
			idc = 1603;
			text = "DETAILS";
			x = "13 * (0.025) + (0)";
			y = "0.25 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
			action = "'DETAILS' call ExileClient_gui_itemDetails_event_onTabButtonClicked;";
		};
		class TabButtonRecipes: RscButton
		{
			idc = 1604;
			text = "RECIPES";
			x = "19 * (0.025) + (0)";
			y = "0.25 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
			action = "'RECIPES' call ExileClient_gui_itemDetails_event_onTabButtonClicked;";
		};
		class ButtonConsume: RscButton
		{
			idc = 1300;
			action = "closeDialog 0; [ExileClientSelectedInventoryItem select 0] call ExileClient_object_item_consume;";
			text = "CONSUME";
			x = "0.5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class ButtonUse: RscButton
		{
			idc = 1301;
			action = "closeDialog 0; [ExileClientSelectedInventoryItem select 0] call ExileClient_object_item_use;";
			text = "USE";
			x = "12.5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class ButtonConstruct: RscButton
		{
			idc = 1303;
			action = "closeDialog 0; [ExileClientSelectedInventoryItem select 0] call ExileClient_object_item_construct;";
			text = "CONSTRUCT";
			x = "6.5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			x = "34 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class TabDetails: RscControlsGroup
		{
			idc = 5003;
			x = "13 * (0.025) + (0)";
			y = "2 * (0.04) + (0)";
			w = "26.5 * (0.025)";
			h = "20 * (0.04)";
			class controls
			{
				class TextItemName: RscStructuredText
				{
					idc = 5001;
					text = "Item Name";
					x = 0;
					y = 0;
					w = "26.5 * (0.025)";
					h = "1.5 * (0.04)";
				};
				class TextItemLevel: RscStructuredText
				{
					idc = 5002;
					text = "Item Level 1";
					x = 0;
					y = "1.5 * (0.04)";
					w = "26.5 * (0.025)";
					h = "1 * (0.04)";
				};
				class ItemDescription: RscStructuredText
				{
					idc = 1100;
					x = 0;
					y = "3 * (0.04)";
					w = "26.5 * (0.025)";
					h = "17 * (0.04)";
				};
			};
		};
		class TabRecipes: RscControlsGroup
		{
			idc = 5004;
			x = "13 * (0.025) + (0)";
			y = "2 * (0.04) + (0)";
			w = "26.5 * (0.025)";
			h = "20 * (0.04)";
			show = "false";
			class controls
			{
				class CraftingListBox: RscListBox
				{
					idc = 1400;
					x = 0;
					y = 0;
					w = "26.5 * (0.025)";
					h = "20 * (0.04)";
					sizeEx = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx2 = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					rowHeight = "2 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					canDrag = 0;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0};
					itemBackground[] = {1,1,1,0.1};
					itemSpacing = 0.001;
					onLBDblClick = "closeDialog 0; _this call ExileClient_gui_itemDetails_event_onCraftingRecipeDoubleClick";
				};
			};
		};
		class Stat01Background: RscText
		{
			idc = 6000;
			x = "0.5 * (0.025) + (0)";
			y = "12 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat01Progress: RscProgress
		{
			idc = 6001;
			x = "0.5 * (0.025) + (0)";
			y = "12 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat01Label: RscText
		{
			idc = 6002;
			text = "DAMAGE";
			x = "0.5 * (0.025) + (0)";
			y = "12 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat01Value: RscStructuredText
		{
			idc = 6003;
			text = "9 HP";
			style = 1;
			x = "6 * (0.025) + (0)";
			y = "12 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat02Background: RscText
		{
			idc = 6004;
			x = "0.5 * (0.025) + (0)";
			y = "13.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat02Progress: RscProgress
		{
			idc = 6005;
			x = "0.5 * (0.025) + (0)";
			y = "13.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat02Label: RscText
		{
			idc = 6006;
			text = "DAMAGE";
			x = "0.5 * (0.025) + (0)";
			y = "13.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat02Value: RscStructuredText
		{
			idc = 6007;
			text = "9 HP";
			style = 1;
			x = "6 * (0.025) + (0)";
			y = "13.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat03Background: RscText
		{
			idc = 6008;
			x = "0.5 * (0.025) + (0)";
			y = "15 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat03Progress: RscProgress
		{
			idc = 6009;
			x = "0.5 * (0.025) + (0)";
			y = "15 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat03Label: RscText
		{
			idc = 6010;
			text = "DAMAGE";
			x = "0.5 * (0.025) + (0)";
			y = "15 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat03Value: RscStructuredText
		{
			idc = 6011;
			text = "9 HP";
			style = 1;
			x = "6 * (0.025) + (0)";
			y = "15 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat04Background: RscText
		{
			idc = 6012;
			x = "0.5 * (0.025) + (0)";
			y = "16.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat04Progress: RscProgress
		{
			idc = 6013;
			x = "0.5 * (0.025) + (0)";
			y = "16.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat04Label: RscText
		{
			idc = 6014;
			text = "DAMAGE";
			x = "0.5 * (0.025) + (0)";
			y = "16.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat04Value: RscStructuredText
		{
			idc = 6015;
			text = "9 HP";
			style = 1;
			x = "6 * (0.025) + (0)";
			y = "16.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat05Background: RscText
		{
			idc = 6016;
			x = "0.5 * (0.025) + (0)";
			y = "18 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat05Progress: RscProgress
		{
			idc = 6017;
			x = "0.5 * (0.025) + (0)";
			y = "18 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat05Label: RscText
		{
			idc = 6018;
			text = "DAMAGE";
			x = "0.5 * (0.025) + (0)";
			y = "18 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat05Value: RscStructuredText
		{
			idc = 6019;
			text = "9 HP";
			style = 1;
			x = "6 * (0.025) + (0)";
			y = "18 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat06Background: RscText
		{
			idc = 6020;
			x = "0.5 * (0.025) + (0)";
			y = "19.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat06Progress: RscProgress
		{
			idc = 6021;
			x = "0.5 * (0.025) + (0)";
			y = "19.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat06Label: RscText
		{
			idc = 6022;
			text = "DAMAGE";
			x = "0.5 * (0.025) + (0)";
			y = "19.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat06Value: RscStructuredText
		{
			idc = 6023;
			text = "9 HP";
			style = 1;
			x = "6 * (0.025) + (0)";
			y = "19.5 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat07Background: RscText
		{
			idc = 6024;
			x = "0.5 * (0.025) + (0)";
			y = "21 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat07Progress: RscProgress
		{
			idc = 6025;
			x = "0.5 * (0.025) + (0)";
			y = "21 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat07Label: RscText
		{
			idc = 6026;
			text = "DAMAGE";
			x = "0.5 * (0.025) + (0)";
			y = "21 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat07Value: RscStructuredText
		{
			idc = 6027;
			text = "9 HP";
			style = 1;
			x = "6 * (0.025) + (0)";
			y = "21 * (0.04) + (0)";
			w = "5.5 * (0.025)";
			h = "1 * (0.04)";
		};
	};
};
class RscExileJoinRussianRouletteDialog
{
	idd = 24030;
	onLoad = "uiNamespace setVariable ['RscExileJoinRussianRouletteDialog', _this select 0]";
	onUnload = "call ExileClient_gui_joinRussianRouletteDialog_event_onUnload; uiNamespace setVariable ['RscExileJoinRussianRouletteDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = -1;
			x = "10 * (0.025) + (0)";
			y = "9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "8.5 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCation: RscText
		{
			idc = -1;
			text = "Russian Roulette";
			x = "10 * (0.025) + (0)";
			y = "7.9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class BuyInLabel: RscText
		{
			idc = -1;
			text = "Buy-In:";
			x = "10.5 * (0.025) + (0)";
			y = "12.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class GameStatusLabel: RscText
		{
			idc = -1;
			text = "Game Status:";
			x = "10.5 * (0.025) + (0)";
			y = "9.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
	};
	class controls
	{
		class BuyInValue: RscStructuredText
		{
			idc = 4000;
			text = "<t size='1.4'>0<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
			x = "10.5 * (0.025) + (0)";
			y = "13.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1.5 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class GameStatusValue: RscStructuredText
		{
			idc = 4001;
			text = "<t size='1.4' color='#b2ec00'>Waiting for players</t>";
			x = "10.5 * (0.025) + (0)";
			y = "10.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1.5 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc = -1;
			action = "closeDialog 0";
			x = "23.5 * (0.025) + (0)";
			y = "16 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class JoinButton: RscButtonMenuOK
		{
			idc = 4002;
			onMouseButtonClick = "_this call ExileClient_gui_joinRussianRouletteDialog_event_onJoinButtonClick";
			text = "Join";
			x = "10.5 * (0.025) + (0)";
			y = "16 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
	};
};
class RscExileKeypad
{
	idd = 24010;
	onLoad = "uiNamespace setVariable ['RscExileKeypad', _this select 0]";
	onUnload = "uiNamespace setVariable ['RscExileKeypad', displayNull]";
	onKeyUp = "_this call ExileClient_gui_keypadDialog_event_onKeyUp";
	class controlsBackground
	{
		class bacground: RscPicture
		{
			text = "\exile_assets\texture\ui\codeLock\code_background.paa";
			x = "0.322396 * safezoneW + safezoneX";
			y = "0.225 * safezoneH + safezoneY";
			w = "0.355208 * safezoneW";
			h = "0.55 * safezoneH";
		};
	};
	class controls
	{
		class buttonFake: RscButton
		{
			idc = 4013;
			x = "1 * safezoneW + safezoneX";
			y = "1 * safezoneH + safezoneY";
			w = "0 * safezoneW";
			h = "0 * safezoneH";
		};
		class button0: RscButton
		{
			idc = 4003;
			x = "0.399167 * safezoneW + safezoneX";
			y = "0.6694 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "0 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button1: RscButton
		{
			idc = 4004;
			x = "0.351042 * safezoneW + safezoneX";
			y = "0.4494 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "1 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button2: RscButton
		{
			idc = 4005;
			x = "0.399167 * safezoneW + safezoneX";
			y = "0.4494 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "2 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button3: RscButton
		{
			idc = 4006;
			x = "0.447291 * safezoneW + safezoneX";
			y = "0.4494 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "3 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button4: RscButton
		{
			idc = 4007;
			x = "0.351042 * safezoneW + safezoneX";
			y = "0.5242 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "4 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button5: RscButton
		{
			idc = 4008;
			x = "0.399167 * safezoneW + safezoneX";
			y = "0.5242 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "5 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button6: RscButton
		{
			idc = 4009;
			x = "0.446145 * safezoneW + safezoneX";
			y = "0.5242 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "6 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button7: RscButton
		{
			idc = 4010;
			x = "0.351042 * safezoneW + safezoneX";
			y = "0.5968 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "7 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button8: RscButton
		{
			idc = 4011;
			x = "0.399167 * safezoneW + safezoneX";
			y = "0.5968 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "8 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button9: RscButton
		{
			idc = 4012;
			x = "0.446145 * safezoneW + safezoneX";
			y = "0.5968 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "9 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class buttonOK: RscButton
		{
			idc = 4000;
			x = "0.351042 * safezoneW + safezoneX";
			y = "0.6694 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			colorDisabled[] = {1,1,1,0.4};
			onMouseButtonClick = "_this call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class buttonCancel: RscButton
		{
			idc = 4002;
			x = "0.446145 * safezoneW + safezoneX";
			y = "0.6694 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "_this call ExileClient_gui_keypadDialog_event_onAbortButtonClick";
		};
		class editBox: RscText
		{
			idc = 4001;
			text = "";
			colorText[] = {0.0705882,0.133333,0.0941176,0.8};
			font = "PressStart2P";
			style = 2;
			x = "0 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "6 * (0.04)";
			sizeEx = "2 * (0.04)";
			shadow = 0;
		};
	};
};
class RscExileKeypadCar
{
	idd = 24010;
	onLoad = "uiNamespace setVariable ['RscExileKeypad', _this select 0]";
	onUnload = "uiNamespace setVariable ['RscExileKeypad', displayNull]";
	onKeyUp = "_this call ExileClient_gui_keypadDialog_event_onKeyUp";
	class controlsBackground
	{
		class bacground: RscPicture
		{
			text = "\exile_assets\texture\ui\codeLock\code_background_car.paa";
			x = "0.385417 * safezoneW + safezoneX";
			y = "0.225 * safezoneH + safezoneY";
			w = "0.217708 * safezoneW";
			h = "0.616 * safezoneH";
		};
	};
	class controls
	{
		class buttonFake: RscButton
		{
			idc = 4013;
			x = "1 * safezoneW + safezoneX";
			y = "1 * safezoneH + safezoneY";
			w = "0 * safezoneW";
			h = "0 * safezoneH";
		};
		class button0: RscButton
		{
			idc = 4003;
			x = "0.474792 * safezoneW + safezoneX";
			y = "0.5968 * safezoneH + safezoneY";
			w = "0.0389584 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "0 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button1: RscButton
		{
			idc = 4004;
			x = "0.422083 * safezoneW + safezoneX";
			y = "0.3812 * safezoneH + safezoneY";
			w = "0.0401043 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "1 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button2: RscButton
		{
			idc = 4005;
			x = "0.474791 * safezoneW + safezoneX";
			y = "0.379 * safezoneH + safezoneY";
			w = "0.0389584 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "2 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button3: RscButton
		{
			idc = 4006;
			x = "0.526354 * safezoneW + safezoneX";
			y = "0.379 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "3 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button4: RscButton
		{
			idc = 4007;
			x = "0.423229 * safezoneW + safezoneX";
			y = "0.456 * safezoneH + safezoneY";
			w = "0.0389584 * safezoneW";
			h = "0.0528 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "4 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button5: RscButton
		{
			idc = 4008;
			x = "0.474791 * safezoneW + safezoneX";
			y = "0.4538 * safezoneH + safezoneY";
			w = "0.0389584 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "5 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button6: RscButton
		{
			idc = 4009;
			x = "0.526355 * safezoneW + safezoneX";
			y = "0.4516 * safezoneH + safezoneY";
			w = "0.0389584 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "6 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button7: RscButton
		{
			idc = 4010;
			x = "0.42323 * safezoneW + safezoneX";
			y = "0.5242 * safezoneH + safezoneY";
			w = "0.0389584 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "7 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button8: RscButton
		{
			idc = 4011;
			x = "0.474792 * safezoneW + safezoneX";
			y = "0.522 * safezoneH + safezoneY";
			w = "0.0389584 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "8 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class button9: RscButton
		{
			idc = 4012;
			x = "0.526354 * safezoneW + safezoneX";
			y = "0.5242 * safezoneH + safezoneY";
			w = "0.0389584 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "9 call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class buttonOK: RscButton
		{
			idc = 4000;
			x = "0.42323 * safezoneW + safezoneX";
			y = "0.5946 * safezoneH + safezoneY";
			w = "0.0389584 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			colorDisabled[] = {1,1,1,0.4};
			onMouseButtonClick = "_this call ExileClient_gui_keypadDialog_event_onDigitButtonClick";
		};
		class buttonCancel: RscButton
		{
			idc = 4002;
			x = "0.526355 * safezoneW + safezoneX";
			y = "0.5968 * safezoneH + safezoneY";
			w = "0.0389584 * safezoneW";
			h = "0.0572 * safezoneH";
			colorBackground[] = {0.0980392,0.0980392,0.0980392,0};
			colorBackgroundActive[] = {0.0980392,0.0980392,0.0980392,0.6};
			onMouseButtonClick = "_this call ExileClient_gui_keypadDialog_event_onAbortButtonClick";
		};
		class editBox: RscText
		{
			idc = 4001;
			text = "";
			colorText[] = {0,0,0,0.8};
			font = "PressStart2P";
			style = 2;
			x = "0.316667 * safezoneW + safezoneX";
			y = "0.2646 * safezoneH + safezoneY";
			w = "0.352917 * safezoneW";
			h = "0.0726 * safezoneH";
			sizeEx = "1.2 * (0.04)";
			shadow = 0;
		};
	};
};
class RscExileKeypadScanDialog
{
	idd = 24025;
	onLoad = "uiNamespace setVariable ['RscExileKeypadScanDialog', _this select 0]";
	onUnload = "call ExileClient_gui_keypadScanDialog_event_onUnload; uiNamespace setVariable ['RscExileKeypadScanDialog', displayNull]";
	class controlsBackground{};
	class controls
	{
		class backgroundCold: RscPicture
		{
			idc = 4000;
			text = "\exile_assets\texture\ui\codeLock\background_cold_co.paa";
			x = "0.322396 * safezoneW + safezoneX";
			y = "0.225 * safezoneH + safezoneY";
			w = "0.355208 * safezoneW";
			h = "0.55 * safezoneH";
		};
		class backgroundHot: RscPicture
		{
			idc = 4001;
			text = "\exile_assets\texture\ui\codeLock\background_hot_co.paa";
			x = "0.322396 * safezoneW + safezoneX";
			y = "0.225 * safezoneH + safezoneY";
			w = "0.355208 * safezoneW";
			h = "0.55 * safezoneH";
		};
		class finger0: RscPictureKeepAspect
		{
			idc = 4011;
			text = "\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x = "0.399167 * safezoneW + safezoneX";
			y = "0.6694 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
		};
		class finger1: RscPictureKeepAspect
		{
			idc = 4002;
			text = "\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x = "0.351042 * safezoneW + safezoneX";
			y = "0.4494 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
		};
		class finger2: RscPictureKeepAspect
		{
			idc = 4003;
			text = "\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x = "0.399167 * safezoneW + safezoneX";
			y = "0.4494 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
		};
		class finger3: RscPictureKeepAspect
		{
			idc = 4004;
			text = "\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x = "0.447291 * safezoneW + safezoneX";
			y = "0.4494 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
		};
		class finger4: RscPictureKeepAspect
		{
			idc = 4005;
			text = "\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x = "0.351042 * safezoneW + safezoneX";
			y = "0.5242 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
		};
		class finger5: RscPictureKeepAspect
		{
			idc = 4006;
			text = "\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x = "0.399167 * safezoneW + safezoneX";
			y = "0.5242 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
		};
		class finger6: RscPictureKeepAspect
		{
			idc = 4007;
			text = "\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x = "0.446145 * safezoneW + safezoneX";
			y = "0.5242 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
		};
		class finger7: RscPictureKeepAspect
		{
			idc = 4008;
			text = "\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x = "0.351042 * safezoneW + safezoneX";
			y = "0.5968 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
		};
		class finger8: RscPictureKeepAspect
		{
			idc = 4009;
			text = "\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x = "0.399167 * safezoneW + safezoneX";
			y = "0.5968 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
		};
		class finger9: RscPictureKeepAspect
		{
			idc = 4010;
			text = "\exile_assets\texture\ui\codeLock\finger_ca.paa";
			x = "0.446145 * safezoneW + safezoneX";
			y = "0.5968 * safezoneH + safezoneY";
			w = "0.0378126 * safezoneW";
			h = "0.0572 * safezoneH";
		};
	};
};
class RscExileLockerDialog
{
	idd = 24029;
	onLoad = "uiNamespace setVariable ['RscExileLockerDialog', _this select 0]";
	onUnload = "call ExileClient_gui_lockerDialog_event_onUnload; uiNamespace setVariable ['RscExileLockerDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = 1000;
			x = "5.5 * (0.025) + (0)";
			y = "8 * (0.04) + (0)";
			w = "30 * (0.025)";
			h = "10 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCation: RscText
		{
			idc = 1001;
			text = "Locker";
			x = "5.5 * (0.025) + (0)";
			y = "7 * (0.04) + (0)";
			w = "30 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class BalanceLabel: RscText
		{
			idc = 1002;
			text = "Balance:";
			x = "6.5 * (0.025) + (0)";
			y = "8.5 * (0.04) + (0)";
			w = "14 * (0.025)";
			h = "1 * (0.04)";
		};
		class WithdrawLabel: RscText
		{
			idc = 1003;
			text = "Amount to withdraw:";
			x = "6.5 * (0.025) + (0)";
			y = "12 * (0.04) + (0)";
			w = "10 * (0.025)";
			h = "1 * (0.04)";
		};
		class DepositLabel: RscText
		{
			idc = 1004;
			text = "Amount to deposit:";
			x = "24.5 * (0.025) + (0)";
			y = "12 * (0.04) + (0)";
			w = "10 * (0.025)";
			h = "1 * (0.04)";
		};
		class InventoryLabel: RscText
		{
			idc = 1005;
			text = "Inventory:";
			x = "24.5 * (0.025) + (0)";
			y = "8.5 * (0.04) + (0)";
			w = "10 * (0.025)";
			h = "1 * (0.04)";
		};
	};
	class controls
	{
		class Balance: RscStructuredText
		{
			idc = 4000;
			text = "<t size='1.4'>0</t>";
			x = "6.5 * (0.025) + (0)";
			y = "10 * (0.04) + (0)";
			w = "14 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class Inventory: RscStructuredText
		{
			idc = 4001;
			text = "<t size='1.4'>0</t>";
			x = "24.5 * (0.025) + (0)";
			y = "10 * (0.04) + (0)";
			w = "10 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			idc = 4002;
			action = "closeDialog 0";
			x = "28 * (0.025) + (0)";
			y = "16.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class ButtonDeposit: RscButton
		{
			idc = 4003;
			text = "<";
			x = "22 * (0.025) + (0)";
			y = "13.5 * (0.04) + (0)";
			w = "2 * (0.025)";
			h = "2 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			sizeEx = "1.5 * (0.04)";
			onMouseButtonClick = "_this call  ExileClient_gui_lockerDialog_event_onDepositButtonClick";
		};
		class ButtonWithdraw: RscButton
		{
			idc = 4004;
			text = ">";
			x = "17 * (0.025) + (0)";
			y = "13.5 * (0.04) + (0)";
			w = "2 * (0.025)";
			h = "2 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			sizeEx = "1.5 * (0.04)";
			onMouseButtonClick = "_this call  ExileClient_gui_lockerDialog_event_onWithdrawButtonClick";
		};
		class WithdrawInput: RscEdit
		{
			idc = 4005;
			text = "";
			x = "6.5 * (0.025) + (0)";
			y = "13.5 * (0.04) + (0)";
			w = "10 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,1};
		};
		class DepositInput: RscEdit
		{
			idc = 4006;
			text = "";
			x = "24.5 * (0.025) + (0)";
			y = "13.5 * (0.04) + (0)";
			w = "10 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,1};
		};
	};
};
class RscExileMapContextMenu: ctrlMenu
{
	colorBackground[] = {0.1,0.1,0.1,1};
	class Items
	{
		items[] = {"CMInsert","CMRemove"};
		class CMRemove
		{
			action = "_this call ExileClient_gui_clan_context_event_onRemoveButtonClick;";
			text = "Remove";
			picture = "\a3\3den\Data\Cfg3DEN\History\deleteItems_ca.paa";
		};
		class CMInsert
		{
			items[] = {"CMInsertMarker","CMInsertPoly"};
			text = "Add";
			picture = "\a3\3den\Data\Cfg3DEN\History\create_ca.paa";
		};
		class CMInsertMarker
		{
			action = "_this call ExileClient_gui_clan_context_event_onMarkerAddButtonClick;";
			text = "Marker";
			picture = "\a3\3den\Data\Cfg3DEN\History\create_ca.paa";
		};
		class CMInsertPoly
		{
			action = "_this call ExileClient_gui_clan_context_event_onPolyAddButtonClick;";
			text = "Polygon";
			picture = "\a3\3den\Data\Cfg3DEN\History\create_ca.paa";
		};
		class Default
		{
			enable = 0;
			text = "Empty";
			data = "Empty";
		};
	};
};
class RscExilePayFlagRansomDialog
{
	idd = 24028;
	onLoad = "uiNamespace setVariable ['RscExilePayFlagRansomDialog', _this select 0]";
	onUnload = "call ExileClient_gui_payFlagRansomDialog_event_onUnload; uiNamespace setVariable ['RscExilePayFlagRansomDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = -1;
			x = "10 * (0.025) + (0)";
			y = "9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "8 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCation: RscText
		{
			idc = -1;
			text = "Pay Territory Flag Ransom";
			x = "10 * (0.025) + (0)";
			y = "7.9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class TerritoryLabel: RscText
		{
			idc = -1;
			text = "Choose the territory to pay for:";
			x = "10.5 * (0.025) + (0)";
			y = "9.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class CurrencyLabel: RscText
		{
			idc = -1;
			text = "Cost:";
			x = "10.5 * (0.025) + (0)";
			y = "12 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
	};
	class controls
	{
		class TerritoryDropDown: RscCombo
		{
			idc = 4000;
			onLBSelChanged = "_this call ExileClient_gui_payFlagRansomDialog_event_onTerritoryDropDownSelectionChanged";
			x = "10.5 * (0.025) + (0)";
			y = "10.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc = -1;
			action = "closeDialog 0";
			x = "23.5 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class PayButton: RscButtonMenuOK
		{
			idc = 4001;
			onMouseButtonClick = "_this call ExileClient_gui_payFlagRansomDialog_event_onButtonClick";
			text = "Pay Now";
			x = "10.5 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class Cost: RscStructuredText
		{
			idc = 4002;
			text = "<t size='1.4'></t>";
			x = "10.5 * (0.025) + (0)";
			y = "13 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1.5 * (0.04)";
		};
	};
};
class RscExilePayTerritoryProtectionMoneyDialog
{
	idd = 20021;
	onLoad = "uiNamespace setVariable ['RscExilePayTerritoryProtectionMoneyDialog', _this select 0]";
	onUnload = "call ExileClient_gui_payTerritoryProtectionMoneyDialog_event_onUnload; uiNamespace setVariable ['RscExilePayTerritoryProtectionMoneyDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = -1;
			x = "10 * (0.025) + (0)";
			y = "9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "8 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCation: RscText
		{
			idc = -1;
			text = "Pay Territory Protection Money";
			x = "10 * (0.025) + (0)";
			y = "7.9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class TerritoryLabel: RscText
		{
			idc = -1;
			text = "Choose the territory to pay for:";
			x = "10.5 * (0.025) + (0)";
			y = "9.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class CurrencyLabel: RscText
		{
			idc = -1;
			text = "Cost:";
			x = "10.5 * (0.025) + (0)";
			y = "12 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
	};
	class controls
	{
		class TerritoryDropDown: RscCombo
		{
			idc = 4001;
			onLBSelChanged = "_this call ExileClient_gui_payTerritoryProtectionMoneyDialog_event_onTerritoryDropDownSelectionChanged";
			x = "10.5 * (0.025) + (0)";
			y = "10.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc = -1;
			action = "closeDialog 0";
			x = "23.5 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class PayButton: RscButtonMenuOK
		{
			idc = 4002;
			onMouseButtonClick = "_this call ExileClient_gui_payTerritoryProtectionMoneyDialog_event_onPayButtonClick";
			text = "Pay Now";
			x = "10.5 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class Cost: RscStructuredText
		{
			idc = 4000;
			text = "<t size='1.4'>0</t>";
			x = "10.5 * (0.025) + (0)";
			y = "13 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1.5 * (0.04)";
		};
	};
};
class RscExilePurchaseTerritoryDialog
{
	idd = 20017;
	onLoad = "uiNamespace setVariable ['RscExilePurchaseTerritoryDialog', _this select 0]";
	onUnload = "call ExileClient_gui_purchaseTerritoryDialog_event_onUnload; uiNamespace setVariable ['RscExilePurchaseTerritoryDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = -1;
			x = "10 * (0.025) + (0)";
			y = "8 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "10 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCation: RscText
		{
			idc = -1;
			text = "Purchase Territory";
			x = "10 * (0.025) + (0)";
			y = "6.9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class PriceLabel: RscText
		{
			idc = -1;
			text = "Price:";
			x = "10.5 * (0.025) + (0)";
			y = "12 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class RadiusLabel: RscText
		{
			idc = -1;
			text = "Radius:";
			x = "10.5 * (0.025) + (0)";
			y = "8.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
	};
	class controls
	{
		class RegistrationFeeValue: RscStructuredText
		{
			idc = 4000;
			text = "<t size='1.4'>50,000<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
			x = "10.5 * (0.025) + (0)";
			y = "13 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			idc = -1;
			action = "closeDialog 0";
			x = "23.5 * (0.025) + (0)";
			y = "16.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class PurchaseButton: RscButtonMenuOK
		{
			idc = 4001;
			onMouseButtonClick = "_this call ExileClient_gui_purchaseTerritoryDialog_event_onPurchaseButtonClick";
			text = "Purchase";
			x = "10.5 * (0.025) + (0)";
			y = "16.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class Radius: RscStructuredText
		{
			idc = 4002;
			text = "<t size='1.4'>15m</t>";
			x = "10.5 * (0.025) + (0)";
			y = "9.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
	};
};
class RscExileRegisterClan
{
	idd = 24012;
	onLoad = "uiNamespace setVariable ['RscExileRegisterClan', _this select 0]";
	onUnload = "call ExileClient_gui_registerClanDialog_event_onUnload; uiNamespace setVariable ['RscExileRegisterClan', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = 1000;
			x = "10 * (0.025) + (0)";
			y = "8 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "10 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCation: RscText
		{
			idc = 1001;
			text = "Register Family";
			x = "10 * (0.025) + (0)";
			y = "6.9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class NameLabel: RscText
		{
			idc = 1002;
			text = "Choose a name:";
			x = "10.5 * (0.025) + (0)";
			y = "8.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class PriceLabel: RscText
		{
			idc = 1003;
			text = "Registration Fee:";
			x = "10.5 * (0.025) + (0)";
			y = "12 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
	};
	class controls
	{
		class RegistrationFeeValue: RscStructuredText
		{
			idc = 4000;
			text = "<t size='1.4'>50,000<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
			x = "10.5 * (0.025) + (0)";
			y = "13 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			idc = 4001;
			x = "23.5 * (0.025) + (0)";
			y = "16.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			action = "closeDialog 0";
		};
		class ButtonRegister: RscButtonMenuOK
		{
			idc = 4002;
			text = "Register";
			x = "10.5 * (0.025) + (0)";
			y = "16.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			onMouseButtonClick = "_this call ExileClient_gui_registerClanDialog_event_onRegisterButtonClick";
		};
		class NameInput: RscEdit
		{
			idc = 4003;
			text = "WWWWWWWWWWWWWWWWWWWW";
			x = "10.5 * (0.025) + (0)";
			y = "9.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,1};
		};
	};
};
class RscExileRekeyVehicleDialog
{
	idd = 24027;
	onLoad = "uiNamespace setVariable ['RscExileRekeyVehicleDialog', _this select 0]";
	onUnload = "call ExileClient_gui_vehicleRekeyDialog_event_onUnload; uiNamespace setVariable ['RscExileRekeyVehicleDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = -1;
			x = "10 * (0.025) + (0)";
			y = "5 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "13 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCation: RscText
		{
			idc = -1;
			text = "Change Pin Code";
			x = "10 * (0.025) + (0)";
			y = "4 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class ResetCodeCostLabel: RscText
		{
			idc = -1;
			text = "Cost to change if pin is unknown:";
			x = "10.5 * (0.025) + (0)";
			y = "12.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class VehicleLabel: RscText
		{
			idc = -1;
			text = "Select vehicle to change pin:";
			x = "10 * (0.025) + (0)";
			y = "5 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "1 * (0.04)";
		};
		class ResetCodeFreeLabel: RscText
		{
			idc = -1;
			text = "If pin is known you can change it for free.";
			x = "10.5 * (0.025) + (0)";
			y = "8.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
	};
	class controls
	{
		class VehicleDropDown: RscCombo
		{
			idc = 4002;
			x = "10.5 * (0.025) + (0)";
			y = "6.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
			onLBSelChanged = "_this call ExileClient_gui_vehicleRekeyDialog_event_onDropDownSelectionChanged";
		};
		class Cost: RscStructuredText
		{
			idc = 4000;
			text = "<t size='1.4'>0<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
			x = "10.5 * (0.025) + (0)";
			y = "14 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1.5 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc = -1;
			action = "closeDialog 0";
			x = "23.5 * (0.025) + (0)";
			y = "16 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
		};
		class PurchaseButton: RscButtonMenuOK
		{
			idc = 4001;
			onMouseButtonClick = "_this call ExileClient_gui_vehicleRekeyDialog_event_onPurchaseButtonClick";
			text = "Reset";
			x = "10.5 * (0.025) + (0)";
			y = "16 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
		};
		class ResetButton: RscButtonMenuOK
		{
			idc = 4003;
			onMouseButtonClick = "_this call ExileClient_gui_vehicleRekeyDialog_event_onResetButtonClick";
			text = "Reset Free";
			x = "10.5 * (0.025) + (0)";
			y = "10.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
		};
	};
};
class RscExileSandbox
{
	idd = 20019;
	onLoad = "uiNamespace setVariable ['RscExileSandbox', _this select 0];";
	onUnload = "uiNamespace setVariable ['RscExileSandbox', displayNull]";
	duration = -1;
};
class RscExileSetupTerritoryDialog
{
	idd = 20016;
	onLoad = "uiNamespace setVariable ['RscExileSetupTerritoryDialog', _this select 0]";
	onUnload = "call ExileClient_gui_setupTerritoryDialog_event_onUnload; uiNamespace setVariable ['RscExileSetupTerritoryDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = -1;
			x = "10 * (0.025) + (0)";
			y = "5 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "16 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCation: RscText
		{
			idc = -1;
			text = "Setup Territory";
			x = "10 * (0.025) + (0)";
			y = "3.9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class NameLabel: RscText
		{
			idc = -1;
			text = "Name:";
			x = "10.5 * (0.025) + (0)";
			y = "5.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class FlagLabel: RscText
		{
			idc = -1;
			text = "Flag Texture:";
			x = "10.5 * (0.025) + (0)";
			y = "9.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
	};
	class controls
	{
		class CancelButton: RscButtonMenuCancel
		{
			idc = -1;
			action = "closeDialog 0";
			x = "23.5 * (0.025) + (0)";
			y = "19.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class PlaceButton: RscButtonMenuOK
		{
			idc = 4002;
			onMouseButtonClick = "_this call ExileClient_gui_setupTerritoryDialog_event_onPlaceButtonClick";
			text = "Setup";
			x = "10.5 * (0.025) + (0)";
			y = "19.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class NameInput: RscEdit
		{
			idc = 4000;
			text = "";
			x = "10.5 * (0.025) + (0)";
			y = "6.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,1};
		};
		class FlagListBox: RscListBox
		{
			idc = 4001;
			x = "10.5 * (0.025) + (0)";
			y = "10.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "8 * (0.04)";
		};
	};
};
class RscExileToast: RscControlsGroupNoScrollbars
{
	idc = -1;
	x = 0;
	y = 0;
	w = "240 * pixelW";
	h = "60 * pixelH";
	fade = 1;
	class controls
	{
		class Background: RscText
		{
			idc = 100;
			x = 0;
			y = 0;
			w = "240 * pixelW";
			h = "60 * pixelH";
			colorBackground[] = {"19/255","22/255","27/255",0.8};
		};
		class Stripe: RscText
		{
			idc = 101;
			x = 0;
			y = 0;
			w = "5 * pixelW";
			h = "60 * pixelH";
			colorBackground[] = {"199/255","38/255","81/255",1};
		};
		class Text: RscStructuredText
		{
			idc = 102;
			text = "<t size='22' font='PuristaMedium'>Building disallowed!</t><br/><t color='#ff979ba1' size='19' font='PuristaLight'>Concrete mixer is nearby.</t>";
			x = "10 * pixelW";
			y = 0;
			w = "(240 - 10) * pixelW";
			h = "60 * pixelH";
			size = "1 * pixelH";
			shadow = 0;
			colorBackground[] = {0,0,0,0};
			class Attributes
			{
				shadow = 0;
			};
		};
	};
};
class RscExileTraderDialog
{
	idd = 24007;
	onLoad = "uiNamespace setVariable ['RscExileTraderDialog', _this select 0]";
	onUnload = "call ExileClient_gui_traderDialog_event_onUnload; uiNamespace setVariable ['RscExileTraderDialog', displayNull]";
	class controlsBackground
	{
		class DialogCaptionLeft: RscText
		{
			idc = 4000;
			text = "Eichi";
			x = "-4 * (0.025) + (0)";
			y = "-0.1 * (0.04) + (0)";
			w = "17.5 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class DialogBackgroundLeft: RscText
		{
			idc = 2000;
			x = "-4 * (0.025) + (0)";
			y = "1 * (0.04) + (0)";
			w = "17.5 * (0.025)";
			h = "24 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogBackgroundMiddle: RscText
		{
			idc = 2001;
			x = "14 * (0.025) + (0)";
			y = "1 * (0.04) + (0)";
			w = "17.5 * (0.025)";
			h = "24 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCaptionMiddle: RscText
		{
			idc = 4001;
			text = "STORE";
			x = "14 * (0.025) + (0)";
			y = "-0.1 * (0.04) + (0)";
			w = "17.5 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class DialogBackgroundRight: RscText
		{
			idc = 2002;
			x = "32 * (0.025) + (0)";
			y = "1 * (0.04) + (0)";
			w = "12 * (0.025)";
			h = "24 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCaptionRight: RscText
		{
			idc = 2003;
			text = "STATS";
			x = "32 * (0.025) + (0)";
			y = "-0.1 * (0.04) + (0)";
			w = "12 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
	};
	class controls
	{
		class TextPlayerMoney: RscStructuredText
		{
			idc = 4002;
			text = "0";
			x = "5.5 * (0.025) + (0)";
			y = "-0.1 * (0.04) + (0)";
			w = "8 * (0.025)";
			h = "1 * (0.04)";
		};
		class CloseCross: RscActiveText
		{
			idc = 1032;
			x = "42.8 * (0.025) + (0)";
			y = "0.2 * (0.04) + (0)";
			w = "1 * (0.025)";
			h = "0.5 * (0.04)";
			action = "closeDialog 0;";
			style = 2096;
			color[] = {1,1,1,0.7};
			colorText[] = {1,1,1,0.7};
			colorActive[] = {1,1,1,1};
			tooltip = "Close";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};
		class ItemPicture: RscPictureKeepAspect
		{
			idc = 4003;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = "32.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "9 * (0.04)";
		};
		class InventoryDropDown: RscCombo
		{
			idc = 4004;
			x = "-3.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "16.5 * (0.025)";
			h = "1 * (0.04)";
			onLBSelChanged = "_this call ExileClient_gui_traderDialog_event_onPlayerInventoryDropDownSelectionChanged";
		};
		class InventoryListBox: RscExileItemListBox
		{
			idc = 4005;
			x = "-3.5 * (0.025) + (0)";
			y = "3 * (0.04) + (0)";
			w = "16.5 * (0.025)";
			h = "20 * (0.04)";
			colorBackground[] = {1,1,1,0.1};
			onLBSelChanged = "_this call ExileClient_gui_traderDialog_event_onPlayerInventoryListBoxSelectionChanged";
		};
		class CancelButton: RscButtonMenu
		{
			idc = 4006;
			x = "32.5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			action = "closeDialog 0;";
			text = "Cancel";
		};
		class SellButton: RscButtonMenu
		{
			idc = 4007;
			text = "Sell";
			x = "-3.5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "8 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			onMouseButtonClick = "_this call ExileClient_gui_traderDialog_event_onSellButtonClick";
		};
		class StoreDropDown: RscCombo
		{
			idc = 4008;
			x = "14.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "16.5 * (0.025)";
			h = "1 * (0.04)";
			onLBSelChanged = "_this call ExileClient_gui_traderDialog_event_onStoreDropDownSelectionChanged";
		};
		class StoreListBox: RscExileItemListBox
		{
			idc = 4009;
			x = "14.5 * (0.025) + (0)";
			y = "3 * (0.04) + (0)";
			w = "16.5 * (0.025)";
			h = "20 * (0.04)";
			colorBackground[] = {1,1,1,0.1};
			onLBSelChanged = "_this call ExileClient_gui_traderDialog_event_onStoreListBoxSelectionChanged";
			onLBDblClick = "_this call ExileClient_gui_traderDialog_event_onStoreListBoxItemDoubleClick";
		};
		class PurchaseButton: RscButtonMenu
		{
			idc = 4010;
			text = "Purchase";
			x = "14.5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "8 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			onMouseButtonClick = "_this call ExileClient_gui_traderDialog_event_onPurchaseButtonClick";
		};
		class QuantityDropDown: RscCombo
		{
			idc = 4011;
			x = "23 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "8 * (0.025)";
			h = "1 * (0.04)";
			show = "false";
		};
		class PlayerLoadBackground: RscText
		{
			idc = 4043;
			x = "5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "8 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class PlayerLoadProgress: RscProgress
		{
			idc = 4012;
			x = "5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "8 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class PlayerLoadLabel: RscText
		{
			idc = 4013;
			text = "LOAD";
			x = "5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "8 * (0.025)";
			h = "1 * (0.04)";
		};
		class PlayerLoadValue: RscStructuredText
		{
			idc = 4014;
			text = "100%";
			x = "5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "8 * (0.025)";
			h = "1 * (0.04)";
		};
		class PrimaryWeaponFilter: RscCheckBox
		{
			idc = 4044;
			x = "28.2 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "1.2 * (0.025)";
			h = "1 * (0.04)";
			tooltip = "Show only items that are compatible with your primary weapon.";
			color[] = {1,1,1,1};
			colorDisabled[] = {1,1,1,0.25};
			colorFocused[] = {1,1,1,1};
			colorHover[] = {0,0,0,1};
			colorPressed[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			colorBackgroundDisabled[] = {0,0,0,0.8};
			colorBackgroundFocused[] = {0,0,0,0.8};
			colorBackgroundHover[] = {1,1,1,1};
			colorBackgroundPressed[] = {0,0,0,0.8};
			soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
			soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
			textureChecked = "exile_assets\texture\arsenal\primaryweapon_green_ca.paa";
			textureDisabledChecked = "exile_assets\texture\arsenal\primaryweapon_green_ca.paa";
			textureFocusedChecked = "exile_assets\texture\arsenal\primaryweapon_green_ca.paa";
			textureHoverChecked = "exile_assets\texture\arsenal\primaryweapon_green_ca.paa";
			texturePressedChecked = "exile_assets\texture\arsenal\primaryweapon_green_ca.paa";
			textureDisabledUnchecked = "exile_assets\texture\arsenal\primaryweapon_ca.paa";
			textureHoverUnchecked = "exile_assets\texture\arsenal\primaryweapon_ca.paa";
			textureFocusedUnchecked = "exile_assets\texture\arsenal\primaryweapon_ca.paa";
			texturePressedUnchecked = "exile_assets\texture\arsenal\primaryweapon_ca.paa";
			textureUnchecked = "exile_assets\texture\arsenal\primaryweapon_ca.paa";
			onCheckedChanged = "_this call ExileClient_gui_traderDialog_event_onFilterCheckboxStateChanged";
			show = "false";
		};
		class HandgunWeaponFilter: PrimaryWeaponFilter
		{
			idc = 4045;
			x = "29.8 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "1.2 * (0.025)";
			h = "1 * (0.04)";
			tooltip = "Show only items that are compatible with your handgun.";
			textureChecked = "exile_assets\texture\arsenal\handgun_green_ca.paa";
			textureDisabledChecked = "exile_assets\texture\arsenal\handgun_green_ca.paa";
			textureFocusedChecked = "exile_assets\texture\arsenal\handgun_green_ca.paa";
			textureHoverChecked = "exile_assets\texture\arsenal\handgun_green_ca.paa";
			texturePressedChecked = "exile_assets\texture\arsenal\handgun_green_ca.paa";
			textureDisabledUnchecked = "exile_assets\texture\arsenal\handgun_ca.paa";
			textureHoverUnchecked = "exile_assets\texture\arsenal\handgun_ca.paa";
			textureFocusedUnchecked = "exile_assets\texture\arsenal\handgun_ca.paa";
			texturePressedUnchecked = "exile_assets\texture\arsenal\handgun_ca.paa";
			textureUnchecked = "exile_assets\texture\arsenal\handgun_ca.paa";
		};
		class Stat01Background: RscText
		{
			idc = 4015;
			x = "32.5 * (0.025) + (0)";
			y = "11 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat01Progress: RscProgress
		{
			idc = 4016;
			x = "32.5 * (0.025) + (0)";
			y = "11 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat01Label: RscText
		{
			idc = 4017;
			text = "ARMOR";
			x = "32.5 * (0.025) + (0)";
			y = "11 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat01Value: RscStructuredText
		{
			idc = 4018;
			text = "0";
			x = "32.5 * (0.025) + (0)";
			y = "11 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat02Background: RscText
		{
			idc = 4019;
			x = "32.5 * (0.025) + (0)";
			y = "12.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat02Progress: RscProgress
		{
			idc = 4020;
			x = "32.5 * (0.025) + (0)";
			y = "12.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat02Label: RscText
		{
			idc = 4021;
			text = "ARMOR";
			x = "32.5 * (0.025) + (0)";
			y = "12.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat02Value: RscStructuredText
		{
			idc = 4022;
			text = "0";
			x = "32.5 * (0.025) + (0)";
			y = "12.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat03Background: RscText
		{
			idc = 4023;
			x = "32.5 * (0.025) + (0)";
			y = "14 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat03Progress: RscProgress
		{
			idc = 4024;
			x = "32.5 * (0.025) + (0)";
			y = "14 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat03Label: RscText
		{
			idc = 4025;
			text = "ARMOR";
			x = "32.5 * (0.025) + (0)";
			y = "14 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat03Value: RscStructuredText
		{
			idc = 4026;
			text = "0";
			x = "32.5 * (0.025) + (0)";
			y = "14 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat04Background: RscText
		{
			idc = 4027;
			x = "32.5 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat04Progress: RscProgress
		{
			idc = 4028;
			x = "32.5 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat04Label: RscText
		{
			idc = 4029;
			text = "ARMOR";
			x = "32.5 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat04Value: RscStructuredText
		{
			idc = 4030;
			text = "0";
			x = "32.5 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat05Background: RscText
		{
			idc = 4031;
			x = "32.5 * (0.025) + (0)";
			y = "17 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat05Progress: RscProgress
		{
			idc = 4032;
			x = "32.5 * (0.025) + (0)";
			y = "17 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat05Label: RscText
		{
			idc = 4033;
			text = "ARMOR";
			x = "32.5 * (0.025) + (0)";
			y = "17 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat05Value: RscStructuredText
		{
			idc = 4034;
			text = "0";
			x = "32.5 * (0.025) + (0)";
			y = "17 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat06Background: RscText
		{
			idc = 4035;
			x = "32.5 * (0.025) + (0)";
			y = "18.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat06Progress: RscProgress
		{
			idc = 4036;
			x = "32.5 * (0.025) + (0)";
			y = "18.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat06Label: RscText
		{
			idc = 4037;
			text = "ARMOR";
			x = "32.5 * (0.025) + (0)";
			y = "18.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat06Value: RscStructuredText
		{
			idc = 4038;
			text = "0";
			x = "32.5 * (0.025) + (0)";
			y = "18.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat07Background: RscText
		{
			idc = 4039;
			x = "32.5 * (0.025) + (0)";
			y = "20 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat07Progress: RscProgress
		{
			idc = 4040;
			x = "32.5 * (0.025) + (0)";
			y = "20 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat07Label: RscText
		{
			idc = 4041;
			text = "0";
			x = "32.5 * (0.025) + (0)";
			y = "20 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class Stat07Value: RscStructuredText
		{
			idc = 4042;
			text = "0";
			x = "32.5 * (0.025) + (0)";
			y = "20 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
	};
};
class RscExileTwinkleTwisterButton: RscButtonMenu
{
	colorBackground[] = {0,0,0,0.1};
	font = "PressStart2P";
	soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
	style = 2;
	class Attributes
	{
		align = "center";
		color = "#FFFFFF";
		font = "PressStart2P";
		shadow = "false";
	};
};
class RscExileTwinkleTwister
{
	idd = 20024;
	onLoad = "uiNamespace setVariable ['RscExileTwinkleTwister', _this select 0]";
	onUnload = "call ExileClient_gui_twinkleTwister_event_onUnload; uiNamespace setVariable ['RscExileTwinkleTwister', displayNull]";
	class controlsBackground
	{
		class Background: RscText
		{
			idc = -1;
			x = "0 * (0.025) + (0)";
			y = "0 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "25 * (0.04)";
			colorBackground[] = {0.301961,0.666667,0.992157,1};
		};
		class RscText_1002: RscText
		{
			idc = -1;
			x = "1.5 * (0.025) + (0)";
			y = "3 * (0.04) + (0)";
			w = "8 * (0.025)";
			h = "3 * (0.04)";
			colorBackground[] = {0.713726,0.85098,0.996078,1};
		};
		class RscText_1004: RscText
		{
			idc = -1;
			x = "33.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "3 * (0.025)";
			h = "3 * (0.04)";
			colorBackground[] = {0.713726,0.85098,0.996078,1};
		};
		class RscText_1007: RscText
		{
			idc = -1;
			x = "2.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "4.5 * (0.025)";
			h = "5 * (0.04)";
			colorBackground[] = {0.713726,0.85098,0.996078,1};
		};
		class RscText_1009: RscText
		{
			idc = -1;
			x = "32 * (0.025) + (0)";
			y = "3 * (0.04) + (0)";
			w = "6.5 * (0.025)";
			h = "2.5 * (0.04)";
			colorBackground[] = {0.713726,0.85098,0.996078,1};
		};
		class RscText_1010: RscText
		{
			idc = -1;
			x = "33 * (0.025) + (0)";
			y = "2.5 * (0.04) + (0)";
			w = "4.5 * (0.025)";
			h = "3.5 * (0.04)";
			colorBackground[] = {0.713726,0.85098,0.996078,1};
		};
		class RscText_1001: RscText
		{
			idc = -1;
			x = "0 * (0.025) + (0)";
			y = "20.5 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "4.5 * (0.04)";
			colorBackground[] = {0,0.666667,0.0627451,1};
		};
		class RscText_1003: RscText
		{
			idc = -1;
			x = "0 * (0.025) + (0)";
			y = "19 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0.505882,0.823529,0.12549,1};
		};
		class RscText_1005: RscText
		{
			idc = -1;
			x = "0 * (0.025) + (0)";
			y = "22 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "3 * (0.04)";
			colorBackground[] = {0.823529,0.556863,0.0980392,1};
		};
	};
	class controls
	{
		class Caption: RscStructuredText
		{
			idc = 4001;
			text = "<t font='PressStart2P' size='2' align='center' shadow='0'>TWINKLE<br/>TWISTER<br/>2000</t>";
			x = "0 * (0.025) + (0)";
			y = "2 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "6.5 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class StartButton: RscExileTwinkleTwisterButton
		{
			idc = 4002;
			text = "Start Game";
			x = "8 * (0.025) + (0)";
			y = "10.5 * (0.04) + (0)";
			w = "24 * (0.025)";
			h = "3 * (0.04)";
			onMouseButtonClick = "_this spawn ExileClient_gui_twinkleTwister_event_onStartButtonClick";
			soundClick[] = {"\exile_assets\sound\twinkle_twister_button_01",0.5,1};
		};
		class QuitButton: RscExileTwinkleTwisterButton
		{
			idc = 4003;
			text = "Quit";
			x = "8 * (0.025) + (0)";
			y = "14 * (0.04) + (0)";
			w = "24 * (0.025)";
			h = "3 * (0.04)";
			onMouseButtonClick = "_this call ExileClient_gui_twinkleTwister_event_onQuitButtonClick";
			soundClick[] = {"\exile_assets\sound\twinkle_twister_button_02",0.5,1};
		};
		class InfoText: RscStructuredText
		{
			idc = 4004;
			text = "<t font='PressStart2P' size='0.75' align='center' shadow='0'>100 Pop Tabs per Game</t>";
			x = "0 * (0.025) + (0)";
			y = "23 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {0.47451,0.368627,0.192157,1};
			colorBackground[] = {0,0,0,0};
		};
		class GameText: RscStructuredText
		{
			idc = 4005;
			x = "0.29375 * safezoneW + safezoneX";
			y = "0.291 * safezoneH + safezoneY";
			w = "0.4125 * safezoneW";
			h = "0.341 * safezoneH";
			colorBackground[] = {0,0,0,0};
		};
	};
};
class RscExileUpgradeTerritoryDialog
{
	idd = 20018;
	onLoad = "uiNamespace setVariable ['RscExileUpgradeTerritoryDialog', _this select 0]";
	onUnload = "call ExileClient_gui_upgradeTerritoryDialog_event_onUnload; uiNamespace setVariable ['RscExileUpgradeTerritoryDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = -1;
			x = "10 * (0.025) + (0)";
			y = "6 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "14 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCation: RscText
		{
			idc = -1;
			text = "Upgrade Territory";
			x = "10 * (0.025) + (0)";
			y = "4.9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class RadiusLabel: RscText
		{
			idc = -1;
			text = "New Radius:";
			x = "10.5 * (0.025) + (0)";
			y = "11.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class RespectFeeLabel: RscText
		{
			idc = -1;
			text = "Cost:";
			x = "10.5 * (0.025) + (0)";
			y = "15 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class LevelLabel: RscText
		{
			idc = -1;
			text = "New Level:";
			x = "10.5 * (0.025) + (0)";
			y = "8 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
	};
	class controls
	{
		class TerritoryDropDown: RscCombo
		{
			idc = 4000;
			onLBSelChanged = "_this call ExileClient_gui_upgradeTerritoryDialog_event_onTerritoryDropDownSelectionChanged";
			x = "10.5 * (0.025) + (0)";
			y = "6.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc = -1;
			action = "closeDialog 0";
			x = "23.5 * (0.025) + (0)";
			y = "18.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class UpgradeButton: RscButtonMenuOK
		{
			idc = 4001;
			onMouseButtonClick = "_this call ExileClient_gui_upgradeTerritoryDialog_event_onUpgradeButtonClick";
			text = "Upgrade";
			x = "10.5 * (0.025) + (0)";
			y = "18.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class Cost: RscStructuredText
		{
			idc = 4002;
			text = "<t size='1.4'>0</t>";
			x = "10.5 * (0.025) + (0)";
			y = "16.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class Radius: RscStructuredText
		{
			idc = 4003;
			text = "<t size='1.4'>30m</t>";
			x = "10.5 * (0.025) + (0)";
			y = "13 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class Level: RscStructuredText
		{
			idc = 4004;
			text = "<t size='1.4'>2/10</t>";
			x = "10.5 * (0.025) + (0)";
			y = "9.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "2 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
	};
};
class RscExileVehicleCustomsDialog
{
	idd = 24008;
	onLoad = "uiNamespace setVariable ['RscExileVehicleCustomsDialog', _this select 0]";
	onUnload = "call ExileClient_gui_vehicleCustomsDialog_event_onUnload; uiNamespace setVariable ['RscExileVehicleCustomsDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = 1000;
			x = "0.5 * safezoneW / 40 + safezoneX";
			y = "0.5 * safezoneH / 25 + safezoneY";
			w = "8 * safezoneW / 40";
			h = "11.5 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogTitle: RscText
		{
			idc = 1001;
			text = "Purchase Paintjob";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "1 * safezoneH / 25";
			sizeEx = "1 * safezoneH / 25";
		};
		class CancelBackground: RscText
		{
			idc = 1002;
			x = "0.5 * safezoneW / 40 + safezoneX";
			y = "23 * safezoneH / 25 + safezoneY";
			w = "8 * safezoneW / 40";
			h = "1.5 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
	};
	class controls
	{
		class VehicleDropDown: RscCombo
		{
			idc = 4000;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "2.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			onLBSelChanged = "_this call ExileClient_gui_vehicleCustomsDialog_event_onVehicleDropDownSelectionChanged";
		};
		class SkinsListBox: RscExileItemListBox
		{
			idc = 4001;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "2.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "7 * safezoneH / 25";
			onLBSelChanged = "_this call ExileClient_gui_vehicleCustomsDialog_event_onSkinListBoxSelectionChanged";
		};
		class ButtonPurchase: RscButtonMenuOK
		{
			idc = 4002;
			text = "Purchase now";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "1 * safezoneH / 25";
			sizeEx = "0.75 * safezoneH / 25";
			onMouseButtonClick = "_this call ExileClient_gui_vehicleCustomsDialog_event_onPurchaseButtonClick";
			class Attributes: Attributes
			{
				align = "center";
				valign = "middle";
			};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc = 4003;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "23.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.5 * safezoneH / 25";
			action = "closeDialog 0";
			class Attributes: Attributes
			{
				align = "center";
			};
		};
	};
};
class RscExileVehicleTraderDialog
{
	idd = 24008;
	onLoad = "uiNamespace setVariable ['RscExileVehicleTraderDialog', _this select 0]";
	onUnload = "call ExileClient_gui_vehicleTraderDialog_event_onUnload; uiNamespace setVariable ['RscExileVehicleTraderDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = 1000;
			x = "0.5 * safezoneW / 40 + safezoneX";
			y = "0.5 * safezoneH / 25 + safezoneY";
			w = "8 * safezoneW / 40";
			h = "16.5 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogTitle: RscText
		{
			idc = 1001;
			text = "Purchase Vehicle";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "1 * safezoneH / 25";
			sizeEx = "1 * safezoneH / 25";
		};
		class CancelBackground: RscText
		{
			idc = 1006;
			x = "0.5 * safezoneW / 40 + safezoneX";
			y = "23 * safezoneH / 25 + safezoneY";
			w = "8 * safezoneW / 40";
			h = "1.5 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
	};
	class controls
	{
		class CategoryDropDown: RscCombo
		{
			idc = 4000;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "2.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			onLBSelChanged = "_this call ExileClient_gui_vehicleTraderDialog_event_onCategoryDropDownSelectionChanged";
		};
		class VehiclesListBox: RscExileItemListBox
		{
			idc = 4001;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "2.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "7 * safezoneH / 25";
			onLBSelChanged = "_this call ExileClient_gui_vehicleTraderDialog_event_onVehicleListBoxSelectionChanged";
		};
		class ButtonPurchase: RscButtonMenuOK
		{
			idc = 4002;
			text = "Purchase now";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "15.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "1 * safezoneH / 25";
			sizeEx = "0.75 * safezoneH / 25";
			onMouseButtonClick = "_this call ExileClient_gui_vehicleTraderDialog_event_onPurchaseButtonClick";
			class Attributes: Attributes
			{
				align = "center";
				valign = "middle";
			};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc = 4006;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "23.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.5 * safezoneH / 25";
			action = "closeDialog 0";
			class Attributes: Attributes
			{
				align = "center";
			};
		};
		class PinBox: RscEdit
		{
			idc = 4008;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "14.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.9 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
			onChar = "_this spawn ExileClient_gui_vehicleTraderDialog_event_onInputBoxChars";
		};
		class PinText: RscStructuredText
		{
			text = "Pin Code:";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "13.8 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.8 * safezoneH / 25";
		};
		class Stat01Background: RscText
		{
			idc = 6000;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat01Progress: RscProgress
		{
			idc = 6001;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat01Label: RscText
		{
			idc = 6002;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat01Value: RscStructuredText
		{
			idc = 6003;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
		class Stat02Background: RscText
		{
			idc = 6004;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat02Progress: RscProgress
		{
			idc = 6005;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat02Label: RscText
		{
			idc = 6006;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat02Value: RscStructuredText
		{
			idc = 6007;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
		class Stat03Background: RscText
		{
			idc = 6008;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat03Progress: RscProgress
		{
			idc = 6009;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat03Label: RscText
		{
			idc = 6010;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat03Value: RscStructuredText
		{
			idc = 6011;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
		class Stat04Background: RscText
		{
			idc = 6012;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat04Progress: RscProgress
		{
			idc = 6013;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat04Label: RscText
		{
			idc = 6014;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat04Value: RscStructuredText
		{
			idc = 6015;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
	};
};
class RscExileVirtualGarageDialog
{
	idd = 24036;
	onLoad = "uiNamespace setVariable ['RscExileVirtualGarageDialog', _this select 0]";
	onUnload = "call ExileClient_gui_virtualGarageDialog_event_onUnload; uiNamespace setVariable ['RscExileVirtualGarageDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = 4000;
			x = "0.5 * safezoneW / 40 + safezoneX";
			y = "0.5 * safezoneH / 25 + safezoneY";
			w = "8 * safezoneW / 40";
			h = "16.5 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogTitle: RscText
		{
			idc = 4003;
			text = "Virtual Garage";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "1 * safezoneH / 25";
			sizeEx = "1 * safezoneH / 25";
		};
		class CancelBackground: RscText
		{
			idc = 4004;
			x = "0.5 * safezoneW / 40 + safezoneX";
			y = "23 * safezoneH / 25 + safezoneY";
			w = "8 * safezoneW / 40";
			h = "1.5 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
	};
	class controls
	{
		class LocationDropDown: RscCombo
		{
			idc = 4005;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "2.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			onLBSelChanged = "_this call ExileClient_gui_virtualGarageDialog_event_onLocationChanged";
		};
		class VehiclesListBox: RscExileItemListBox
		{
			idc = 4006;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "2.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "7 * safezoneH / 25";
			onLBSelChanged = "_this call ExileClient_gui_virtualGarageDialog_event_onVehicleChanged";
		};
		class ButtonConfirm: RscButtonMenuOK
		{
			idc = 4007;
			text = "Retrieve Vehicle";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "15.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "1 * safezoneH / 25";
			sizeEx = "0.75 * safezoneH / 25";
			onMouseButtonClick = "_this spawn ExileClient_gui_virtualGarageDialog_event_onConfirmButtonClicked";
			class Attributes: Attributes
			{
				align = "center";
				valign = "middle";
			};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc = 4009;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "23.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.5 * safezoneH / 25";
			action = "closeDialog 0";
			class Attributes: Attributes
			{
				align = "center";
			};
		};
		class NicknameBox: RscEdit
		{
			idc = 4010;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "14.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.9 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class PinText: RscStructuredText
		{
			text = "Vehicle Nickname";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "13.8 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.8 * safezoneH / 25";
		};
		class Stat01Background: RscText
		{
			idc = 4011;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat01Progress: RscProgress
		{
			idc = 4012;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat01Label: RscText
		{
			idc = 4013;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat01Value: RscStructuredText
		{
			idc = 4014;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
		class Stat02Background: RscText
		{
			idc = 4015;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat02Progress: RscProgress
		{
			idc = 4016;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat02Label: RscText
		{
			idc = 4017;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat02Value: RscStructuredText
		{
			idc = 4018;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
		class Stat03Background: RscText
		{
			idc = 4019;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat03Progress: RscProgress
		{
			idc = 4020;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat03Label: RscText
		{
			idc = 4021;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat03Value: RscStructuredText
		{
			idc = 4022;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
		class Stat04Background: RscText
		{
			idc = 4023;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat04Progress: RscProgress
		{
			idc = 4024;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat04Label: RscText
		{
			idc = 4025;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat04Value: RscStructuredText
		{
			idc = 4026;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
	};
};
class RscExileWasteDumpDialog
{
	idd = 24011;
	onLoad = "uiNamespace setVariable ['RscExileWasteDumpDialog', _this select 0]";
	onUnload = "call ExileClient_gui_wasteDumpDialog_event_onUnload; uiNamespace setVariable ['RscExileWasteDumpDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = -1;
			x = "10 * (0.025) + (0)";
			y = "9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "8 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCation: RscText
		{
			idc = -1;
			text = "Waste Dump";
			x = "10 * (0.025) + (0)";
			y = "7.9 * (0.04) + (0)";
			w = "20 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class RevenueLabel: RscText
		{
			idc = -1;
			text = "Revenue:";
			x = "10.5 * (0.025) + (0)";
			y = "12 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
		class ModeLabel: RscText
		{
			idc = -1;
			text = "What would you like to throw away?";
			x = "10.5 * (0.025) + (0)";
			y = "9.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
		};
	};
	class controls
	{
		class ModeDropDown: RscCombo
		{
			idc = 4002;
			x = "10.5 * (0.025) + (0)";
			y = "10.5 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1 * (0.04)";
			onLBSelChanged = "_this call ExileClient_gui_wasteDumpDialog_event_onModeDropDownSelectionChanged";
		};
		class RevenueValue: RscStructuredText
		{
			idc = 4001;
			text = "<t size='1.4'>0<img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='true' /></t>";
			x = "10.5 * (0.025) + (0)";
			y = "13 * (0.04) + (0)";
			w = "19 * (0.025)";
			h = "1.5 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc = -1;
			action = "closeDialog 0";
			x = "23.5 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
		};
		class SellButton: RscButtonMenuOK
		{
			idc = 4000;
			onMouseButtonClick = "_this call ExileClient_gui_wasteDumpDialog_event_onSellButtonClick";
			text = "Adios!";
			x = "10.5 * (0.025) + (0)";
			y = "15.5 * (0.04) + (0)";
			w = "6 * (0.025)";
			h = "1 * (0.04)";
			colorText[] = {1,1,1,1};
		};
	};
};
class RscExileXM8Slide
{
	deletable = 0;
	fade = 0;
	shadow = 0;
	style = 16;
	type = 15;
	x = "0 * (0.025)";
	y = "0 * (0.04)";
	w = "34 * (0.025)";
	h = "19 * (0.04)";
	show = "false";
	class Controls{};
	class HScrollbar: Scrollbar
	{
		show = "false";
	};
	class VScrollbar: Scrollbar
	{
		show = "false";
	};
};
class RscExileXM8Frame: RscText
{
	colorBackground[] = {255,255,255,0.1};
};
class RscExileXM8AppButton: RscButtonMenu
{
	type = 16;
	style = "0x02";
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
	shadow = 0;
	shortcuts[] = {};
	textureNoShortcut = "\A3\Ui_f\data\GUI\RscCommon\RscButtonMenuSteam\steam_ca.paa";
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	colorBackground[] = {255,255,255,0.05};
	colorBackground2[] = {255,255,255,0.05};
	colorBackgroundFocused[] = {255,255,255,0.1};
	colorDisabled[] = {1,1,1,0.25};
	colorDisabledSecondary[] = {1,1,1,0.25};
	colorFocused[] = {"225/255","65/255","65/255",1};
	colorFocusedSecondary[] = {"225/255","65/255","65/255",1};
	colorText[] = {1,1,1,1};
	color[] = {1,1,1,1};
	color2[] = {"225/255","65/255","65/255",1};
	font = "PuristaMedium";
	size = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	sizeEx = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "Text";
	colorSecondary[] = {1,1,1,1};
	color2Secondary[] = {0,0,0,1};
	fontSecondary = "PuristaLight";
	sizeExSecondary = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	textSecondary = "";
	soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	tooltipColorText[] = {1,1,1,1};
	class Attributes
	{
		align = "center";
	};
	class AttributesImage
	{
		align = "center";
		color = "#E5E5E5";
		font = "PuristaMedium";
	};
	class ShortcutPos
	{
		left = 0;
		top = 0;
		h = 1;
		w = 1;
	};
};
class RscExileXM8AppButton1x1: RscExileXM8AppButton
{
	w = "6 * (0.025)";
	h = "5 * (0.04)";
	textureNoShortcut = "";
	text = "";
	class ShortcutPos
	{
		left = "(6 * (0.025)) * 0.25";
		top = "(5 * (0.04)) * 0.15";
		w = "(6 * (0.025)) * 0.5";
		h = "(5 * (0.04)) * 0.5";
	};
	class TextPos
	{
		bottom = 0;
		left = 0;
		right = 0;
		top = "(5 * (0.04)) * 0.65";
	};
};
class RscExileXM8AppButton2x1: RscExileXM8AppButton1x1
{
	w = "12.5 * (0.025)";
	class ShortcutPos
	{
		left = "(12.5 * (0.025)) * 0.5 - (6 * (0.025)) * 0.25";
		top = "(5 * (0.04)) * 0.15";
		w = "(6 * (0.025)) * 0.5";
		h = "(5 * (0.04)) * 0.5";
	};
};
class RscExileXM8Edit: RscEdit
{
	colorBackground[] = {255,255,255,0.1};
	colorDisabled[] = {255,255,255,0.1};
	colorSelection[] = {"0/255","178/255","205/255",1};
	colorText[] = {"252/255","253/255","255/255",1};
	shadow = 2;
	style = "0x00 + 0x50";
	type = 2;
	onSetFocus = "_this call ExileClient_gui_xm8_event_onInputBoxFocus";
	onKillFocus = "_this call ExileClient_gui_xm8_event_onInputBoxKillFocus";
};
class RscExileXM8Button: RscExileXM8AppButton1x1
{
	height = "2 * (0.04)";
	size = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	class Attributes
	{
		align = "center";
	};
	class AttributesImage
	{
		align = "center";
		color = "#E5E5E5";
		font = "PuristaMedium";
	};
	class TextPos
	{
		bottom = 0;
		left = 0;
		right = 0;
		top = "(1 * (0.04)) * 0.5";
	};
};
class RscExileXM8ButtonMenu: RscExileXM8Button
{
	height = "1 * (0.04)";
	class TextPos
	{
		bottom = 0;
		left = 0;
		right = 0;
		top = 0;
	};
};
class RscExileXM8BackButton: RscExileXM8AppButton1x1
{
	textureNoShortcut = "\exile_assets\texture\ui\xm8_back_ca.paa";
	w = "3 * (0.025)";
	h = "2.5 * (0.04)";
	class ShortcutPos
	{
		left = 0;
		top = 0;
		w = "3 * (0.025)";
		h = "2.5 * (0.04)";
	};
};
class RscExileXM8ListBox: RscListBox{};
class RscExileXM8
{
	idd = 24015;
	onLoad = "uiNamespace setVariable ['RscExileXM8', _this select 0]";
	onUnload = "call ExileClient_gui_xm8_event_onUnload; uiNamespace setVariable ['RscExileXM8', displayNull]";
	onKeyUp = "_this call ExileClient_gui_xm8_event_onKeyUp";
	onKeyDown = "_this call ExileClient_gui_xm8_event_onKeyDown";
	class ControlsBackground
	{
		class BackgroundOff: RscPictureKeepAspect
		{
			idc = 4000;
			text = "\exile_assets\texture\ui\xm8_off_ca.paa";
			x = "0 * (0.025) + (0)";
			y = "-4 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "33.3333 * (0.04)";
		};
		class BackgroundOn: RscPictureKeepAspect
		{
			idc = 4001;
			text = "\exile_assets\texture\ui\xm8_on_ca.paa";
			x = "0 * (0.025) + (0)";
			y = "-4 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "33.3333 * (0.04)";
		};
	};
	class Controls
	{
		class Slides: RscExileXM8Slide
		{
			idc = 4007;
			x = "3 * (0.025) + (0)";
			y = "2 * (0.04) + (0)";
			show = "true";
			class Controls
			{
				class SlideApps: RscExileXM8Slide
				{
					idc = 4040;
					show = "true";
					class Controls
					{
						class KillDeathRatio: RscStructuredText
						{
							idc = 4057;
							text = "<t color='#00b2cd' font='RobotoRegular' size='0.7' valign='middle' align='center' shadow='0'><br/><t font='RobotoMedium' size='2' color='#ffffff'>100%</t><br/>Health</t>";
							x = "(4 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "5 * (0.04)";
							colorBackground[] = {255,255,255,0.05};
							size = "10 * pixelH";
						};
						class PopTabs: RscStructuredText
						{
							idc = 4058;
							text = "<t color='#00b2cd' font='RobotoRegular' size='0.7' valign='middle' align='center' shadow='0'><br/><t font='RobotoMedium' size='2' color='#ffffff'>100%</t><br/>Pop Tabs</t>";
							x = "(4 - 3) * (0.025)";
							y = "(9.5 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "5 * (0.04)";
							colorBackground[] = {255,255,255,0.05};
							size = "10 * pixelH";
						};
						class Respect: RscStructuredText
						{
							idc = 4059;
							text = "<t color='#00b2cd' font='RobotoRegular' size='0.7' valign='middle' align='center' shadow='0'><br/><t font='RobotoMedium' size='2' color='#ffffff'>100%</t><br/>Respect</t>";
							x = "(4 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "5 * (0.04)";
							colorBackground[] = {255,255,255,0.05};
							size = "10 * pixelH";
						};
						class App01: RscExileXM8AppButton
						{
							idc = 1111;
							x = "(10.5 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							w = "12.5 * (0.025)";
							h = "10.5 * (0.04)";
							textureNoShortcut = "\exile_assets\texture\ui\xm8_app_network_ca.paa";
							text = "8G Network";
							onButtonClick = "['players', 0] call ExileClient_gui_xm8_slide";
							class ShortcutPos
							{
								left = "(12.5 * (0.025)) * 0.25";
								top = "(10.5 * (0.04)) * 0.25";
								w = "(12.5 * (0.025)) * 0.5";
								h = "(10.5 * (0.04)) * 0.5";
							};
							class TextPos
							{
								bottom = 0;
								left = 0;
								right = 0;
								top = "(10.5 * (0.04)) * 0.75";
							};
						};
						class App02: RscExileXM8AppButton1x1
						{
							idc = 1106;
							x = "(23.5 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							textureNoShortcut = "\exile_assets\texture\ui\xm8_app_party_ca.paa";
							text = "Party";
							onButtonClick = "[] spawn ExileClient_gui_xm8_showPartySlides";
						};
						class App03: RscExileXM8AppButton1x1
						{
							idc = 1105;
							x = "(30 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							textureNoShortcut = "\exile_assets\texture\ui\xm8_app_clan_ca.paa";
							text = "Family";
							onButtonClick = "[] spawn ExileClient_gui_xm8_showClanSlide";
						};
						class App04: RscExileXM8AppButton2x1
						{
							idc = 1113;
							x = "(23.5 - 3) * (0.025)";
							y = "(9.5 - 2) * (0.04)";
							textureNoShortcut = "\exile_assets\texture\ui\xm8_app_territory_ca.paa";
							text = "Territory";
							onButtonClick = "call ExileClient_gui_xm8_showTerritorySlide";
						};
						class App05: RscExileXM8AppButton1x1
						{
							idc = 1104;
							x = "(10.5 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							textureNoShortcut = "\exile_assets\texture\ui\xm8_app_mobile_xm8_ca.paa";
							text = "Mobile XM8";
							onButtonClick = "              if((getText(missionConfigFile >> 'CfgExileMobileXM8' >> 'code')) isEqualTo '')then        {        ['This server does not support the mobile XM8 app yet.<br/>Contact server admin for support.', 'Okay'] call ExileClient_gui_xm8_showWarning;       }       else       {         ['mobileXm8', 0] call ExileClient_gui_xm8_slide;       };";
						};
						class App06: RscExileXM8AppButton1x1
						{
							idc = 1103;
							x = "(17 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							textureNoShortcut = "\exile_assets\texture\ui\xm8_app_virtual_garage_ca.paa";
							text = "Virtual Garage";
							onButtonClick = "call ExileClient_gui_virtualGarageDialog_show";
						};
						class App07: RscExileXM8AppButton1x1
						{
							idc = 1107;
							x = "(23.5 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							textureNoShortcut = "\exile_assets\texture\ui\xm8_app_settings_ca.paa";
							text = "Server Rules";
							onButtonClick = "['server', 0] call ExileClient_gui_xm8_slide";
						};
						class App08: RscExileXM8AppButton1x1
						{
							idc = 1117;
							x = "(30 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							textureNoShortcut = "\exile_assets\texture\ui\xm8_app_extra_apps_ca.paa";
							text = "More";
							onButtonClick = "['extraApps', 0] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlideExtraApps: RscExileXM8Slide
				{
					idc = 5000;
					show = 0;
					class Controls
					{
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc = -1;
							text = "GO BACK";
							x = "(30 - 3) * (0.025)";
							y = "(19 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlideMobileXm8: RscExileXM8Slide
				{
					idc = 4200;
					show = "false";
					class Controls
					{
						class Description: RscStructuredText
						{
							idc = -1;
							x = "11.5 * (0.025)";
							y = "3 * (0.04)";
							w = "20.5 * (0.025)";
							h = "12 * (0.04)";
							colorBackground[] = {0,0,0,0.25};
							text = "<t size='1.5'>Never miss a base raid!<br/><br/></t>Use the code to the left to link your smartphone with your in-game character. You will then receive notifications about base raids, protection money reminders and more!<br/><br/><a href='https://xm8.exilemod.com/'>Read more</a>";
							size = "24 * pixelH";
							class Attributes
							{
								align = "left";
								color = "#ffffff";
								colorLink = "#00b2cd";
								font = "PuristaMedium";
								shadow = 0;
							};
						};
						class CodeLabel: RscStructuredText
						{
							idc = 4201;
							text = "<t color='#00b2cd' font='OrbitronLight' size='1.6' valign='middle' align='center' shadow='0'><br/><br/><br/><t font='OrbitronMedium' size='3.5' color='#ffffff'>ABCD</t><br/>SERVER CODE</t>";
							x = "2 * (0.025)";
							y = "3 * (0.04)";
							w = "9 * (0.025)";
							h = "12 * (0.04)";
							colorBackground[] = {255,255,255,0.05};
							size = "10 * pixelH";
						};
						class PlayStoreImage: RscStructuredText
						{
							idc = -1;
							text = "<t valign='middle' align='center' shadow='0'><a href='https://xm8.exilemod.com/redirect/playstore'><img image='exile_assets\texture\ui\google_play_ca.paa'></a></t>";
							x = "2 * (0.025)";
							y = "9 * (0.04)";
							w = "9 * (0.025)";
							h = "3 * (0.04)";
							colorBackground[] = {0,0,0,0};
							size = "64 * pixelH";
						};
						class AppStoreImage: RscStructuredText
						{
							idc = -1;
							text = "<t valign='middle' align='center' shadow='0'><img color='#40FFFFFF' image='exile_assets\texture\ui\app_store_ca.paa'></t>";
							x = "2 * (0.025)";
							y = "11 * (0.04)";
							w = "9 * (0.025)";
							h = "3 * (0.04)";
							colorBackground[] = {0,0,0,0};
							size = "64 * pixelH";
							tooltip = "Not available yet";
						};
						class GoogleLegalHint: RscText
						{
							idc = -1;
							text = "Google Play and the Google Play logo are trademarks of Google Inc.";
							colorText[] = {1,1,1,0.5};
							x = "2 * (0.025)";
							y = "16 * (0.04)";
							w = "30 * (0.025)";
							h = "1 * (0.04)";
							sizeEx = "14 * pixelH";
						};
						class AppleShitLegalHint: RscText
						{
							idc = -1;
							text = "Apple and the Apple logo are trademarks of Apple Inc. - App Store is a service mark of Apple Inc.";
							colorText[] = {1,1,1,0.5};
							x = "2 * (0.025)";
							y = "17 * (0.04)";
							w = "30 * (0.025)";
							h = "1 * (0.04)";
							sizeEx = "14 * pixelH";
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc = -1;
							text = "GO BACK";
							x = "26 * (0.025)";
							y = "16 * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlideHostParty: RscExileXM8Slide
				{
					idc = 4080;
					show = "false";
					class Controls
					{
						class PartyButton: RscExileXM8Button
						{
							idc = 4081;
							text = "Host Party";
							x = "(10.5 - 3) * (0.025)";
							y = "(12 - 2) * (0.04)";
							w = "19 * (0.025)";
							h = "2 * (0.04)";
							onButtonClick = "_this call ExileClient_gui_xm8_slide_hostParty_event_onOkayButtonClick";
						};
						class NameInput: RscExileXM8Edit
						{
							idc = 4082;
							text = "Eichi's Party";
							x = "(10.5 - 3) * (0.025)";
							y = "(9 - 2) * (0.04)";
							w = "19 * (0.025)";
							h = "2 * (0.04)";
							tooltip = "Name for your party";
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc = -1;
							text = "GO BACK";
							x = "(29 - 3) * (0.025)";
							y = "(18 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlideServer: RscExileXM8Slide
				{
					idc = 4090;
					show = "false";
					class Controls
					{
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc = 4091;
							text = "GO BACK";
							x = "(29 - 3) * (0.025)";
							y = "(18 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
						class InfoHTML: RscHTML
						{
							idc = 4092;
							x = "(5 - 3) * (0.025)";
							y = "(5 - 2) * (0.04)";
							w = "30 * (0.025)";
							h = "12 * (0.04)";
							colorBackground[] = {0,0,0,0.25};
						};
					};
				};
				class SlideClan: RscExileXM8Slide
				{
					idc = 4060;
					show = "false";
					class Controls
					{
						class MembersListBox: RscExileXM8ListBox
						{
							idc = 4061;
							x = "2 * (0.025) + (0)";
							y = "3 * (0.04) + (0)";
							w = "23 * (0.025)";
							h = "14 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_clan_event_onMemberLBSelChanged";
						};
						class KickButton: RscExileXM8ButtonMenu
						{
							idc = 4062;
							text = "KICK";
							x = "26 * (0.025) + (0)";
							y = "6 * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_clan_event_onClanKickButtonClick";
						};
						class LeaveButton: RscExileXM8ButtonMenu
						{
							idc = 4063;
							text = "Leave";
							x = "26 * (0.025) + (0)";
							y = "3 * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_clan_event_onClanLeaveButtonClick";
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
							idc = -1;
							text = "GO BACK";
							x = "26 * (0.025) + (0)";
							y = "16 * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
						};
					};
				};
				class SlideParty: RscExileXM8Slide
				{
					idc = 4100;
					show = "false";
					class Controls
					{
						class MembersListBox: RscExileXM8ListBox
						{
							idc = 4102;
							x = "(5 - 3) * (0.025)";
							y = "(5 - 2) * (0.04)";
							w = "22 * (0.025)";
							h = "14 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_party_event_onMemberListBoxSelectionChanged";
						};
						class KickButton: RscExileXM8ButtonMenu
						{
							idc = 4104;
							text = "KICK";
							x = "(29 - 3) * (0.025)";
							y = "(10 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_party_event_onKickButtonClick";
						};
						class LeaveButton: RscExileXM8ButtonMenu
						{
							idc = 4105;
							text = "LEAVE";
							x = "(29 - 3) * (0.025)";
							y = "(5 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_party_event_onLeaveButtonClick";
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc = -1;
							text = "GO BACK";
							x = "(29 - 3) * (0.025)";
							y = "(18 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlidePlayers: RscExileXM8Slide
				{
					idc = 4110;
					show = "false";
					class Controls
					{
						class PlayersListBox: RscExileXM8ListBox
						{
							idc = 4111;
							x = "(5 - 3) * (0.025) + (0)";
							y = "(5 - 2) * (0.04) + (0)";
							w = "19 * (0.025)";
							h = "14 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_players_event_onPlayerListBoxSelectionChanged";
						};
						class PartyButton: RscExileXM8ButtonMenu
						{
							idc = 4112;
							text = "INVITE TO PARTY";
							x = "(26 - 3) * (0.025) + (0)";
							y = "(5 - 2) * (0.04) + (0)";
							w = "9 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this call ExileClient_gui_xm8_slide_players_event_onPartyButtonClick";
						};
						class ClanButton: RscExileXM8ButtonMenu
						{
							idc = 4116;
							text = "INVITE TO FAMILY";
							x = "23 * (0.025) + (0)";
							y = "5 * (0.04) + (0)";
							w = "9 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this call ExileClient_gui_xm8_slide_players_event_onClanButtonClick";
						};
						class TerritoryGroup: RscExileXM8Frame
						{
							idc = -1;
							x = "23 * (0.025) + (0)";
							y = "7 * (0.04) + (0)";
							w = "9 * (0.025)";
							h = "4 * (0.04)";
						};
						class TerritoryGroupCaption: RscText
						{
							idc = -1;
							text = "TERRITORY";
							sizeEx = "11 * pixelH";
							font = "OrbitronLight";
							colorText[] = {"252/255","253/255","255/255",1};
							x = "23 * (0.025) + (0)";
							y = "7 * (0.04) + (0)";
							w = "9 * (0.025)";
							h = "1 * (0.04)";
							style = 2;
						};
						class TerritoryDropdown: RscCombo
						{
							idc = 4114;
							x = "23.5 * (0.025) + (0)";
							y = "8 * (0.04) + (0)";
							w = "8 * (0.025)";
							h = "1 * (0.04)";
						};
						class GrantTerritoryBuildRightsButton: RscExileXM8ButtonMenu
						{
							idc = 4115;
							text = "GRANT RIGHTS";
							x = "23.5 * (0.025) + (0)";
							y = "9.5 * (0.04) + (0)";
							w = "8 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_players_event_onGrantTerritoryButtonClick";
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc = 4113;
							text = "GO BACK";
							x = "(26 - 3) * (0.025) + (0)";
							y = "(18 - 2) * (0.04) + (0)";
							w = "9 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlideTerritory: RscExileXM8Slide
				{
					idc = 4130;
					show = "false";
					class Controls
					{
						class TerritoryDropdown: RscCombo
						{
							idc = 4132;
							x = "(5 - 3) * (0.025) + (0)";
							y = "(5 - 2) * (0.04) + (0)";
							w = "22 * (0.025)";
							h = "1 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_territory_event_onTerritoryDropdownSelectionChanged";
						};
						class PlayersListBox: RscListBox
						{
							idc = 4131;
							x = "(5 - 3) * (0.025) + (0)";
							y = "(6.5 - 2) * (0.04) + (0)";
							w = "22 * (0.025)";
							h = "11.5 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_territory_event_onPlayerListBoxSelectionChanged";
						};
						class InfoText: RscText
						{
							idc = 4133;
							text = "";
							x = "(5 - 3) * (0.025) + (0)";
							y = "(18 - 2) * (0.04) + (0)";
							w = "22 * (0.025)";
							h = "1 * (0.04)";
							colorBackground[] = {0,0,0,0.8};
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc = -1;
							text = "GO BACK";
							x = "(29 - 3) * (0.025)";
							y = "(18 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
						class KickButton: RscExileXM8ButtonMenu
						{
							idc = 4134;
							text = "KICK";
							x = "(29 - 3) * (0.025) + (0)";
							y = "(6.5 - 2) * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_territory_event_onKickButtonClick";
						};
						class LeaveButton: RscExileXM8ButtonMenu
						{
							idc = 4135;
							text = "LEAVE";
							x = "(29 - 3) * (0.025) + (0)";
							y = "(5 - 2) * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_territory_event_onLeaveButtonClick";
						};
						class PromoteButton: RscExileXM8ButtonMenu
						{
							idc = 4136;
							text = "PROMOTE";
							x = "(29 - 3) * (0.025) + (0)";
							y = "(8 - 2) * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_territory_event_onPromoteButtonClick";
						};
						class DemoteButton: RscExileXM8ButtonMenu
						{
							idc = 4137;
							text = "DEMOTE";
							x = "(29 - 3) * (0.025) + (0)";
							y = "(9.5 - 2) * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_territory_event_onDemoteButtonClick";
						};
						class RadiusButton: RscExileXM8ButtonMenu
						{
							idc = 4138;
							text = "RADIUS";
							x = "(29 - 3) * (0.025) + (0)";
							y = "(11 - 2) * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_territory_event_onRadiusButtonClick";
						};
					};
				};
			};
		};
		class Warning: RscExileXM8Slide
		{
			idc = 4030;
			show = "false";
			x = "3 * (0.025) + (0)";
			y = "(2 + 1.5) * (0.04) + (0)";
			h = "(19 - 1.5) * (0.04)";
			class Controls
			{
				class Background: RscText
				{
					idc = -1;
					x = 0;
					y = 0;
					w = "34 * (0.025)";
					h = "19 * (0.04)";
					colorBackground[] = {"41/255","39/255","46/255",0.95};
				};
				class OkayButton: RscExileXM8Button
				{
					idc = 4031;
					text = "Meh... Okay";
					x = "(16.5 - 3) * (0.025)";
					y = "(12 - 2) * (0.04)";
					w = "7 * (0.025)";
					h = "2 * (0.04)";
					onButtonClick = "call ExileClient_gui_xm8_hideWarning";
				};
				class Message: RscStructuredText
				{
					idc = 4032;
					text = "<t align='center'><t color='#e14141'>Whoops</t><br/><t color='#fcfdff' size='1.4'>Computer says no.</t></t>";
					x = "(4 - 3) * (0.025)";
					y = "(7 - 2) * (0.04)";
					w = "32 * (0.025)";
					h = "3.5 * (0.04)";
					colorBackground[] = {0,0,0,0};
				};
			};
		};
		class Message: RscExileXM8Slide
		{
			idc = 4010;
			show = "false";
			x = "3 * (0.025) + (0)";
			y = "(2 + 1.5) * (0.04) + (0)";
			h = "(19 - 1.5) * (0.04)";
			class Controls
			{
				class Background: RscText
				{
					idc = -1;
					x = 0;
					y = 0;
					w = "34 * (0.025)";
					h = "19 * (0.04)";
					colorBackground[] = {"41/255","39/255","46/255",0.95};
				};
				class OkayButton: RscExileXM8Button
				{
					idc = 4011;
					text = "Okay";
					x = "(16.5 - 3) * (0.025)";
					y = "(12 - 2) * (0.04)";
					w = "7 * (0.025)";
					h = "2 * (0.04)";
					onButtonClick = "call ExileClient_gui_xm8_hideMessage";
				};
				class Question: RscStructuredText
				{
					idc = 4012;
					text = "<t align='center'><t color='#a0df3b'>Yay!</t><br/><t color='#fcfdff' size='1.4'>You have done something cool!</t></t>";
					x = "(4 - 3) * (0.025)";
					y = "(7 - 2) * (0.04)";
					w = "32 * (0.025)";
					h = "3.5 * (0.04)";
					colorBackground[] = {0,0,0,0};
				};
			};
		};
		class Confirm: RscExileXM8Slide
		{
			idc = 4020;
			show = "false";
			x = "3 * (0.025) + (0)";
			y = "(2 + 1.5) * (0.04) + (0)";
			h = "(19 - 1.5) * (0.04)";
			class Controls
			{
				class Background: RscText
				{
					idc = -1;
					x = 0;
					y = 0;
					w = "34 * (0.025)";
					h = "19 * (0.04)";
					colorBackground[] = {"41/255","39/255","46/255",0.95};
				};
				class Question: RscStructuredText
				{
					idc = 4021;
					text = "<t align='center'><t color='#00b2cd'>Confirm</t><br/><t color='#fcfdff' size='1.4'>Kick Eichi?</t></t>";
					x = "(4 - 3) * (0.025)";
					y = "(7 - 2) * (0.04)";
					w = "32 * (0.025)";
					h = "3.5 * (0.04)";
					colorBackground[] = {0,0,0,0};
				};
				class YesButton: RscExileXM8Button
				{
					idc = 4022;
					text = "Kick";
					x = "(12.5 - 3) * (0.025)";
					y = "(12 - 2) * (0.04)";
					w = "7 * (0.025)";
					h = "2 * (0.04)";
					onButtonClick = "true call ExileClient_gui_xm8_hideConfirm";
				};
				class NoButton: RscExileXM8Button
				{
					idc = 4023;
					text = "Don't kick";
					x = "(20.5 - 3) * (0.025)";
					y = "(12 - 2) * (0.04)";
					w = "7 * (0.025)";
					h = "2 * (0.04)";
					onButtonClick = "false call ExileClient_gui_xm8_hideConfirm";
				};
			};
		};
		class LeftHeader: RscStructuredText
		{
			idc = 4003;
			text = "<t align='left' font='RobotoRegular' shadow='0'>147257</t>";
			x = "3 * (0.025) + (0)";
			y = "2.2 * (0.04) + (0)";
			w = "17 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class RightHeader: RscStructuredText
		{
			idc = 4005;
			text = "<t align='right' font='RobotoRegular' shadow='0'><img image='\exile_assets\texture\ui\xm8_signal_0_ca.paa' shadow='0'/> 21:45</t>";
			x = "20 * (0.025) + (0)";
			y = "2.2 * (0.04) + (0)";
			w = "17 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class CenterHeader: RscStructuredText
		{
			idc = 4004;
			text = "<t align='center' font='RobotoMedium' shadow='0'>XM8</t>";
			x = "9 * (0.025) + (0)";
			y = "2.2 * (0.04) + (0)";
			w = "22 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class PowerButton: RscButton
		{
			idc = 4006;
			x = "19 * (0.025) + (0)";
			y = "21 * (0.04) + (0)";
			w = "2 * (0.025)";
			h = "2 * (0.04)";
			tooltip = "On/Off";
			onButtonClick = "[] spawn ExileClient_gui_xm8_togglePower";
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0,0,0,0};
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
		};
		class BackgroundSplash: RscPictureKeepAspect
		{
			idc = 4002;
			text = "\exile_assets\texture\ui\xm8_splash_ca.paa";
			x = "0 * (0.025) + (0)";
			y = "-4 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "33.3333 * (0.04)";
		};
	};
};
class RscGearTemplates
{
	class EmbossIcons
	{
		uniformTab = "exile_assets\texture\ui\inventory\uniform_ca.paa";
		vestTab = "exile_assets\texture\ui\inventory\vest_ca.paa";
		backpackTab = "exile_assets\texture\ui\inventory\backpack_ca.paa";
		headGearSlot = "exile_assets\texture\ui\inventory\headgear_ca.paa";
		gogglesSlot = "exile_assets\texture\ui\inventory\goggles_ca.paa";
		hmdSlot = "exile_assets\texture\ui\inventory\nvgs_ca.paa";
		binocSlot = "exile_assets\texture\ui\inventory\binoculars_ca.paa";
		primarySlot = "exile_assets\texture\ui\inventory\primaryweapon_ca.paa";
		secondarySlot = "exile_assets\texture\ui\inventory\secondaryweapon_ca.paa";
		handgunSlot = "exile_assets\texture\ui\inventory\handgun_ca.paa";
		muzzleSlot = "exile_assets\texture\ui\inventory\itemmuzzle_ca.paa";
		opticsSlot = "exile_assets\texture\ui\inventory\itemoptic_ca.paa";
		flashlightSlot = "exile_assets\texture\ui\inventory\itemacc_ca.paa";
		magazineSlot = "exile_assets\texture\ui\inventory\cargomag_ca.paa";
		magazineGLSlot = "exile_assets\texture\ui\inventory\cargoput_ca.paa";
		underBarrelSlot = "exile_assets\texture\ui\inventory\itembipod_ca.paa";
		mapSlot = "exile_assets\texture\ui\inventory\map_ca.paa";
		compassSlot = "exile_assets\texture\ui\inventory\compass_ca.paa";
		watchSlot = "exile_assets\texture\ui\inventory\watch_ca.paa";
		radioSlot = "exile_assets\texture\ui\inventory\radio_ca.paa";
		gpsSlot = "exile_assets\texture\ui\inventory\gps_ca.paa";
	};
};
class RscInGameUI
{
	class RscUnitInfo
	{
		class WeaponInfoControlsGroupLeft: RscControlsGroup
		{
			show = 0;
			y = -1;
		};
		class WeaponInfoControlsGroupRight: RscControlsGroup
		{
			show = 0;
			y = -1;
		};
		class CA_BackgroundVehicle: RscPicture
		{
			show = 0;
			y = -1;
		};
		class CA_BackgroundVehicleTitle: RscText
		{
			show = 0;
			y = -1;
		};
		class CA_BackgroundVehicleTitleDark: RscText
		{
			show = 0;
			y = -1;
		};
		class CA_BackgroundFuel: RscPicture
		{
			show = 0;
			y = -1;
		};
		class CA_Vehicle: RscText
		{
			show = 0;
			y = -1;
		};
		class CA_VehicleRole: RscPicture
		{
			show = 0;
			y = -1;
		};
		class CA_ValueFuel: RscProgress
		{
			show = 0;
			y = -1;
		};
		class CA_SpeedBackground: RscText
		{
			show = 0;
			y = -1;
		};
		class CA_Speed: RscText
		{
			show = 0;
			y = -1;
		};
		class CA_SpeedUnits: RscText
		{
			show = 0;
			y = -1;
		};
		class CA_AltBackground: RscText
		{
			show = 0;
			y = -1;
		};
		class CA_Alt: RscText
		{
			show = 0;
			y = -1;
		};
		class CA_AltUnits: RscText
		{
			show = 0;
			y = -1;
		};
		class CA_Depth: RscText
		{
			show = 0;
			y = -1;
		};
		class CA_HitZones: RscHitZones
		{
			show = 0;
			y = -1;
		};
		class CA_VehicleTogglesBackground: RscText
		{
			show = 0;
			y = -1;
		};
		class CA_VehicleToggles: RscVehicleToggles
		{
			show = 0;
			y = -1;
		};
		class CA_Zeroing: RscText
		{
			show = 0;
			y = -1;
		};
		class CA_TextFlaresMode: RscIGUIText
		{
			show = 0;
			y = -1;
		};
		class CA_TextFlares: RscIGUIValue
		{
			show = 0;
			y = -1;
		};
		class CA_Throttle: RscText
		{
			show = 0;
			y = -1;
		};
	};
	class RscStanceInfo
	{
		show = 0;
		y = -1;
		class StanceIndicatorBackground: RscPicture
		{
			show = 0;
			y = -1;
		};
		class StanceIndicator: RscPictureKeepAspect
		{
			show = 0;
			y = -1;
		};
	};
	class RscWeaponZeroing: RscUnitInfo
	{
		class CA_Zeroing: RscText
		{
			show = 0;
			y = -1;
		};
	};
	class RscWeaponRangeZeroing: RscUnitInfo
	{
		class CA_DistanceText: RscOpticsText
		{
			show = 0;
			y = -1;
		};
		class CA_Distance: RscOpticsValue
		{
			show = 0;
			y = -1;
		};
	};
	class RscHint
	{
		idd = 301;
		movingEnable = 0;
		controls[] = {"Background","Hint"};
		class Background: RscText
		{
			idc = 101;
			style = 128;
			x = "safeZoneX + safeZoneW * 0.5 - safeZoneW * 0.1";
			y = "(safeZoneY + safeZoneH) - 60 * pixelH - 60 * pixelH";
			w = "safeZoneW * 0.2";
			h = "50 * pixelH";
			text = "";
			colorBackground[] = {"19/255","22/255","27/255",0.8};
			shadow = 0;
		};
		class Hint: RscStructuredText
		{
			idc = 102;
			x = "safeZoneX + safeZoneW * 0.5 - safeZoneW * 0.1 + 10 * pixelW";
			y = "(safeZoneY + safeZoneH) - 60 * pixelH - 60 * pixelH";
			w = "safeZoneW * 0.2 - 20 * pixelW";
			h = "40 * pixelH";
			style = 16;
			shadow = 0;
			size = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			class Attributes: Attributes{};
		};
	};
	class RscUnitInfoAirNoWeapon: RscUnitInfo
	{
		class CA_VehicleToggles: RscVehicleToggles
		{
			show = 0;
			y = -1;
		};
		class CA_Throttle: RscText
		{
			show = 0;
			y = -1;
		};
	};
	class RscUnitInfoAir: RscUnitInfoAirNoWeapon
	{
		class CA_VehicleToggles: RscVehicleToggles
		{
			show = 0;
			y = -1;
		};
		class CA_Throttle: RscText
		{
			show = 0;
			y = -1;
		};
	};
	class RscUnitInfoAirPlaneNoWeapon: RscUnitInfoAirNoWeapon
	{
		class CA_VehicleToggles: RscVehicleToggles
		{
			show = 0;
			y = -1;
		};
		class CA_Throttle: RscText
		{
			show = 0;
			y = -1;
		};
	};
	class RscUnitInfoAirPlane: RscUnitInfoAirPlaneNoWeapon
	{
		class CA_VehicleToggles: RscVehicleToggles
		{
			show = 0;
			y = -1;
		};
		class CA_Throttle: RscText
		{
			show = 0;
			y = -1;
		};
	};
};
class RscExileMostWantedDialog
{
	idd = "IDD_EXILE_MOST_WANTED_DIALOG";
	onLoad = "uiNamespace setVariable ['RscExileMostWantedDialog', _this select 0]";
	onUnload = "call ExileClient_gui_mostWantedDialog_event_onUnload; uiNamespace setVariable ['RscExileMostWantedDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackgroundRight: RscText
		{
			idc = 1002;
			x = "0 * (0.025) + (0)";
			y = "1 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "24 * (0.04)";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogCaptionRight: RscText
		{
			idc = 1003;
			text = "MOST WANTED";
			x = "0 * (0.025) + (0)";
			y = "-0.1 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
	};
	class controls
	{
		class CloseCross: RscActiveText
		{
			idc = 3032;
			x = "42.8 * (0.025) + (0)";
			y = "0.2 * (0.04) + (0)";
			w = "1 * (0.025)";
			h = "0.5 * (0.04)";
			action = "closeDialog 0;";
			style = 2096;
			color[] = {1,1,1,0.7};
			colorText[] = {1,1,1,0.7};
			colorActive[] = {1,1,1,1};
			tooltip = "Close";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};
		class CancelButton: RscButtonMenuCancel
		{
			x = "28.5 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
			action = "closeDialog 0";
		};
		class BountyListBox: RscListBox
		{
			idc = 1500;
			x = "0.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "27.5 * (0.025)";
			h = "23 * (0.04)";
		};
		class PlayerLabel: RscText
		{
			idc = 1004;
			text = "Player Name:";
			x = "28.5 * (0.025) + (0)";
			y = "1.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class PlayerDropdown: RscCombo
		{
			idc = 2100;
			x = "28.5 * (0.025) + (0)";
			y = "2.5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class BountyDropdown: RscCombo
		{
			idc = 2101;
			x = "28.5 * (0.025) + (0)";
			y = "5 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class BountyLabel: RscText
		{
			idc = 1005;
			text = "Bounty:";
			x = "28.5 * (0.025) + (0)";
			y = "4 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
		class AddBountyButton: RscButtonMenu
		{
			idc = 2400;
			text = "ADD BOUNTY";
			x = "28.5 * (0.025) + (0)";
			y = "7 * (0.04) + (0)";
			w = "11 * (0.025)";
			h = "1 * (0.04)";
		};
	};
};
class RscPendingInvitation
{
	textureConnectionQualityPoor = "\exile_assets\texture\hud\hud_icon_connection_yellow_ca.paa";
	textureConnectionQualityBad = "\exile_assets\texture\hud\hud_icon_connection_red_ca.paa";
	textureDesyncLow = "\exile_assets\texture\hud\hud_icon_connection_yellow_ca.paa";
	textureDesyncHigh = "\exile_assets\texture\hud\hud_icon_connection_red_ca.paa";
	color[] = {1,1,1,1};
	x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
	y = "(safeZoneY + safeZoneH) - 455 * pixelH - 64 * pixelH";
	w = "64 * pixelW";
	h = "64 * pixelH";
	shadow = 0;
	timeout = 10;
	blinkingPeriod = 2;
};
class RscPendingInvitationInGame
{
	textureConnectionQualityPoor = "\exile_assets\texture\hud\hud_icon_connection_yellow_ca.paa";
	textureConnectionQualityBad = "\exile_assets\texture\hud\hud_icon_connection_red_ca.paa";
	textureDesyncLow = "\exile_assets\texture\hud\hud_icon_connection_yellow_ca.paa";
	textureDesyncHigh = "\exile_assets\texture\hud\hud_icon_connection_red_ca.paa";
	color[] = {1,1,1,1};
	x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
	y = "(safeZoneY + safeZoneH) - 540 * pixelH - 64 * pixelH";
	w = "64 * pixelW";
	h = "64 * pixelH";
	shadow = 0;
	timeout = 10;
	blinkingPeriod = 2;
};
class RscTitles
{
	titles[] = {};
	class RscExileRussianRoulette
	{
		idd = 24031;
		duration = 999999;
		fadein = 1;
		fadeout = 1;
		onLoad = "uiNamespace setVariable ['RscExileRussianRoulette', _this select 0];";
		onUnload = "uiNamespace setVariable ['RscExileRussianRoulette', displayNull]";
		class controls
		{
			class PotBackground: RscText
			{
				idc = 4000;
				x = "safeZoneX + 30 * pixelW";
				y = "safeZoneY + 30 * pixelH";
				w = "250 * pixelW";
				h = "70 * pixelH";
				colorBackground[] = {0.0745098,0.0862745,0.105882,0.8};
			};
			class PotValue: RscStructuredText
			{
				idc = 4007;
				text = "<t size='1.6' font='OrbitronMedium' align='center' shadow='false'>10,000<t color='#3fd4fc'><img image='\exile_assets\texture\ui\poptab_notification_ca.paa' size='1' shadow='false' /></t></t>";
				x = "safeZoneX + 30 * pixelW";
				y = "safeZoneY + (30+17) * pixelH";
				w = "250 * pixelW";
				h = "70 * pixelH";
				colorBackground[] = {0,0,0,0};
			};
			class InfoWindow: RscText
			{
				idc = 4001;
				x = "safeZoneX + 30 * pixelW";
				y = "safeZoneY + (30+70+5) * pixelH";
				w = "250 * pixelW";
				h = "180 * pixelH";
				colorBackground[] = {0.0745098,0.0862745,0.105882,0.8};
			};
			class PlayerList: RscStructuredText
			{
				idc = 4006;
				text = "<t shadow='false'><t color='#3fd4fc'>Player 1</t><br/><t>Player 2</t><br/><t color='#808080'>Player 2</t><br/><t>Player 4</t><br/><t color='#808080'>(open)</t><br/><t color='#808080'>(open)</t></t>";
				x = "safeZoneX + (30+2) * pixelW";
				y = "safeZoneY + (30+70+5+5) * pixelH";
				w = "(250-2) * pixelW";
				h = "(180-5) * pixelH";
				colorBackground[] = {0,0,0,0};
			};
			class ShotBackground: RscText
			{
				idc = 4002;
				x = "safeZoneX + safeZoneW * 0.5 - 45 * pixelW";
				y = "safezoneY + 30 * pixelH";
				w = "90 * pixelW";
				h = "70 * pixelH";
				colorBackground[] = {0.0745098,0.0862745,0.105882,0.8};
			};
			class ShotValue: RscStructuredText
			{
				idc = 4008;
				text = "<t align='center' size='2' color='#ffffff' shadow='false' font='OrbitronMedium'>1</t>";
				x = "safeZoneX + safeZoneW * 0.5 - 45 * pixelW";
				y = "safeZoneY + 30 * pixelH";
				w = "90 * pixelW";
				h = "70 * pixelH";
				colorBackground[] = {0,0,0,0};
			};
			class ShotLabel: RscStructuredText
			{
				idc = 4005;
				text = "<t align='center' size='0.75' color='#3fd4fc' font='OrbitronLight' shadow='false'>SHOT</t>";
				x = "safeZoneX + safeZoneW * 0.5 - 45 * pixelW";
				y = "safezoneY + (30+45) * pixelH";
				w = "90 * pixelW";
				h = "25 * pixelH";
				colorBackground[] = {0,0,0,0};
			};
			class TimeBackground: RscText
			{
				idc = 4004;
				x = "safeZoneX + safeZoneW * 0.5 - 45 * pixelW";
				y = "safezoneY + (30+70+5) * pixelH";
				w = "90 * pixelW";
				h = "25 * pixelH";
				colorBackground[] = {0.0745098,0.0862745,0.105882,0.8};
			};
			class TimeValue: RscStructuredText
			{
				idc = 4009;
				text = "<t align='center' size='0.7' color='#ffffff' shadow='false' font='RobotoCondensed'>00.000</t>";
				x = "safeZoneX + safeZoneW * 0.5 - 45 * pixelW";
				y = "safezoneY + (30+70+5+5) * pixelH";
				w = "90 * pixelW";
				h = "25 * pixelH";
				colorBackground[] = {0,0,0,0};
			};
			class PressSpaceHint: RscStructuredText
			{
				idc = 4003;
				text = "<t align='center' size='2' color='#ffffff' shadow='false'>Press <t color='#3fd4fc'>SPACE</t> to fire</t>";
				x = "safeZoneX + safeZoneW * 0.5 - 225 * pixelW";
				y = "safeZoneY + safeZoneH - (60+49) * pixelH";
				w = "550 * pixelW";
				h = "49 * pixelH";
				colorBackground[] = {0.0745098,0.0862745,0.105882,0.8};
			};
		};
	};
	class RscExileGasMask
	{
		idd = 24000;
		duration = 999999;
		fadein = 1;
		fadeout = 1;
		class controls
		{
			class Overlay: RscPicture
			{
				idc = -1;
				x = "safezoneX";
				y = "safezoneY";
				w = "safezoneW";
				h = "safezoneH";
				text = "\exile_assets\texture\ui\Exile_GasMask_ca.paa";
			};
		};
	};
	class RscExileConstructionMode
	{
		idd = 24006;
		onLoad = "uiNamespace setVariable ['RscExileConstructionMode', _this select 0];";
		onUnload = "uiNamespace setVariable ['RscExileConstructionMode', displayNull]";
		duration = 999999;
		fadein = 1;
		fadeout = 1;
		class controls
		{
			class Mode: RscText
			{
				idc = 1000;
				text = "FREE MODE, NO PHYSICS";
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 250 * pixelW";
				y = "safeZoneY + 60 * pixelH";
				w = "250 * pixelW";
				h = "40 * pixelH";
				style = 2;
				colorBackground[] = {"19/255","22/255","27/255",0.8};
			};
			class DescriptionBackground: RscText
			{
				idc = 1002;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 250 * pixelW";
				y = "safeZoneY + 60 * pixelH + 40 * pixelH + 10 * pixelH";
				w = "250 * pixelW";
				h = "350 * pixelH";
				colorBackground[] = {"19/255","22/255","27/255",0.8};
			};
			class Description: RscStructuredText
			{
				idc = 1001;
				text = "<t align='left'>Free Mode</t><t align='right' color='#3fd4fc'>1</t><br/><t align='left'>Grid Mode</t><t align='right' color='#3fd4fc'>2</t><br/><t align='left'>Snap Mode</t><t align='right' color='#3fd4fc'>3</t><br/><br/><t align='left'>Toggle Physics</t><t align='right' color='#3fd4fc'>4</t><br/><t align='left'>Toggle Assistant</t><t align='right' color='#3fd4fc'>5</t><br/><t align='left'>Freeze Object</t><t align='right' color='#3fd4fc'>6</t><br/><br/><t align='left'>Rotation</t><t align='right' color='#3fd4fc'>Q/E</t><br/><t align='left'>Elevation</t><t align='right' color='#3fd4fc'>PAGE UP/DOWN</t><br/><t align='left'>Distance</t><t align='right' color='#3fd4fc'>HOME/END</t><br/><br/><t align='left'>Larger Steps</t><t align='right' color='#3fd4fc'>SHIFT</t><br/><t align='left'>Smaller Steps</t><t align='right' color='#3fd4fc'>CONTROL</t><br/><br/><t align='left'>Place</t><t align='right' color='#3fd4fc'>SPACE</t><br/><t align='left'>Abort</t><t align='right' color='#3fd4fc'>ESCAPE</t>";
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 250 * pixelW + 10 * pixelW";
				y = "safeZoneY + 60 * pixelH + 40 * pixelH + 10 * pixelH + 10 * pixelH";
				w = "(250 - 20) * pixelW";
				h = "(450 - 20) * pixelH";
				size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
				colorBackground[] = {0,0,0,0};
			};
		};
	};
	class RscExileHUD
	{
		idd = 24014;
		duration = 999999;
		fadein = 1;
		fadeout = 1;
		onLoad = "uiNamespace setVariable ['RscExileHUD', _this select 0];";
		class controls
		{
			class BulletCamera: RscControlsGroup
			{
				idc = 1500;
				x = "(safezoneX + safezoneW) - 60 * pixelW - 512 * pixelW";
				y = "safezoneY + 60 * pixelH";
				w = "512 * pixelW";
				h = "256 * pixelH";
				duration = 999999;
				fadein = 1;
				fadeout = 1;
				show = 0;
				class controls
				{
					class Background: RscText
					{
						idc = 1501;
						x = 0;
						y = 0;
						w = "512 * pixelW";
						h = "256 * pixelH";
						text = "";
						colorBackground[] = {0,0,0,1};
					};
					class RenderSurface: RscPicture
					{
						idc = 1502;
						x = 0;
						y = 0;
						w = "512 * pixelW";
						h = "256 * pixelH";
						text = "#(argb,512,256,1)r2t(ExileBulletCameraRenderSurface,1.0)";
					};
					class Noise01: RscPicture
					{
						idc = 1505;
						x = 0;
						y = 0;
						w = "512 * pixelW";
						h = "256 * pixelH";
						text = "\exile_assets\texture\hud\hud_bulletcam_noise01_ca.paa";
						blinkingPeriod = 0.05;
					};
					class Noise02: RscPicture
					{
						idc = 1506;
						x = 0;
						y = 0;
						w = "512 * pixelW";
						h = "256 * pixelH";
						text = "\exile_assets\texture\hud\hud_bulletcam_noise02_ca.paa";
						blinkingPeriod = 0.2;
					};
					class Noise03: RscPicture
					{
						idc = 1507;
						x = 0;
						y = 0;
						w = "512 * pixelW";
						h = "256 * pixelH";
						text = "\exile_assets\texture\hud\hud_bulletcam_noise03_ca.paa";
						blinkingPeriod = 0.15;
					};
					class Overlay: RscPicture
					{
						idc = 1503;
						x = 0;
						y = 0;
						w = "512 * pixelW";
						h = "256 * pixelH";
						text = "\exile_assets\texture\hud\hud_bulletcam_overlay_ca.paa";
					};
					class Status: RscText
					{
						idc = 1504;
						x = 0;
						y = 0;
						w = "512 * pixelW";
						h = "30 * pixelH";
						colorText[] = {1,1,1,1};
						text = "NO SIGNAL";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "11 * pixelH";
					};
				};
			};
			class Grenade: RscControlsGroup
			{
				idc = 1400;
				x = "(safezoneX + safezoneW) - 256 * pixelW - 60 * pixelW";
				y = "(safezoneY + safezoneH) - 128 * pixelH - 60 * pixelH";
				w = "256 * pixelW";
				h = "128 * pixelH";
				show = "false";
				class controls
				{
					class WeaponBackground: RscPictureKeepAspect
					{
						idc = 1401;
						x = 0;
						y = 0;
						w = "256 * pixelW";
						h = "128 * pixelH";
						colorText[] = {1,1,1,1};
						text = "\exile_assets\texture\hud\hud_panel_grenade_ca.paa";
					};
					class Ammo: RscText
					{
						idc = 1402;
						x = "256 * pixelW - 55 * pixelW";
						y = "128 * pixelH - 95 * pixelH";
						w = "45 * pixelW";
						h = "35 * pixelH";
						colorText[] = {1,1,1,1};
						text = "";
						font = "OrbitronMedium";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "29 * pixelH";
					};
					class TypeSingleLine: RscText
					{
						idc = 1403;
						x = "256 * pixelW - 115 * pixelW";
						y = "128 * pixelH - 95 * pixelH";
						w = "60 * pixelW";
						h = "35 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "RGO";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 1;
						style = 1;
						sizeEx = "11 * pixelH";
						show = "false";
					};
					class TypeDoubleLine1: RscText
					{
						idc = 1404;
						x = "256 * pixelW - 115 * pixelW";
						y = "128 * pixelH - 90 * pixelH";
						w = "60 * pixelW";
						h = "15 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "RGO";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 1;
						style = 1;
						sizeEx = "11 * pixelH";
						show = "false";
					};
					class TypeDoubleLine2: RscText
					{
						idc = 1405;
						x = "256 * pixelW - 115 * pixelW";
						y = "128 * pixelH - 80 * pixelH";
						w = "60 * pixelW";
						h = "15 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "RGO";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 1;
						style = 1;
						sizeEx = "11 * pixelH";
						show = "false";
					};
				};
			};
			class Weapon: RscControlsGroup
			{
				idc = 1100;
				x = "(safezoneX + safezoneW) - 256 * pixelW - 60 * pixelW";
				y = "(safezoneY + safezoneH) - 128 * pixelH - 60 * pixelH";
				w = "256 * pixelW";
				h = "128 * pixelH";
				class controls
				{
					class WeaponBackground: RscPictureKeepAspect
					{
						idc = 1101;
						x = 0;
						y = 0;
						w = "256 * pixelW";
						h = "128 * pixelH";
						colorText[] = {1,1,1,1};
						text = "\exile_assets\texture\hud\hud_panel_weapon_ca.paa";
					};
					class Ammo: RscText
					{
						idc = 1102;
						x = "256 * pixelW - 235 * pixelW";
						y = "128 * pixelH - 50 * pixelH";
						w = "125 * pixelW";
						h = "50 * pixelH";
						colorText[] = {1,1,1,1};
						text = "30";
						font = "OrbitronMedium";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "50 * pixelH";
					};
					class Magazines: RscText
					{
						idc = 1104;
						x = "256 * pixelW - 115 * pixelW";
						y = "128 * pixelH - 40 * pixelH";
						w = "55 * pixelW";
						h = "30 * pixelH";
						colorText[] = {1,1,1,1};
						text = "2";
						font = "OrbitronMedium";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "30 * pixelH";
					};
					class Zeroing: RscText
					{
						idc = 1105;
						x = "256 * pixelW - 55 * pixelW - 10 * pixelW";
						y = "128 * pixelH - 45 * pixelH";
						w = "55 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"111/255","113/255","122/255",1};
						text = "100m";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
					};
					class FireMode: RscText
					{
						idc = 1103;
						x = "256 * pixelW - 60 * pixelW - 10 * pixelW";
						y = "128 * pixelH - 25 * pixelH";
						w = "60 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"111/255","113/255","122/255",1};
						text = "SEMI";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
					};
				};
			};
			class Vehicle: RscControlsGroup
			{
				idc = 1200;
				x = "(safezoneX + safezoneW) - 256 * pixelW - 60 * pixelW";
				y = "(safezoneY + safezoneH) - 128 * pixelH - 60 * pixelH";
				w = "256 * pixelW";
				h = "128 * pixelH";
				class controls
				{
					class VehicleBackground: RscPictureKeepAspect
					{
						idc = 1201;
						x = 0;
						y = 0;
						w = "256 * pixelW";
						h = "128 * pixelH";
						colorText[] = {1,1,1,1};
						text = "\exile_assets\texture\hud\hud_panel_weapon_ca.paa";
					};
					class Speed: RscText
					{
						idc = 1202;
						x = "256 * pixelW - 235 * pixelW";
						y = "128 * pixelH - 50 * pixelH";
						w = "125 * pixelW";
						h = "50 * pixelH";
						colorText[] = {1,1,1,1};
						text = "30";
						font = "OrbitronMedium";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "50 * pixelH";
					};
					class Height: RscText
					{
						idc = 1203;
						x = "256 * pixelW - 55 * pixelW - 10 * pixelW";
						y = "128 * pixelH - 45 * pixelH";
						w = "55 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"111/255","113/255","122/255",1};
						text = "100m";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
						show = "false";
					};
					class Fuel: RscText
					{
						idc = 1204;
						x = "256 * pixelW - 100 * pixelW - 10 * pixelW";
						y = "128 * pixelH - 25 * pixelH";
						w = "100 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"111/255","113/255","122/255",1};
						text = "";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
					};
				};
			};
			class Stats: RscControlsGroup
			{
				idc = 1300;
				x = "safeZoneX + 60 * pixelW";
				y = "(safeZoneY + safeZoneH) - 60 * pixelH - 64 * pixelH";
				w = "256 * pixelW";
				h = "64 * pixelH";
				class controls
				{
					class StatsBackground: RscPictureKeepAspect
					{
						idc = 1301;
						x = 0;
						y = 0;
						w = "256 * pixelW";
						h = "64 * pixelH";
						colorText[] = {1,1,1,1};
						text = "\exile_assets\texture\hud\hud_panel_player_ca.paa";
					};
					class HungerLabel: RscText
					{
						idc = 1303;
						x = "10 * pixelW";
						y = "64 * pixelH - 45 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "HUNGER";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "11 * pixelH";
					};
					class ThirstLabel: RscText
					{
						idc = 1305;
						x = "10 * pixelW";
						y = "64 * pixelH - 25 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "THIRST";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "11 * pixelH";
					};
					class Hunger: RscText
					{
						idc = 1302;
						x = "85 * pixelW";
						y = "64 * pixelH - 45 * pixelH";
						w = "50 * pixelW";
						h = "20 * pixelH";
						colorText[] = {1,1,1,1};
						text = "100%";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
					};
					class Thirst: RscText
					{
						idc = 1304;
						x = "85 * pixelW";
						y = "64 * pixelH - 25 * pixelH";
						w = "50 * pixelW";
						h = "20 * pixelH";
						colorText[] = {1,1,1,1};
						text = "100%";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
					};
					class HealthLabel: RscText
					{
						idc = 1307;
						x = "10 * pixelW";
						y = "64 * pixelH - 35 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "HP";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "11 * pixelH";
						show = "false";
					};
					class Health: RscText
					{
						idc = 1306;
						x = "55 * pixelW";
						y = "64 * pixelH - 45 * pixelH";
						w = "80 * pixelW";
						h = "40 * pixelH";
						colorText[] = {1,1,1,1};
						text = "100%";
						font = "OrbitronMedium";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "30 * pixelH";
						show = "false";
					};
					class EnvironmentTemperatureLabel: RscText
					{
						idc = 1309;
						x = "10 * pixelW";
						y = "64 * pixelH - 45 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "CLIMATE";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "11 * pixelH";
						show = "false";
					};
					class BodyTemperatureLabel: RscText
					{
						idc = 1311;
						x = "10 * pixelW";
						y = "64 * pixelH - 25 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "BODY";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "11 * pixelH";
						show = "false";
					};
					class EnvironmentTemperature: RscText
					{
						idc = 1308;
						x = "65 * pixelW";
						y = "64 * pixelH - 45 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {1,1,1,1};
						text = "0°C";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
						show = "false";
					};
					class BodyTemperature: RscText
					{
						idc = 1310;
						x = "65 * pixelW";
						y = "64 * pixelH - 25 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {1,1,1,1};
						text = "37°C";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
						show = "false";
					};
				};
			};
			class MuzzleDisplay: RscText
			{
				idc = 1005;
				x = "(safeZoneX + safeZoneW) - 280 * pixelW";
				y = "(safeZoneY + safeZoneH) - 50 * pixelH";
				w = "220 * pixelW";
				h = "30 * pixelH";
				colorText[] = {1,1,1,1};
				colorBackground[] = {"19/255","22/255","27/255",0.8};
				text = "";
				shadow = 0;
				fixedWidth = 0;
				sizeEx = "18 * pixelH";
				fade = 1;
				style = 1;
			};
			class GroupMembers: RscStructuredText
			{
				idc = 1000;
				x = "safeZoneX + 60 * pixelW";
				y = "safeZoneY + 60 * pixelH";
				w = "400 * pixelW";
				h = "500 * pixelH";
				colorBackground[] = {0,0,0,0};
				lineSpacing = 2;
				text = "";
				shadow = 2;
			};
			class HungerIcon: RscPictureKeepAspect
			{
				idc = 1002;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y = "(safeZoneY + safeZoneH) - 630 * pixelH - 64 * pixelH";
				w = "64 * pixelW";
				h = "64 * pixelH";
				text = "\exile_assets\texture\hud\hud_icon_hunger_ca.paa";
				shadow = 0;
				show = "false";
				colorText[] = {1,1,1,1};
				blinkingPeriod = 0.75;
			};
			class ThirstIcon: RscPictureKeepAspect
			{
				idc = 1007;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y = "(safeZoneY + safeZoneH) - 720 * pixelH - 64 * pixelH";
				w = "64 * pixelW";
				h = "64 * pixelH";
				text = "\exile_assets\texture\hud\hud_icon_thirst_ca.paa";
				shadow = 0;
				show = "false";
				colorText[] = {1,1,1,1};
				blinkingPeriod = 0.75;
			};
			class CombatIcon: RscPictureKeepAspect
			{
				idc = 1008;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y = "(safeZoneY + safeZoneH) - 810 * pixelH - 64 * pixelH";
				w = "64 * pixelW";
				h = "64 * pixelH";
				text = "\exile_assets\texture\hud\hud_icon_combat_ca.paa";
				shadow = 0;
				show = "false";
				colorText[] = {1,1,1,1};
				blinkingPeriod = 0.75;
			};
			class BambiIcon: RscPictureKeepAspect
			{
				idc = 1003;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y = "(safeZoneY + safeZoneH) - 455 * pixelH - 64 * pixelH";
				w = "64 * pixelW";
				h = "64 * pixelH";
				text = "\exile_assets\texture\hud\hud_icon_bambi_ca.paa";
				shadow = 0;
				show = "false";
				colorText[] = {1,1,1,1};
			};
			class EarPlugsIcon: RscPictureKeepAspect
			{
				idc = 1004;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y = "(safeZoneY + safeZoneH) - 365 * pixelH - 64 * pixelH";
				w = "64 * pixelW";
				h = "64 * pixelH";
				text = "\exile_assets\texture\hud\hud_icon_earplugs_ca.paa";
				shadow = 0;
				show = "false";
				colorText[] = {1,1,1,1};
			};
			class AutoRunIcon: RscPictureKeepAspect
			{
				idc = 1006;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y = "(safeZoneY + safeZoneH) - 275 * pixelH - 64 * pixelH";
				w = "64 * pixelW";
				h = "64 * pixelH";
				text = "\exile_assets\texture\hud\hud_icon_autorun_ca.paa";
				shadow = 0;
				show = "false";
				colorText[] = {1,1,1,1};
			};
		};
	};
	class RscExileToastArea
	{
		idd = 24034;
		onLoad = "uiNamespace setVariable ['RscExileToastArea', _this select 0];";
		onUnload = "uiNamespace setVariable ['RscExileToastArea', displayNull]";
		duration = 999999;
		class controls{};
	};
	class RscExileBaguetteArea
	{
		idd = 24035;
		onLoad = "uiNamespace setVariable ['RscExileBaguetteArea', _this select 0];";
		onUnload = "uiNamespace setVariable ['RscExileBaguetteArea', displayNull]";
		duration = 999999;
		class controls{};
	};
	class RscExileNotification
	{
		idd = 20020;
		onLoad = "uiNamespace setVariable ['RscExileExileNotification', _this select 0];";
		onUnload = "uiNamespace setVariable ['RscExileExileNotification', displayNull]";
		duration = 999999;
		class controls
		{
			class Background: RscText
			{
				idc = 4000;
				x = "1.004167 * safezoneW + safezoneX";
				y = "0.786 * safezoneH + safezoneY";
				w = "0.166146 * safezoneW";
				h = "0.077 * safezoneH";
				colorBackground[] = {"19/255","22/255","27/255",0.8};
			};
			class Icon: RscPictureKeepAspect
			{
				idc = 4002;
				text = "";
				x = "1.009896 * safezoneW + safezoneX";
				y = "0.797 * safezoneH + safezoneY";
				w = "0.034375 * safezoneW";
				h = "0.055 * safezoneH";
			};
			class Message: RscStructuredText
			{
				idc = 4001;
				x = "1.05 * safezoneW + safezoneX";
				y = "0.797 * safezoneH + safezoneY";
				w = "0.120313 * safezoneW";
				h = "0.055 * safezoneH";
			};
			class Background1: Background
			{
				idc = "4000 + 10";
			};
			class Icon1: Icon
			{
				idc = "4002 + 10";
			};
			class Message1: Message
			{
				idc = "4001 + 10";
			};
			class Background2: Background
			{
				idc = "4000 + 20";
			};
			class Icon2: Icon
			{
				idc = "4002 + 20";
			};
			class Message2: Message
			{
				idc = "4001 + 20";
			};
			class Background3: Background
			{
				idc = "4000 + 30";
			};
			class Icon3: Icon
			{
				idc = "4002 + 30";
			};
			class Message3: Message
			{
				idc = "4001 + 30";
			};
			class Background4: Background
			{
				idc = "4000 + 40";
			};
			class Icon4: Icon
			{
				idc = "4002 + 40";
			};
			class Message4: Message
			{
				idc = "4001 + 40";
			};
			class Background5: Background
			{
				idc = "4000 + 50";
			};
			class Icon5: Icon
			{
				idc = "4002 + 50";
			};
			class Message5: Message
			{
				idc = "4001 + 50";
			};
			class Background6: Background
			{
				idc = "4000 + 60";
			};
			class Icon6: Icon
			{
				idc = "4002 + 60";
			};
			class Message6: Message
			{
				idc = "4001 + 60";
			};
			class Background7: Background
			{
				idc = "4000 + 70";
			};
			class Icon7: Icon
			{
				idc = "4002 + 70";
			};
			class Message7: Message
			{
				idc = "4001 + 70";
			};
			class Background8: Background
			{
				idc = "4000 + 80";
			};
			class Icon8: Icon
			{
				idc = "4002 + 80";
			};
			class Message8: Message
			{
				idc = "4001 + 80";
			};
			class Background9: Background
			{
				idc = "4000 + 90";
			};
			class Icon9: Icon
			{
				idc = "4002 + 90";
			};
			class Message9: Message
			{
				idc = "4001 + 90";
			};
		};
	};
	class RscExileActionProgress
	{
		idd = 24026;
		onLoad = "uiNamespace setVariable ['RscExileActionProgress', _this select 0];";
		onUnload = "uiNamespace setVariable ['RscExileActionProgress', displayNull]";
		duration = 999999;
		class controls
		{
			class Background: RscText
			{
				idc = -1;
				x = "0 * (0.025) + (0)";
				y = "0 * (0.04) + (0)";
				w = "40 * (0.025)";
				h = "25 * pixelH";
				colorBackground[] = {"19/255","22/255","27/255",0.8};
			};
			class ProgressBackground: RscText
			{
				idc = 4001;
				x = "0 * (0.025) + (0)    + 10 * pixelW";
				y = "0 * (0.04) + (0)    + 10 * pixelH";
				w = "40 * (0.025)    - 60 * pixelW";
				h = "5 * pixelH";
				colorBackground[] = {"19/255","22/255","27/255",1};
			};
			class Progress: RscText
			{
				idc = 4000;
				x = "0 * (0.025) + (0)    + 10 * pixelW";
				y = "0 * (0.04) + (0)    + 10 * pixelH";
				w = "40 * (0.025)    - 60 * pixelW";
				h = "5 * pixelH";
				colorBackground[] = {0,0.78,0.93,1};
			};
			class Label: RscText
			{
				idc = 4002;
				x = "40 * (0.025) + (0)   - 110 * pixelW";
				y = "0 * (0.04) + (0)";
				w = "110 * pixelW";
				h = "25 * pixelH";
				colorBackground[] = {0,0,0,0};
				style = 1;
				sizeEx = "18 * pixelH";
				colorText[] = {1,1,1,1};
				text = "100%";
				font = "OrbitronLight";
			};
		};
	};
	class RscExileEscapeStats
	{
		idd = 36000;
		duration = 1e+011;
		fadein = 0;
		fadeout = 0;
		movingEnable = 0;
		onLoad = "uiNamespace setVariable ['RscExileEscapeStats', _this select 0];";
		onUnload = "uiNamespace setVariable ['RscExileEscapeStats', displayNull]";
		class controlsBackground
		{
			class Background: RscText
			{
				idc = 36001;
				x = "0 * (0.025) + (0)";
				y = "0 * (0.04) + (0)";
				w = "40 * (0.025)";
				h = "25 * (0.04)";
				colorBackground[] = {0.0745098,0.0862745,0.105882,0.8};
			};
		};
		class controls
		{
			class escapeLogo: RscPictureKeepAspect
			{
				idc = 36002;
				text = "exile_assets\texture\mod\icon_escape.paa";
				x = "1 * (0.025) + (0)";
				y = "1 * (0.04) + (0)";
				w = "4 * (0.025)";
				h = "3 * (0.04)";
			};
			class playerName: RscStructuredText
			{
				idc = 36003;
				text = "";
				x = "6 * (0.025) + (0)";
				y = "2 * (0.04) + (0)";
				w = "20 * (0.025)";
				h = "3 * (0.04)";
				colorText[] = {0.82,0.82,0.82,1};
				font = "RobotoMedium";
				class Attributes
				{
					align = "left";
					color = "#ffca12";
					font = "RobotoMedium";
					shadow = 0;
				};
			};
			class statsHeader: RscStructuredText
			{
				idc = 36004;
				text = "STATS SUMMARY";
				x = "1 * (0.025) + (0)";
				y = "5 * (0.04) + (0)";
				w = "26 * (0.025)";
				h = "2 * (0.04)";
				font = "RobotoMedium";
				class Attributes
				{
					align = "left";
					color = "#ffffff";
					font = "RobotoMedium";
					shadow = 0;
				};
			};
			class winPctTitle: RscStructuredText
			{
				idc = 36005;
				text = "W/L";
				x = "1 * (0.025) + (0)";
				y = "8 * (0.04) + (0)";
				w = "5 * (0.025)";
				h = "1 * (0.04)";
				font = "RobotoMedium";
				class Attributes
				{
					align = "left";
					color = "#ffffff";
					font = "RobotoMedium";
					shadow = 0;
				};
			};
			class winPctAmount: RscStructuredText
			{
				idc = 36006;
				text = "50%";
				x = "7 * (0.025) + (0)";
				y = "8 * (0.04) + (0)";
				w = "4 * (0.025)";
				h = "1 * (0.04)";
				font = "OrbitronMedium";
				class Attributes
				{
					align = "right";
					color = "#00c8ec";
					font = "OrbitronMedium";
					shadow = 0;
				};
			};
			class winsTitle: RscStructuredText
			{
				idc = 36007;
				text = "Wins";
				x = "1 * (0.025) + (0)";
				y = "9.5 * (0.04) + (0)";
				w = "5 * (0.025)";
				h = "1 * (0.04)";
				font = "RobotoRegular";
				class Attributes
				{
					align = "left";
					color = "#b2ec00";
					font = "RobotoRegular";
					shadow = 0;
				};
			};
			class winsAmount: RscStructuredText
			{
				idc = 36008;
				text = "1";
				x = "7 * (0.025) + (0)";
				y = "9.5 * (0.04) + (0)";
				w = "4 * (0.025)";
				h = "1 * (0.04)";
				font = "OrbitronLight";
				class Attributes
				{
					align = "right";
					color = "#ffffff";
					font = "OrbitronLight";
					shadow = 0;
				};
			};
			class lossesTitle: RscStructuredText
			{
				idc = 36009;
				text = "Losses";
				x = "1 * (0.025) + (0)";
				y = "11 * (0.04) + (0)";
				w = "5 * (0.025)";
				h = "1 * (0.04)";
				font = "RobotoRegular";
				class Attributes
				{
					align = "left";
					color = "#ea0000";
					font = "RobotoRegular";
					shadow = 0;
				};
			};
			class lossesAmount: RscStructuredText
			{
				idc = 36010;
				text = "1";
				x = "7 * (0.025) + (0)";
				y = "11 * (0.04) + (0)";
				w = "4 * (0.025)";
				h = "1 * (0.04)";
				font = "OrbitronLight";
				class Attributes
				{
					align = "right";
					color = "#ffffff";
					font = "OrbitronLight";
					shadow = 0;
				};
			};
			class kdTitle: RscStructuredText
			{
				idc = 36011;
				text = "K/D";
				x = "14 * (0.025) + (0)";
				y = "8 * (0.04) + (0)";
				w = "5 * (0.025)";
				h = "1 * (0.04)";
				font = "RobotoMedium";
				class Attributes
				{
					align = "left";
					color = "#ffffff";
					font = "RobotoMedium";
					shadow = 0;
				};
			};
			class kdRatio: RscStructuredText
			{
				idc = 36012;
				text = "0.80";
				x = "19 * (0.025) + (0)";
				y = "8 * (0.04) + (0)";
				w = "4 * (0.025)";
				h = "1 * (0.04)";
				font = "OrbitronMedium";
				class Attributes
				{
					align = "right";
					color = "#00c8ec";
					font = "OrbitronMedium";
					shadow = 0;
				};
			};
			class killsTitle: RscStructuredText
			{
				idc = 36013;
				text = "Kills";
				x = "14 * (0.025) + (0)";
				y = "9.5 * (0.04) + (0)";
				w = "5 * (0.025)";
				h = "1 * (0.04)";
				font = "RobotoRegular";
				class Attributes
				{
					align = "left";
					color = "#b2ec00";
					font = "RobotoRegular";
					shadow = 0;
				};
			};
			class killsAmount: RscStructuredText
			{
				idc = 36014;
				text = "4";
				x = "19 * (0.025) + (0)";
				y = "9.5 * (0.04) + (0)";
				w = "4 * (0.025)";
				h = "1 * (0.04)";
				font = "OrbitronLight";
				class Attributes
				{
					align = "right";
					color = "#ffffff";
					font = "OrbitronLight";
					shadow = 0;
				};
			};
			class deathsTitle: RscStructuredText
			{
				idc = 36015;
				text = "Deaths";
				x = "14 * (0.025) + (0)";
				y = "11 * (0.04) + (0)";
				w = "5 * (0.025)";
				h = "1 * (0.04)";
				font = "RobotoRegular";
				class Attributes
				{
					align = "left";
					color = "#ea0000";
					font = "RobotoRegular";
					shadow = 0;
				};
			};
			class deathsAmount: RscStructuredText
			{
				idc = 36016;
				text = "5";
				x = "19 * (0.025) + (0)";
				y = "11 * (0.04) + (0)";
				w = "4 * (0.025)";
				h = "1 * (0.04)";
				font = "OrbitronLight";
				class Attributes
				{
					align = "right";
					color = "#ffffff";
					font = "OrbitronLight";
					shadow = 0;
				};
			};
			class respectTitle: RscStructuredText
			{
				idc = 36017;
				text = "RESPECT";
				x = "27 * (0.025) + (0)";
				y = "8 * (0.04) + (0)";
				w = "5 * (0.025)";
				h = "1 * (0.04)";
				font = "RobotoMedium";
				class Attributes
				{
					align = "left";
					color = "#ffffff";
					font = "RobotoMedium";
					shadow = 0;
				};
			};
			class respectAmount: RscStructuredText
			{
				idc = 36018;
				text = "1050";
				x = "33 * (0.025) + (0)";
				y = "8 * (0.04) + (0)";
				w = "4 * (0.025)";
				h = "1 * (0.04)";
				font = "OrbitronMedium";
				class Attributes
				{
					align = "right";
					color = "#00c8ec";
					font = "OrbitronMedium";
					shadow = 0;
				};
			};
			class avgResTitle: RscStructuredText
			{
				idc = 36019;
				text = "Avg. Res";
				x = "27 * (0.025) + (0)";
				y = "9.5 * (0.04) + (0)";
				w = "5 * (0.025)";
				h = "1 * (0.04)";
				font = "RobotoRegular";
				class Attributes
				{
					align = "left";
					color = "#b2ec00";
					font = "RobotoRegular";
					shadow = 0;
				};
			};
			class avgResAmount: RscStructuredText
			{
				idc = 36020;
				text = "175";
				x = "33 * (0.025) + (0)";
				y = "9.5 * (0.04) + (0)";
				w = "4 * (0.025)";
				h = "1 * (0.04)";
				font = "OrbitronLight";
				class Attributes
				{
					align = "right";
					color = "#ffffff";
					font = "OrbitronLight";
					shadow = 0;
				};
			};
			class ttlMatchesTitle: RscStructuredText
			{
				idc = 36021;
				text = "Matches";
				x = "27 * (0.025) + (0)";
				y = "11 * (0.04) + (0)";
				w = "5 * (0.025)";
				h = "1 * (0.04)";
				font = "RobotoRegular";
				class Attributes
				{
					align = "left";
					color = "#b2ec00";
					font = "RobotoRegular";
					shadow = 0;
				};
			};
			class ttlMatchesAmount: RscStructuredText
			{
				idc = 36022;
				text = "6";
				x = "33 * (0.025) + (0)";
				y = "11 * (0.04) + (0)";
				w = "4 * (0.025)";
				h = "1 * (0.04)";
				font = "OrbitronLight";
				class Attributes
				{
					align = "right";
					color = "#ffffff";
					font = "OrbitronLight";
					shadow = 0;
				};
			};
		};
	};
	class RscExileEscapeHUD
	{
		idd = 35000;
		duration = 1e+011;
		fadein = 0;
		fadeout = 0;
		movingEnable = 0;
		onLoad = "uiNamespace setVariable ['RscExileEscapeHUD', _this select 0];";
		onUnload = "uiNamespace setVariable ['RscExileEscapeHUD', displayNull]";
		class controlsBackground
		{
			class Background: RscText
			{
				idc = 35001;
				x = "safeZoneX + 60 * pixelW";
				y = "safezoneY + 60 * pixelH";
				w = "90 * pixelW";
				h = "70 * pixelH";
				colorBackground[] = {0.0745098,0.0862745,0.105882,0.8};
			};
			class TimeBackground: RscText
			{
				idc = 35004;
				x = "safeZoneX + 60 * pixelW";
				y = "safezoneY + (60+70+5) * pixelH";
				w = "90 * pixelW";
				h = "25 * pixelH";
				colorBackground[] = {0.0745098,0.0862745,0.105882,0.8};
			};
		};
		class controls
		{
			class PlayerCount: RscStructuredText
			{
				idc = 35002;
				x = "safeZoneX + 60 * pixelW";
				y = "safeZoneY + (60+5) * pixelH";
				w = "90 * pixelW";
				h = "70 * pixelH";
				size = "50 * pixelH";
				sizeEx = "50 * pixelH";
				class Attributes
				{
					align = "center";
					color = "#ffffff";
					font = "OrbitronMedium";
					shadow = 0;
				};
			};
			class PlayerLabel: RscStructuredText
			{
				idc = 35003;
				text = "PLAYERS";
				x = "safeZoneX + 60 * pixelW";
				y = "safezoneY + (60+50) * pixelH";
				w = "90 * pixelW";
				h = "25 * pixelH";
				size = "11 * pixelH";
				sizeEx = "11 * pixelH";
				class Attributes
				{
					align = "center";
					color = "#3fd4fc";
					font = "OrbitronLight";
					shadow = 0;
				};
			};
			class TimeValue: RscStructuredText
			{
				idc = 35005;
				text = "00:00";
				x = "safeZoneX + 60 * pixelW";
				y = "safezoneY + (60+70+5+5) * pixelH";
				w = "90 * pixelW";
				h = "25 * pixelH";
				size = "18 * pixelH";
				sizeEx = "18 * pixelH";
				class Attributes
				{
					align = "center";
					color = "#ffffff";
					font = "RobotoCondensed";
					shadow = 0;
				};
			};
		};
	};
};
