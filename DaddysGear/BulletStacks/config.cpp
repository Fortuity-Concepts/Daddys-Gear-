class CfgPatches
{
	class DADDYS_Bullets
	{
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Muzzles"
		};
		magazines[]={};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Ammunition_Base: Magazine_Base
	{
		canBeSplit=1;
	};
	class Ammo_12gaPellets: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_12gaRubberSlug: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_12gaSlug: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_22: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_308Win: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_308WinTracer: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_357: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_380: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_40mm_Chemgas: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_40mm_Explosive: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_40mm_Smoke_Black: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_40mm_Smoke_Green: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_40mm_Smoke_Red: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_40mm_Smoke_White: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_45ACP: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_545x39: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_545x39Tracer: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_556x45: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_556x45Tracer: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_762x39: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_762x39Tracer: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_762x54: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_762x54Tracer: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_9x19: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_9x39: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_CupidsBolt: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_Flare: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_FlareBlue: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_FlareGreen: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_FlareRed: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_HuntingBolt: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_ImprovisedBolt_1: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Ammo_ImprovisedBolt_2: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	/*Snafu*/
	class GCGN_Ammo_3006: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class GCGN_Ammo_408Chey: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class GCGN_Ammo_762x51: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class SNAFU_Ammo_127x55mm: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class SNAFU_Ammo_127x55mmAP: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class SNAFU_Ammo_145Cal: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class SNAFU_Ammo_300ACC: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class SNAFU_Ammo_338: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class SNAFU_Ammo_44: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class SNAFU_Ammo_45_70mm: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class SNAFU_Ammo_46x30: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class SNAFU_Ammo_5_7x28mm: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class SNAFU_Ammo_500_SW: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class SNAFU_Ammo_762x25: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class SNAFU_MD_Ammo_556x45mm_M855A1: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	/*BallerZ*/
	class BZ_Ammo_338Cal: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class BZ_Ammo_50Cal: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class BZ_Ammo_145Cal: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class BZ_Ammo_408Cal: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class BZ_Ammo_308Cal: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	/*Diesel*/
	class Diesel_Ammo_338APBear: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Diesel_Ammo_338APBearTracer: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Diesel_Ammo_338AP: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Diesel_Ammo_338APTracer: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Diesel_Ammo_762x54R: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	class Diesel_Ammo_762x54RTracer: Ammunition_Base
	{
		weight=1;
		count=120;
		itemSize[]={1,1};
	};
	
};