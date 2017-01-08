#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<cs50.h>

int main(int argc, string argv[])
{
   int i,n,length,k;
   
    if(argc != 2)
    {
        printf("error");
        return 1;
    }
    
    
   string s = argv[1];
   
   for( i = 0, length = strlen(s); i < length; i++)
   {
       if( !isalpha(s[i]) )
       {
           printf("error");
           return 1;
       }
   }
   
         
         string input = GetString();
        
        for(i=0, n=strlen(input); i<n; i++)
        {
            char c = input[i];
            
            
            char key = s[i % (length)];
            
            int num = (int)key;
          
          if( isalpha(key))
          {
              
              if( isupper(key) )
              {
                  k = (num - 65) ;
              }
              
              else if( islower(key) )
              {
                  k = (num - 97) ;
              }
              
          }
            
            if( isupper(c) )
            {
                int C = ((((c - 65) + k) % 26) + 65);
                printf("%c",C);
            }
            
            else if( islower(c) )
            {
                int C = ((((c - 97 ) + k ) % 26 ) + 97);
                printf("%c",C);
            }
            
            else
            {
                printf("%c",c);
            }
        }
        
        printf("\n");
        return 0;
        
}