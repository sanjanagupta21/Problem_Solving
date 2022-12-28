#include<stdio.h>
void main()
{
    int n,i,j,a=0;
    printf("Enter n\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            a++;
            printf("%d",a);
        }
        a--;
        for(j=1;j<i;j++)
        {
            printf("%d",a);
            a--;
        }
        printf("\n");
        a++;
    }
}
