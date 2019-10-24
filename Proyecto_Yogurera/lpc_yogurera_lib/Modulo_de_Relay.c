#include "Modulo_de_Relay.h"
//El módulo de relay actúa como interruptor para controlar otros componentes

//#if defined (__USE_LPCOPEN)
//#if defined(NO_BOARD_LIB)
//#include "chip.h"
//#else
//#include "board.h"
//#endif
//#endif
//
//#include <cr_section_macros.h>



//uint8_t pin_LPC=1;   //Variable que identifica el pin de la placa del LPC-1769
uint8_t pin_LPC=22;   //Variable que identifica el pin de la placa del LPC-1769

//uint8_t port_LPC=2;   //Variable que identifica el puerto de la placa del LPC-1769
uint8_t port_LPC=0;   //Variable que identifica el puerto de la placa del LPC-1769

uint8_t LED_relay=1;   //Permite encender "0" o apagar "1" el relay (el LED_relay está asociado al control del pinA)



////Declaraciones (prototipos) de las funciones
//
//void initOutput(uint8_t pin_LPC, uint8_t port_LPC);
//
//void initRelays(uint8_t pin_LPC, uint8_t port_LPC);


//
//				int main(void)   //Función principal
//
//				   {
//
//						SystemCoreClockUpdate();   /*Actualiza la frecuencia del reloj central del sistema cuando hay un cambio
//													 en la frecuencia de reloj*/
//
//						Board_Init();   //Inicializa la placa
//
//						Board_LED_Set(0, true);   //Establece el estado de encendido (false)/apagado (true) del LED en la placa
//
//						initRelays(pin_LPC, port_LPC);   //Llamada a la función initRelays
//
//						return 0;   //Retorna 0, ya que en el main dice que no devuelve nada (void)
//
//				   }   //main
//


//Definición de las funciones

void initOutput(uint8_t pin_LPC, uint8_t port_LPC)   //Inicializa las salidas del LPC para actuar sobre las relays

	{

		Chip_GPIO_SetDir(LPC_GPIO, port_LPC, pin_LPC, 1);   //Se define el pinA del portA como salida (0=input, 1=0!=output)

	}   //initOutput

void initRelays(uint8_t pin_LPC, uint8_t port_LPC)   //Permite inicializar los relays

	{

		initOutput(pin_LPC, port_LPC);   //Llamada a la función initOutput

		   if(LED_relay==1)

				{

					Chip_GPIO_SetPinOutHigh(LPC_GPIO, port_LPC, pin_LPC);   //Desactiva el relay A

				}

				else if(LED_relay==0)

					{

						Chip_GPIO_SetPinOutLow(LPC_GPIO, port_LPC, pin_LPC);   //Activa el relay A

					}   //if(LED_relay)

	}   //initRelays

