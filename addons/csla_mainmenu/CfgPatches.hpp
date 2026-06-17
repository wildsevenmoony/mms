/*
 * Author: Moony
 * Declares the MMS CSLA main menu compatibility patch.
 */

class CfgPatches {
	class ADDON {
		name = "Moony's Magnificent STAF Auxillery - CSLA Main Menu Compatibility";
		author = "Moony";
		requiredAddons[] = {
			"mms_main",
			"CSLA_UI"
		};
		requiredVersion = 2.02;
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};
