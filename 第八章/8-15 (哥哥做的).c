#include <stdio.h>
#include <stdlib.h>
double power(double base, int n) 
{
   int i;
   double pow=1.0;
   for(i=1;i<=n;i++){
      pow*=base; 
   }
  return pow;
}
double fMOM(int a)//fMOM 表示為分母函式，無特別命名意義 ，此為階層函式
{
   int i,j;
   double sum = 1.0;
   
   
   for(j=a;j>0;j--){
     sum *= j;}
   return   sum;
}
double my_fun(double x,int n) 
{
  int k;
  double anser= 0.0 ;
  for (k=1;k<=n;k++){
      anser = anser + power(-1,k)* power(x,2*k+1)/fMOM(2*k+1);
  } 
  return anser;  
}

int main (void)
{
  printf("my_fun(2.2,0)= %f\n",my_fun(2.2,0));
  printf("my_fun(2.2,1)= %f\n",my_fun(2.2,1));
  printf("my_fun(2.2,2)= %f\n",my_fun(2.2,2));  
  printf("my_fun(2.2,3)= %f\n",my_fun(2.2,3));
  printf("my_fun(2.2,4)= %f\n",my_fun(2.2,4));
  printf("my_fun(2.2,5)= %f\n",my_fun(2.2,5));
  printf("my_fun(2.2,6)= %f\n",my_fun(2.2,6));
  printf("my_fun(2.2,7)= %f\n",my_fun(2.2,7));
  printf("my_fun(2.2,8)= %f\n",my_fun(2.2,8));
  printf("my_fun(2.2,9)= %f\n",my_fun(2.2,9));
  printf("my_fun(2.2,10)= %f\n",my_fun(2.2,10));
  printf("\n\n\n\n");
  
  
  double margin =0.0; //差額 
  int n = 2; 
  double big,small;
  do{
      printf("----------------------\n");
      
      if(my_fun(2.2,n)>my_fun(2.2,n-1)){
       margin = my_fun(2.2,n) -  my_fun(2.2,n-1);}
      else{
       margin = my_fun(2.2,n-1) - my_fun(2.2,n) ;     
      }
     
      printf("n=%d n-1=%d margin=%f \n",n,n-1,margin);     
      n++;          
  } while (margin >=0.0001) ;    
  printf("\n\n當n等於%d時my_fun(2.2,n-1)與my_fun(2.2,n)的差額小於0.0001\n\n",n-1); 

  system("pause");
  return 0;	
}



