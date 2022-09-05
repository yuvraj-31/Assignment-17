/******************************************************************************
.Write a program to calculate the length of the string. (without using built-in method)

*******************************************************************************/

#include <stdio.h>


int main()
{
    char s[50];
    int i,count=0;
    printf("Enter a string\n");
    fgets(s,50,stdin);
    for(int i=0;s[i]!='\0';i++)
      count++;
    printf("Length of the string is %d",count-1);

    return 0;
}
