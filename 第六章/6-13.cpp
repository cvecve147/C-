#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a;
	
	printf("½Ð¿é¤J¤ë¥÷¡G");
	scanf("%d",&a);
	if (a>=3 && a<=5)
	printf("¬K©u");
	if (a>=6 && a<=8)
	printf ("®L©u");
	if (a>=9 && a<=11)
	printf ("¬î©u");
	if (a>=12 && a<=2)
	printf ("¥V©u");
		
	system("pause");
	return 0;
}
