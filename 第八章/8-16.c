#include <stdio.h>
#include <stdlib.h>
int find_k(int n);
int main (void)
{
	int sum;
	
	printf("find_k(19)=%d\n\n",find_k(19));
	printf("find_k(25)=%d\n\n",find_k(25));
	printf("find_k(70)=%d\n\n",find_k(70));
	
	
	system("pause");
	return 0;
}
int find_k(int n)
{
	int num;
	num=(n-2)/4;
	if(n-(4*num+2)<4*(num+1)+2-n)
	{
		return num;
	}
	else
	{
		return num+1;
	}
}
