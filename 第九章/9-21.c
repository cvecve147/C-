#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 4
double average(int arr[ROW][COL]);
int main (void)
{
	int arr[ROW][COL]={{1.15,2.48,3.84,4.848},
					   {12,55,58,86},
					   {48,48,8848,482}};
	average(arr);
	
	system("pause");
	return 0;
}
double average(int arr[ROW][COL])
{
	int i,j;
	double sum;
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			sum+=arr[i][j];
		}
	}
	printf("averagr=%f",sum/(ROW*COL));
	
	return ;
}
