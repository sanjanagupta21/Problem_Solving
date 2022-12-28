#include<stdio.h>
void main()
{
    char i,j,k;

    for(i='A';i<'D';i++)

    {
       for(j='D';j>i;j--)
         printf("");

            for(k='A';k<=i;k++)
            {
            printf("%c",i);
       }
        printf("\n");
    }
}


