#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int kg;
	
	printf("請輸入體重：");
	scanf("%d",&kg);
	
	if(kg>0)
	{
		if(kg<90)
		printf("體重適中\n");
		if (kg>90)
		printf("體重過重\n");
    }
	system ("pause");
	return 0;
	
}
