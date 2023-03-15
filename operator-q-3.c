#include<stdio.h>

main()
{
	int x=2, y=5, xy;
	//(x+y)3
	xy= (x*x*x)+3*(x*x*y)+3*(x)*(y*y)+(y*y*y);
	
	printf("XY=%d",xy);
}
