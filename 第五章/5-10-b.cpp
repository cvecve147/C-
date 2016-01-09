#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	int b;
	printf("請輸入攝氏溫度:");
	scanf("%d\n",&a);
	printf("華氏溫度=%d",(9/5)*a+32);
	
	system("pause");
	return 0;
}
