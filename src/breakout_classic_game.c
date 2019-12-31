/*
===============================================================================
 Name        : breakout_classic_game.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
===============================================================================
*/

#if defined (__USE_LPCOPEN)
#if defined(NO_BOARD_LIB)
#include "chip.h"
#include "board.h"
#include <game_objects.h>
#include <stdlib.h>
#include <string.h>
#include "task.h"
#endif
#endif

#include <cr_section_macros.h>

// TODO: insert other include files here

// TODO: insert other definitions and declarations here
const char start =  "start";
const char lose =  "lost";

static void pvUART()
{
	Chip_UART_SendRB(UART_SELECTION, &txring, inst1, start);
}

static void prvSetupHardware(void)
{
	SystemCoreClockUpdate();
	Board_Init();
}

static void vBarMovement(void *pvParameters){
xSemaphoreTake( xMyMutex, portMAX_DELAY );
{
while(1)
{
	Buttons_GetStatus(); //gets status of the specific GPIO pins.
	vTaskDelay(1000);
}
}
xSemaphoreGive( xMutex );
}
static void vBallDeath(void *pvParameters)
{
}
static void vBallMovement(void *pvParameters)
{

}




int main(void)
{
xMyMutex = xSemaphoreCreateMutex();
	prvSetupHardware();
		xTaskCreate(vBarMovement,(signed char*) "vRunGameTAsk",configMINIMAL_STACK_SIZE,NULL, 1, (xTaskHandle *)NULL);


		xTaskCreate(vBallDeath, (signed char*)"vImpactsTask",configMINIMAL_STACK_SIZE,NULL, 1, (xTaskHandle *)NULL);


		xTaskCreate(vBallMovement, (signed char*)"vBlocksTask",configMINIMAL_STACK_SIZE,NULL, 1,(xTaskHandle *)NULL);

		vTaskStartScheduler();

		/* Should never arrive here */
		return 1;
}
