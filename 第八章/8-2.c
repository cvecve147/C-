#include <stdio.h>
#include <stdlib.h>
void kitty(int k) 

{
  int i;
  for (i=1;i<=k;i++){
   printf("��%d�檺\"Hello kitty\"\n",i);
  }   
}

int main (void)
{
  int lineCount;  
  printf("��J�n�L�X�����:\n");
  scanf("%d",&lineCount);
  kitty(lineCount);
  
  system("pause");
  return 0;	
}

