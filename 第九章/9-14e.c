#include <stdio.h>
#include <Stdlib.h>
int main (void)
{
	double array[3][4]={{18.2,17.3,15.0,13.4},
					 {23.8,25.1,20.6,17.8},
					 {20.6,21.5,18.4,15.7}};
	int i,j,k,l;
	double high,low;
	high=low=array[0][0];
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			/*if(high<array[i][j]){
				high=array[i][j];
				k=i;
				l=j;
			}*/
			if(low>array[i][j]){
				low=array[i][j];
				k=i+1;
				l=j+1;				
			}
		}
	
	}
	printf("最低溫度的日子是星期%d的時段%d=%f\n",k,l,low);
	
	
			system("pause");
			return 0;
}
