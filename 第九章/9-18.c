#include <stdio.h>
#include <stdlib.h>
int idx(int arr[]);
int main (void)
{
	int arr[5]={112,2,34,5,6};
	
	printf("³Ì¤p¤Þ¯Á­È¡G%d\n",idx(arr));
	
	system("pause");
	return 0;
}
int idx(int arr[])
{
	int i,idx=arr[0],sum=1;
	
	for(i=0;i<5;i++){
		if(arr[i]<idx){
			idx=arr[i];
			sum=i+1;
			printf("sum=%d\n",sum);
		}
	}
	
	return sum;
}
