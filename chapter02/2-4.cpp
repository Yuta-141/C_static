#include <stdio.h>
#include <math.h>

/*
	main
	params: void
	return: int

*/
int main()
{
	/* variables */
	double a,b,c;
	
	/* initialize */
	a = 5.1;
	b = 2.1;
	c = pow(a,b);
	
	printf("%f^%f=%f\n",a,b,c);
}