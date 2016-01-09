#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a,b=1;
	
	do{
		printf("½Ð¿é¤J¼Æ¦r¡G");
		scanf("%d",&a);
	}while (a<=0 || a>50);
	
	while(b<=a){
		b++;
		printf("*");		
	} 
	
	system("pause");
	return 0;
}
