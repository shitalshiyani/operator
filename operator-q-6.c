#include<stdio.h>

main()
{
	int x=5,y=8,z=7,xyz;
	//(x-y-z)3
	xyz= (x*x*x)-(y*y*y)-(z*z*z)-3*(x*x*y)+3*(x*y*y)-3*(y*y*z)-3*(y*z*z)+3*(x*z*z)-3*(x*x*z)+6*(x*y*z);

    printf("XYZ=%d",xyz);
}

