#include <stdio.h>
double factorial(int n);


/* 
	main 
	params: void
	return: int 


*/
int main()
{
	/*variables */
	double k;
	int n;

	/* init */
	n = 5;
	k = factorial(n);
	printf("%d", n);
	printf("!=%g\n",k);

}

/*
	factorial
	params: int 
	return: double

*/
double factorial(int n)
{
	int i, m;
	double k;
	k = 1;
	if (n == 0)
	{
		m = 1;
	}
	else
	{
		m = n;
	}
	for (i = 1; i <= m; i++)
	{
		k = k * i;

	}
	return k;
}
