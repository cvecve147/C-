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
	printf("counter()�w�Q�I�s%d���F\n",i);
	
	return ;
}
