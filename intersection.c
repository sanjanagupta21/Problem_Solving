#include<stdio.h>
void main()
{
    int i,j,a[50],b[50],n,m,k=0,s;
    printf("Enter first array size\n");
    scanf("%d",&n);
    printf("Enter second array size\n");
    scanf("%d",&m);
    printf("Enter elements of first array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter elements of second array\n");
    for(j=0;j<m;j++)
        scanf("%d",&b[j]);

        if(n>m)
            s=m;
        else            s=n;
        int c[s];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                c[k]=a[i];
                k++;
            }
        }
    }
    for(i=0;i<s;i++)
    printf("%d\n",c[i]);


}
