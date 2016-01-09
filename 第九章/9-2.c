#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int arr[5]={2,3,1,7,9};
	int i;
	
	for(i=0;i<=4;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}	
	
	system("pause");
	return 0;
}
