/******************************************************************************
Write a program to count vowels in a given string

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
         if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i'|| s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
          count++;
     }
    printf(" %d vowels is present in the string",count);

    return 0;
}
