#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	
	printf("�п�J�Ʀr1~4:");
	scanf("%d",&a);
	
	switch(a)
	{
    case 1:
	printf("�K��");
	break;
	case 2:
	printf("�L��");
	break;
	case 3:
	printf("���");
	break;
	case 4:
	printf("�V��");
	break;
	default:
	printf("��J���~");
	}
	system("pause");
	return 0;
}
