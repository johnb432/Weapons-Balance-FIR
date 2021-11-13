#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "FIR_PilotCrewPack_US"
        };
        author = "johnb43";
        url = "https://github.com/johnb432/Weapons-Balance-FIR";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        name = "Weapons Balance - FIR";
        author = "johnb43";
        tooltipOwned = "Weapons Balance - FIR";
        hideName = 0;
        hidePicture = 0;
        actionName = "Github";
        action = "https://github.com/johnb432/Weapons-Balance-FIR";
        description = "A collection of balancing mods made by johnb43.";
        overview = "A collection of balancing mods made by johnb43.";
        picture = "\z\wb_fir\addons\main\ui\logo_weapons_balance.paa"; // http://getdrawings.com/get-drawing#gun-drawing-in-pencil-27.jpg, http://getdrawings.com/get-drawing#gun-drawing-in-pencil-17.png
        logo = "\z\wb_fir\addons\main\ui\logo_weapons_balance.paa";
        overviewPicture = "\z\wb_fir\addons\main\ui\logo_weapons_balance.paa";
    };
};

#include "CfgWeapons.hpp"
