class CfgPatches
{
	class Daddys_Items
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Powered_Base;
	class Box_Base;
	class NailBox: Box_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_NailBox0";
		descriptionShort="$STR_CfgVehicles_NailBox1";
		model="\dz\gear\consumables\Nails_box.p3d";
		weight=2540;
		absorbency=0.80000001;
		itemSize[]={1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\consumables\data\Box_of_Nails.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\consumables\data\Box_of_Nails.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\consumables\data\Box_of_Nails_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\consumables\data\Box_of_Nails_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\consumables\data\Box_of_Nails_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Resources
		{
			class Nail
			{
				value=100;
				variable="quantity";
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
	class SewingKit: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_SewingKit0";
		descriptionShort="$STR_CfgVehicles_SewingKit1";
		model="\dz\gear\tools\sewing_kit.p3d";
		inventorySlot[] +=
		{
			"SewingKit"
		};
		debug_ItemCategory=2;
		animClass="Knife";
		rotationFlags=17;
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=300;
		varQuantityMin=0;
		varQuantityMax=300;
		itemSize[]={1,2};
		weight=210;
		weightPerQuantityUnit=0.2;
		fragility=0.0099999998;
		repairKitType=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\sewing_kit.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\sewing_kit.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\sewing_kit_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\sewing_kit_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\sewing_kit_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class Stitch
				{
					soundSet="StitchUpSelf_SoundSet";
					id=201;
				};
				class pickup
				{
					soundSet="sewingkit_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="sewingkit_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class DuctTape: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_DuctTape0";
		descriptionShort="$STR_CfgVehicles_DuctTape1";
		model="\dz\gear\consumables\DuctTape.p3d";
		inventorySlot[] +=
		{
			"DuctTape"
		};
		OnRestrainChange="DuctTapeLocked";
		isMeleeWeapon=1;
		weight=100;
		weightPerQuantityUnit=5;
		absorbency=0.30000001;
		itemSize[]={2,2};
		rotationFlags=17;
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		repairKitType=5;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\consumables\data\duct_tape.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\consumables\data\duct_tape.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\consumables\data\duct_tape_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\consumables\data\duct_tape_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\consumables\data\duct_tape_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class rope_untie
				{
					soundSet="rope_untie_SoundSet";
					id=202;
				};
				class rope_struggle
				{
					soundSet="rope_struggle_SoundSet";
					id=203;
				};
				class ducttape_tieup
				{
					soundSet="ducttape_tieup_SoundSet";
					id=13338;
				};
				class rope_tieup_end
				{
					soundSet="rope_tieup_end_SoundSet";
					id=13339;
				};
				class rope_tieup_back
				{
					soundSet="rope_tieup_back_SoundSet";
					id=13340;
				};
			};
		};
	};
	class WeaponCleaningKit: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_WeaponCleaningKit0";
		descriptionShort="$STR_CfgVehicles_WeaponCleaningKit1";
		model="\dz\gear\tools\cleaning_kit_wood.p3d";
		inventorySlot[] +=
		{
			"WeaponCleaningKit"
		};
		debug_ItemCategory=2;
		animClass="Knife";
		rotationFlags=17;
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		weight=780;
		weightPerQuantityUnit=0;
		itemSize[]={2,3};
		fragility=0.0099999998;
		repairKitType=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\cleaning_kit_wood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\cleaning_kit_wood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\cleaning_kit_wood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\cleaning_kit_wood_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\cleaning_kit_wood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFistLight";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFistHeavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFistHeavy";
				range=2.8;
			};
		};
		soundImpactType="wood";
	};
	class LeatherSewingKit: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_LeatherSewingKit0";
		descriptionShort="$STR_CfgVehicles_LeatherSewingKit1";
		model="\dz\gear\tools\leather_sewing_kit.p3d";
		inventorySlot[] +=
		{
			"LeatherSewingKit"
		};
		debug_ItemCategory=2;
		animClass="Knife";
		rotationFlags=1;
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		weight=1200;
		weightPerQuantityUnit=0.30000001;
		itemSize[]={2,3};
		fragility=0.0099999998;
		repairKitType=3;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\leather_sewing_kit.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\leather_sewing_kit.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\leather_sewing_kit_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\leather_sewing_kit_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\leather_sewing_kit_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="textile";
		class AnimEvents
		{
			class SoundWeapon
			{
				class Stitch
				{
					soundSet="StitchUpSelf_SoundSet";
					id=201;
				};
				class pickup
				{
					soundSet="sewingkit_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="sewingkit_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};