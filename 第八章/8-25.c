#include <stdio.h>
#include <stdlib.h>
int fib(int);
void counter(void);
int i;
int main (void)
{
	int n=5;
	
	printf("fib(%d)=%d\n",n,fib(5));
	
	system ("pause");
	return 0;
}
int fib(int n)
{
	counter();	
	
	if (n==1 || n==2)
	{	
		return 1;
	}
	else {
		return (fib(n-1)+fib(n-2));
	}
}
void counter(void)
{
	
	i++;
	printf("counter()已經呼叫%d次了\n",i);
	return ;
}
