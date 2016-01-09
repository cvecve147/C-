#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int array[3][5]={{33,32,56,45,33},{77,33,68,45,23},{43,55,43,67,65}};
	int a=10,max=0,i,j,sum[3]={0,0,0};
	
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
		if(max<sum[i]){
			max=sum[i];
			a=i+1;
		}
	}
	
	
	for(i=0;i<3;i++){
		printf("第%d銷售員%4d\n",i+1,sum[i]);
	}
	printf("有最好業績的是銷售員%d\n",a);
	
	system("pause");
	return 0;
}


