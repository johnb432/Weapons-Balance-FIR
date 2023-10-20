#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "FIR_PilotCrewPack_US",
            "FIR_AirWeaponSystem_US",
            "FIR_AWS_Cutscene_F"
        };
        author = "johnb43";
        authors[] = {
            "johnb43"
        };
        url = "https://github.com/johnb432/Weapons-Balance-FIR";
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgSpotlight.hpp"

class CfgUnitInsignia {
    class Emblem_505 {
        displayName = "505th JFW - Mirage Witches Emblem";
    };
};
