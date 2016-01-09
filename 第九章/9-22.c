#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COL 5
void add(int A[ROW][COL],int B[ROW][COL],int C[ROW][COL]);
int main (void)
{
	int A[ROW][COL]={{1,2,3,5,4},{59,158,15,6,4}};
	int B[ROW][COL]={{1,55,48,56,54},{1,8,8,6,4}};
	int C[ROW][COL]={{0,0,0,0,0},{0,0,0,0,0}};
	
	add(A,B,C);
	
	system("pause");
	return 0;
}
void add(int A[ROW][COL],int B[ROW][COL],int C[ROW][COL])
{
	int i,j;
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			printf("C[%d][%d]=%d\n",i,j,C[i][j]);
		}
	}
	return ;
}
