#include <stdio.h>


double harmonic(int n);


/*
	main
	params: void
	return int 
*/
int main()
{
	double result;
	int n;
	
	printf("input n\n");
	scanf("%d",&n);
	
	result = harmonic(n);
	printf("%lf",result);
	return 0;
}

double harmonic(int n)
{
	double total=0;
	int i;
	for(i=1;i<=n;i++)
	{
		total += (1.0 / i);
	}
	return total;
}