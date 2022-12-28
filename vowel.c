#include<stdio.h>
void main()
{
    char c;
    printf("Enter the letter\n");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        printf("Vowel\n");
    else
        printf("Consonant");
}
