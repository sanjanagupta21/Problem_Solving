#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter measurement of first side\n");
    scanf("%d",&a);
    printf("Enter measurement of second side\n");
    scanf("%d",&b);
    printf("Enter measurement of third side\n");
    scanf("%d",&c);
    if(a==b && a==c)
        printf("Equilateral Triangle");
        else if(a==b || a==c || b==c)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");

}
