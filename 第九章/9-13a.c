#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int array[3][5]={{33,32,56,45,33},{77,33,68,45,23},{43,55,43,67,65}};
	int i,j,sum[3]={0,0,0};
	
	for (i=0;i<3;i++){
		for(j=0;j<5;j++){
			if(j==0){
				sum[i]+=12*array[i][j];
				printf("sum%d=%d\n",i,sum[i]);
			}
			if(j==1){
				sum[i]+=16*array[i][j];
				printf("sum%d=%d\n",i,sum[i]);
			}
			if(j==2){
				sum[i]+=10*array[i][j];
				printf("sum%d=%d\n",i,sum[i]);
			}
			if(j==3){
				sum[i]+=14*array[i][j];
				printf("sum%d=%d\n",i,sum[i]);
			}
			if(j==4){
				sum[i]+=15*array[i][j];
				printf("sum%d=%d\n",i,sum[i]);
			}
		}
	}
	
	for(i=0;i<3;i++){
		printf("²Ä%d¾P°â­û%4d\n",i+1,sum[i]);
	}
	
	system("pause");
	return 0;
}


