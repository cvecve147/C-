#include <stdio.h>
#include <stdlib.h>
void counter (void);
int i;
int main (void)
{
	counter();
	counter();
	system("pause");
	return 0;
}
void counter (void)
{

	i++;
	printf("counter()�w�Q�I�s%d���F\n",i);
	
	return ;
}
