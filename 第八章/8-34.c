#include <stdio.h>
#include <stdlib.h>
#define ABS(x) (-x)
int main (void)
{
	int a=0,b;
	int x;
	scanf("%d",&x);
	a>x ?  (b=a) : (b=x);
	if(x<0){
	printf("%d",ABS(x));
	}
	else{
		printf("%d",x);
	}
	
	system ("pause");
	return 0;
}
