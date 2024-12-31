class CfgPatches
{
	class Daddys_Vanilla_Pack_PsychPatientJacket
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters","DZ_Characters_Tops"};
	};
};
/*
		Tier1 Tops
		--40 Inventory Slots
		--1 Slot for sewing kit
		--1 slot for cases
		--Only Repaired with sewing kit
		
		--Armband Colors: 
		White, Yellow,
		Orange, Red, Green,
		Pink, Blue, Black
		
		--Tactical Shirt Colors:
		Grey, Black, Olive, Tan
		
		--M65 Jacket Colors:
		Black, Khaki, Tan, Olive

		--TTSKO Jacket

		--Gorka Jacket Colors:
		Summer, Flat, Autumn, PautRev

		--USMC Jacket Colors:
		Desert, Woodland

		--NBC Jacket Colors:
		Grey, Yellow

		--BDU Jacket

		--Police Jacket

		--Police Jacket Orel

		--Paramedic Jacket Colors:
		Blue, Crimson, Green

		--Firefighter Jacket Colors:
		Beige, Black

		--Mini Dress Colors:
		Pink, Pink Checkered,
		Red, White, Green, Brown,
		Blue, Blue With Dots

		--Bomber Jacket Colors:
		Black, Brown, Blue, Grey
		Maroon, Olive, Sky Blue

		--Hunting Jacket Colors:
		Autumn, Brown, Spring, Summer, Winter

		--Medical Scrub Shirt Colors:
		Blue, Green, White

		--Nurse Dress Colors:
		White, Blue
		
		*/
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class PsychPatientJacket: Clothing
	{
		scope=2;
		displayName="Psych Patient Shirt";
		descriptionShort="Shirt given to you at the psychiatric hospital.";
		model="\dz\characters\tops\prison_top_g.p3d";
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=410;
		itemSize[]={3,3};
		itemsCargoSize[]={5,4};
		ragQuantity=3;
		varWetMax=1;
		heatIsolation=0.30000001;
		soundAttType="WoolShirt";
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		visibilityModifier=0.89999998;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\prison_top_g_co.paa",
			"\dz\characters\tops\data\prison_top_co.paa",
			"\dz\characters\tops\data\prison_top_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"dz\characters\tops\Data\prison_top.rvmat",
								"dz\characters\tops\Data\prison_top_g.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\characters\tops\Data\prison_top.rvmat",
								"dz\characters\tops\Data\prison_top_g.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\characters\tops\Data\prison_top_damage.rvmat",
								"dz\characters\tops\Data\prison_top_g_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\characters\tops\Data\prison_top_damage.rvmat",
								"dz\characters\tops\Data\prison_top_g_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\characters\tops\Data\prison_top_destruct.rvmat",
								"dz\characters\tops\Data\prison_top_g_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.94999999;
					};
					class Blood
					{
						damage=1;
					};
					class Shock
					{
						damage=1;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.94999999;
					};
					class Blood
					{
						damage=1;
					};
					class Shock
					{
						damage=1;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\dz\characters\tops\prison_top_m.p3d";
			female="\dz\characters\tops\prison_top_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};