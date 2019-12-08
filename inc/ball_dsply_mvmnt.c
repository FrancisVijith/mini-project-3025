/*
 * ball_movement.h
 *
 *  Created on: Dec. 5, 2019
 *      Author: francis
 *
 *primary stage of ball display and movement header file.
Useful abrevations are NW = northwest, NE = northeast,
SW = southwest and SE = southeast
*/

#ifndef BALL_DSPLY_MVMNT_C_
#define BALL_DSPLY_MVMNT_C_
void display_ball()
{

}
void check_Coll_Top();
void check_Coll_Right();
void check_Coll_Btm();
void check_Coll_Left();

void  Ball_NW()
{
	display_Ball();
	check_Coll_Top();
	check_Coll_Left();
	display_Ball();
}
void  Ball_NW()
{
	display_Ball();
	check_Coll_Top();
	check_Coll_Right();
	display_Ball();
}
void  Ball_NW()
{
	display_Ball();
	check_Coll_Btm();
	check_Coll_Left();
	display_Ball();
}
void  Ball_NW()
{
	display_Ball();
	check_Coll_Btm();
	check_Coll_Right();
	display_Ball();
}


#endif /* BALL_DSPLY_MVMNT_C_ */
