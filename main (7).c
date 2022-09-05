/******************************************************************************
Write a program in C to count the total number of alphabets, digits and special
characters in a string.

*******************************************************************************/

#include <stdio.h>


int main()
{
    char s[50];
    int i,count1=0;
    int count2=0,count3=0;
    printf("Enter a string\n");
    fgets(s,50,stdin);
   
    for(int i=0;s[i]!='\0';i++)
     {  
        if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
          count1++;
        else if(s[i]>=48 && s[i]<=57)
          count2++;
        else
           count3++;
     }
       
     printf("The number of alphabets present in the string are %d\n",count1);
     printf("The number of digits present in the string are %d\n",count2);
     printf("The number of special characters present in the string are %d\n",count3-1);
  

    return 0;
}
