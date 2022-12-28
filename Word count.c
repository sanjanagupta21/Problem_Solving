#include<stdio.h>
#include<string.h>
void main()
{
    char para[100]; int word = 1;
    printf("Enter Paragraph: ");
    gets(para);
    for (int i = 0; i < strlen(para); i++)
    {
        if (para[i] == ' ')
            word++;
    }
    printf("Word count: %d",word);

}
