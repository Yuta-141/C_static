#include <stdio.h>
/* prototype declaration */
void func1(int *a);

/*
	main
	params: void
	return: int

*/
int main()
{
	int a;
	a = 0;
	func1(&a);
	printf("a=%d\n",a);
}

/*
	func1
	params: int a
	return: void
*/

void func1(int* a)
{
	*a = *a + 1;
}