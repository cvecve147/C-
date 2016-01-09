#include <stdio.h>
#include <stdlib.h>
int  sum2(int n) 
{
  int total=0;
    
  if(n==1){
   total = 2;
  }else{
    total = sum2(n-1) + 2*n;    
  }
  
  return total;
}

int main (void)
{
  int ipt;  
  printf("輸入n :");
  scanf("%d",&ipt);
  printf("n為 %d 總合為 %d \n\n", ipt , sum2(ipt) );

  system("pause");
  return 0;	
}
