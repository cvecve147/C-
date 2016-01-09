#include <stdio.h>
#include <stdlib.h>
int fib(int);
int i=0;
void counter(void);
int main (void)
{
	int n;
	for (n=1;n<=10;n++)
	{
		i++;
	
		
		printf("fib(%d)=%d\n",n,fib(n));
	}
	counter();
	
	system("pause");
	return 0;
}
int fib(int n)
{
	
	if (n==1||n==2)
	{
		return 1;
	}
	else 
	{
		return (fib(n-1)+fib(n-2));
	}

}
void counter(void)
{
	
	printf("for°j°é %5d,»¼°j %5d",i,i);
	
}
