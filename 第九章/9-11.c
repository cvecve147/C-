#include <stdio.h>
#include <stdlib.h>
#define x 4
#define y 3
int main (void){
	int i,j;
	int a[x][y]={{1,2,3},{1,2,3},{1,2,3},{1,2,3}};
	int b[x][y]={{1,2,3},{1,2,3},{1,2,3},{1,2,3}};
	
	printf("a+b=\n");
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("%3d",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
