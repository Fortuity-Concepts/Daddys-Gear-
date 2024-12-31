class CfgPatches
{
	class DaddysGear_SuzannBears
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Containers"
		};
	};
};

class CfgVehicles
{
	class Container_Base;
    class SmallProtectorCase;
    class TeddyCase__base: SmallProtectorCase
    {
        scope = 2;
        displayName = "Suzannz Premium Teddy Case";
        descriptionShort = "A custom-made protective case for storing  Suzannz Teddies! Holds 50 Teddy Bears!!";
        model = "\dz\gear\containers\protector_case.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
        inventorySlot[] +=
		{
			"Cases"
		};
		attachments[]=
		{
			"Teddys",
			"Teddys1",
			"Teddys2",
			"Teddys3",
			"Teddys4",
			"Teddys5",
			"Teddys6",
			"Teddys7",
			"Teddys8",
			"Teddys9",
			"Teddys10",
			"Teddys11",
			"Teddys12",
			"Teddys13",
			"Teddys14",
			"Teddys15",
			"Teddys16",
			"Teddys17",
			"Teddys18",
			"Teddys19",
			"Teddys20",
			"Teddys21",
			"Teddys22",
			"Teddys23",
			"Teddys24",
			"Teddys25",
			"Teddys26",
			"Teddys27",
			"Teddys28",
			"Teddys29",
			"Teddys30",
			"Teddys31",
			"Teddys32",
			"Teddys33",
			"Teddys34",
			"Teddys35",
			"Teddys36",
			"Teddys37",
			"Teddys38",
			"Teddys39",
			"Teddys40",
			"Teddys41",
			"Teddys42",
			"Teddys43",
			"Teddys44",
			"Teddys45",
			"Teddys46",
			"Teddys47",
			"Teddys48",
			"Teddys49"
		};
        itemsCargoSize[] = {0,0};
        itemSize[] = {2,2};
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"dz\gear\containers\data\Protector_Case.rvmat"
							}
						},
						
						{
							0.75,
							
							{
								"dz\gear\containers\data\Protector_Case.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\gear\containers\data\Protector_Case_damage.rvmat"
							}
						},
						
						{
							0.25,
							
							{
								"dz\gear\containers\data\Protector_Case_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\gear\containers\data\Protector_Case_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage=8;
					};
					class Blood
					{
						damage=8;
					};
					class Shock
					{
						damage=8;
					};
				};
			};
		};
    };
    class TeddyCase__base;
    class pTeddyCase_Pink: TeddyCase__base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DaddysGear\SuzannBears\pTeddyCase_Pink.paa"
		};
	};
	class Bear_ColorBase;
    class sbearBase: Bear_ColorBase
    {
        scope = 2;
        model="\dz\gear\containers\teddybear.p3d";
		inventorySlot[] +=
		{
			"Teddys",
			"Teddys1",
			"Teddys2",
			"Teddys3",
			"Teddys4",
			"Teddys5",
			"Teddys6",
			"Teddys7",
			"Teddys8",
			"Teddys9",
			"Teddys10",
			"Teddys11",
			"Teddys12",
			"Teddys13",
			"Teddys14",
			"Teddys15",
			"Teddys16",
			"Teddys17",
			"Teddys18",
			"Teddys19",
			"Teddys20",
			"Teddys21",
			"Teddys22",
			"Teddys23",
			"Teddys24",
			"Teddys25",
			"Teddys26",
			"Teddys27",
			"Teddys28",
			"Teddys29",
			"Teddys30",
			"Teddys31",
			"Teddys32",
			"Teddys33",
			"Teddys34",
			"Teddys35",
			"Teddys36",
			"Teddys37",
			"Teddys38",
			"Teddys39",
			"Teddys40",
			"Teddys41",
			"Teddys42",
			"Teddys43",
			"Teddys44",
			"Teddys45",
			"Teddys46",
			"Teddys47",
			"Teddys48",
			"Teddys49",
            "VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
			"WalkieTalkie",
			"ChemLight",
			"teddybear",
			"teddybear1",
			"teddybear2",
			"teddybear3",
			"teddybear4",
			"teddybear5",
			"teddybear6",
			"teddybear7",
			"teddybear8",
			"teddybear9",
			"teddybear10",
			"teddybear11",
			"teddybear12",
			"teddybear13",
			"teddybear14",
			"teddybear15",
			"teddybear16",
			"teddybear17",
			"teddybear18",
			"teddybear19",
			"teddybear20",
			"teddybear21",
			"teddybear22",
			"teddybear23",
			"teddybear24",
			"teddybear25",
			"teddybear26",
			"teddybear27",
			"teddybear28",
			"teddybear29",
			"teddybear30",
			"teddybear31",
			"teddybear32",
			"teddybear33",
			"teddybear34",
			"teddybear35"
		};
        itemsCargoSize[] = {0,0};
        itemSize[] = {2,2};
    };
    class sbearBase;
	class SBear_PHK: sbearBase
	{
		scope=2;
		displayName="Suzannz Teddies N.001";
		descriptionShort="Suzann Teddies are the softest, most adorable teddy bears you'll ever find! With their irresistibly cuddly design, nothing compares to the charm of a Suzann Teddy. You can even sell these lovable plushies to Suzann at her teddy stand inside the trader zone for a sweet profit!";
		hiddenSelectionsTextures[]=
		{
			"DaddysGear\SuzannBears\sbear_PHK.paa"
		};
	};
	class SBear_LBB: sbearBase
	{
		scope=2;
		displayName="Suzannz Teddies N.002";
		descriptionShort="Suzann Teddies are the softest, most adorable teddy bears you'll ever find! With their irresistibly cuddly design, nothing compares to the charm of a Suzann Teddy. You can even sell these lovable plushies to Suzann at her teddy stand inside the trader zone for a sweet profit!";
		hiddenSelectionsTextures[]=
		{
			"DaddysGear\SuzannBears\sbear_LBB.paa"
		};
	};
	class SBear_LPK: sbearBase
	{
		scope=2;
		displayName="Suzannz Teddies N.003";
		descriptionShort="Suzann Teddies are the softest, most adorable teddy bears you'll ever find! With their irresistibly cuddly design, nothing compares to the charm of a Suzann Teddy. You can even sell these lovable plushies to Suzann at her teddy stand inside the trader zone for a sweet profit!";
		hiddenSelectionsTextures[]=
		{
			"DaddysGear\SuzannBears\sbear_LPK.paa"
		};
	};
	class SBear_SHK: sbearBase
	{
		scope=2;
		displayName="Suzannz Teddies N.004";
		descriptionShort="Suzann Teddies are the softest, most adorable teddy bears you'll ever find! With their irresistibly cuddly design, nothing compares to the charm of a Suzann Teddy. You can even sell these lovable plushies to Suzann at her teddy stand inside the trader zone for a sweet profit!";
		hiddenSelectionsTextures[]=
		{
			"DaddysGear\SuzannBears\sbear_SHK.paa"
		};
	};
	class SBear_DBB: sbearBase
	{
		scope=2;
		displayName="Suzannz Teddies N.005";
		descriptionShort="Suzann Teddies are the softest, most adorable teddy bears you'll ever find! With their irresistibly cuddly design, nothing compares to the charm of a Suzann Teddy. You can even sell these lovable plushies to Suzann at her teddy stand inside the trader zone for a sweet profit!";
		hiddenSelectionsTextures[]=
		{
			"DaddysGear\SuzannBears\sbear_DBB.paa"
		};
	};
	class SBear_DPB: sbearBase
	{
		scope=2;
		displayName="Suzannz Teddies N.006";
		descriptionShort="Suzann Teddies are the softest, most adorable teddy bears you'll ever find! With their irresistibly cuddly design, nothing compares to the charm of a Suzann Teddy. You can even sell these lovable plushies to Suzann at her teddy stand inside the trader zone for a sweet profit!";
		hiddenSelectionsTextures[]=
		{
			"DaddysGear\SuzannBears\sbear_DPB.paa"
		};
	};
	class SBear_DPK: sbearBase
	{
		scope=2;
		displayName="Suzannz Teddies N.007";
		descriptionShort="Suzann Teddies are the softest, most adorable teddy bears you'll ever find! With their irresistibly cuddly design, nothing compares to the charm of a Suzann Teddy. You can even sell these lovable plushies to Suzann at her teddy stand inside the trader zone for a sweet profit!";
		hiddenSelectionsTextures[]=
		{
			"DaddysGear\SuzannBears\sbear_DPK.paa"
		};
	};
};