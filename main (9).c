/******************************************************************************
Write a C program to sort a string array in ascending order.

*******************************************************************************/

#include <stdio.h>


int main()
{
    char s1[50];
    int i,j;
    char temp;
    printf("Enter a string\n");
    fgets(s1,50,stdin);
   
    for( i=0;s1[i]!='\0';i++)
     { 
         for(j=i+1;s1[j]!='\0';j++)
          {
              if(s1[i]>s1[j])
              {
                  temp=s1[i];
                  s1[i]=s1[j];
                  s1[j]=temp;
              }
          }  
     }
    printf("After sort the string in ascending order:");
     printf("%s",s1);
  

    return 0;
}
