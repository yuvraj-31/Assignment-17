/******************************************************************************
Write a program in C to copy one string to another string.

*******************************************************************************/

#include <stdio.h>


int main()
{
    char s1[50];
    char s2[50];
    int i;
    printf("Enter a string\n");
    fgets(s1,50,stdin);
   
    for( i=0;s1[i]!='\0';i++)
     {  
       s2[i]=s1[i];
     }
     s2[i]='\0';
      printf("After copying the string into another\n"); 
     printf("%s",s2);
  

    return 0;
}
