#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	double array[3][4]={{18.2,17.3,15.0,13.4},
					 {23.8,25.1,20.6,17.8},
					 {20.6,21.5,18.4,15.7}};
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("array=%f\n",array[i][j]);
		}
	}
	
	system("pause");
	return 0;
} 
