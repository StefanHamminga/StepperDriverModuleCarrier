#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/bootrom.h"


int main()
{
    stdio_init_all();

    uint32_t counter {0};

    while (counter < 100) {
        // puts("Hello, world!");
        ++counter;
        printf("Hello, world no. %i", counter);
        sleep_ms(100);
    }

    reset_usb_boot(0, 0);

    return 0;
}
