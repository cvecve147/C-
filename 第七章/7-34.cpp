#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i;
	
	for (i=1;i<1000;i++)
	{
		if (i%3==1 && i%5==3 && i%7==2){
		printf("%d\n\n",i);
		}
	
	}
	system("pause");
	return 0;
}
