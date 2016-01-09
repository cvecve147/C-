#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i;
	for (i=0;i<100;i++)
	if(i%3==0 && i%8==0)
	printf("可被3與8除的整數=%d\n",i);
	
	printf("\n\n\n");
	system ("pause");
	return 0;	
}
