#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i,man[5];
	int min,max;
	
	for(i=0;i<5;i++){
		printf("�п�H���Z[%d]���ȡG",i);
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
	printf("�P�Ǫ����Z�̰��G  %d\n",max);
		printf("�P�Ǫ����Z�̧C�G  %d\n",min);
		
	system("pause");
	return 0;
	
}
