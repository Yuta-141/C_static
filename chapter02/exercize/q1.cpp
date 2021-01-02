#include <stdio.h>
#include <math.h>


/*
	main
	

*/
int main()
{
	int pt,p0,t;
	double r;
	
	scanf("%10d",&pt);
	scanf("%10d",&p0);	
	scanf("%10d",&t);	
	
	r = pow((pt / p0),(1.0 / t))-1;
	
	printf("r = %f\n",r);
	return 0;
}



/*
	perm
	params:int n, int r
	return: double 

*/
