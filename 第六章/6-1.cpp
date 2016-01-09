#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	char a;
	scanf("%c",&a);
	int b;
	printf("ASCII of ch=%d\n",a);
	
	if (a>=48 ||a<=57)
	printf("你輸入是數字");
	else if (a>=65 || a<=89)
	printf("你輸入的是英文");
	else if (a>=97 || a<=122)
	printf("你輸入得是小寫英文");
	
	system("pause");
	return 0;	
}
