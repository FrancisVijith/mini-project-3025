/*
===============================================================================
 Name        : character_data_structure.c
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
#endif
#endif

#include <cr_section_macros.h>

// TODO: insert other include files here

// TODO: insert other definitions and declarations here
struct go_struct
{
	size_t ID; //unique ID code for a character//
	go_dim_t size_doj; //width and height of the character//
	go_coord_t pos; //GO position//
}go_t;

struct size_struct
{
	unsigned int id;
}size_t;

struct go_dim_struct
{
	unsigned int W;
	unsigned int L;
}go_dim_t;

struct go_coord_struct
{
	unsigned int X;
	unsigned int Y;
	unsigned int Xoff;
	unsigned int Yoff;
}go_coord_t;

int main(void)
{


}
