#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	int b;
	printf ("請輸入你的身高");
	scanf("%d",&b);
	printf("請輸入你的體重");
	scanf(" %d",&a);
	
	if (a>=90 && b>=180)
	{
		printf("體重適中");
	}
	else if (a>90 && b<180)
	{
		printf("體重過重"); 
	}
	else
	{
		printf("不會過重");
	}
	
	system("pause");
	return 0;
}
