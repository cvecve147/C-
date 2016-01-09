#include <stdio.h>
#include <stdlib.h>
void counit(int arr[]);
int main (void)
{
	int arr[4]={1,2,6,58};
	counit(arr);
	
	system("pause");
	return 0;	
}
void counit (int arr[])
{
	int i,a=0,b=0;
	for(i=0;i<4;i++){
		if(arr[i]%2==1){
			printf("%d计琌计\n",arr[i]);
			a++;
		}
		else if(arr[i]%2==0) {
			printf("%d计琌案计\n",arr[i]);
		    b++;
		}
	}
	
	printf("计Τ%d   案计Τ%d",a,b);
	
	return;
}
