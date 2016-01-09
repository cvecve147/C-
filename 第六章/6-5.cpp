#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	printf("請輸入你的體重");
	scanf ("%d",&a);
	
	if (a>=90)
	{
		printf("體重過重");
	}
	else if (a<90)
	{
		printf("體重適中"); 
	}
	
	system("pause");
	return 0;
}
