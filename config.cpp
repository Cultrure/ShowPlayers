class CfgPatches
{
	class Cultti_ShowPlayers
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"Extended_EventHandlers","cba_ui"};

	};
};

class Extended_PostInit_EventHandlers
{
  CULTTI_ShowPlayers_Post_Init = "CULTTI_ShowPlayers_Post_Init_Var = [] execVM ""x\cultti\addons\cultti_showplayers\init.sqf""";
};