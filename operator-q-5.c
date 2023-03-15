#include<stdio.h>

main()
{
	int x=6,y=2,z=3,xyz;
	//(x+y+z)3
	xyz= (x*x*x)+(y*y*y)+(z*z*z)+3*(x+y)*(y+z)*(x+z);
	
	printf("XYZ=%d",xyz);
}
