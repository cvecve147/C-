#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	int b;
	printf ("�п�J�A������");
	scanf("%d",&b);
	printf("�п�J�A���魫");
	scanf(" %d",&a);
	
	if (a>=90 && b>=180)
	{
		printf("�魫�A��");
	}
	else if (a>90 && b<180)
	{
		printf("�魫�L��"); 
	}
	else
	{
		printf("���|�L��");
	}
	
	system("pause");
	return 0;
}
