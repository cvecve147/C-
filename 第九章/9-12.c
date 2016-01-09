#include <stdio.h>
#include <stdlib.h>
#define x 4
#define y 3
int main (void){
	int i,j;
	int a[x][y]={{1,2,3},
				{4,5,6},
				{7,8,9},
				{10,11,12}};
	int b=a[0][0],c=a[0][0];
	printf("b=%d c=%d",b,c);
	
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			if (a[i][j]>b){
				b=a[i][j];
			}
			if (a[i][j]<c){
				c=a[i][j];
			}
		}
	
		printf("\n");
	}
	

	printf("最大值%d最小值%d",b,c);
	
	
	system("pause");
	return 0;
}
