#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int input,cnt=0,passwd=6128;
   
   for(cnt=0;cnt<=3;cnt++)
   {
      printf("�п�J�K�X: ");
      scanf("%d", &input);
      
      if(input==passwd)
      {
         printf("�K�X��J���T�A�w��ϥΥ��t��!!\n");  
         break;
      }        
      if(cnt>=3)
      {
         printf("�K�X��J�W�L�T��!!\n");
         break;
      } 
   }      
   
   system("pause");
   return 0;
}

