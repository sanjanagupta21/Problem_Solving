#include<stdio.h>
#include<math.h>
float roots(float a,float b,float c);
void main()
{
    float a,b,c,r;
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    printf("Enter c: ");
    scanf("%f",&c);

    printf("%f",roots(a,b,c));


}

float roots(float a,float b,float c)
{
     float d = (-b + sqrt(b*b - 4*a*c))/2*a;
     return d;
    float d1 = (-b - sqrt(b*b - 4*a*c))/2*a;
    return d1;


}
