#include<stdio.h>
void main()
{
     int i,j,n;
     printf("Enter n\n");
     scanf("%d",&n);

     for( i = n; i>=1; i--)
     {

          for( j =i; j<=n; j++)
          {
                   printf("%c", 'A'+j-1);
          }


            printf("\n");

     }





}
