
class CfgPatches
{
	class Stack_Items
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Consumables","DZ_Gear_Tools","DZ_Gear_Camping","DZ_Gear_Crafting","DZ_Weapons_Melee","DZ_Gear_Cooking"};
	};
};
class CfgVehicles
{
	class TentBase;
	class Inventory_Base;
	class MetalWire: Inventory_Base
	{
		itemSize[]={2,2};
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 50;
		varStackMax = 50;
	};
	class BarbedWire: Inventory_Base
	{
		itemSize[]={2,2};
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 50;
		varStackMax = 50;
	};
	class SaltStone: Inventory_Base
	{
		itemSize[]={1,1};
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 100;
		varStackMax = 100;
	};
	class Stone: Inventory_Base
	{
		itemSize[]={2,2};
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 50;
		varStackMax = 50;
	};
	class MetalPlate: Inventory_Base
	{
		itemSize[]={3,3};
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 50;
		varStackMax = 50;
	};
	class WoodenPlank: Inventory_Base
	{
		itemSize[]={1,3};
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 100;
		varStackMax = 100;
	};
	class WoodenLog: Inventory_Base
	{
		itemSize[]={1,3};
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 50;
		varStackMax = 50;
	};
	class FireWood: Inventory_Base
	{
		itemSize[]={1,2};	
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 50;
		varStackMax = 50;
	};
	class Nail: Inventory_Base
	{
		itemSize[]={1,1};
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 500;
		varStackMax = 500;
	};
	class Paper: Inventory_Base
	{
		itemSize[]={1,1};
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 150;
		varStackMax = 150;
	};	
};