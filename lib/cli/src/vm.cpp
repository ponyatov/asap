#include "vm.hpp"

VM::VM() {
    Dp = 0;
    Rp = 0;
    Cp = 0;
    Ip = 0;
}

const char VM::name[] = APP;
