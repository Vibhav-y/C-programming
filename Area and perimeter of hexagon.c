#include<stdio.h>
#include<math.h>
int main(){
    double a;
    scanf("%lf",&a);
    printf("Area: %.2lf",pow(a,2)*3.0*(sqrt(3.0)/2.0));
    printf("\nPerimeter: %.2lf",6.0*a);
}
