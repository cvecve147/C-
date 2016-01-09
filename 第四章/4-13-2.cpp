#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	char a[10];
	char b='\\';
	printf("請輸入："); 
	scanf("%s",a);
	printf("%c你輸入的字元是%20d%c",b,a,b);
	
	system("pause");
	return 0;
}
