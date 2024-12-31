class CfgPatches
{
	class Daddys_TierOne
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
        {
            "DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Pants",
			"DZ_Characters_Vests",
			"DZ_Characters_Tops",
			"DZ_Characters_Masks",
			"DZ_Characters_Headgear",
			"DZ_Gear_Camping",
			"DZ_Gear_Crafting",
			"DZ_Gear_Tools",
			"DZ_Gear_Containers",
			"DZ_Weapons_Melee",
			"DZ_Weapons_Firearms",
			"DZ_Pistols",
			"DZ_Data"
        };
	};
};
class CfgVehicles
{
	class Clothing;
	class TaloonBag_ColorBase;
    class TortillaBag;
    class CourierBag;
    class DryBag_ColorBase;
    class AssaultBag_ColorBase;
    class CoyoteBag_ColorBase;
    class AliceBag_ColorBase;
    class SlingBag_ColorBase;
    class ArmyPouch_ColorBase;
    class DuffelBagSmall_ColorBase;
    class CanvasBag_ColorBase;
    class DrysackBag_ColorBase;

    class TaloonBag_T1: TaloonBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"DaddysGear\Clothing\Tier1\taloonTest.[ng.paa",
			"DaddysGear\Clothing\Tier1\taloonTest.[ng.paa",
			"DaddysGear\Clothing\Tier1\taloonTest.[ng.paa"
		};
	};
};