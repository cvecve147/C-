#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i,j,sale[2][4],sum[4]={0};
	
	for (i=0;i<2;i++)
	{
		for(j=0;j<4;j++){
			printf("�~�ȭ�%d����%d�u�~�Z�G",i+1,j+1);
			scanf("%d",&sale[i][j]);
		}
	}
	
	printf("***********output*************");
	for(i=0;i<2;i++){
		printf("\n�~�ȭ�%d���~�Z���O��",i+1);
		for(j=0;j<4;j++){
			printf("%d  ",sale[i][j]);
			sum[j]+=sale[i][j];
		}
	}
	
	printf("\n\n");
	
	for(i=0;i<4;i++){
		printf("��%d�u���P��q��%d����\n",i+1,sum[i]);
	}

	
	system("pause");
	return 0;
}
