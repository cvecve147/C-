#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	float a;
	float b;
	
	printf ("�п��X��Y");
	scanf("%f",&a);
	scanf(" %f",&b);
	
	
	if (a>0 && b>0)
	printf ("�Ĥ@�H��\n");
	if (a<0 && b>0)
	printf ("�ĤG�H��\n");
    if (a<0 && b<0)
	printf ("�ĤT�H��\n");
	if (a>0 && b<0)
	printf ("�ĥ|�H��\n");

	if (a==0 && b==0)
	printf ("���I\n");
	else if (b==0)
	printf ("X�b\n");
	else if (a==0 )
	printf ("Y�b\n");
	
	system("pause");
	return 0;
}
