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
			printf("%d���ƬO�_��\n",arr[i]);
			a++;
		}
		else if(arr[i]%2==0) {
			printf("%d���ƬO����\n",arr[i]);
		    b++;
		}
	}
	
	printf("�_�Ʀ�%d��   ���Ʀ�%d��",a,b);
	
	return;
}
