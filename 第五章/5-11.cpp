#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	printf("請輸入攝氏溫度:");
	scanf("%d",&a);
	printf("\n你輸入的數字是:%d\n",a);
	printf("華氏溫度:",(9/5)*a+32);
		
	system("pause");
	return 0;
}
