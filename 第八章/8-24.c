#include <stdio.h>
#include <stdlib.h>
void counter (void);
int main (void)
{
	counter();
	counter();
	system("pause");
	return 0;
}
void counter (void)
{
	int i;
	i++;
	printf("counter()已被呼叫%d次了\n",i);
	
	return ;
}
