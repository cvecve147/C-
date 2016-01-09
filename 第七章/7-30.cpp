#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int input,cnt=0,passwd=6128;
   
   for(cnt=0;cnt<=3;cnt++)
   {
      printf("請輸入密碼: ");
      scanf("%d", &input);
      
      if(input==passwd)
      {
         printf("密碼輸入正確，歡迎使用本系統!!\n");  
         break;
      }        
      if(cnt>=3)
      {
         printf("密碼輸入超過三次!!\n");
         break;
      } 
   }      
   
   system("pause");
   return 0;
}

