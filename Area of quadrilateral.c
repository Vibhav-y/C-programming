#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,d,s,area;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    s=(a+b+c+d)/2;
    area=sqrt((s-a)*(s-b)*(s-c)*(s-d));
    printf("Area of the quadrilateral: %.2lf", area);
    return 0;
}
