#include <stdio.h>
#include <stdlib.h>
void kitty(int k) 

{
  int i;
  for (i=1;i<=k;i++){
   printf("第%d行的\"Hello kitty\"\n",i);
  }   
}

int main (void)
{
  int lineCount;  
  printf("輸入要印出的行數:\n");
  scanf("%d",&lineCount);
  kitty(lineCount);
  
  system("pause");
  return 0;	
}

