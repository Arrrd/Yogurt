#include "board.h"
//extern uint8_t pin_LPC;   //Variable que identifica el pin de la placa del LPC-1769
//
//extern uint8_t port_LPC;   //Variable que identifica el puerto de la placa del LPC-1769
//
extern uint8_t LED_relay;   //Permite encender "0" o apagar "1" el relay (el LED_relay está asociado al control del pinA)

//Declaraciones (prototipos) de las funciones

void initOutput(uint8_t pin_LPC, uint8_t port_LPC);

void initRelays(uint8_t pin_LPC, uint8_t port_LPC);
