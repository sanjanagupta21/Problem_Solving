#include<stdio.h>
void main()
{
   int x,y;
   printf("Enter x coordinate\n");
   scanf("%d",&x);
   printf("Enter y coordinate\n");
   scanf("%d",&y);
   if(x>0&&y>0)
    printf("First Quadrant");
   else if(x<0&&y>0)
    printf("Second Quadrant");
   else if(x<0&&y<0)
    printf("Third Quadrant");
   else
    printf("Fourth Quadrant");




}
