#include <stdio.h>
#include <stdlib.h>
int min(int arr[]);
int main (void)
{
	int arr[3]={1,2,3};
	
	printf("³Ì¤p­È¡G%d\n",min(arr));
	
	system("pause");
	return 0;	
}
int min(int arr[])
{
	int min=arr[0];
	int i;
	for(i=0;i<3;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	
	return min;
}
