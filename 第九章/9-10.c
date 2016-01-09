#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i,j,sale[2][4],sum[2]={0};
	
	for (i=0;i<2;i++)
	{
		for(j=0;j<4;j++){
			printf("業務員%d的第%d季業績：",i+1,j+1);
			scanf("%d",&sale[i][j]);
		}
	}
	
	printf("***********output*************");
	for(i=0;i<2;i++){
		printf("\n業務員%d的業績分別為",i+1);
		for(j=0;j<4;j++){
			printf("%d  ",sale[i][j]);
			sum[i]+=sale[i][j];
		}
	}
	
	printf("\n\n");
	
	for(i=0;i<2;i++){
		printf("第一的銷售量為%d部車\n",sum[i]);
	}

	
	system("pause");
	return 0;
}
