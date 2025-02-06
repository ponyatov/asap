#pragma once

/// @defgroup os os
/// @ingroup cross

#include "main.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#ifdef LINUX
#include "linux.hpp"
#endif

#ifdef MINGW
#include "mingw.hpp"
#endif
