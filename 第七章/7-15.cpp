#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	char ch;
	
	while(ch!=17 && ch!=3)
	{
		scanf("%c",&ch);
		printf("ASCII of ch =%d \n",ch);
	}
	printf("�A���Fctrl+q��ctrl+c...\n");
	
	system("pause");
	return 0; 
}
