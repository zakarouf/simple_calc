/*
------------------------------------------------
MY MOST FAVOURITE FUNCTION

ITS SMALL, DOES WHAT IT SHOULD. NUFF SAID

COLOR 0.2a
-----------------------------------------------*/

#include "color.h"

/*
------------------------------------------------
USAGE :- 
	color($1, $2)

	- $1 \\ Either 0 or 1 Specifying The
			Foreground or Background Color
	- $2 \\ 0 - 255 ANSI 8bit color code.

	colo_r() \\ Reset ALL colors
------------------------------------------------*/

void color8 (int code, int colo) {
	printf("\033[%d8;5;%dm", code+3, colo);
}// END COLOURS

void color4() {

}

void color24() {

}

void colo_r() {
	printf("\033[0m");
}