#include<stdio.h>
void main()
{
   int n,m,i,j,k=0;
   printf("Enter number of elements in first array\n");
   scanf("%d",&m);
   printf("Enter number of elements in second array\n");
   scanf("%d",&n);

   int a[m],b[n],c[n+m];


   printf("Enter elements of first array\n");
   for(i=0;i<m;i++)
   {
       scanf("%d",&a[i]);
   }
  printf("Enter elements of second array\n");
   for(j=0;j<n;j++)
   {
       scanf("%d",&b[j]);
   }
  i=0;
  j=0;

    while(i<m&&j<n)
    {
        if(a[i]<b[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = b[j];
            k++;
            j++;
        }
    }

    while(i<m)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while(j<n)
    {
        c[k] = b[j];
        j++;
        k++;
    }

 for(k=0;k<m+n;k++)
 {
     printf("%d,",c[k]);


}
}
