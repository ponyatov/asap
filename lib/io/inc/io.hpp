#pragma once

#include "object.hpp"

/// @defgroup io io
/// @ingroup lib
/// @brief I/O interfaces
/// @{

/// @brief GPIO pin
class Pin : public Object {};

/// @brief pin status
enum class IOStatus : bool { HIGH = true, LOW = false };

/// @}
