class CfgPatches
{
	class Daddys_Vanilla_Pack_PsychPatientBoots
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters", "DZ_Characters_Shoes"};
	};
};

class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};

	class PsychPatientBoots_ColorBase: Clothing
	{
		displayName="Psych Patient Boots";
		descriptionShort="Set of boots given to you at the psychiatric hospital.";
		model="\dz\characters\shoes\hikingBoots_low_ground.p3d";
		inventorySlot[]=
		{
			"Feet"
		};
		itemInfo[]=
		{
			"Clothing",
			"Feet"
		};
		itemSize[]={4,3};
		weight=270;
		durability=0.5;
		varWetMax=0.49000001;
		heatIsolation=0.5;
		visibilityModifier=0.89999998;
		repairableWithKits[]={3};
		repairCosts[]={25};
		soundAttType="Sneakers";
		AttType="Boots";
		soundImpactType="default";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\dz\characters\shoes\hikingBoots_low_m.p3d";
			female="\dz\characters\shoes\hikingBoots_low_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=260;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"dz\characters\shoes\Data\hikingBoots_low.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\characters\shoes\Data\hikingBoots_low.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\characters\shoes\Data\hikingBoots_low_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\characters\shoes\Data\hikingBoots_low_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\characters\shoes\Data\hikingBoots_low_destruct.rvmat"
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
					soundSet="AthleticShoes_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="AthleticShoes_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class PsychPatientBoots_Black: PsychPatientBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\shoes\data\HikingBoots_Low_black_co.paa",
			"\dz\characters\shoes\data\HikingBoots_Low_black_co.paa",
			"\dz\characters\shoes\data\HikingBoots_Low_black_co.paa"
		};
	};
};