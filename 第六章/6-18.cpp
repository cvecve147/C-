#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	int b;
	printf("�п�J�A�������G");
	scanf("%d\n",&a);
	printf ("�п�J�A���魫�G");
	scanf("%d\n",&b);
		
	if (a>0 && b>0)
	{
		if(b>=90 &&a>=180)
		printf("�A��");
		if(b>90 && a<180)
		printf("�L��");
		else 
		printf("�S�L��");
	}
	system("pause");
	return 0;
}
