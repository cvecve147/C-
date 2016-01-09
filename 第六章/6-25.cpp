#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	start:
	printf("請輸入年份：");
	scanf("%d",&a);
	
	if (a>=1900 && a<=2000)
	{
		if(a%4==0)
		{
			printf("是閏年");
		}
		else 
		{
			printf("不是閏年");
		}
	}
	else 
	{
		printf("輸入錯誤");
		goto start;
	}
	system("pause");
	return 0; 
}
