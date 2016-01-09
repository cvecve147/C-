#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float i=1;
	int a;
	float sum=0;
		
	printf("¿é¤J¤K");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
	sum+=1/i;
	printf("%f %f\n\n\n",i,sum);
	}
	
	system("pause");
	return 0;
}
