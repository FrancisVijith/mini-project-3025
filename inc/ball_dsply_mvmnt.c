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

//#include "game_objects.h"

unsigned int flag = 0;
unsigned int display;
void display_Ball()
{

}

void  Ball_NW()
{
	display_Ball();
	check_Coll_Top();
	check_Coll_Left();
	if (flag == 2)
    {pos_ball.Xnew = pos_ball.X-1;
	pos_ball.Ynew = pos_ball.Y -1;
	pos_ball.x = pos_ball.Xnew;
	pos_ball.y = pos_ball.Ynew;
    }
	else
	break;
	display_Ball();
}
void  Ball_NE()
{
	display_Ball();
	check_Coll_Top();
	check_Coll_Right();
	if (flag == 2)
	    {pos_ball.Xnew = pos_ball.X + 1;
		pos_ball.Ynew = pos_ball.Y - 1;
		pos_ball.x = pos_ball.Xnew;
		pos_ball.y = pos_ball.Ynew;
	    }
		else
		break;
	display_Ball();
}
void  Ball_SW()
{
	display_Ball();
	check_Coll_Btm();
	check_Coll_Left();
	if (flag == 2)
	    {pos_ball.Xnew = pos_ball.X-1;
		pos_ball.Ynew = pos_ball.Y +1;
		pos_ball.x = pos_ball.Xnew;
		pos_ball.y = pos_ball.Ynew;
	    }
		else
		break;
	display_Ball();
}
void  Ball_SE()
{
	display_Ball();
	check_Coll_Btm();
	check_Coll_Right();
	if (flag == 2)
	    {pos_ball.Xnew = pos_ball.X+1;
		pos_ball.Ynew = pos_ball.Y+1;
		pos_ball.x = pos_ball.Xnew;
		pos_ball.y = pos_ball.Ynew;
	    }
		else
		break;
	display_Ball();
}


void check_Coll_Top()
{
	if((pos_ball.X && pos_ball.Y) == ((pos_blocks.X - 5)&& (pos_ball.Y - 5))
       ++flag;
}
void check_Coll_Right()
{	if((pos_ball.X && pos_ball.Y) == ((pos_blocks.X - 5)&& (pos_ball.Y - 5))
       Ball_SW();
++flag;
}
void check_Coll_Btm()
{
	if((pos_ball.X && pos_ball.Y) == ((pos_blocks.X - 5)&& (pos_ball.Y - 5))
       ++flag;
};
void check_Coll_Left()
{
	if((pos_ball.X && pos_ball.Y) == ((pos_blocks.X - 5)&& (pos_ball.Y - 5))
       ++flag;
}




#endif /* BALL_DSPLY_MVMNT_C_ */
