#include<cs50.h>
#include<stdio.h>
int main(void)
{
    int height;
    while(1)
    {
       printf("height:");
        height=GetInt();
        if(height>0 && height<24)
        break;
        else if (height==0)
        exit(0);
    }
    
    for(int i = 0; i < height; i++) 
	{
        for(int j = 0; j < height-i-1; j++)
        {
            printf("%s", " ");
        }
    
		for(int k = 0; k < i+2; k++)
		{
			printf("#");
		}
		printf("\n");
	}	
	return 0;
}
