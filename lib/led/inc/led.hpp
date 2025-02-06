#pragma once

#include "object.hpp"
#include "io.hpp"

/// @defgroup led led
/// @ingroup io
/// @brief @ref LED control
/// @{

class LED : public Object {
   public:
    void on();
    void off();
    void toggle();
    IOStatus status();
};

/// @}
