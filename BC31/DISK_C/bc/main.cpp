#include "hz.h"
#include "mouse.h"
#include "keyboard.h"
#include "draw.h"
#include "login.h"
#include <stdio.h>
#ifndef __BORLANDC__
#pragma warning(disable:4996)
#else
#include <dos.h>
#endif
#define SHOW_CONSOLE
#include <graphics.h>
extern int mousex, mousey, mousepress,prev_mx,prev_my;
int main()
{
	int gd = VGA, gm = VGAHI;                           //environment
	initgraph(&gd, &gm, "C:\\BORLANDC\\BGI");            //init graph window
	mouseinit();
	initbg();
	login();
	closegraph();      //end
	return 0;
}
