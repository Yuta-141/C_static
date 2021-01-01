#include <stdio.h>
#define N 5
#define R 2 
	double perm(int n , int r);
	double factorial(int n);

int main()
{
	/*
		variables
	*/
	double k;
	int n,r;
	/* init */
	n = N;
	r = R;
	k = perm(n,r);
	printf("P(%d",n);
	printf(",%d",r);
	printf(")=%f\n",k);
	
	return 0;
}

/*
	main
	params:void
	return: int 

*/
double perm(int n, int r)
{
	/* variables */
	int nr;
	double n1,nr1,p;
	nr = n - r;
	n1 = factorial(n);
	nr1 = factorial(nr);
	p = n1 / nr1;
	
	return p;
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

