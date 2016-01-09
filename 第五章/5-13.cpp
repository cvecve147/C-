#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	printf("請輸入英里:");
	scanf("%d",&a);
	printf("\n你輸入的數字是:%d\n",a);
	printf("華氏溫度:%f",a*1.6);
		
	system("pause");
	return 0;
}
