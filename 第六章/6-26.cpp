#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	
	start:
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
	
	if(a>4 || a<0)
	{
		goto start;
	}
	
	}
	  
	system("pause");
	return 0;
} 
