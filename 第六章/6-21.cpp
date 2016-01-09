#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	char A;
	
	printf("請輸入字串");
	scanf("%c",&A);
	
	switch (A) 
	{
		case 'a':
			printf("你輸入A");
			break;
		case 'b':
			printf("你輸入B");
			break;
		case 'A':
			printf("你輸入A");
			break;
		case 'B':
			printf("你輸入B");
			break;
		default:
			printf("你輸入的不是A與B");
	}
	system("pause");
	return 0; 
	
}
