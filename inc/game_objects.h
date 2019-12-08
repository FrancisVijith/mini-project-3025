/*
 * game_objects.h
 *
 *  Created on: Dec. 4, 2019
 *      Author: francis
 */


#if defined (__USE_LPCOPEN)
#if defined(NO_BOARD_LIB)
#include "chip.h"
#else
#include "board.h"
#endif
#endif

#include <cr_section_macros.h>

// TODO: insert other include files here

// TODO: insert other definitions and declarations here

typedef struct size_struct
{
	unsigned int id;
}ID_t;

typedef struct go_dim_struct
{
	unsigned int W;
	unsigned int L;
}go_dim_t;

typedef struct go_coord_struct
{
	unsigned int X;
	unsigned int Y;
	unsigned int Xnew;
	unsigned int Ynew;
}go_coord_t;

typedef struct go_struct
{
	ID_t id_ball; //unique ID code for the ball//
	go_dim_t size_ball; //width and height of the ball//
	go_coord_t pos_ball; //position of the ball//
	ID_t id_blocks; //unique ID code for the blocks//
	go_dim_t size_blocks; //size of each blocks
	go_coord_t pos_blocks; //size of each blocks
	ID_t id_bar; //unique ID code for the bar//
	go_dim_t size_bar; //size of the bar
	go_coord_t pos_bar;//position of the bar
}go_t;
