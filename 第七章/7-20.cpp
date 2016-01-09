#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a,b=0;
	
	do{
		printf("½Ð¿é¤J¼Æ¦r¡G");
		scanf("%d",&a);
	}while (a<=0 || a>50);
	
	do{
		printf("*");
		b++;
	}while (b<=a);
	
	system("pause");
	return 0;
}
