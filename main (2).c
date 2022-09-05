/******************************************************************************
.Write a program to calculate the length of the string. (without using built-in method)

*******************************************************************************/

#include <stdio.h>


int main()
{
    char s[50];
    int i,count=0;
    char c;
    printf("Enter a string\n");
    fgets(s,50,stdin);
    printf("Enter a character\n");
    scanf("%c",&c);
    for(int i=0;s[i]!='\0';i++)
     {  
         if(s[i]==c)
          count++;
     }
    printf("given character is present %d times in the string",count);

    return 0;
}
