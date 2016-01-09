#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int arr[5]={2,3,1,7,9};
	int i;
	
	for(i=0;i<=4;i++){
		printf("arr[%d]=%d  arr=%d\n",i,arr[i],sizeof(arr[i]));
		
	}	
	
	printf("arr(¥þ)=%d\n",sizeof(arr));
	
	system("pause");
	return 0;
}
