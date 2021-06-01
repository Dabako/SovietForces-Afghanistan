class cfgPatches
{
  class sfa_vdv_units
  {
    units[]={"sfa_at_specialist_vdv","sfa_efreitor_vdv","sfa_engineer_vdv","sfa_grenadier_rpg_vdv","sfa_grenadier_assistant_vdv","sfa_junior_sergeant_vdv","sfa_machine_gunner_vdv","sfa_machine_gunner_assistant_vdv","sfa_marksman_vdv","sfa_medic_vdv","sfa_officer_vdv","sfa_officer_armored_vdv","sfa_rifleman_vdv","sfa_rifleman_gp25_vdv","sfa_rifleman_rpg18_vdv","sfa_rifleman_rshg2_vdv","sfa_sergeant_vdv","sfa_Rifleman_Light_vdv"};
    weapons[]={"sfa_rhs_weap_aks74_rhs_acc_dtk1983","sfa_rhs_weap_rpg7_rhs_acc_pgo7v","sfa_rhs_weap_aks74n_rhs_acc_dtk","sfa_rhs_weap_rpg18","sfa_rhs_weap_rsp30_red","sfa_rhs_weap_akms_rhs_acc_dtkakm","sfa_rhs_weap_aks74_rhs_acc_dtk","sfa_rhs_weap_aks74n_gp25_rhs_acc_dtk","sfa_rhs_weap_makarov_pm","sfa_rhs_weap_pkm","sfa_rhs_weap_svdp_rhs_acc_pso1m2","sfa_rhs_weap_aks74_gp25_rhs_acc_dtk","sfa_rhs_weap_rshg2"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F_Items","A3_Weapons_F","rhs_c_weapons","rhs_c_troops"};
  };
};

class cfgFactionClasses
{
  class Soviet_Forces_Afghanistan
  {
    icon="";
    displayName="Soviet Forces Afghanistan";
    side=0;
    priority=1;
  };
};

class CfgEditorSubcategories
{
	class EdSubcat_SFA_Infantry_Summer_vdv
	{
		displayName = "Infantry (VDV)"; // Name visible in the list
	};
};


class cfgWeapons
{
  class rhs_weap_aks74;
  class rhs_weap_rpg7;
  class rhs_weap_aks74n;
  class rhs_weap_rpg18;
  class rhs_weap_rsp30_red;
  class rhs_weap_akms;
  class rhs_weap_aks74n_gp25;
  class rhs_weap_makarov_pm;
  class rhs_weap_pkm;
  class rhs_weap_svdp;
  class rhs_weap_aks74_gp25;
  class rhs_weap_rshg2;

  class sfa_rhs_weap_aks74_rhs_acc_dtk1983: rhs_weap_aks74
  {
    displayName="AKS-74";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtk1983";
      };
    };
  };

  class sfa_rhs_weap_rpg7_rhs_acc_pgo7v: rhs_weap_rpg7
  {
    displayName="RPG-7V2";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhs_acc_pgo7v";
      };
    };
  };

  class sfa_rhs_weap_aks74n_rhs_acc_dtk: rhs_weap_aks74n
  {
    displayName="AKS-74N";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtk";
      };
    };
  };

  class sfa_rhs_weap_rpg18: rhs_weap_rpg18
  {
    displayName="RPG-18";
    scope=1;
    class LinkedItems
    {
    };
  };

  class sfa_rhs_weap_rsp30_red: rhs_weap_rsp30_red
  {
    displayName="RSP-30 (Red)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class sfa_rhs_weap_akms_rhs_acc_dtkakm: rhs_weap_akms
  {
    displayName="AKMS";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtkakm";
      };
    };
  };

  class sfa_rhs_weap_aks74_rhs_acc_dtk: rhs_weap_aks74
  {
    displayName="AKS-74";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtk";
      };
    };
  };

  class sfa_rhs_weap_aks74n_gp25_rhs_acc_dtk: rhs_weap_aks74n_gp25
  {
    displayName="AKS-74N (GP-25)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtk";
      };
    };
  };

  class sfa_rhs_weap_makarov_pm: rhs_weap_makarov_pm
  {
    displayName="PM";
    scope=1;
    class LinkedItems
    {
    };
  };

  class sfa_rhs_weap_pkm: rhs_weap_pkm
  {
    displayName="PKM";
    scope=1;
    class LinkedItems
    {
    };
  };

  class sfa_rhs_weap_svdp_rhs_acc_pso1m2: rhs_weap_svdp
  {
    displayName="SVDM";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhs_acc_pso1m2";
      };
    };
  };

  class sfa_rhs_weap_aks74_gp25_rhs_acc_dtk: rhs_weap_aks74_gp25
  {
    displayName="AKS-74 (GP-25)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtk";
      };
    };
  };

  class sfa_rhs_weap_rshg2: rhs_weap_rshg2
  {
    displayName="RShG-2";
    scope=1;
    class LinkedItems
    {
    };
  };

};

class cfgVehicles
{
  class rhs_msv_at;
  class rhs_rpg_6b3;
  class rhs_msv_efreitor;
  class rhs_msv_engineer;
  class rhs_rd54_vest;
  class rhs_msv_strelok_rpg_assist;
  class rhs_msv_junior_sergeant;
  class rhs_msv_machinegunner;
  class rhs_msv_machinegunner_assistant;
  class rhs_msv_marksman;
  class rhs_msv_medic;
  class rhs_medic_bag;
  class rhs_msv_officer;
  class rhs_msv_officer_armored;
  class rhs_msv_rifleman;
  class rhs_msv_grenadier;
  class rhs_msv_LAT;
  class rhs_msv_RShG2;
  class rhs_msv_sergeant;

  class sfa_at_specialist_vdv: rhs_msv_at
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    editorSubcategory="EdSubcat_SFA_Infantry_Summer_vdv";
    side=0;
    displayName="AT Specialist";
    uniformClass="rhs_uniform_afghanka_para";
    weapons[]={"Binocular","sfa_rhs_weap_aks74_rhs_acc_dtk1983","sfa_rhs_weap_rpg7_rhs_acc_pgo7v","Put","Throw"};
    respawnWeapons[]={"Binocular","sfa_rhs_weap_aks74_rhs_acc_dtk1983","sfa_rhs_weap_rpg7_rhs_acc_pgo7v","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag","rhs_rpg7_OG7V_mag"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag","rhs_rpg7_OG7V_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3"};
    headgearList[] = {"rhs_ssh68_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3"};
    backpack="sfa_at_specialist_vdv_pack";
  };

  class sfa_efreitor_vdv: rhs_msv_efreitor
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    editorSubcategory="EdSubcat_SFA_Infantry_Summer_vdv";
    side=0;
    displayName="Efreitor";
    uniformClass="rhs_uniform_afghanka_para";
    weapons[]={"Binocular","sfa_rhs_weap_aks74n_rhs_acc_dtk","sfa_rhs_weap_rpg18","sfa_rhs_weap_rsp30_red","Put","Throw"};
    respawnWeapons[]={"Binocular","sfa_rhs_weap_aks74n_rhs_acc_dtk","sfa_rhs_weap_rpg18","sfa_rhs_weap_rsp30_red","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_AK_2"};
    headgearList[] = {"rhs_ssh68_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_AK_2"};
    backpack="";
  };

  class sfa_engineer_vdv: rhs_msv_engineer
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    editorSubcategory="EdSubcat_SFA_Infantry_Summer_vdv";
    side=0;
    displayName="Engineer";
    uniformClass="rhs_uniform_afghanka_para";
    weapons[]={"Binocular","sfa_rhs_weap_akms_rhs_acc_dtkakm","Put","Throw"};
    respawnWeapons[]={"Binocular","sfa_rhs_weap_akms_rhs_acc_dtkakm","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","ToolKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","ToolKit"};
    magazines[]={"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_ec200_sand_mag","rhs_ec200_sand_mag"};
    respawnMagazines[]={"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_ec200_sand_mag","rhs_ec200_sand_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_RPK"};
    headgearList[] = {"rhs_ssh68_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_RPK"};
    backpack="sfa_engineer_vdv_pack";
  };

  class sfa_grenadier_rpg_vdv: rhs_msv_at
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    editorSubcategory="EdSubcat_SFA_Infantry_Summer_vdv";
    side=0;
    displayName="Grenadier (RPG)";
    uniformClass="rhs_uniform_afghanka_para";
    weapons[]={"Binocular","sfa_rhs_weap_aks74_rhs_acc_dtk1983","sfa_rhs_weap_rpg7_rhs_acc_pgo7v","Put","Throw"};
    respawnWeapons[]={"Binocular","sfa_rhs_weap_aks74_rhs_acc_dtk1983","sfa_rhs_weap_rpg7_rhs_acc_pgo7v","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_rpg7_OG7V_mag","rhs_rpg7_OG7V_mag","rhs_rpg7_OG7V_mag"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_rpg7_OG7V_mag","rhs_rpg7_OG7V_mag","rhs_rpg7_OG7V_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3"};
    headgearList[] = {"rhs_ssh68_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3"};
    backpack="sfa_grenadier_rpg_vdv_pack";
  };

  class sfa_grenadier_assistant_vdv: rhs_msv_strelok_rpg_assist
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    editorSubcategory="EdSubcat_SFA_Infantry_Summer_vdv";
    side=0;
    displayName="Grenadier Assistant";
    uniformClass="rhs_uniform_afghanka_para";
    weapons[]={"Binocular","sfa_rhs_weap_aks74_rhs_acc_dtk","Put","Throw"};
    respawnWeapons[]={"Binocular","sfa_rhs_weap_aks74_rhs_acc_dtk","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_AK_3"};
    headgearList[] = {"rhs_ssh68_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_AK_3"};
    backpack="sfa_grenadier_assistant_vdv_pack";
  };

  class sfa_junior_sergeant_vdv: rhs_msv_junior_sergeant
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    editorSubcategory="EdSubcat_SFA_Infantry_Summer_vdv";
    side=0;
    displayName="Junior Sergeant";
    uniformClass="rhs_uniform_afghanka_para";
    weapons[]={"Binocular","sfa_rhs_weap_aks74n_gp25_rhs_acc_dtk","sfa_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"Binocular","sfa_rhs_weap_aks74n_gp25_rhs_acc_dtk","sfa_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_VOG25","rhs_VOG25"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_VOG25","rhs_VOG25"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_VOG_2"};
    headgearList[] = {"rhs_ssh68_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_VOG_2"};
    backpack="";
  };

  class sfa_machine_gunner_vdv: rhs_msv_machinegunner
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    editorSubcategory="EdSubcat_SFA_Infantry_Summer_vdv";
    side=0;
    displayName="Machine Gunner";
    uniformClass="rhs_uniform_afghanka_para";
    weapons[]={"Binocular","sfa_rhs_weap_pkm","Put","Throw"};
    respawnWeapons[]={"Binocular","sfa_rhs_weap_pkm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
    respawnMagazines[]={"rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_RPK"};
    headgearList[] = {"rhs_ssh68_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_RPK"};
    backpack="sfa_machine_gunner_vdv_pack";
  };

  class sfa_machine_gunner_assistant_vdv: rhs_msv_machinegunner_assistant
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    editorSubcategory="EdSubcat_SFA_Infantry_Summer_vdv";
    side=0;
    displayName="Machine Gunner Assistant";
    uniformClass="rhs_uniform_afghanka_para";
    weapons[]={"Binocular","sfa_rhs_weap_aks74_rhs_acc_dtk","Put","Throw"};
    respawnWeapons[]={"Binocular","sfa_rhs_weap_aks74_rhs_acc_dtk","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3"};
    headgearList[] = {"rhs_ssh68_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3"};
    backpack="sfa_machine_gunner_assistant_vdv_pack";
  };

  class sfa_marksman_vdv: rhs_msv_marksman
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    editorSubcategory="EdSubcat_SFA_Infantry_Summer_vdv";
    side=0;
    displayName="Marksman";
    uniformClass="rhs_uniform_afghanka_para";
    weapons[]={"Binocular","sfa_rhs_weap_svdp_rhs_acc_pso1m2","Put","Throw"};
    respawnWeapons[]={"Binocular","sfa_rhs_weap_svdp_rhs_acc_pso1m2","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
    respawnMagazines[]={"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b2_SVD"};
    headgearList[] = {"rhs_ssh68_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b2_SVD"};
    backpack="";
  };

  class sfa_medic_vdv: rhs_msv_medic
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    editorSubcategory="EdSubcat_SFA_Infantry_Summer_vdv";
    side=0;
    displayName="Medic";
    uniformClass="rhs_uniform_afghanka_para";
    weapons[]={"Binocular","sfa_rhs_weap_aks74_rhs_acc_dtk","Put","Throw"};
    respawnWeapons[]={"Binocular","sfa_rhs_weap_aks74_rhs_acc_dtk","Put","Throw"};
    items[]={"FirstAidKit","Medikit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","Medikit","FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_AK"};
    headgearList[] = {"rhs_ssh68_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_AK"};
    backpack="sfa_medic_vdv_pack";
  };

  class sfa_officer_vdv: rhs_msv_officer
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    editorSubcategory="EdSubcat_SFA_Infantry_Summer_vdv";
    side=0;
    displayName="Officer";
    uniformClass="rhs_uniform_afghanka_para";
    weapons[]={"Binocular","sfa_rhs_weap_aks74n_rhs_acc_dtk","sfa_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"Binocular","sfa_rhs_weap_aks74n_rhs_acc_dtk","sfa_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_mag_rdg2_white","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_30Rnd_545x39_7N6M_AK"};
    respawnMagazines[]={"rhs_mag_rdg2_white","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_30Rnd_545x39_7N6M_AK"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_beret_vdv_early","rhs_gear_OFF"};
    headgearList[] = {"rhs_ssh68_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_beret_vdv_early","rhs_gear_OFF"};
    backpack="";
  };

  class sfa_officer_armored_vdv: rhs_msv_officer_armored
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    editorSubcategory="EdSubcat_SFA_Infantry_Summer_vdv";
    side=0;
    displayName="Officer (Armored)";
    uniformClass="rhs_uniform_afghanka_para";
    weapons[]={"Binocular","sfa_rhs_weap_aks74n_rhs_acc_dtk","sfa_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"Binocular","sfa_rhs_weap_aks74n_rhs_acc_dtk","sfa_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_off"};
    headgearList[] = {"rhs_ssh68_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_off"};
    backpack="";
  };

  class sfa_rifleman_vdv: rhs_msv_rifleman
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    editorSubcategory="EdSubcat_SFA_Infantry_Summer_vdv";
    side=0;
    displayName="Rifleman";
    uniformClass="rhs_uniform_afghanka_para";
    weapons[]={"Binocular","sfa_rhs_weap_aks74_rhs_acc_dtk","Put","Throw"};
    respawnWeapons[]={"Binocular","sfa_rhs_weap_aks74_rhs_acc_dtk","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_AK_2"};
    headgearList[] = {"rhs_ssh68_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_AK_2"};
    backpack="";
  };

  class sfa_rifleman_gp25_vdv: rhs_msv_grenadier
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    editorSubcategory="EdSubcat_SFA_Infantry_Summer_vdv";
    side=0;
    displayName="Rifleman (GP-25)";
    uniformClass="rhs_uniform_afghanka_para";
    weapons[]={"Binocular","sfa_rhs_weap_aks74_gp25_rhs_acc_dtk","Put","Throw"};
    respawnWeapons[]={"Binocular","sfa_rhs_weap_aks74_gp25_rhs_acc_dtk","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_VOG25","rhs_VOG25"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_VOG25","rhs_VOG25"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_VOG"};
    headgearList[] = {"rhs_ssh68_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_VOG"};
    backpack="";
  };

  class sfa_rifleman_rpg18_vdv: rhs_msv_LAT
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    editorSubcategory="EdSubcat_SFA_Infantry_Summer_vdv";
    side=0;
    displayName="Rifleman (RPG-18)";
    uniformClass="rhs_uniform_afghanka_para";
    weapons[]={"Binocular","sfa_rhs_weap_aks74_rhs_acc_dtk","sfa_rhs_weap_rpg18","Put","Throw"};
    respawnWeapons[]={"Binocular","sfa_rhs_weap_aks74_rhs_acc_dtk","sfa_rhs_weap_rpg18","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3"};
    headgearList[] = {"rhs_ssh68_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3"};
    backpack="";
  };

  class sfa_rifleman_rshg2_vdv: rhs_msv_RShG2
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    editorSubcategory="EdSubcat_SFA_Infantry_Summer_vdv";
    side=0;
    displayName="Rifleman (RShG-2)";
    uniformClass="rhs_uniform_afghanka_para";
    weapons[]={"Binocular","sfa_rhs_weap_aks74_rhs_acc_dtk1983","sfa_rhs_weap_rshg2","Put","Throw"};
    respawnWeapons[]={"Binocular","sfa_rhs_weap_aks74_rhs_acc_dtk1983","sfa_rhs_weap_rshg2","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3"};
    headgearList[] = {"rhs_ssh68_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3"};
    backpack="";
  };

  class sfa_sergeant_vdv: rhs_msv_sergeant
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    editorSubcategory="EdSubcat_SFA_Infantry_Summer_vdv";
    side=0;
    displayName="Sergeant";
    uniformClass="rhs_uniform_afghanka_para";
    weapons[]={"Binocular","sfa_rhs_weap_aks74n_gp25_rhs_acc_dtk","sfa_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"Binocular","sfa_rhs_weap_aks74n_gp25_rhs_acc_dtk","sfa_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_VOG25","rhs_VOG25"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_VOG25","rhs_VOG25"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_off"};
    headgearList[] = {"rhs_ssh68_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_off"};
    backpack="";
  };

  class sfa_Rifleman_Light_vdv: rhs_msv_rifleman
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    editorSubcategory="EdSubcat_SFA_Infantry_Summer_vdv";
    side=0;
    displayName="Rifleman (Light)";
    uniformClass="rhs_uniform_afghanka_para";
    weapons[]={"sfa_rhs_weap_aks74_rhs_acc_dtk","Put","Throw"};
    respawnWeapons[]={"sfa_rhs_weap_aks74_rhs_acc_dtk","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgn","rhs_mag_rgn"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgn","rhs_mag_rgn"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_fieldcap_m88","rhs_belt_AK"};
    headgearList[] = {"rhs_ssh68_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_fieldcap_m88","rhs_belt_AK"};
    backpack="";
  };


  class sfa_at_specialist_vdv_pack: rhs_rpg_6b3
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_rpg7_PG7VL_mag {count=2;magazine="rhs_rpg7_PG7VL_mag";};
     class _xx_rhs_rpg7_OG7V_mag {count=1;magazine="rhs_rpg7_OG7V_mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class sfa_engineer_vdv_pack: rhs_rd54_vest
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
    };
    class TransportWeapons{};
  };


  class sfa_grenadier_rpg_vdv_pack: rhs_rpg_6b3
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_rpg7_OG7V_mag {count=3;magazine="rhs_rpg7_OG7V_mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class sfa_grenadier_assistant_vdv_pack: rhs_rpg_6b3
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class sfa_machine_gunner_vdv_pack: rhs_rd54_vest
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_100Rnd_762x54mmR {count=3;magazine="rhs_100Rnd_762x54mmR";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class sfa_machine_gunner_assistant_vdv_pack: rhs_rd54_vest
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_100Rnd_762x54mmR {count=2;magazine="rhs_100Rnd_762x54mmR";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class sfa_medic_vdv_pack: rhs_medic_bag
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_Medikit {count=1;name="Medikit";};
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 

class cfgGroups
{  
  class EAST
  {
    name="OPFOR";
    class Soviet_Forces_Afghanistan
    {
      name="Soviet Forces Afghanistan";

      class Infantry_vdv
      {
        name="Infantry (VDV)";

        class sfa_O_Company_HQ_vdv
        {
          name="Company HQ";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_officer_vdv";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_officer_armored_vdv";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_officer_armored_vdv";
            rank="CORPORAL";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_rifleman_vdv";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class sfa_O_Fireteam_vdv
        {
          name="Fireteam";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_sergeant_vdv";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_machine_gunner_vdv";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_grenadier_rpg_vdv";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_grenadier_assistant_vdv";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class sfa_O_Maneuver_Team_vdv
        {
          name="Maneuver Team";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_efreitor_vdv";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_rifleman_vdv";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_rifleman_vdv";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
        };
        class sfa_O_Rifle_Squad_vdv
        {
          name="Rifle Squad";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_sergeant_vdv";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_machine_gunner_vdv";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_grenadier_rpg_vdv";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_marksman_vdv";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_grenadier_assistant_vdv";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="sfa_rifleman_rpg18_vdv";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
        };
        class sfa_O_Section_AT_vdv
        {
          name="Section AT";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_junior_sergeant_vdv";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_at_specialist_vdv";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_grenadier_assistant_vdv";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_rifleman_rpg18_vdv";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_rifleman_vdv";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
        };
        class sfa_O_Section_Marksman_vdv
        {
          name="Section Marksman ";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_junior_sergeant_vdv";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_machine_gunner_vdv";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_machine_gunner_assistant_vdv";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_rifleman_gp25_vdv";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_marksman_vdv";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
        };
        class sfa_O_Section_MG_vdv
        {
          name="Section MG";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_junior_sergeant_vdv";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_machine_gunner_vdv";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_machine_gunner_assistant_vdv";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_rifleman_gp25_vdv";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_rifleman_vdv";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
        };
        class sfa_O_Squad_vdv
        {
          name="Squad";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_sergeant_vdv";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_efreitor_vdv";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_grenadier_rpg_vdv";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_grenadier_assistant_vdv";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_machine_gunner_vdv";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="sfa_rifleman_rpg18_vdv";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="sfa_grenadier_assistant_vdv";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=0;
            vehicle="sfa_rifleman_vdv";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
          class Unit8
          {
            side=0;
            vehicle="sfa_rifleman_vdv";
            rank="PRIVATE";
            position[]={0,-40,0};
          };
          class Unit9
          {
            side=0;
            vehicle="sfa_medic_vdv";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class sfa_O_Squad_2gpmg_vdv
        {
          name="Squad (2x GPMG)";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_efreitor_vdv";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_junior_sergeant_vdv";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_machine_gunner_vdv";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_machine_gunner_vdv";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_machine_gunner_assistant_vdv";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="sfa_rifleman_rpg18_vdv";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="sfa_medic_vdv";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
        };
        class sfa_O_Squad_gpmg_marksman_vdv
        {
          name="Squad (GPMG + Marksman)";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_rifleman_rshg2_vdv";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_junior_sergeant_vdv";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_machine_gunner_vdv";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_machine_gunner_assistant_vdv";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_medic_vdv";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="sfa_marksman_vdv";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="sfa_rifleman_rpg18_vdv";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
        };
        class sfa_O_Squad_Marksman_vdv
        {
          name="Squad Marksman";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_junior_sergeant_vdv";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_engineer_vdv";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_marksman_vdv";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_rifleman_vdv";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_machine_gunner_vdv";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="sfa_at_specialist_vdv";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="sfa_medic_vdv";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
        };
      };
    };
  };
};
