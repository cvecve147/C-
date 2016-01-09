#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	int b;
	printf("請輸入你的身高：");
	scanf("%d\n",&a);
	printf ("請輸入你的體重：");
	scanf("%d\n",&b);
		
	if (a>0 && b>0)
	{
		if(b>=90 &&a>=180)
		printf("適中");
		if(b>90 && a<180)
		printf("過重");
		else 
		printf("沒過重");
	}
	system("pause");
	return 0;
}
