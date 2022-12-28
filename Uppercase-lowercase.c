#include<stdio.h>
#include<string.h>
void main()
{
    char para[100];
    printf("Enter Paragraph: ");
    gets(para);
    for (int i = 0; i < strlen(para); i++)
    {
        if (para[i]>='A' && para[i]<='Z')
        {
          para[i] = para[i] + 32;
        }
        else if(para[i]>='a'&&para[i]<='z')
        {
            para[i] = para[i] - 32;
        }
        else
            para[i] = para[i] + 0;

    }

    printf("\n%s",para);

}

