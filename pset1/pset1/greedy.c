#include<cs50.h>
#include<stdio.h>
#include<math.h>
int main()
{
   float owed;
   int quater_count,dine_count,nickel_count,penny_count;
  
  do
  {
   printf("O hai! How much change is owed?");
   owed=GetFloat();
  }
  while(owed<0);
   int cent_amount = (int) round(owed*100);
   
   //Number of quaters used
   quater_count=cent_amount/25;
   
   //cents left
   cent_amount=cent_amount%25;
   
   //number of dine used
   dine_count=cent_amount/10;
   
   //cents left
   cent_amount=cent_amount%10;
   
   //number of nickel used
   nickel_count=cent_amount/5;
   
   //cents left
   cent_amount=cent_amount%5;
   
   //number of penny used
   penny_count=cent_amount/1;
   
   //cents left
   cent_amount=cent_amount%1;
   
   int coins= quater_count+ dine_count+ nickel_count+ penny_count+cent_amount;
   
   printf("%d\n",coins);
}
