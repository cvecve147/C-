#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	int i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	if (a%i==0)
	printf("%d¡B",i);
	
	printf("\n\n\n");
	system("pause");
	return 0;
	
}
