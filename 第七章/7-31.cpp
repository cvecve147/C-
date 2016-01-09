#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	for (a=1;a<=100;a++)
	{
		if(a%2==0 ||a%3==0)
			if (a%12==0)
			continue;
		printf("%d\n",a);
		
	}
	system("pause");
	return 0;
}
