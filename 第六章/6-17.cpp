#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int kg;
	
	printf("�п�J�魫�G");
	scanf("%d",&kg);
	
	if(kg>0)
	{
		if(kg<90)
		printf("�魫�A��\n");
		if (kg>90)
		printf("�魫�L��\n");
    }
	system ("pause");
	return 0;
	
}
