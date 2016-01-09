#include <stdio.h> //sum+=1/2，1/4...以此類推 
#include <stdlib.h>
int power(int base,int n);
double my_fun(int);
int main (void)
{
	int i;
	scanf("%d",&i);
	printf("my_fun(3)=%lf",my_fun(i));
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
}
double my_fun(int n)
{
	double sum=0.0;
	int i;
	for (i=1;i<=n;i++){
		printf("i=%d\n",i);
	sum+=1.0/power(2,i);
	printf("sum=%lf\n",sum);
	}
	return sum;	
}
int power(int n,int i)
{
	int power=1;
	int j;
	
	for(j=1;j<=i;j++){
	power=power*n;
	}
	
	printf("power=%d\n",power);
	return power;
}

