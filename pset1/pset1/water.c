#include<cs50.h>
#include<stdio.h>

int main(void)
{
    printf("minutes:");
    int time=GetInt();
    int bottles= (int) ((time*1.5*128)/16);
    printf("bottles: %i\n", bottles);
}