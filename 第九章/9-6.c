#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i,sum=0;
	int data[]={3,5,0,3,2,4,1,6,8,5,4,3,2};
	printf("¾ã­Ó°}¦C¡G%d\n",sizeof(data));
	
	for(i=0;i<=12;i++){
		printf("data=%d\n",data[i]);
		if (data[i]>=3 && data[i]<=6 && data[i]!=0){
			sum++;
			printf("data=%d",data[i]);
			printf("sum=%d\n",sum);
		}
	} 
	
	
	
	system("pause");
	return 0;
}
