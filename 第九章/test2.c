#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i,man[5];
	int min,max;
	
	for(i=0;i<5;i++){
		printf("請輸人成績[%d]的值：",i);
		scanf("%d",&man[i]);
	}
	
	min=max=man[0];
	
	for (i=0;i<5;i++){
		if (man[i]>max)
			max=man[i];
		if(man[i]<max){
			min=man[i];
		}
	}
	printf("同學的成績最高：  %d\n",max);
		printf("同學的成績最低：  %d\n",min);
		
	system("pause");
	return 0;
	
}
