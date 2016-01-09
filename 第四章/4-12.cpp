#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	char a [30];
	char b [30];
	printf("請輸入姓氏：");
	scanf("%s",a);
	printf("請輸入名子：");
	scanf("%s",b);
	printf("你的名子是：%s 你的姓氏：%s",b,a);
	
	system("pause");
	return 0; 
	
}
