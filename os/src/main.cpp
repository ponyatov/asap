#include "os.hpp"

__attribute__((weak)) int main(int argc, char *argv[]) {  //
    printf("main:\n");
    setup();
    printf("arg:\n");
    arg(0, argv[0]);
    for (;;) loop();
}

__attribute__((weak)) void setup() {  //
    printf("setup:\n");
}

__attribute__((weak)) void arg(int argc, char *argv) {  //
    printf("\targ[%i] = <%s>\n", argc, argv);
}

__attribute__((weak)) void loop() {  //
    printf("loop:\n");
    exit(0);
}
