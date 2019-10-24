
/*
===============================================================================
 Name        : Proyecto_Yogurera
 Authors     : Matias Almada - Arnaldo Dimuro
 Description : Sistema de un fluído realimentado, controlado por temperatura y por nivel
===============================================================================
*/

#if defined (__USE_LPCOPEN)
#if defined(NO_BOARD_LIB)
#include "chip.h"
#else
#include "board.h"
#endif
#endif

#include <cr_section_macros.h>

#include "../../lpc_yogurera_lib/Modulo_de_Relay.h"
//#include "Modulo_de_Relay.h"
//#include "../../lpc_yogurera_lib/inc/Sensor_de_Temperatura.h"

// TODO: insert other include files here

// TODO: insert other definitions and declarations here

int main(void) {

#if defined (__USE_LPCOPEN)
    // Read clock settings and update SystemCoreClock variable
    SystemCoreClockUpdate();
#if !defined(NO_BOARD_LIB)
    // Set up and initialize all required blocks and
    // functions related to the board hardware
    Board_Init();
    // Set the LED to the state of "On"
    Board_LED_Set(0, true);
#endif
#endif

    // TODO: insert code here

    // Force the counter to be placed into memory
    volatile static int i = 0 ;
    // Enter an infinite loop, just incrementing a counter
//    LED_relay=1;
//    pin_LPC = 22;
//    port_LPC = 0;
      //A partir de acá comenté yo
//    LED_relay = 0;
//    initRelays(22,0);
//    LED_relay = 1;
//    initRelays(22,0);
    	LED_relay = 1;
        initRelays(1,2);
//        LED_relay = 1;
//        initRelays(1,2);
    while(1) {
        i++ ;
    }
    return 0 ;
}
