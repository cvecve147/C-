#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	start:
	printf("�п�J�~���G");
	scanf("%d",&a);
	
	if (a>=1900 && a<=2000)
	{
		if(a%4==0)
		{
			printf("�O�|�~");
		}
		else 
		{
			printf("���O�|�~");
		}
	}
	else 
	{
		printf("��J���~");
		goto start;
	}
	system("pause");
	return 0; 
}
