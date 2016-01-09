#include <stdio.h>
#include <stdlib.h>
void square(int arr[]);
int main (void)
{
	int i;
	int arr[5]={1,2,3,4,5};
	for(i=0;i<5;i++){
		printf("arr[%d]=%3d  ",i+1,arr[i]);
	}
	printf("\n©I¥s«á\n");
	
	square(arr);
		
	system("pause");
	return 0;	
}
void square(int arr[])
{
	int i;
	for(i=0;i<5;i++){
		arr[i]=arr[i]*arr[i];
		printf("arr[%d]=%3d  ",i+1,arr[i]);
	}
	printf("\n");
	return ;
}
