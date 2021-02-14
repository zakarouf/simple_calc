#include "xtra.h"
#include "calc.h"

void help (void) {
	printf("Command list :\n"
		"- a\tPush\n"
		"- s\tPull\n"
		"- d\tMince\n"
		"- x\tRepeat\n"
		"- z\tPower\n"
		"- c\tClear\n"
		"- w\tShow Stored Value\n"
		"- h\tCommand list\n"
		"- q\tQuit\n"
		">> 'man calc' for Info <<\n"
		);
}// END HELP

int power(int pos,int n){
    int j; /* Variable used in loop counter */
    int power = 1;

    for (j = 0; j < n; ++j){
        power *= pos;
    }

    return(power);
}

int *get_lcm (int num, int *t)
{
	int size = 8;
	int *lcm_li = (int*) malloc(size * sizeof(int));
	int i = 1;
	int quit = 0;

	t[0] = 0;

	while (!quit)
	{
		i++;
		if (num % i == 0)
		{
			lcm_li[t[0]] = i;
			num = num / i;
			i = 1;
			t[0]+=1;
			if (size > t[0])
			{
				size+=8;
				lcm_li = realloc(lcm_li, size);
			}
		}
		if (num <= i)
		{
			quit = 1;
		}
	}

	return lcm_li;
}