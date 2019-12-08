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
#else
#include "board.h"
#include "game_objets.h"
#endif
#endif

#include <cr_section_macros.h>

// TODO: insert other include files here

// TODO: insert other definitions and declarations here
static void vRunGameTAsk(void *pvParameters)
{
}
static void vImpactsTask(void *pvParameters)
{
}
static void vBlocksTask(void *pvParameters)
{
}
static void vBallsTask(void *pvParameters)
{
}
static void vPlayer(void *pvParameters)
{
}


int main(void)
{


}


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
    while(1) {
        i++ ;
    }
    return 0 ;
}
