#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc , string argv[])
{
    int i,n;
    
    if(argc != 2)
    {
        printf("error");
        return 1;
    }
    
    // key is second command line argument
    int key = atoi(argv[1]);
    
    string input=GetString();
    
    for(i = 0, n = strlen(input); i < n; i++)
    {
        char c = input[i];
        
        if(isupper(c))
        {
            int C = ((( (int)c - 65) + key) % 26) + 65;
            
            printf("%c",C);
        }
        
        else if(islower(c))
        {
            int C = ((( (int)c - 97) +key) % 26) + 97;
            
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