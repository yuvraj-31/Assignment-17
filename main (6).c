/******************************************************************************
Write a program to reverse a string.

*******************************************************************************/

#include <stdio.h>


int main()
{
    char s[50];
    int i,length=0;
    char temp;
    printf("Enter a string\n");
    fgets(s,50,stdin);
   
    for(int i=0;s[i]!='\0';i++)
     {  
        length++;
     }
       for(int i=0;i<length/2;i++)
     {  
          temp=s[i];
          s[i]=s[length-i-1];
          s[length-i-1]=temp;
     }
     printf("After reverses the string\n");
    printf(" %s",s);

    return 0;
}
