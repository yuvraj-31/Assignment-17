/******************************************************************************
Write a program to convert a given string into lowercase

*******************************************************************************/

#include <stdio.h>


int main()
{
    char s[50];
    int i,count=0;
    char c;
    printf("Enter a string\n");
    fgets(s,50,stdin);
   
    for(int i=0;s[i]!='\0';i++)
     {  
       if( s[i]>=65 && s[i]<=91)
         s[i]=s[i]+32;
     }
     printf("After converting the string into lowercase\n");
    printf(" %s",s);

    return 0;
}
