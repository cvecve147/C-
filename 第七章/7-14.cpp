#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int day=0,a=3000;
	
	a=3000;
	while (a>=5)
	{	
	a=a/2;
	day+=1;
    }
    
	printf("��%d��",day);
	
	system("pause");
	return 0;
}
