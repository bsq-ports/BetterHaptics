#pragma once

// Include the modloader header, which allows us to tell the modloader which mod
// this is, and the version etc.
#include "scotland2/shared/modloader.h"

// beatsaber-hook is a modding framework that lets us call functions and fetch
// field values from in the game It also allows creating objects, configuration,
// and importantly, hooking methods to modify their values
#include "beatsaber-hook/shared/utils/hooking.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-functions.hpp"

#include "paper2_scotland2/shared/logger.hpp"

#include "config-utils/shared/config-utils.hpp"
#include "bsml/shared/BSML.hpp"

#define MOD_EXPORT __attribute__((visibility("default")))
#define MOD_EXTERN_FUNC extern "C" MOD_EXPORT

constexpr auto PaperLogger = Paper::ConstLoggerContext("BetterHaptics");
