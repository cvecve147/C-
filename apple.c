#include <stdio.h>
#include <stdlib.h>
int count(int m,int n);
int main (void)
{
	int apple=0,p=0;
	printf("½Ð¿é¤J¡G");
	scanf("%d",&apple);
	scanf(" %d",&p);
	
	printf("%d\n",count(apple,p));
	
	system("pause");
	return 0;
}
int count(int m,int n)
{
	if(m<=1 || n<=0)return 1;
	if(m<n)
		return count(m,m);
	else
		return count(m,n-1)+count(m-n,n);
}
