#include<stdio.h>
#include <stdlib.h>
int main (void)
{
	int array[3][5]={{33,32,56,45,33},{77,33,68,45,23},{43,55,43,67,65}};
	int i,j,sum[5]={0,0,0,0,0};
	for(i=0;i<3;i++){
			for(j=0;j<5;j++){
			if(j==0){
				sum[j]+=12*array[i][j];
				printf("sum%d=%d\n",i,sum[i]);
			}
			if(j==1){
				sum[j]+=16*array[i][j];
				printf("sum%d=%d\n",i,sum[i]);
			}
			if(j==2){
				sum[j]+=10*array[i][j];
				printf("sum%d=%d\n",i,sum[i]);
			}
			if(j==3){
				sum[j]+=14*array[i][j];
				printf("sum%d=%d\n",i,sum[i]);
			}
			if(j==4){
				sum[j]+=15*array[i][j];
				printf("sum%d=%d\n",i,sum[i]);
			}
		}
	}

	for(j=0;j<5;j++){
		printf("%c產品的銷售金額：%d\n",j+65,sum[j]);
	}
	
	system("pause");
	return 0;
}
