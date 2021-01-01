#include <stdio.h>
void sum1();

int main()
{
    sum1();
    return 0;
}

/*
function that process data 

*/
void sum1()
{
    int a,b,c;
    printf("a?");
    scanf("%d",&a);
    printf("b?");
    scanf("%d",&b);
    c = a + b;
/* 
print varienty
*/
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("a+b=%d\n",c);
    
    return ;
}
