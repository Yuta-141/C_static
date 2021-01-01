#include <stdio.h>

/*global variables*/
int n;
double factorial();


/*
	main
	params: void
	return: void

*/
int main()
{
	/* variables */
	double k;
	/* initialize */
	n = 5;
	k = factorial();
	printf("%d",n);
	printf("!=%g\n",k);
	
	return 0;
}

/*
	factorial
	params: void
	return: double
*/
double factorial()
{
	/* variables */
	int i,m;
	double k;
	
	if(n == 0)
		m = 1;
	else
		m = n;
	
	k = 1;
	for(i = 1;i <= m; i++)
	{
		k = k * i;
	}
	
	return k;
}