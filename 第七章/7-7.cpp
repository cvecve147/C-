#include <stdio.h>
#include <Stdlib.h>
int main (void)
{
	int i;
	
	for (i=1;i<=100;i++)
	if(i%6==0)
	printf("%d\n",i);
    
	system("pause");
	return 0;
}
