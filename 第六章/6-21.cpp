#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	char A;
	
	printf("�п�J�r��");
	scanf("%c",&A);
	
	switch (A) 
	{
		case 'a':
			printf("�A��JA");
			break;
		case 'b':
			printf("�A��JB");
			break;
		case 'A':
			printf("�A��JA");
			break;
		case 'B':
			printf("�A��JB");
			break;
		default:
			printf("�A��J�����OA�PB");
	}
	system("pause");
	return 0; 
	
}
