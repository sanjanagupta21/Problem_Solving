#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter n\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {

          printf("%d",j);
        }


        for(j=2;j<=i;j++)
        {
            printf("%d",j);

        }
        for(j=0;j<=i;j++)
        {
            printf("\n");

        }

    }
}

