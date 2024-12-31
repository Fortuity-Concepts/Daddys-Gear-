class CfgPatches
{
	class Daddys_Vanilla_Pack_PsychPatientPants
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters", "DZ_Characters_Pants"};
	};
};

/*
```
Tier 1 Pants
--40 Inventory Slots
--No Attachment Slots
--Only Repaired with sewing kit

-TTSKO Pants

--Gorka Pants Colors:
Summer, Autumn, Flat, PautRev

-USMC Pants Colors:
Desert, Woodland

--BDU Pants

--NBC Pants Colors:
Grey, Yellow

-Hunter Pants Colors:
Atumn, Brown, Spring, Summer, Winter

-Police Pants

-Police Pants Orel

-Paramedic Pants Colors:
Blue, Crimson, Green

-Firefighter Pants Colors:
Beige, Black

--Medical Scrub Pants Colors:
Blue, Green, White

-Jean Shorts Colors:
Black, Blue, Brown, Darkblue, Green, Red

--Skirt Colors:
Blue, Red, White, Yellow
```
*/

class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
    class PsychPatientPants: Clothing
	{
		scope=2;
		displayName="Psych Patient Pants";
		descriptionShort="Pants given to you at the psychiatric hospital.";
		model="\dz\characters\pants\prison_pants_g.p3d";
		ContinuouActions[]=
		{
			"AT_WRING_CLOTHES"
		};
		inventorySlot[]=
		{
			"Legs"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		itemSize[]={3,2};
		itemsCargoSize[]={5,5};
		weight=310;
		ragQuantity=3;
		varWetMax=1;
		heatIsolation=0.30000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=0;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\prison_pants_g_co.paa",
			"\dz\characters\pants\data\prison_pants_co.paa",
			"\dz\characters\pants\data\prison_pants_co.paa"
		};
		class ClothingTypes
		{
			male="\dz\characters\pants\prison_pants_m.p3d";
			female="\dz\characters\pants\prison_pants_f.p3d";
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
								"dz\characters\pants\Data\prison_pants.rvmat",
								"dz\characters\pants\Data\prison_pants_g.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\characters\pants\Data\prison_pants.rvmat",
								"dz\characters\pants\Data\prison_pants_g.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\characters\pants\Data\prison_pants_damage.rvmat",
								"dz\characters\pants\Data\prison_pants_g_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\characters\pants\Data\prison_pants_damage.rvmat",
								"dz\characters\pants\Data\prison_pants_g_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\characters\pants\Data\prison_pants_destruct.rvmat",
								"dz\characters\pants\Data\prison_pants_g_destruct.rvmat"
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
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
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
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=1;
					};
				};
			};
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