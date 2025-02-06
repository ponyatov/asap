#include "vm.hpp"
#include "os.hpp"

#include "l496disco.hpp"

void setup() { printf("\t%s>\n", VM::name); }

void loop() { LD2.toggle(); }
