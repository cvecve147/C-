#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a;
	int i;
	for ( i=1; i<10;i++) 
	{
		printf("�п�J�A�����Z�G");
		scanf("%d",&a);
		if (a>=80 && a<=100)
		{
			printf("A��");
		}
		else if (a>=60 && a<80 )
		{
			printf("B��");
		}
		else if (a<60 && a>0)
		{
			printf("C��");
		}
				
	}
	system("pause");
	return 0;
}
