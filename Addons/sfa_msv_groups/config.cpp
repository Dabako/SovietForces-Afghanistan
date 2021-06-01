class cfgPatches
{
  class sfa_msv_groups
  {
    units[]={"sfa_O_Rifle_Squad","sfa_O_Company_HQ","sfa_O_Fireteam","sfa_O_Maneuver_Team","sfa_O_Section_AT","sfa_O_Section_Marksman","sfa_O_Section_MG","sfa_O_Squad","sfa_O_Squad_2gpmg","sfa_O_Squad_gpmg_marksman","sfa_O_Squad_Marksman","sfa_O_Rifle_Squad_w","sfa_O_Company_HQ_w","sfa_O_Fireteam_w","sfa_O_Maneuver_Team_w","sfa_O_Section_AT_w","sfa_O_Section_Marksman_w","sfa_O_Section_MG_w","sfa_O_Squad_w","sfa_O_Squad_2gpmg_w","sfa_O_Squad_gpmg_marksman_w","sfa_O_Squad_Marksman_w"};
    requiredVersion=0.1;
    requiredAddons[]={"sfa_msv_units"};
  };
};

class cfgGroups
{  
  class EAST
  {
    name="OPFOR";
    class Soviet_Forces_Afghanistan
    {
      name="Soviet Forces Afghanistan";

      class Infantry
      {
        name="Infantry (Summer)";

        class sfa_O_Rifle_Squad
        {
          name="Rifle Squad";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_sergeant";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_machine_gunner";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_grenadier_rpg";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_marksman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_grenadier_assistant";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="sfa_rifleman_rpg18";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
        };
        class sfa_O_Company_HQ
        {
          name="Company HQ";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_officer";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_officer_armored";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_officer_armored";
            rank="CORPORAL";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class sfa_O_Fireteam
        {
          name="Fireteam";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_junior_sergeant";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_machine_gunner";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_at_specialist";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_grenadier_assistant";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class sfa_O_Maneuver_Team
        {
          name="Maneuver Team";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_efreitor";
            rank="CORPORAL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_rifleman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_rifleman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
        };
        class sfa_O_Section_AT
        {
          name="Section AT";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_junior_sergeant";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_at_specialist";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_grenadier_assistant";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_rifleman_rpg18";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_rifleman";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
        };
        class sfa_O_Section_Marksman
        {
          name="Section Marksman";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_junior_sergeant";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_machine_gunner";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_machine_gunner_assistant";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_rifleman_gp25";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_marksman";
            rank="CORPORAL";
            position[]={0,-20,0};
          };
        };
        class sfa_O_Section_MG
        {
          name="Section MG";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_junior_sergeant";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_machine_gunner";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_machine_gunner_assistant";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_rifleman_gp25";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_rifleman";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
        };
        class sfa_O_Squad
        {
          name="Squad";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_sergeant";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_efreitor";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_grenadier_rpg";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_grenadier_assistant";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_machine_gunner";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="sfa_rifleman_rpg18";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="sfa_grenadier_assistant";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=0;
            vehicle="sfa_rifleman";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
          class Unit8
          {
            side=0;
            vehicle="sfa_rifleman";
            rank="PRIVATE";
            position[]={0,-40,0};
          };
          class Unit9
          {
            side=0;
            vehicle="sfa_medic";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class sfa_O_Squad_2gpmg
        {
          name="Squad (2x GPMG)";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_junior_sergeant";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_efreitor";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_machine_gunner";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_machine_gunner";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_machine_gunner_assistant";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="sfa_rifleman_rpg18";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="sfa_medic";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
        };
        class sfa_O_Squad_gpmg_marksman
        {
          name="Squad (GPMG + Marksman)";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_sergeant";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_junior_sergeant";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_machine_gunner";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_machine_gunner_assistant";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_medic";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="sfa_marksman";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="sfa_rifleman_rpg18";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
        };
        class sfa_O_Squad_Marksman
        {
          name="Squad Marksman";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_junior_sergeant";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_engineer";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_marksman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_machine_gunner";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="sfa_at_specialist";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="sfa_medic";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
        };
      };
      class Infantry_w
      {
        name="Infantry (Winter)";

        class sfa_O_Rifle_Squad_w
        {
          name="Rifle Squad";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_sergeant_w";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_grenadier_rpg_w";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_grenadier_assistant_w";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_machine_gunner_w";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_marksman_w";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="sfa_rifleman_rpg18_w";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
        };
        class sfa_O_Company_HQ_w
        {
          name="Company HQ";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_officer_w";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_officer_armored_w";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_officer_armored_w";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_rifleman_w";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class sfa_O_Fireteam_w
        {
          name="Fireteam";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_junior_sergeant_w";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_machine_gunner_w";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_at_specialist_w";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_grenadier_assistant_w";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class sfa_O_Maneuver_Team_w
        {
          name="Maneuver Team";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_efreitor_w";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_rifleman_w";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_rifleman_w";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
        };
        class sfa_O_Section_AT_w
        {
          name="Section AT";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_junior_sergeant_w";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_at_specialist_w";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_grenadier_assistant_w";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_rifleman_rpg18_w";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_rifleman_w";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
        };
        class sfa_O_Section_Marksman_w
        {
          name="Section Marksman";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_junior_sergeant_w";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_machine_gunner_w";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_machine_gunner_assistant_w";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_marksman_w";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_rifleman_gp25_w";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
        };
        class sfa_O_Section_MG_w
        {
          name="Section MG";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_junior_sergeant_w";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_machine_gunner_w";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_machine_gunner_assistant_w";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_rifleman_w";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_rifleman_gp25_w";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
        };
        class sfa_O_Squad_w
        {
          name="Squad";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_sergeant_w";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_efreitor_w";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_machine_gunner_w";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_rifleman_rpg18_w";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_rifleman_w";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="sfa_rifleman_w";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="sfa_grenadier_rpg_w";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=0;
            vehicle="sfa_grenadier_assistant_w";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
          class Unit8
          {
            side=0;
            vehicle="sfa_grenadier_assistant_w";
            rank="PRIVATE";
            position[]={0,-40,0};
          };
          class Unit9
          {
            side=0;
            vehicle="sfa_medic_w";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class sfa_O_Squad_gpmg_w
        {
          name="Squad 2xGPMG";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_junior_sergeant_w";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_efreitor_w";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_machine_gunner_w";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_machine_gunner_assistant_w";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_machine_gunner_w";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="sfa_rifleman_rpg18_w";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="sfa_medic_w";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
        };
        class sfa_O_Squad_gpmg_marksman_w
        {
          name="Squad (GPMG + Marksman)";
          faction="Soviet_Forces_Afghanistan";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="sfa_sergeant_w";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="sfa_junior_sergeant_w";
            rank="CORPORAL";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="sfa_medic_w";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="sfa_marksman_w";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="sfa_machine_gunner_w";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="sfa_machine_gunner_assistant_w";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="sfa_rifleman_rpg18_w";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
        };
      };
      class Motorized
      {
        name="Motorized";

      };
      class Mechanized
      {
        name="Mechanized";

      };
      class Armored
      {
        name="Armored";

      };
      class SpecOps
      {
        name="Special Forces";

      };
      class Support
      {
        name="Support Infantry";

      };
      class Airborne
      {
        name="Airborne";

      };
      class Air
      {
        name="Air";

      }; 
    };
  };
};
