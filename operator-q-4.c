#include<stdio.h>

main()
{
	int x=3, y=8, xy;
	//(x-y)3
	xy= (x*x*x)-(y*y*y)-3*(x*x*y)+3*(x*y*y);
	
	printf("XY=%d",xy);
}
