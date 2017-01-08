#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main()
{
    int i,n,first_letter,capital_letter;
   
   // taking input as a string
    string s;
    s = GetString();
  
    //  capitalising first letter
  
   first_letter=(int)s[0];
    if(first_letter>=97)
    {
        first_letter=first_letter-32;
        printf("%c",(char)first_letter);
    }
    
    else
    {
        printf("%c",s[0]);
    }
    
     //  capitalising letters next to spaces
     
    for(i=0,n=strlen(s);i<n;i++)
    {
        if((int)s[i]==32)
        {
          capital_letter=(int)s[i+1];
          
           if(capital_letter>=97)
           {
           capital_letter=capital_letter-32;
           printf("%c",(char)capital_letter);
           }
           
           else
          {
            printf("%c",capital_letter);
          }
        }
    }
    printf("\n");
}
    
   
   