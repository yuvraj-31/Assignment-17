/**************************
Write a program in C to Find the Frequency of Characters.

***************************/

#include <stdio.h>


int main()
{
    char s[50];
    char s2[50];
    int i,j,k;
    
    printf("Enter a string\n");
    fgets(s,50,stdin);
    printf("The Frequency of characters\n");
    for(k=0;s[k];k++);
   
    for( i=0;i<k-1;i++)
     {  int count=1;
         for(j=i+1;s[j];j++)
          {
              if(s[i]==s[j] && s[i]!='1')
               {
                  s[j]='1';
                  count++;
                   
               }
          } 
        if(s[i]!='1' && s[i]!=' ')
         printf("%c comes %d times\n",s[i],count); 
     }
       
      
    return 0;
}
