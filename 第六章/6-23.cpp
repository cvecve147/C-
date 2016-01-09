#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	printf ("請輸入:");
	scanf("%d",&a);
	
	switch (a)
	{
		case 1:
			printf("工作日");
			break;
		case 2:
			printf("工作日");
			break;
		case 3:
			printf("工作日");
			break;
		case 4:
			printf("工作日");
			break;
		case 5:
			printf("工作日");
			break;
		case 6:
			printf("休假日 ");
			break;
		case 7:
		    printf("休假日");
			break;
		default:
		    printf("輸入錯誤");
	}
	system ("pause");
	return 0;	
} 
