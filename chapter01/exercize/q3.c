#include <stdio.h>

int main(){
    double a,b,c,d;
    scanf("%10lf",&a);
    scanf("%10lf",&b);
    scanf("%10lf",&c);

    d = a * b * c;

    printf("a=%lf\n",a);
    printf("b=%lf\n",b);
    printf("c=%lf\n",c);
    printf("d=%lf\n",d);

    return 0;
}
