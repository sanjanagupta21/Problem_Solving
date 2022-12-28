#include<stdio.h>
#include<string.h>
void main()
{
    char s[100]; int i;
    printf("Enter word: ");
    gets(s);
    for( i = 0; s[i] != '\0'; i++); // '\0' represents end of string

        printf("%d",i);
        return 0;
}
