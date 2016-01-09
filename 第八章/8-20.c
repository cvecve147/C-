#include <stdio.h>
#include <stdlib.h>
int  sum(int n) 
{
  int total=0;
    
  if(n==1){
  	 total = 1;
  }else{
  	total = n + sum(n-1);    
    printf("sum=%d",total);
  }
  
  return total;
}

int main (void)
{
  int ipt;  
  printf("輸入n :");
  scanf("%d",&ipt);
  printf("n為 %d 總合為 %d \n\n", ipt , sum(ipt));

  system("pause");
  return 0;	
}
