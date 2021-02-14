#include "calc.h"
#include "color.h"
#include "xtra.h"

#define QUIT 0

int main(int argc, char const *argv[])
{
	int to;
	char uip;
	long double res = 0, x = 0, y = 0;

	printf("\033[2J");
	printf("Welcome to Simple Calculation press 'h' for Command list\n");
	while (!QUIT)
	{
		color8(0, 11);
		scanf ("%Lf", &y);
		scanf ("%c", &uip);
		colo_r();
		
		if (uip == 'q') {
			break;
		}
		else if (uip == 'h')
		{
			color8(0, 9);
			help();colo_r();
		}
		else if (uip == 'w')
		{
			color8(0, 34);
			printf("- Buffer  %Lf\n"
				   "- Mod     %Lf\n"
				   "- Value   %Lf\n", x, y, res);colo_r();
		}
		else if (uip == 'l')
		{
			if(x > 2)
			{
				int t;
				int *lcm = get_lcm((int)x, &t);
				for (int i = 0; i < t; ++i)
				{
					printf("%d ", lcm[i]);
				}
				free(lcm);
			}
		}
		else{
			switch(uip){
				case 'a':res = x + y;break;
				case 's':res = x - y;break;
				case 'd':res = x / y;break;
				case 'x':res = x * y;break;
				case 'p':res = x * y/100;break;
				case 'z':scanf("%d", &to);y = power(y, to);break;
				case 'c':res = x = y = 0;
				default:break;
			}//end switch
			color8(0, 14);printf("> ");colo_r();
			printf("%Lf\n", res);
			x = res;
		}
	}//end forloop

	return 0;
}//End main