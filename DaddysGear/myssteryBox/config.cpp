class CfgPatches
{
	class SneakerMysteryBox
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= 
		{
			"DZ_Data",
			"DrippySneakers"
		};
	};
};

class CfgMods
{
	class SneakerMysteryBox 
	{
		dir = "SneakerMysteryBox";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Dippy Sneakers";
		credits = "tteett";
		author = "tteett";
		authorID = "0"; 
		version = "1.0"; 
		extra = 0;
		type = "mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"SneakerMysteryBox/scripts/4_world"
				};
			};
		};
	};
};
class CfgVehicles
{
	class Drip_CardboardBox_Base;
	/*
	----
	Sneaker Mystery Box Guide
	----

	KitArray is the items that are in the box that have a chance to box

	Simple put in classname of the item
	The number after is the chance it has to drop

	If you have two items in the box and both have the number 1. That would be 50 percent for both to drop
	Another example... 4 items in the box and all have number 1. That would be 25 percent for all
	Another example... 2 items in the box - Item A has number 25 | Item B has number 1. That would give the chance of Item A 25x more chance than Item B

	Here is examples for the mystery box and how it works. You can create your own in here
	
	----
	*/
	class pvest_box: Drip_CardboardBox_Base
	{
		scope = 2;
		displayName="Paragon Vest Box";
		descriptionShort="Paragon Vest Boxes are packed with a variety of modular armor types, offering both protection and additional storage. Each randomized drop provides players with versatile gear, making it ideal for those looking to enhance their defense while carrying extra equipment. Whether you're gearing up for combat or exploration, these vests are a valuable addition to any player's loadout.";
		itemSize[]={3,3};
		hiddenSelectionsTextures[] = 
		{
			"DaddysGear\myssteryBox\data\ParagonVestBox.paa"
		};
		KitArray[] = 
		{
			"Paragon_6B43_Flora:1",
			"Paragon_6B43_Digital_Flora:1",
			"Paragon_6B43_Digital_Desert:1",
			"Paragon_6B43_Desert:1",
			"Paragon_6B43_Black:1",
			"Paragon_6B43_Fatigue:1",
			"Paragon_6B43_Blue:1",
			"Paragon_6B43_White:1",
			"Paragon_6B43_Navy:1",
			"Paragon_6B43_Black_WL:1",
			"Paragon_6B43_WL:1",

			"Paragon_6B13_Black:1",
			"Paragon_6B13_Blue:1",
			"Paragon_6B13_Desert:1",
			"Paragon_6B13_Green:1",
			"Paragon_6B13_White:1",
			"Paragon_6B13_Fatigue:1",
			"Paragon_6B13_Navy:1",
			"Paragon_6B13_Black_WL:1",
			"Paragon_6B13_WL:1",

			"Paragon_TacticalVest_Black:1",
			"Paragon_TacticalVest_Blue:1",
			"Paragon_TacticalVest_Desert:1",
			"Paragon_TacticalVest_Green:1",
			"Paragon_TacticalVest_White:1",
			"Paragon_TacticalVest_Fatigue:1",
			"Paragon_TacticalVest_Navy:1",
			"Paragon_TacticalVest_Black_WL:1",
			"Paragon_TacticalVest_WL:1",

			"Paragon_Slick_Black:1",
			"Paragon_Slick_Blue:1",
			"Paragon_Slick_Desert:1",
			"Paragon_Slick_Green:1",
			"Paragon_Slick_Fatigue:1",
			"Paragon_Slick_White:1",
			"Paragon_Slick_Navy:1",
			"Paragon_Slick_Black_WL:1",
			"Paragon_Slick_WL:1",

			"Paragon_IOTV_Black:1",
			"Paragon_IOTV_Blue:1",
			"Paragon_IOTV_Desert:1",
			"Paragon_IOTV_Green:1",
			"Paragon_IOTV_Fatigue:1",
			"Paragon_IOTV_White:1",
			"Paragon_IOTV_Navy:1",
			"Paragon_IOTV_Black_WL:1",
			"Paragon_IOTV_WL:1",

			"Paragon_C6B43_Flora:1",
			"Paragon_C6B43_Digital_Flora:1",
			"Paragon_C6B43_Digital_Desert:1",
			"Paragon_C6B43_Black:1",
			"Paragon_C6B43_Fatigue:1",
			"Paragon_C6B43_Blue:1",
			"Paragon_C6B43_White:1",
			"Paragon_C6B43_Desert:1",
			"Paragon_C6B43_Navy:1",
			"Paragon_C6B43_Black_WL:1",
			"Paragon_C6B43_WL:1",

			"Paragon_DCS_Desert:1",
			"Paragon_DCS_Black:1",
			"Paragon_DCS_Blue:1",
			"Paragon_DCS_Green:1",
			"Paragon_DCS_White:1",
			"Paragon_DCS_Fatigue:1",
			"Paragon_DCS_Navy:1",
			"Paragon_DCS_Black_WL:1",
			"Paragon_DCS_WL:1",

			"Paragon_Soviet_Black:1",
			"Paragon_Soviet_Desert:1",
			"Paragon_Soviet_Green:1",
			"Paragon_Soviet_Blue:1",
			"Paragon_Soviet_White:1",
			"Paragon_Soviet_Fatigue:1",
			"Paragon_Soviet_Navy:1",
			"Paragon_Soviet_Black_WL:1",
			"Paragon_Soviet_WL:1",

			"Paragon_TacTec_Desert:1",
			"Paragon_TacTec_Black:1",
			"Paragon_TacTec_Blue:1",
			"Paragon_TacTec_Green:1",
			"Paragon_TacTec_White:1",
			"Paragon_TacTec_Fatigue:1",
			"Paragon_TacTec_Navy:1",
			"Paragon_TacTec_Black_WL:1",
			"Paragon_TacTec_WL:1",

			"Paragon_DCS_L_Desert:1",
			"Paragon_DCS_L_Black:1",
			"Paragon_DCS_L_Blue:1",
			"Paragon_DCS_L_Green:1",
			"Paragon_DCS_L_White:1",
			"Paragon_DCS_L_Fatigue:1",
			"Paragon_DCS_L_Navy:1",
			"Paragon_DCS_L_Black_WL:1",
			"Paragon_DCS_L_WL:1",

			"Paragon_JPC_Desert:1",
			"Paragon_JPC_Black:1",
			"Paragon_JPC_Blue:1",
			"Paragon_JPC_Green:1",
			"Paragon_JPC_White:1",
			"Paragon_JPC_Fatigue:1",
			"Paragon_JPC_Navy:1",
			"Paragon_JPC_Black_WL:1",
			"Paragon_JPC_WL:1"
		};
	};
	class pHelmet_Box: Drip_CardboardBox_Base
	{
		scope = 2;
		displayName="Paragon Helmet Box";
		descriptionShort="The Paragon Helmet Box is filled with a wide selection of helmets, offering players solid protection for their cranium while adding a touch of style. Each randomized drop delivers a unique option to defend against enemy attacks and keep you looking fashionable in the heat of battle. Perfect for players who value both safety and aesthetics.";
		hiddenSelectionsTextures[] = 
		{
			"DaddysGear\myssteryBox\data\ParagonHelmetsBox.paa"
		};
		KitArray[] = 
		{
			"Paragon_Killa_Black:1",
			"Paragon_Killa_Blue:1",
			"Paragon_Killa_Green:1",
			"Paragon_Killa_Desert:1",
			"Paragon_Killa_White:1",

			"Paragon_Ballistic_H_Black:1",
			"Paragon_Ballistic_H_Blue:1",
			"Paragon_Ballistic_H_Green:1",
			"Paragon_Ballistic_H_Desert:1",
			"Paragon_Ballistic_H_Grey:1",

			"Paragon_Altyn_Blue:1",
			"Paragon_Altyn_Desert:1",
			"Paragon_Altyn_Green:1",
			"Paragon_Altyn_Black:1",
			"Paragon_Altyn_Fatigue:1",
			"Paragon_Altyn_Navy:1",
			"Paragon_Altyn_Black_WL:1",

			"Paragon_Armored_H_Black:1",
			"Paragon_Armored_H_Desert:1",
			"Paragon_Armored_H_Green:1",
			"Paragon_Armored_H_Blue:1",
			"Paragon_Armored_H_WL:1",
			"Paragon_Armored_H_Fatigue:1",
			"Paragon_Armored_H_Navy:1",
			"Paragon_Armored_H_Black_WL:1",

			"Paragon_Space_Helmet_Black:1",
			"Paragon_Space_Helmet_Blue:1",
			"Paragon_Space_Helmet_Desert:1",
			"Paragon_Space_Helmet_Green:1",
			"Paragon_Space_Helmet_White:1",

			"Paragon_Scifi_H_Black:1",
			"Paragon_Scifi_H_Blue:1",
			"Paragon_Scifi_H_Green:1",
			"Paragon_Scifi_H_Desert:1",
			"Paragon_Scifi_H_Purple:1",
			"Paragon_Scifi_H_Red:1",

			"Paragon_Combat_H_Black:1",
			"Paragon_Combat_H_Blue:1",
			"Paragon_Combat_H_Green:1",
			"Paragon_Combat_H_Desert:1",

			"Paragon_Maska_Black:1",
			"Paragon_Maska_Desert:1",
			"Paragon_Maska_Green:1",
			"Paragon_Maska_Blue:1",
			"Paragon_Maska_Navy:1",
			"Paragon_Maska_Black_WL:1",

			"Paragon_Mando_Black:1",
			"Paragon_Mando_Desert:1",
			"Paragon_Mando_Green:1",
			"Paragon_Mando_Blue:1",
			"Paragon_Mando_WL:1",
			"Paragon_Mando_Fatigue:1",
			"Paragon_Mando_Navy:1",
			"Paragon_Mando_Black_WL:1",

			"Paragon_Tac_H_Black:1",
			"Paragon_Tac_H_Desert:1",
			"Paragon_Tac_H_Green:1",
			"Paragon_Tac_H_Blue:1",
			"Paragon_Tac_H_WL:1",
			"Paragon_Tac_H_Fatigue:1",
			"Paragon_Tac_H_Navy:1",
			"Paragon_Tac_H_Black_WL:1"
		};
	};
	class pBag_Box: Drip_CardboardBox_Base
	{
		scope = 2;
		displayName="Paragon Bag Box";
		descriptionShort="The Paragon Bag Box is loaded with a variety of cargo options, giving players multiple choices for carrying their loot. Each randomized bag offers unique storage capacities, ensuring you’re well-equipped to haul everything you need while exploring. Whether for light travel or heavy looting, this box has the perfect solution for any adventurer!";
		hiddenSelectionsTextures[] = 
		{
			"DaddysGear\myssteryBox\data\ParagonBagsBox.paa"
		};
		KitArray[] = 
		{
			"Paragon_RaidBag_Black:1",
			"Paragon_RaidBag_Blue:1",
			"Paragon_RaidBag_Desert:1",
			"Paragon_RaidBag_Green:1",
			"Paragon_RaidBag_WL:1",

			"Paragon_GunBag_Black:1",
			"Paragon_GunBag_Blue:1",
			"Paragon_GunBag_Desert:1",
			"Paragon_GunBag_Green:1",

			"Paragon_US_Military_Black:1",
			"Paragon_US_Military_Blue:1",
			"Paragon_US_Military_Desert:1",
			"Paragon_US_Military_Green:1",

			"Paragon_Rubicon_Black:1",
			"Paragon_Rubicon_Blue:1",
			"Paragon_Rubicon_Desert:1",
			"Paragon_Rubicon_Green:1",

			"Paragon_Duffle_Bag_Black:1",
			"Paragon_Duffle_Bag_Blue:1",
			"Paragon_Duffle_Bag_Desert:1",
			"Paragon_Duffle_Bag_Green:1",

			"Paragon_Deployment_Bag_Black:1",
			"Paragon_Deployment_Bag_WL:1",
			"Paragon_Deployment_Bag_Desert:1",
			"Paragon_Deployment_Bag_Desert_Camo:1",
			"Paragon_Deployment_Bag_Green:1",

			"Paragon_Tactical_Bag_Black:1",
			"Paragon_Tactical_Bag_Red:1",
			"Paragon_Tactical_Bag_Tan:1",
			"Paragon_Tactical_Bag_Blue:1",
			"Paragon_Tactical_Bag_Green:1",

			"Paragon_Compact_Black:1",
			"Paragon_Compact_Blue:1",
			"Paragon_Compact_Desert:1",
			"Paragon_Compact_Green:1",
			"Paragon_Compact_Grey:1",

			"Paragon_Rush_24_Bag_Black:1",
			"Paragon_Rush_24_Bag_Blue:1",
			"Paragon_Rush_24_Bag_Desert:1",
			"Paragon_Rush_24_Bag_Green:1"
		};
	};

	class pExtra_Box: Drip_CardboardBox_Base
	{
		scope = 2;
		displayName="Paragon Extras Box";
		descriptionShort="The Paragon Extras Box is packed with essential gear, including belts and attachments for vests, bags, and helmets, all designed to increase your carrying capacity. Each item helps you expand your loadout and improve efficiency, making it a must-have for players looking to maximize storage and adaptability in any situation.";
		hiddenSelectionsTextures[] = 
		{
			"DaddysGear\myssteryBox\data\ParagonExtrasBox.paa"
		};
		KitArray[] = 
		{
			"Paragon_GunSling_Black:1",
			"Paragon_GunSling_Blue:1",
			"Paragon_GunSling_Desert:1",
			"Paragon_GunSling_Green:1",

			"Paragon_BodyBelt_Black:1",
			"Paragon_BodyBelt_Blue:1",
			"Paragon_BodyBelt_Desert:1",
			"Paragon_BodyBelt_Green:1",
			"Paragon_BodyBelt_Fatigue:1",
			"Paragon_BodyBelt_Navy:1",
			"Paragon_BodyBelt_Black_WL:1",

			"Paragon_Leg_PouchesL_Black:1",
			"Paragon_Leg_PouchesL_Blue:1",
			"Paragon_Leg_PouchesL_Desert:1",
			"Paragon_Leg_PouchesL_Green:1",

			"Paragon_Leg_PouchesM_Black:1",
			"Paragon_Leg_PouchesM_Blue:1",
			"Paragon_Leg_PouchesM_Desert:1",
			"Paragon_Leg_PouchesM_Green:1",

			"Paragon_Leg_PouchesS_Black:1",
			"Paragon_Leg_PouchesS_Blue:1",
			"Paragon_Leg_PouchesS_Desert:1",
			"Paragon_Leg_PouchesS_Green:1",

			"Paragon_BackPouch_Black:1",
			"Paragon_BackPouch_Blue:1",
			"Paragon_BackPouch_Desert:1",
			"Paragon_BackPouch_Green:1",
			"Paragon_BackPouch_White:1",

			"Paragon_IFAK_Desert:1",
			"Paragon_IFAK_Green:1",
			"Paragon_IFAK_Black:1",
			"Paragon_IFAK_Blue:1",
			"Paragon_IFAK_White:1",

			"Paragon_Mag_Pouch_Black:1",
			"Paragon_Mag_Pouch_Green:1",
			"Paragon_Mag_Pouch_Desert:1",
			"Paragon_Mag_Pouch_Blue:1",
			"Paragon_Mag_Pouch_White:1",

			"Paragon_MapPouch_Black:1",
			"Paragon_MapPouch_Green:1",
			"Paragon_MapPouch_Blue:1",
			"Paragon_MapPouch_White:1",

			"Paragon_FrontPouch_Digital_Flora:1",
			"Paragon_FrontPouch_Digital_Desert:1",
			"Paragon_FrontPouch_Flora:1",
			"Paragon_FrontPouch_Black:1",
			"Paragon_FrontPouch_Green:1",
			"Paragon_FrontPouch_Fatigue:1",
			"Paragon_FrontPouch_Blue:1",
			"Paragon_FrontPouch_White:1",
			"Paragon_FrontPouch_Desert:1",
			"Paragon_FrontPouch_Navy:1",
			"Paragon_FrontPouch_Black_WL:1",

			"Paragon_ButtPouch_Digital_Flora:1",
			"Paragon_ButtPouch_Digital_Desert:1",
			"Paragon_ButtPouch_Flora:1",
			"Paragon_ButtPouch_Black:1",
			"Paragon_ButtPouch_Green:1",
			"Paragon_ButtPouch_Fatigue:1",
			"Paragon_ButtPouch_Blue:1",
			"Paragon_ButtPouch_White:1",
			"Paragon_FrontPouch_Desert:1",
			"Paragon_ButtPouch_Navy:1",
			"Paragon_ButtPouch_Black_WL:1",

			"Paragon_HP_Black:1",
			"Paragon_HP_Desert:1",
			"Paragon_HP_Green:1",
			"Paragon_HP_Blue:1",

			"Paragon_EarCovers_Black:1",
			"Paragon_EarCovers_Green:1",
			"Paragon_EarCovers_Desert:1",
			"Paragon_EarCovers_Blue:1",

			"Paragon_Visor_Black:1",
			"Paragon_Visor_Green:1",
			"Paragon_Visor_Desert:1",
			"Paragon_Visor_Blue:1",

			"Paragon_Mandible_Black:1",
			"Paragon_Mandible_Green:1",
			"Paragon_Mandible_Desert:1",
			"Paragon_Mandible_Blue:1",
			"Paragon_Mandible_Desert_Camo:1",

			"Paragon_Patch_USA:1",
			"Paragon_Patch_Austria:1",
			"Paragon_Patch_France:1",
			"Paragon_Patch_Germany:1",
			"Paragon_Patch_Israel:1",
			"Paragon_Patch_Russian:1",
			"Paragon_Patch_Ukraine:1",
			"Paragon_Patch_Canada:1",
			"Paragon_Patch_Poland:1",
			"Paragon_Patch_Britain:1",

			"Paragon_NVG_Black_B:1",
			"Paragon_NVG_Black_P:1",
			"Paragon_NVG_Black_G:1",
			"Paragon_NVG_Green_B:1",
			"Paragon_NVG_Green_P:1",
			"Paragon_NVG_Green_G:1",
			"Paragon_NVG_Blue_B:1",
			"Paragon_NVG_Blue_P:1",
			"Paragon_NVG_Blue_G:1",
			"Paragon_NVG_Desert_B:1",
			"Paragon_NVG_Desert_P:1",
			"Paragon_NVG_Desert_G:1"
		};
	};
	class pClothing_Box: Drip_CardboardBox_Base
	{
		scope = 2;
		displayName="Paragon Clothing Box";
		descriptionShort="The Paragon Clothing Box offers a wide selection of boots, shirts, pants, and more, allowing players to match their gear loadouts while staying stylish. Each randomized drop helps you customize your appearance, ensuring you're not only prepared for the challenges ahead but also looking sharp while doing it. Perfect for those who value both function and fashion!";
		hiddenSelectionsTextures[] = 
		{
			"DaddysGear\myssteryBox\data\ParagonClothingBox.paa"
		};
		KitArray[] = 
		{
			"Paragon_TacJacket_Digital_Flora:1",
			"Paragon_TacJacket_Digital_Desert:1",
			"Paragon_TacJacket_Black:1",
			"Paragon_TacJacket_Desert:1",
			"Paragon_TacJacket_Blue:1",
			"Paragon_TacJacket_Green:1",
			"Paragon_TacJacket_Fatigue:1",
			"Paragon_TacJacket_Navy:1",
			"Paragon_TacJacket_WL:1",
			"Paragon_TacJacket_White:1",

			"Paragon_TacPants_Digital_Flora:1",
			"Paragon_TacPants_Digital_Desert:1",
			"Paragon_TacPants_Black:1",
			"Paragon_TacPants_Blue:1",
			"Paragon_TacPants_Desert:1",
			"Paragon_TacPants_Green:1",
			"Paragon_TacPants_White:1",
			"Paragon_TacPants_Camo:1",
			"Paragon_TacPants_Fatigue:1",
			"Paragon_TacPants_Navy:1",
			"Paragon_TacPants_Black_WL:1",

			"Paragon_CombatPants_Digital_Flora:1",
			"Paragon_CombatPants_Digital_Desert:1",
			"Paragon_CombatPants_Black:1",
			"Paragon_CombatPants_Blue:1",
			"Paragon_CombatPants_Desert:1",
			"Paragon_CombatPants_Green:1",
			"Paragon_CombatPants_White:1",
			"Paragon_CombatPants_WL:1",
			"Paragon_CombatPants_Fatigue:1",
			"Paragon_CombatPants_Navy:1",
			"Paragon_CombatPants_Black_WL:1",

			"Paragon_Balaclava_Digital_Flora:1",
			"Paragon_Balaclava_Digital_Desert:1",
			"Paragon_Balaclava_Black:1",
			"Paragon_Balaclava_Black_WL:1",
			"Paragon_Balaclava_Blue:1",
			"Paragon_Balaclava_Desert:1",
			"Paragon_Balaclava_Desert_Camo:1",
			"Paragon_Balaclava_Green:1",
			"Paragon_Balaclava_Navy:1",
			"Paragon_Balaclava_Fatigue:1",
			"Paragon_Balaclava_WL:1",
			"Paragon_Balaclava_White:1",

			"Paragon_TacticalGloves_Digital_Flora:1",
			"Paragon_TacticalGloves_Digital_Desert:1",
			"Paragon_TacticalGloves_Black:1",
			"Paragon_TacticalGloves_Black_WL:1",
			"Paragon_TacticalGloves_Blue:1",
			"Paragon_TacticalGloves_Desert:1",
			"Paragon_TacticalGloves_Green:1",
			"Paragon_TacticalGloves_Navy:1",
			"Paragon_TacticalGloves_Fatigue:1",
			"Paragon_TacticalGloves_WL:1",
			"Paragon_TacticalGloves_White:1",

			"Paragon_BGoggles_Pink:1",
			"Paragon_BGoggles_Black:1",
			"Paragon_BGoggles_Blue:1",
			"Paragon_BGoggles_Red:1",
			"Paragon_DGoggles_Pink:1",
			"Paragon_DGoggles_Black:1",
			"Paragon_DGoggles_Blue:1",
			"Paragon_DGoggles_Red:1",
			"Paragon_GGoggles_Pink:1",
			"Paragon_GGoggles_Black:1",
			"Paragon_GGoggles_Blue:1",
			"Paragon_GGoggles_Red:1",

			"Paragon_TacBoots_Digital_Flora:1",
			"Paragon_TacBoots_Digital_Desert:1",
			"Paragon_TacBoots_Black:1",
			"Paragon_TacBoots_Desert:1",
			"Paragon_TacBoots_Green:1",
			"Paragon_TacBoots_Blue:1",
			"Paragon_TacBoots_Fatigue:1",
			"Paragon_TacBoots_Navy:1",
			"Paragon_TacBoots_WL:1",
			"Paragon_TacBoots_Black_WL:1"
		};
	};
	class SnafuGun_Box: Drip_CardboardBox_Base
	{
		scope = 2;
		displayName="Snafu Weapons Box";
		descriptionShort="The Snafu Weapons Box is a mid-tier loot crate on the AWNW DayZ server, packed with over 100+ weapons. It features a wide selection of gear, including handguns, rifles, shotguns, SMGs, and more. Each opening offers a randomized weapon, making it an exciting chance to enhance your firepower with reliable, battle-ready equipment.";
		hiddenSelectionsTextures[] = 
		{
			"DaddysGear\myssteryBox\data\SnafuWeaponsBox.paa"
		};
		KitArray[] = 
		{
			"SNAFUKivaari_Black_GUN:1",
			"SNAFUKivaari_Tan_GUN:1",
			"SNAFUKivaari_Grey_GUN:1",
			"SNAFUKivaari_Snow_GUN:1",
			"SNAFU_M1918A2:1",
			"SNAFU_U100:1",
			"SNAFU_M14:1",
			"SNAFU_M76:1",
			"SNAFU_SKS:1",
			"SNAFU_Trenchgun:1",
			"SNAFU_FRF2:1",
			"SNAFU_M48:1",
			"SNAFU_TP82S:1",
			"SN_Glock19:1",
			"SN_M870:1",
			"SN_Mp443:1",
			"SN_M9:1",
			"SN_USP:1",
			"Tec9_Gun:1",
			"SNAFUVECTOR_9mm_GUN:1",
			"SNAFUVECTOR_45acp_GUN:1",
			"GCGN_MP7:1",
			"GCGN_VEPR:1",
			"GCGN_Vityaz:1",
			"SNAFUAR15_SPR_Black_GUN:1",
			"SNAFUAR15_SPR_Tan_GUN:1",
			"SNAFU_AK12A:1",
			"SNAFU_AK103A:1",
			"SNAFU_RPK16_Black:1",
			"SNAFU_RPK16_Green:1",
			"SNAFU_RPK16_Tan:1",
			"SNAFU_AEK545_Gun:1",
			"GCGN_M4A1:1",
			"GCGN_HK416:1",
			"SNAFU_CZ805_Gun:1",
			"GCGN_HK416:1",
			"SN_Auto_Shotgun:1",
			"ACR_Gun:1",
			"M4_6933_Gun:1",
			"VR80_Gun:1",
			"Spas12_Gun:1",
			"IA2_Gun:1",
			"SG550_Gun:1",
			"GCGN_M110_Black:1",
			"GCGN_M110_Green:1",
			"GCGN_M110_Tan:1",
			"SNAFU_SR25_Gun:1",
			"SNAFU_KAC_Gun:1",
			"SNAFU_Saint_Gun:1",
			"SNAFURSASS_Wood_GUN:1",
			"SNAFURSASS_od_GUN:1",
			"SNAFURSASS_dkmc_GUN:1",
			"SNAFUSR3_Vikhr:1",
			"GCGN_M700:1",
			"SNHK417_Gun:1",
			"MK18_Gun:1",
			"SNSA58_Gun:1",
			"SNAFUM24_GUN:1",
			"SCAR_Gun:1",
			"GCGN_M82_Barret:1",
			"GCGN_M200:1",
			"SNAFU_AWM_Gun:1",
			"SNAFUAX50_GUN:1",
			"SNAFUM98B_Atac_GUN:1",
			"SNAFUM98B_Digi_GUN:1",
			"SNAFUM98B_Ger_GUN:1",
			"SNAFUM98B_Mc_GUN:1",
			"SNAFUM98B_Snow_GUN:1",
			"SNAFUM98B_Wood_GUN:1",
			"SNAFUT5000_Dkmcc_GUN:1",
			"SNAFUT5000_Snow_GUN:1",
			"SNAFUT5000_Wood_GUN:1",
			"GCGN_M249:1",
			"GCGN_M1Garand:1",
			"AA12_Gun:1",
			"GCGN_M200_Tan:1",
			"Snafu_ScarH_Black_GUN:1",
			"Snafu_ScarH_DKMC_GUN:1",
			"Snafu_ScarH_OD_GUN:1",
			"Snafu_ScarH_Snow_GUN:1",
			"Snafu_ScarH_Tan_GUN:1",
			"Snafu_pkp_Black_GUN:1",
			"Snafu_pkp_NBlack_GUN:1",
			"SNAFU_MAR10_Black_GUN:1",
			"SNAFU_MP9_GUN:1",
			"SNAFU_Fort12_GUN:1",
			"SNAFU_MPX_GUN:1",
			"SNAFU_CALI_GUN:1",
			"SNAFU_AS50_GUN:1",
			"SNAFU_Agram_GUN:1",
			"SNAFU_AK19:1",
			"SNAFU_AK308:1",
			"SNAFUMagnum500:1",
			"SNAFUAPS:1",
			"SNAFUTAR21_Black:1",
			"SNAFUTAR21_Tan:1",
			"SNAFUTAR21_Green:1",
			"SNAFUASh12:1",
			"SNAFUFAMAS:1",
			"SNAFUGM6Lynx:1",
			"SNAFUHoneyBadger_Black:1",
			"SNAFUHoneyBadger_Tan:1",
			"SNAFUKH9:1",
			"SNAFUM1A_Black:1",
			"SNAFUM1A_Green:1",
			"SNAFUM1A_Tan:1",
			"SNAFUM96:1",
			"SNAFUMarlin1895:1",
			"SNAFUMk12:1",
			"SNAFUP90:1",
			"SNAFUSA80:1",
			"SNAFUSRSA2:1",
			"SNAFUTac21:1",
			"SNAFUUzi:1",
			"SNAFUAUG:1",
			"SNAFUAUG_BK:1",
			"SNAFUDVL10M2:1",
			"SNAFUPPSKN:1",
			"SNAFUThompsonMk2:1",
			"SNAFUAlligator:1",
			"SNAFUGevar_Grey:1",
			"SNAFUGevar_Black:1",
			"SNAFUGevar_Green:1",
			"SNAFUGevar_Tan:1",
			"SNAFU_MAR10_Black_GUN:1",
			"SNAFUChiappaRhino:1",
			"SNAFUPPSh:1",
			"SNAFURPD:1",
			"SNAFUSten:1",
			"SNAFUSWM629:1",
			"SNAFU_ADAR_Modular16_GUN:1",
			"SNAFU_AR15_Modular16_GUN:1",
			"SNAFU_LVOA556_GUN:1",
			"SNAFU_M4556_Modular14_GUN:1",
			"SNAFU_M4556_Modular16_GUN:1",
			"SNAFU_Saint556_Gun:1",
			"SNAFU_Saint_Gun:1",
			"SNAFU_AR15SPRBK:1",
			"SNAFU_AR15SPRTAN:1",
			"SNAFU_M4300AC_10_GUN:1",
			"SNAFU_M4300AC_14_GUN:1",
			"SNAFU_M4300AC_16_GUN:1",
			"SNAFU_M4300AC_14DV_GUN:1",
			"SNAFU_M4556_Modular10_GUN:1"
		};
	};
	class SnafuOptic_Box: Drip_CardboardBox_Base
	{
		scope = 2;
		displayName="Snafu Optic Box";
		descriptionShort="The Snafu Optics Box is a specialized loot crate packed with a variety of weapon optics designed to enhance your aim and accuracy. Featuring a range of scopes and sights, this box provides the perfect tools for players to take on zombies and other creatures from medium to long range. With randomized drops, each opening delivers a crucial upgrade to help you dominate the battlefield from a distance.";
		hiddenSelectionsTextures[] = 
		{
			"DaddysGear\myssteryBox\data\SnafuOpticsBox.paa"
		};
		KitArray[] = 
		{
			"SNAFU_HuntingOptic:1",
			"GCGN_M84_Optic:1",
			"SNAFU_AKHuntingOptic:1",
			"SNAFU_HHuntingOptic:1",
			"SNAFU_MHuntingOptic:1",
			"SNAFU_M14Optic:1",
			"SNAFU_Nightforce:1",
			"SNAFU_AKNightforce:1",
			"SNAFU_HNightforce:1",
			"SNAFU_MNightforce:1",
			"SNAFU_Leupold_Mark8:1",
			"SNAFU_AKLeupold_Mark8:1",
			"SNAFU_HLeupold_Mark8:1",
			"SNAFU_MLeupold_Mark8:1",
			"SNAFU_Kahles:1",
			"SNAFU_AKKahles:1",
			"SNAFU_HKahles:1",
			"SNAFU_MKahles:1",
			"SNAFU_Aimpoint_ACO:1",
			"SNAFU_HAimpoint_ACO:1",
			"SNAFU_AKAimpoint_ACO:1",
			"SNAFU_MAimpoint_ACO:1",
			"SNAFU_AKAimpoint_M5:1",
			"SNAFU_HAimpoint_M5:1",
			"SNAFU_MAimpoint_M5:1",
			"SNAFU_Elcan:1",
			"SNAFU_AKElcan:1",
			"SNAFU_HElcan:1",
			"SNAFU_MElcan:1",
			"SNAFU_EOTech_EXPS3:1",
			"SNAFU_AKEOTech_EXPS3:1",
			"SNAFU_HEOTech_EXPS3:1",
			"SNAFU_MEOTech_EXPS3:1",
			"SNAFU_Trijicon:1",
			"SNAFU_AKTrijicon:1",
			"SNAFU_Trijicon_Docter:1",
			"SNAFU_AKTrijicon_Docter:1",
			"SNAFU_HTrijicon:1",
			"SNAFU_HTrijicon_Docter:1",
			"SNAFU_MTrijicon:1",
			"SNAFU_MTrijicon_Docter:1",
			"SNAFU_Walther:1",
			"SNAFU_AKWalther:1",
			"SNAFU_HWalther:1",
			"SNAFU_MWalther:1",
			"SNAFU_Docter:1",
			"SNAFU_Tango6T_Black:1",
			"SNAFU_Tango6T_Tan:1",
           	"SNAFU_Tango6T_Wood:1",
           	"SNAFU_Tango6T_Snow:1",
			"SNAFU_Kobra:1",
			"SNAFU_IRONMODOptic:1"
		};
	};
	class SnafuMags_Box: Drip_CardboardBox_Base
	{
		scope = 2;
		displayName="Snafu Magazine Box";
		descriptionShort="The Snafu Magazine Box is a vital loot crate filled with a wide variety of magazines to load your Snafu weapons. With so many different calibers available, each opening is a surprise, giving players the chance to receive magazines that fit anything from handguns to rifles. You never know what you'll get, making it an exciting and essential addition to your arsenal!";
		hiddenSelectionsTextures[] = 
		{
			"DaddysGear\myssteryBox\data\SnafuMagsBox.paa"
		};
		KitArray[] = 
		{
			"GCGN_M110_Mag:1",
			"SNAFU_RPK16_Black_Mag:1",
			"SNAFU_RPK16_Green_Mag:1",
            "SNAFU_RPK16_Tan_Mag:1",
			"SNAFU_SR25_Mag:1",
			"SNAFU_KAC_Mag:1",
			"SNAFU_Saint_Mag:1",
			"SR3_Vikhr_Mag:1",
			"GCGN_MP7_40Rnd:1",
			"GCGN_VEPR_10rnd:1",
			"SNAFU_AK12_Mag:1",
			"SNAFU_AK103_Mag:1",
			"SNAFU_PL14HQP_Mag:1",
			"GCGN_M700_Mag:1",
			"GCGN_HK416_Mag:1",
			"GCGN_Mag_FAL_50Rnd:1",
			"SNAFU_PDW_9mm_Mag:1",
			"SNAFU_PDW_45ACP_Mag:1",
			"SN_Auto_Shotgun_Mag:1",
			"SN_Mp443_Mag:1",
			"SN_Springfield_Mag:1",
			"SN_M9_Mag:1",
			"SN_USP_Mag:1",
			"SNAFUM24_Mag:1",
			"SNAFUAR15_SPR_30RND_Mag:1",
			"SNAFUAR15_SPR_40RND_Mag:1",
			"SNAFUAR15_SPR_60RND_Mag:1",
			"SNAFUAR15_SPR_100RND_Mag:1",
			"SNHK417_Mag:1",
			"SA58_DrumMag:1",
			"SA58_30RND_BK:1",
			"SA58_30RND_WBK:1",
			"SA58_30RND_DT:1",
			"Tec9_Mag:1",
			"VR80_Magazine_5rd:1",
			"SNAFUVECTOR_9mm_Mag:1",
			"SNAFUVECTOR_45acp_Mag:1",
			"VR80_Magazine_10rd:1",
			"AA12_Mag:1",
			"SG550_Mag:1",
			"SNAFU_M1918A2_Mag:1",
			"SNAFU_U100_Mag:1",
			"SNAFU_M14_Mag:1",
			"SNAFU_M76_Mag:1",
			"SNAFU_SKS_10Rnd_Mag:1",
			"SNAFU_SKS_30Rnd_Mag:1",
			"SNAFU_FRF2_Mag:1",
			"SNAFUKivaari_10rdMag:1",
			"SNAFUKivaari_25rdMag:1",
			"GCGN_M82_Mag:1",
			"GCGN_M200_Mag:1",
			"SNAFU_AWM_Mag:1",
			"SNAFUAX50_Mag:1",
			"SNAFUM98B_Mag:1",
			"SNAFUT5000_Mag:1",
			"SNAFUM24_Mag:1",
			"SNAFURSASS_Mag:1",
			"GCGN_M249_Mag:1",
			"GCGN_Vityaz_30Rnd:1",
			"Snafu_ScarH_25RND_Mag_Tan:1",
			"Snafu_ScarH_25RND_Mag_Snow:1",
			"Snafu_ScarH_25RND_Mag_OD:1",
			"Snafu_ScarH_25RND_Mag_DKMC:1",
			"Snafu_ScarH_25RND_Mag_BK:1",
			"SNAFU_ScarH_100RND_Mag_Tan:1",
			"SNAFU_ScarH_100RND_Mag_Black:1",
			"Modified_SA58_30RND_BK:1",
			"Modified_SA58_30RND_WBK:1",
			"Modified_SA58_30RND_DT:1",
			"Snafu_pkp_250RND_Mag:1",
			"SNAFU_Mar10_15rnd_Mag:1",
			"SNAFU_MP9_30rnd_Mag:1",
			"SNAFU_Fort12_12rnd_Mag:1",
			"SNAFU_MPX_30rnd_Mag:1",
			"SNAFU_AS50_Mag:1",
			"SNAFU_Agram_32rnd_Mag:1",
			"SNAFUAPS_20rdMag:1",
			"SNAFUASh12_20rdMag:1",
			"SNAFUGM6Lynx_5rdMag:1",
			"SNAFUHoneyBadger_30rdMag_Black:1",
			"SNAFUHoneyBadger_30rdMag_Tan:1",
			"SNAFUKH9_30rdMag:1",
			"SNAFUM1A_20rdMag:1",
			"SNAFUM96_5rdMag:1",
			"SNAFUMk12_20rdMag:1",
			"SNAFUP90_50rdMag:1",
			"SNAFUSRSA2_10rdMag:1",
			"SNAFUTac21_5rdMag:1",
			"SNAFUUzi_32rdMag:1",
			"SNAFUUzi_72rdMag:1",
			"SNAFUAUG_30rdMag:1",
			"SNAFUDVL10M2_5rdMag:1",
			"SNAFUPPSKN_30rdMag:1",
			"SNAFUThompsonMk2_30rdMag:1",
			"SNAFUAlligator_5rdMag:1",
			"SNAFUGevar_10rdMag:1",
			"SNAFU_Mar10_15rnd_Mag:1",
			"SNAFU_PMAG556_Black:1",
			"SNAFU_PMAG556_Grey:1",
			"SNAFU_PMAG556_OD:1",
			"SNAFU_PMAG556_Tan:1",
			"SNAFU_BMAG556_Black:1",
			"SNAFU_BMAG556_Tan:1",
			"SNAFU_CMAG30556_Black:1",
			"SNAFU_CMAG30556_Tan:1",
			"SNAFU_CMAG40556_Black:1",
			"SNAFU_CMAG40556_Tan:1",
			"SNAFU_CMAG60556_Black:1",
			"SNAFU_CMAG60556_Tan:1",
			"SNAFU_CMAG30300_Black:1",
			"SNAFU_CMAG30300_Tan:1",
			"SNAFU_CMAG40300_Black:1",
			"SNAFU_CMAG40300_Tan:1",
			"SNAFU_CMAG60300_Black:1",
			"SNAFU_CMAG60300_Tan:1",
			"SNAFU_BMAG300_Tan:1",
			"SNAFU_BMAG300_Black:1",
			"SNAFUPPSh_71rdMag:1",
			"SNAFURPD_100rdMag:1",
			"SNAFUSten_32rdMag:1"
		};
	};
	class SnafuAttachments_Box: Drip_CardboardBox_Base
	{
		scope = 2;
		displayName="Snafu Attachments Box";
		descriptionShort="The Snafu Attachments Box is packed with essential upgrades for your Snafu rifles, featuring a variety of bipods, suppressors, hand grips, and more. Each attachment enhances your weapon's handling, accuracy, and stealth, giving you the edge in any combat situation. With randomized drops, it's the perfect box to kit out your rifles and boost your performance in the field.";
		hiddenSelectionsTextures[] = 
		{
			"DaddysGear\myssteryBox\data\SnafuAttachmentsBox.paa"
		};
		KitArray[] = 
		{
			"SNAFU_Bipod:1",
			"SNAFU_PKPBIPOD:1",
			"SNAFU_NPKPBIPOD:1",
			"SNAFU_AtlasBipod:1",
			"SNAFU_ModBipod:1",
			"GCGN_M1Garand_Bayonet:1",
			"SNAFU_AK_Mount_Base:1",
			"SNAFU_Hunting_Mount_Base:1",
			"SNAFU_Mosin_Mount_Base:1",
			"SNAFU_TACGripColtA2_Tan:1",
			"SNAFU_TACGripColtA2_OD:1",
			"SNAFU_TACGripColtA2_Grey:1",
			"SNAFU_TACGripColtA2_BK:1",
			"SNAFU_GIGripColtA2:1",
			"SNAFUUniversalLight:1",
			"SNAFU_556_Barrel10:1",
			"SNAFU_556_Barrel14:1",
			"SNAFU_556_Barrel14_DV:1",
			"SNAFU_556_Barrel16:1",
			"SNAFU_PistolGripColtA2:1",
			"SNAFU_PEQ1_Laser:1",
			"SA58_FGrip:1",
			"SNAFUAR15_AFG:1",
			"SNAFUScar_AFG_Tan:1",
			"SNAFUScar_AFG_BK:1",
			"SNAFUMPX_Grip:1",
			"SNAFU_AFG_02_Black:1",
			"SNAFU_AFG_02_OD:1",
			"SNAFU_FGKAC_Grip:1",
			"SNAFU_FGCR_Grip:1",
			"SNAFU_GADAR:1",
			"SNAFU_HG625:1",
			"SNAFU_HGGS:1",
			"SNAFU_MCMR07:1",
			"SNAFU_MCMR08:1",
			"SNAFU_MCMR09:1",
			"SNAFU_MCMR10:1",
			"SNAFU_MCMR13:1",
			"SNAFU_MCMR15:1",
			"SNAFU_HGMlok:1",
			"SNAFU_HGMlok_Tan:1",
			"SNAFU_MK7:1",
			"SNAFU_MK9:1",
			"SNAFU_MK10:1",
			"SNAFU_MK13:1",
			"SNAFU_MK15:1",
			"SNAFU_LVOAHG:1",
			"SA58_Stock:1",
			"SNAFU_AK_AR_Stock:1",
			"SNAFU_M4SS_Stock:1",
			"SNAFU_MOE_Stock:1",
			"SNAFU_PRSGen3_Stock:1",
			"SNAFU_SCQR_Stock:1",
			"SNAFU_SADAR_Stock:1",
			"SNAFU_SBA_Stock:1",
			"SNAFU_UBR_Stock:1",
			"GCGN_M1Garand_Supp:1",
			"SR3_Vikhr_Supp:1",
			"SNAFU_Normalized_Suppressor_Green:1",
			"SNAFU_Normalized_Suppressor_Black:1",
			"SNAFU_Standardized_Suppressor_Black:1",
			"SNAFU_Standardized_Suppressor_Green:1",
			"SNAFU_LNormalized_Suppressor_Black:1",
			"SNAFU_LNormalized_Suppressor_Green:1",
			"SNAFU_LStandardized_Suppressor_Black:1",
			"SNAFUAR15_SPR_SIL:1",
			"SNAFUAR15_SPR_SQSIL:1",
			"SNAFUKivaari_338_Supp:1",
			"SNAFU_408_Suppressor_T:1",
			"Snafu_ScarH_SIL_Tan:1",
			"Snafu_ScarH_SIL_Black:1",
			"SNAFUGevar_Suppressor_Tan:1",
			"SNAFUGevar_Suppressor_Green:1",
			"SNAFU_Agram_Suppressor_Black:1",
			"SNAFU_MPX_Suppressor_Black:1",
			"SNAFU_SPMOD:1",
			"SNAFU_HeramuzzelF:1",
			"SNAFU_MuzzelFF:1"
		};
	};
	class SuzannzTeddy_Box: Drip_CardboardBox_Base
	{
		scope = 2;
		displayName="Suzannz Teddy Box";
		descriptionShort="Suzannz's Teddy Box offers players a random chance to collect one of the many teddy bears from Suzannz's cherished collection, scattered across Chernarus. Help the world's best 'bearent' by finding and rehoming her beloved babies back to the wild. Once rehabilitated, bring your finds to the Furever Forest Retreat stand at the trader for a special reward from Suzann herself!";
		hiddenSelectionsTextures[] = 
		{
			"DaddysGear\myssteryBox\data\SuzannzTeddyyBox.paa"
		};
		KitArray[] = 
		{
			"SBear_PHK:1",
			"SBear_LBB:1",
			"SBear_LPK:1",
			"SBear_SHK:1",
			"SBear_DBB:1",
			"SBear_DPB:1",
			"SBear_DPK:1"
		};
	};
	/*class _Box: Drip_CardboardBox_Base
	{
		scope = 2;
		displayName="";
		descriptionShort="";
		hiddenSelectionsTextures[] = 
		{
			"DaddysGear\myssteryBox\data\.paa"
		};
		KitArray[] = 
		{
		
		};
	};*/
};