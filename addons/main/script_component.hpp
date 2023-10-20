#define COMPONENT main
#define COMPONENT_BEAUTIFIED FIR
#include "script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define DEBUG_SYNCHRONOUS
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_WB_FIR
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_WB_FIR
    #define DEBUG_SETTINGS DEBUG_SETTINGS_WB_FIR
#endif

#include "script_macros.hpp"
