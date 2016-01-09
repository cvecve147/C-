#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a,b,sumb;
	int sum [5]={15145,2515,3515,45,555},i;
	a=sum[1];
	b=sum[1];
	
	
	for (i=0;i<=4;i++)
	{
		if (sum[i]>a){
			a=sum[i];
		}
		if(sum[i]<b)
		{
			b=sum[i];
		}
		
	}
	
	printf("最小=%d  最大=%d\n",b,a);
	
	system("pause");
	return 0;
		
}
