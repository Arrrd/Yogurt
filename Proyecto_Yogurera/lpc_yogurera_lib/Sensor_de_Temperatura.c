//#include "Sensor_de_Temperatura.h"
////El sensor de temperatura sirve para detectar valores de temperatura
//
////#if defined (__USE_LPCOPEN)
////#if defined(NO_BOARD_LIB)
////#include "chip.h"
////#else
////#include "board.h"
////#endif
////#endif
////#include "stdio.h"
////#include <cr_section_macros.h>
//
//
////
////#define Demora 1000   //Esta variabe define el tiempo de muestreo (medido en mili segundos)
//
//uint32_t pausems_count = Demora;   //Esta variable contiene a la variable Demora
//
//uint16_t adc_value;   //Variable que contiene la temperatura bruta sin escalar
//
//uint8_t pin_ADC = 31;   //Pin del ADC
//
//uint8_t port_ADC = 1;   //Puerto del ADC
//
//int16_t Temp;   //Temperatura sensada
//
//int16_t Vout;   //Tensión que entrega el sensor en su salida
//
//
//
//////Declaraciones (prototipos) de las funciones
////
////void initHardware(void);
////
////void initADC(void);
////
////void SysTick_Handler(void);
////
////void ADC(void);
//
//
//
////				int main(void)   //Programa principal
////
////				{
////
////					initHardware();   //Llamada a la función initHardware
////
////					initADC();   //Llamada a la función initADC
////
////						while(1)   //Ingresa en un bucle infinito
////
////							{
////
////								ADC();   //Llamada a la función ADC
////
////								__WFI();   //Sirve para que no ejecute inutilmente una serie de eventos mediante una interrupción
////
////							}   //While
////
////				}   //Main
//
//
//
////Definición de las funciones
//
//void initHardware(void)   //Inicializa el Hardware
//
//{
//	SystemCoreClockUpdate();   /*Actualiza la frecuencia del reloj central del sistema cuando hay un cambio
//						 	 	 en la frecuencia de reloj*/
//
//	SysTick_Config(SystemCoreClock/1000);   /*Inicializa el temporizador del sistema y su interrupción, e inicia
//									  	  	  el temporizador de control del sistema. El contador está en modo de
//									  	  	  funcionamiento libre para generar interrupciones periódicas (cada 1mS)*/
//
//	Board_Init();   //Inicializa la placa
//
//	Board_LED_Set(0, true);   //Establece el estado de encendido (false)/apagado (true) del LED en la placa
//
//}   //initHardware
//
//void initADC(void)   //Inicializa el ADC
//
//{
//
//	ADC_CLOCK_SETUP_T ADCSetup;   /*Estructura de configuración del reloj para el controlador ADC pasada a
//									la función de inicialización*/
//
//	Chip_IOCON_PinMuxSet(LPC_IOCON, port_ADC, pin_ADC, IOCON_FUNC3);   /*Establece el pin de control de E/S mux
//																	   (se configura el P1.31 como AD0.5)*/
//
//	Chip_ADC_Init(LPC_ADC, &ADCSetup);   //Inicializa el periférico ADC
//
//	Chip_ADC_EnableChannel(LPC_ADC, ADC_CH5, ENABLE);   /*Habilita (Enable) o deshabilita (Disable) el periférico ó
//														  canal del ADC*/
//
//}   //initADC
//
//void SysTick_Handler(void)   //Permite interrumpir por tiempo
//
//{
//
//	if(pausems_count != 0)   //Ingresa sólo si pausems_count es distinto de cero
//
//		{
//
//			pausems_count--;   //Decrementa la variable en 1
//
//		}   //If
//
//}   //SysTick_Handler
//
//void ADC(void)   //Comienza la conversión
//
//{
//
//	Chip_ADC_SetStartMode(LPC_ADC, ADC_START_NOW, ADC_TRIGGERMODE_RISING);   /*Permite seleccionar el modo en que inicia
//																			   el ADC (LPC_ADC, ADC_START_NOW = 1
//																			   "comienza ahora", ADC_TRIGGERMODE_RISING = 0
//																			   "disparo ascendente")*/
//
//	while (Chip_ADC_ReadStatus(LPC_ADC, ADC_CH5, ADC_DR_DONE_STAT) != SET);   //Bloquea hasta que finalice la conversión
//
//	Chip_ADC_ReadValue(LPC_ADC, ADC_CH5, &adc_value);   /*Lectura del valor del ADC desde el canal 5*/
//
//	Temp = 825*adc_value/1024 - 500;   //Ecuación de temperatura (dada en grados Celcius)
//
//	Vout = 165*adc_value/2048;   //Ecuación de tensión (dada en Volt)
//
//}   //ADC
//
