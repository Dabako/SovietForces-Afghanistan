class cfgPatches
{
  class Soviet_Forces_Afghanistan
  {
    units[]={"SFA_AT_Specialist","SFA_Efreitor","SFA_Engineer","SFA_Grenadier_RPG","SFA_Grenadier_Assistant","SFA_Junior_Sergeant","SFA_Machine_Gunner","SFA_Machine_Gunner_Assistant","SFA_Marksman","SFA_Medic","SFA_Officer","SFA_Officer_Armored","SFA_Rifleman","SFA_Rilfeman_GP25","SFA_Rifleman_RPG18","SFA_Rifleman_RShG2","SFA_Sergeant","SFA_Rifleman_Light","SFA_Driver_Armored","SFA_crew","SFA_Crew_Armored","SFA_crew_commander","SFA_driver","SFA_BTR_70","SFA_BTR_80","SFA_D30A","SFA_D_30A_AT","SFA_Podnos","SFA_BM21","SFA_S1","SFA_S3M1","SFA_UAZ_3151","SFA_UAZ_3151_Open","SFA_BMP_2D","SFA_BMP_1D","SFA_BMP_2_1980g","SFA_GAZ_66","SFA_GAz_66_Ammo","SFA_GAZ_66_Flatbed","SFA_GAZ_66_OpenFlatbed","SFA_GAZ_66_R_142N","SFA_GAZ_66_ZU_23_2","SFA_GAZ_66_AP_2","SFA_GAZ_66_ESB_8IM","SFA_Ural_4320","SFA_Ural_4320_Flatbed","SFA_Ural_4320_Open","SFA_Ural_4320_Fuel","SFA_Ural_4320_Open_Flatbed","SFA_Ural_4320_Repair","SFA_Ural_4320_ZU_23_2","SFA_AGS_17","SFA_KORD","SFA_KORD_High","SFA_NSV","SFA_SPG9_M","SFA_ZU232","SFA_ZSU234V","SFA_P_37","SFA_PRV13"};
    weapons[]={"SFA_rhs_weap_ak74_rhs_acc_dtk","SFA_rhs_weap_rpg7_rhs_acc_pgo7v","SFA_rhs_weap_ak74n_rhs_acc_dtk","SFA_rhs_weap_rpg18","SFA_rhs_weap_rsp30_red","SFA_rhs_weap_akms_rhs_acc_dtkakm","SFA_rhs_weap_ak74_gp25_rhs_acc_dtk","SFA_rhs_weap_makarov_pm","SFA_rhs_weap_pkm","SFA_rhs_weap_svdp_rhs_acc_pso1m2","SFA_rhs_weap_ak74_rhs_acc_dtk1983","SFA_rhs_weap_rshg2","SFA_rhs_weap_pya","SFA_rhs_weap_aks74u_rhs_acc_pgs64_74u"};
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


class cfgWeapons
{
  class rhs_weap_ak74;
  class rhs_weap_rpg7;
  class rhs_weap_ak74n;
  class rhs_weap_rpg18;
  class rhs_weap_rsp30_red;
  class rhs_weap_akms;
  class rhs_weap_ak74_gp25;
  class rhs_weap_makarov_pm;
  class rhs_weap_pkm;
  class rhs_weap_svdp;
  class rhs_weap_rshg2;
  class rhs_weap_pya;
  class rhs_weap_aks74u;

  class SFA_rhs_weap_ak74_rhs_acc_dtk: rhs_weap_ak74
  {
    displayName="AK-74";
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

  class SFA_rhs_weap_rpg7_rhs_acc_pgo7v: rhs_weap_rpg7
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

  class SFA_rhs_weap_ak74n_rhs_acc_dtk: rhs_weap_ak74n
  {
    displayName="AK-74N";
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

  class SFA_rhs_weap_rpg18: rhs_weap_rpg18
  {
    displayName="RPG-18";
    scope=1;
    class LinkedItems
    {
    };
  };

  class SFA_rhs_weap_rsp30_red: rhs_weap_rsp30_red
  {
    displayName="RSP-30 (Red)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class SFA_rhs_weap_akms_rhs_acc_dtkakm: rhs_weap_akms
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

  class SFA_rhs_weap_ak74_gp25_rhs_acc_dtk: rhs_weap_ak74_gp25
  {
    displayName="AK-74 (GP-25)";
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

  class SFA_rhs_weap_makarov_pm: rhs_weap_makarov_pm
  {
    displayName="PM";
    scope=1;
    class LinkedItems
    {
    };
  };

  class SFA_rhs_weap_pkm: rhs_weap_pkm
  {
    displayName="PKM";
    scope=1;
    class LinkedItems
    {
    };
  };

  class SFA_rhs_weap_svdp_rhs_acc_pso1m2: rhs_weap_svdp
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

  class SFA_rhs_weap_ak74_rhs_acc_dtk1983: rhs_weap_ak74
  {
    displayName="AK-74";
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

  class SFA_rhs_weap_rshg2: rhs_weap_rshg2
  {
    displayName="RShG-2";
    scope=1;
    class LinkedItems
    {
    };
  };

  class SFA_rhs_weap_pya: rhs_weap_pya
  {
    displayName="MP-443";
    scope=1;
    class LinkedItems
    {
    };
  };

  class SFA_rhs_weap_aks74u_rhs_acc_pgs64_74u: rhs_weap_aks74u
  {
    displayName="AKS-74U";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_pgs64_74u";
      };
    };
  };

};

class cfgVehicles
{
  /*extern*/ class rhs_msv_at;
  /*extern*/ class rhs_rpg_6b3;
  /*extern*/ class rhs_msv_efreitor;
  /*extern*/ class rhs_msv_engineer;
  /*extern*/ class rhs_sidor;
  /*extern*/ class rhs_msv_strelok_rpg_assist;
  /*extern*/ class rhs_msv_junior_sergeant;
  /*extern*/ class rhs_msv_machinegunner;
  /*extern*/ class rhs_sidorMG;
  /*extern*/ class rhs_msv_machinegunner_assistant;
  /*extern*/ class rhs_msv_marksman;
  /*extern*/ class rhs_msv_medic;
  /*extern*/ class rhs_medic_bag;
  /*extern*/ class rhs_msv_officer;
  /*extern*/ class rhs_msv_officer_armored;
  /*extern*/ class rhs_msv_rifleman;
  /*extern*/ class rhs_msv_grenadier;
  /*extern*/ class rhs_msv_LAT;
  /*extern*/ class rhs_msv_RShG2;
  /*extern*/ class rhs_msv_sergeant;
  /*extern*/ class rhs_msv_driver_armored;
  /*extern*/ class rhs_msv_crew;
  /*extern*/ class rhs_msv_armoredcrew;
  /*extern*/ class rhs_msv_crew_commander;
  /*extern*/ class rhs_msv_driver;
  /*extern*/ class rhs_btr70_msv;
  /*extern*/ class rhs_btr80_msv;
  /*extern*/ class rhs_D30_msv;
  /*extern*/ class rhs_D30_at_msv;
  /*extern*/ class rhs_2b14_82mm_msv;
  /*extern*/ class RHS_BM21_MSV_01;
  /*extern*/ class rhs_2s1_tv;
  /*extern*/ class rhs_2s3_tv;
  /*extern*/ class RHS_UAZ_MSV_01;
  /*extern*/ class rhs_uaz_open_MSV_01;
  /*extern*/ class rhs_bmp2d_msv;
  /*extern*/ class rhs_bmp1d_msv;
  /*extern*/ class rhs_bmp2e_msv;
  /*extern*/ class rhs_gaz66_msv;
  /*extern*/ class rhs_gaz66_ammo_msv;
  /*extern*/ class rhs_gaz66_flat_msv;
  /*extern*/ class rhs_gaz66o_flat_msv;
  /*extern*/ class rhs_gaz66_r142_msv;
  /*extern*/ class rhs_gaz66_zu23_msv;
  /*extern*/ class rhs_gaz66_ap2_msv;
  /*extern*/ class rhs_gaz66_repair_msv;
  /*extern*/ class RHS_Ural_MSV_01;
  /*extern*/ class RHS_Ural_Flat_MSV_01;
  /*extern*/ class RHS_Ural_Open_MSV_01;
  /*extern*/ class RHS_Ural_Fuel_MSV_01;
  /*extern*/ class RHS_Ural_Open_Flat_MSV_01;
  /*extern*/ class RHS_Ural_Repair_MSV_01;
  /*extern*/ class RHS_Ural_Zu23_MSV_01;
  /*extern*/ class RHS_AGS30_TriPod_MSV;
  /*extern*/ class rhs_KORD_MSV;
  /*extern*/ class rhs_KORD_high_MSV;
  /*extern*/ class RHS_NSV_TriPod_MSV;
  /*extern*/ class rhs_SPG9M_MSV;
  /*extern*/ class RHS_ZU23_MSV;
  /*extern*/ class rhs_zsu234_aa;
  /*extern*/ class rhs_p37_turret_vpvo;
  /*extern*/ class rhs_prv13_turret_vpvo;
  /*extern*/ class Turrets;
  /*extern*/ class MainTurret;
  /*extern*/ class StaticCannon;
  class SFA_2S1_base: rhs_2s1_tv
  {
		class MainTurret: MainTurret {
			class Turrets: Turrets {
				class /*extern*/ CommanderOptics;
      };
    };
  };
    


  class SFA_AT_Specialist: rhs_msv_at
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="AT Specialist";
    uniformClass="rhs_uniform_afghanka_boots";
    weapons[]={"Binocular","SFA_rhs_weap_ak74_rhs_acc_dtk","SFA_rhs_weap_rpg7_rhs_acc_pgo7v","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_ak74_rhs_acc_dtk","SFA_rhs_weap_rpg7_rhs_acc_pgo7v","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag","rhs_rpg7_OG7V_mag"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag","rhs_rpg7_OG7V_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3"};
    backpack="SFA_AT_Specialist_pack";
  };

  class SFA_Efreitor: rhs_msv_efreitor
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Efreitor";
    uniformClass="rhs_uniform_afghanka";
    weapons[]={"Binocular","SFA_rhs_weap_ak74n_rhs_acc_dtk","SFA_rhs_weap_rpg18","SFA_rhs_weap_rsp30_red","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_ak74n_rhs_acc_dtk","SFA_rhs_weap_rpg18","SFA_rhs_weap_rsp30_red","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_AK_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_AK_2"};
    backpack="";
  };

  class SFA_Engineer: rhs_msv_engineer
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Engineer";
    uniformClass="rhs_uniform_afghanka";
    weapons[]={"Binocular","SFA_rhs_weap_akms_rhs_acc_dtkakm","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_akms_rhs_acc_dtkakm","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","ToolKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","ToolKit"};
    magazines[]={"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_ec200_sand_mag","rhs_ec200_sand_mag"};
    respawnMagazines[]={"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_ec200_sand_mag","rhs_ec200_sand_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_RPK"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_RPK"};
    backpack="SFA_Engineer_pack";
  };

  class SFA_Grenadier_RPG: rhs_msv_at
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Grenadier (RPG)";
    uniformClass="rhs_uniform_afghanka_boots";
    weapons[]={"Binocular","SFA_rhs_weap_ak74_rhs_acc_dtk","SFA_rhs_weap_rpg7_rhs_acc_pgo7v","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_ak74_rhs_acc_dtk","SFA_rhs_weap_rpg7_rhs_acc_pgo7v","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_rpg7_OG7V_mag","rhs_rpg7_OG7V_mag","rhs_rpg7_OG7V_mag"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_rpg7_OG7V_mag","rhs_rpg7_OG7V_mag","rhs_rpg7_OG7V_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3"};
    backpack="SFA_Grenadier_RPG_pack";
  };

  class SFA_Grenadier_Assistant: rhs_msv_strelok_rpg_assist
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Grenadier Assistant";
    uniformClass="rhs_uniform_afghanka_boots";
    weapons[]={"Binocular","SFA_rhs_weap_ak74_rhs_acc_dtk","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_ak74_rhs_acc_dtk","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_AK_3"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_AK_3"};
    backpack="SFA_Grenadier_Assistant_pack";
  };

  class SFA_Junior_Sergeant: rhs_msv_junior_sergeant
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Junior Sergeant";
    uniformClass="rhs_uniform_afghanka";
    weapons[]={"Binocular","SFA_rhs_weap_ak74_gp25_rhs_acc_dtk","SFA_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_ak74_gp25_rhs_acc_dtk","SFA_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_GRD40_Green","rhs_GRD40_Red","rhs_VG40OP_white","rhs_VG40OP_green","rhs_mag_rgd5","rhs_mag_rgd5"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_GRD40_Green","rhs_GRD40_Red","rhs_VG40OP_white","rhs_VG40OP_green","rhs_mag_rgd5","rhs_mag_rgd5"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_VOG_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_VOG_2"};
    backpack="";
  };

  class SFA_Machine_Gunner: rhs_msv_machinegunner
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Machine Gunner";
    uniformClass="rhs_uniform_afghanka_boots";
    weapons[]={"Binocular","SFA_rhs_weap_pkm","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_pkm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
    respawnMagazines[]={"rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_RPK"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_RPK"};
    backpack="SFA_Machine_Gunner_pack";
  };

  class SFA_Machine_Gunner_Assistant: rhs_msv_machinegunner_assistant
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Machine Gunner Assistant";
    uniformClass="rhs_uniform_afghanka_boots";
    weapons[]={"Binocular","SFA_rhs_weap_ak74_rhs_acc_dtk","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_ak74_rhs_acc_dtk","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3"};
    backpack="SFA_Machine_Gunner_Assistant_pack";
  };

  class SFA_Marksman: rhs_msv_marksman
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Marksman";
    uniformClass="rhs_uniform_afghanka";
    weapons[]={"Binocular","SFA_rhs_weap_svdp_rhs_acc_pso1m2","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_svdp_rhs_acc_pso1m2","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
    respawnMagazines[]={"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b2_SVD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b2_SVD"};
    backpack="";
  };

  class SFA_Medic: rhs_msv_medic
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Medic";
    uniformClass="rhs_uniform_afghanka";
    weapons[]={"Binocular","SFA_rhs_weap_ak74_rhs_acc_dtk","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_ak74_rhs_acc_dtk","Put","Throw"};
    items[]={"FirstAidKit","Medikit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","Medikit","FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_AK"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_AK"};
    backpack="SFA_Medic_pack";
  };

  class SFA_Officer: rhs_msv_officer
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Officer";
    uniformClass="rhs_uniform_afghanka";
    weapons[]={"Binocular","SFA_rhs_weap_ak74_rhs_acc_dtk","SFA_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_ak74_rhs_acc_dtk","SFA_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_mag_rdg2_white","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_30Rnd_545x39_7N6M_AK"};
    respawnMagazines[]={"rhs_mag_rdg2_white","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_30Rnd_545x39_7N6M_AK"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_fieldcap_m88","rhs_gear_OFF"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_fieldcap_m88","rhs_gear_OFF"};
    backpack="";
  };

  class SFA_Officer_Armored: rhs_msv_officer_armored
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Officer (Armored)";
    uniformClass="rhs_uniform_afghanka";
    weapons[]={"Binocular","SFA_rhs_weap_ak74_rhs_acc_dtk","SFA_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_ak74_rhs_acc_dtk","SFA_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_off"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_off"};
    backpack="";
  };

  class SFA_Rifleman: rhs_msv_rifleman
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Rifleman";
    uniformClass="rhs_uniform_afghanka";
    weapons[]={"Binocular","SFA_rhs_weap_ak74_rhs_acc_dtk","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_ak74_rhs_acc_dtk","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_AK_2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_AK_2"};
    backpack="";
  };

  class SFA_Rilfeman_GP25: rhs_msv_grenadier
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Rilfeman (GP-25)";
    uniformClass="rhs_uniform_afghanka_boots";
    weapons[]={"Binocular","SFA_rhs_weap_ak74_gp25_rhs_acc_dtk","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_ak74_gp25_rhs_acc_dtk","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_VG40OP_green","rhs_VG40OP_red","rhs_GRD40_Green","rhs_GRD40_Red","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_VG40OP_green","rhs_VG40OP_red","rhs_GRD40_Green","rhs_GRD40_Red","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_VOG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_VOG"};
    backpack="";
  };

  class SFA_Rifleman_RPG18: rhs_msv_LAT
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Rifleman (RPG-18)";
    uniformClass="rhs_uniform_afghanka_boots";
    weapons[]={"Binocular","SFA_rhs_weap_ak74_rhs_acc_dtk","SFA_rhs_weap_rpg18","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_ak74_rhs_acc_dtk","SFA_rhs_weap_rpg18","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3"};
    backpack="";
  };

  class SFA_Rifleman_RShG2: rhs_msv_RShG2
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Rifleman (RShG2)";
    uniformClass="rhs_uniform_afghanka_boots";
    weapons[]={"Binocular","SFA_rhs_weap_ak74_rhs_acc_dtk1983","SFA_rhs_weap_rshg2","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_ak74_rhs_acc_dtk1983","SFA_rhs_weap_rshg2","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3"};
    backpack="";
  };

  class SFA_Sergeant: rhs_msv_sergeant
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Sergeant";
    uniformClass="rhs_uniform_afghanka";
    weapons[]={"Binocular","SFA_rhs_weap_ak74_gp25_rhs_acc_dtk","SFA_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_ak74_gp25_rhs_acc_dtk","SFA_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgd5"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_off"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_ssh68_2","rhs_6b3_off"};
    backpack="";
  };

  class SFA_Rifleman_Light: rhs_msv_rifleman
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Rifleman (Light)";
    uniformClass="rhs_uniform_afghanka_boots";
    weapons[]={"SFA_rhs_weap_ak74_rhs_acc_dtk","Put","Throw"};
    respawnWeapons[]={"SFA_rhs_weap_ak74_rhs_acc_dtk","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgn","rhs_mag_rgn","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_mag_rgn","rhs_mag_rgn","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_fieldcap_m88","rhs_belt_AK"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_fieldcap_m88","rhs_belt_AK"};
    backpack="";
  };

  class SFA_Driver_Armored: rhs_msv_driver_armored
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Driver (Armored)";
    uniformClass="rhs_uniform_afghanka_boots";
    weapons[]={"SFA_rhs_weap_akms_rhs_acc_dtkakm","SFA_rhs_weap_pya","Put","Throw"};
    respawnWeapons[]={"SFA_rhs_weap_akms_rhs_acc_dtkakm","SFA_rhs_weap_pya","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_mag_rdg2_white","rhs_mag_nspd","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
    respawnMagazines[]={"rhs_mag_rdg2_white","rhs_mag_nspd","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_fieldcap_m88","rhs_6b3"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_fieldcap_m88","rhs_6b3"};
    backpack="";
  };

  class SFA_crew: rhs_msv_crew
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Crew";
    uniformClass="rhs_uniform_afghanka";
    weapons[]={"Binocular","SFA_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white"};
    respawnMagazines[]={"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_tsh4","rhs_belt_holster"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_tsh4","rhs_belt_holster"};
    backpack="";
  };

  class SFA_Crew_Armored: rhs_msv_armoredcrew
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Crew (Armored)";
    uniformClass="rhs_uniform_afghanka_boots";
    weapons[]={"Binocular","SFA_rhs_weap_aks74u_rhs_acc_pgs64_74u","SFA_rhs_weap_pya","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_aks74u_rhs_acc_pgs64_74u","SFA_rhs_weap_pya","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_9x19_17","rhs_mag_rdg2_white","rhs_mag_nspd"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_9x19_17","rhs_mag_rdg2_white","rhs_mag_nspd"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_tsh4","rhs_belt_AK_back"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_tsh4","rhs_belt_AK_back"};
    backpack="";
  };

  class SFA_crew_commander: rhs_msv_crew_commander
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Crew Commander";
    uniformClass="rhs_uniform_afghanka";
    weapons[]={"Binocular","SFA_rhs_weap_aks74u_rhs_acc_pgs64_74u","SFA_rhs_weap_pya","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_aks74u_rhs_acc_pgs64_74u","SFA_rhs_weap_pya","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rdg2_white","rhs_30Rnd_545x39_7N10_AK","rhs_mag_9x19_17","rhs_mag_rdg2_white"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rdg2_white","rhs_30Rnd_545x39_7N10_AK","rhs_mag_9x19_17","rhs_mag_rdg2_white"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_tsh4","rhs_gear_OFF","G_Aviator"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_tsh4","rhs_gear_OFF","G_Aviator"};
    backpack="";
  };

  class SFA_driver: rhs_msv_driver
  {
    faction="Soviet_Forces_Afghanistan";
    category="Infantry";
    side=0;
    displayName="Driver";
    uniformClass="rhs_uniform_afghanka";
    weapons[]={"Binocular","SFA_rhs_weap_aks74u_rhs_acc_pgs64_74u","SFA_rhs_weap_pya","Put","Throw"};
    respawnWeapons[]={"Binocular","SFA_rhs_weap_aks74u_rhs_acc_pgs64_74u","SFA_rhs_weap_pya","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N10_AK","rhs_mag_rdg2_white","rhs_mag_nspd","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_rdg2_white"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N10_AK","rhs_mag_rdg2_white","rhs_mag_nspd","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_rdg2_white"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_fieldcap_m88","rhs_belt_AK4"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","rhs_fieldcap_m88","rhs_belt_AK4"};
    backpack="";
  };

  class SFA_BTR_70: rhs_btr70_msv
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="BTR-70";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_btr70\data\btr70_1_co.paa","rhsafrf\addons\rhs_btr70\data\btr70_2_co.paa","","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa","","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","","","","","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\defaultred\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\defaultred\4_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\defaultred\8_ca.paa","","","","","","","","","","",""};
    crew="SFA_Crew_Armored";
    typicalCargo[]={"SFA_crew","SFA_crew"};
  };

  class SFA_BTR_80: rhs_btr80_msv
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="BTR-80";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_tri01_co.paa","rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_tri01_co.paa","rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_tri01_co.paa","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa","","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","","","","","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\defaultred\8_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\defaultred\0_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\defaultred\5_ca.paa","","","","","","","","","","",""};
    crew="SFA_Crew_Armored";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_D30A: rhs_D30_msv
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="D-30A";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_heavyweapons\d30\data\d30_co.paa"};
    crew="SFA_Crew_Armored";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_D_30A_AT: rhs_D30_at_msv
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="D-30A (AT)";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_heavyweapons\d30\data\d30_co.paa"};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_Podnos: rhs_2b14_82mm_msv
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="Podnos";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_heavyweapons\podnos_2b14_82mm\data\podnos_2b14_82mm_co.paa"};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_BM21: RHS_BM21_MSV_01
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="BM-21";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\2_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\4_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\0_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_S1: SFA_2S1_base
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="2S1";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_hull_co.paa","rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_turret_co.paa","rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_suspension_co.paa","rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_suspension_co.paa","rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_suspension_co.paa","rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_suspension_co.paa","rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_suspension_co.paa","rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_suspension_co.paa","rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_suspension_co.paa","rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_suspension_co.paa","rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_suspension_co.paa","","","","","","","","","","rhsafrf\addons\rhs_decals\data\numbers\default\3_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\3_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\1_ca.paa","","","","","","","","","","rhsafrf\addons\rhs_decals\data\labels\platoon\romb_squared_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\romb_squared_ca.paa","","","",""};
    crew="SFA_crew_commander";
    typicalCargo[]={"SFA_crew_commander"};
    class Turrets: Turrets {
			class MainTurret: MainTurret {
				class Turrets: Turrets {
					class CommanderOptics: CommanderOptics {
            gunnerType = "SFA_Driver_Armored";
          };
        };
      };
    };
  };

  class SFA_S3M1: rhs_2s3_tv
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="2S3M1";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_2s3\data\rhs_2s3_01_co.paa","rhsafrf\addons\rhs_2s3\data\rhs_2s3_02_co.paa","rhsafrf\addons\rhs_2s3\data\rhs_art_wheels_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\5_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\0_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\1_ca.paa"};
    crew="SFA_crew_commander";
	 gunnerType = "SFA_Driver_Armored";
    typicalCargo[]={"SFA_crew_commander"};
  };

  class SFA_UAZ_3151: RHS_UAZ_MSV_01
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="UAZ-3151";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa","","rhsafrf\addons\rhs_decals\data\numbers\default\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\2_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\4_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_UAZ_3151_Open: rhs_uaz_open_MSV_01
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="UAZ-3151 (Open)";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa","","rhsafrf\addons\rhs_decals\data\numbers\default\4_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\2_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_BMP_2D: rhs_bmp2d_msv
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="BMP-2D";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\5_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\6_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa"};
    crew="SFA_crew_commander";
    typicalCargo[]={"SFA_crew_commander"};
  };

  class SFA_BMP_1D: rhs_bmp1d_msv
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="BMP-1D";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\5_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\5_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\4_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa"};
    crew="SFA_crew_commander";
    typicalCargo[]={"SFA_crew_commander"};
  };

  class SFA_BMP_2_1980g: rhs_bmp2e_msv
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="BMP-2 (obr. 1980g.)";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\6_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\3_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa"};
    crew="SFA_crew_commander";
    typicalCargo[]={"SFA_crew_commander"};
  };

  class SFA_GAZ_66: rhs_gaz66_msv
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="GAZ-66";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_gaz66\data\gaz66_co.paa","rhsafrf\addons\rhs_gaz66\data\tent_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\2_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_GAz_66_Ammo: rhs_gaz66_ammo_msv
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="GAZ-66 (Ammo)";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_gaz66\data\gaz66_co.paa","rhsafrf\addons\rhs_gaz66\data\tent_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\4_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\3_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\4_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\3_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_GAZ_66_Flatbed: rhs_gaz66_flat_msv
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="GAZ-66 (Flatbed)";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_gaz66\data\gaz66_co.paa","rhsafrf\addons\rhs_gaz66\data\tent_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\6_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\2_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_GAZ_66_OpenFlatbed: rhs_gaz66o_flat_msv
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="GAZ-66 (Open/Flatbed)";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_gaz66\data\gaz66_co.paa","rhsafrf\addons\rhs_gaz66\data\tent_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\5_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\3_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\5_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_GAZ_66_R_142N: rhs_gaz66_r142_msv
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="GAZ-66 R-142N";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_gaz66\data\gaz66_co.paa","rhsafrf\addons\rhs_gaz66\data\tent_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\0_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\4_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_GAZ_66_ZU_23_2: rhs_gaz66_zu23_msv
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="GAZ-66 ZU-23-2";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_gaz66\data\gaz66_co.paa","rhsafrf\addons\rhs_gaz66\data\tent_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\4_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\0_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
	};

  class SFA_GAZ_66_AP_2: rhs_gaz66_ap2_msv
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="GAZ-66 AP-2";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_gaz66\data\gaz66_co.paa","rhsafrf\addons\rhs_gaz66\data\tent_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\3_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\6_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_GAZ_66_ESB_8IM: rhs_gaz66_repair_msv
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="GAZ-66 ESB-8IM";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_gaz66\data\gaz66_co.paa","rhsafrf\addons\rhs_gaz66\data\tent_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\2_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\3_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\0_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_Ural_4320: RHS_Ural_MSV_01
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="Ural 4320";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\4_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\6_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_Ural_4320_Flatbed: RHS_Ural_Flat_MSV_01
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="Ural 4320 Flatbed";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\3_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\0_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_Ural_4320_Open: RHS_Ural_Open_MSV_01
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="Ural 4320 Open";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\0_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\0_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\6_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_Ural_4320_Fuel: RHS_Ural_Fuel_MSV_01
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="Ural 4320 Fuel";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\6_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\6_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\2_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_khk_co.paa"};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_Ural_4320_Open_Flatbed: RHS_Ural_Open_Flat_MSV_01
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="Ural 4320 Open Flatbed";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\2_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\6_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_Ural_4320_Repair: RHS_Ural_Repair_MSV_01
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="Ural 4320 Repair";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\5_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\5_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_Ural_4320_ZU_23_2: RHS_Ural_Zu23_MSV_01
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="Ural-4320 ZU-23-2";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\4_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_AGS_17: RHS_AGS30_TriPod_MSV
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="AGS 17";
    hiddenSelectionsTextures[]={};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_KORD: rhs_KORD_MSV
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="KORD";
    hiddenSelectionsTextures[]={};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_KORD_High: rhs_KORD_high_MSV
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="KORD High";
    hiddenSelectionsTextures[]={};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_NSV: RHS_NSV_TriPod_MSV
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="NSV";
    hiddenSelectionsTextures[]={};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_SPG9_M: rhs_SPG9M_MSV
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="SPG9 M";
    hiddenSelectionsTextures[]={};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_ZU232: RHS_ZU23_MSV
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="ZU232";
    hiddenSelectionsTextures[]={};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_ZSU234V: rhs_zsu234_aa
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="ZSU234V";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_armor\data\zsu_01_co.paa","rhsafrf\addons\rhs_a2port_armor\data\zsu_02_co.paa","rhsafrf\addons\rhs_a2port_armor\data\zsu_03_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\6_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\0_ca.paa"};
    crew="SFA_crew_commander";
    typicalCargo[]={"SFA_crew_commander"};
  };

  class SFA_P_37: rhs_p37_turret_vpvo
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="P 37";
    hiddenSelectionsTextures[]={};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };

  class SFA_PRV13: rhs_prv13_turret_vpvo
  {
    faction="Soviet_Forces_Afghanistan";
    side=0;
    displayName="PRV13";
    hiddenSelectionsTextures[]={};
    crew="SFA_driver";
    typicalCargo[]={"SFA_driver"};
  };


  class SFA_AT_Specialist_pack: rhs_rpg_6b3
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


  class SFA_Engineer_pack: rhs_sidor
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
    };
    class TransportWeapons{};
  };


  class SFA_Grenadier_RPG_pack: rhs_rpg_6b3
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_rpg7_OG7V_mag {count=3;magazine="rhs_rpg7_OG7V_mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class SFA_Grenadier_Assistant_pack: rhs_rpg_6b3
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class SFA_Machine_Gunner_pack: rhs_sidorMG
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_100Rnd_762x54mmR {count=2;magazine="rhs_100Rnd_762x54mmR";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class SFA_Machine_Gunner_Assistant_pack: rhs_sidorMG
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_100Rnd_762x54mmR {count=2;magazine="rhs_100Rnd_762x54mmR";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class SFA_Medic_pack: rhs_medic_bag
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
