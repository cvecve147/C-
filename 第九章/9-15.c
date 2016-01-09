#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int array[4][2][3]={{{1,1,1},
						{1,1,1}},
					   {{1,1,1},
						{1,1,1}},
					   {{1,1,1},
					    {1,1,1}},
					   {{1,1,1},
					    {1,1,1}}};
					    
	int i,j,k,sum=0;
	
	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
			for(k=0;k<3;k++){
				sum+=array[i][j][k];
			}
		}
	}
	printf("sum=%d",sum);
	
	system("pause");
	return 0;
} 
