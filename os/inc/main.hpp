#pragma once

#include "os.hpp"

/// @defgroup main main
/// @ingroup core
/// @brief @ref os entry points
/// @{

#ifdef __cplusplus
extern "C" {  // pure C linkage to call from MCU startup code
#endif

#ifdef POSIX
/// @brief POSIX entry point
/// @param[in] argc arguments count
/// @param[in] argv arguments array (`argv[0]` = program/firmware name)
extern int main(int argc, char *argv[]);
#endif  // POSIX

/// @brief first call: callback on system startup
void setup();

/// @brief callback for processing command line / boot loader arguments
/// @param[in] argc argument index (0 = program/firmware name)
/// @param[in] argv argument string value
extern void arg(int argc, char *argv);

/// @brief application event loop callback
void loop();

#ifdef __cplusplus
}
#endif

/// @}
