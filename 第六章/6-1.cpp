#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	char a;
	scanf("%c",&a);
	int b;
	printf("ASCII of ch=%d\n",a);
	
	if (a>=48 ||a<=57)
	printf("�A��J�O�Ʀr");
	else if (a>=65 || a<=89)
	printf("�A��J���O�^��");
	else if (a>=97 || a<=122)
	printf("�A��J�o�O�p�g�^��");
	
	system("pause");
	return 0;	
}
