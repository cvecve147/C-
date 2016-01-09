#include <stdio.h>
#include <stdlib.h>
void main(){
int a[5];
int i;
for (i=0; i<5; i++){
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
for (i=0; i<5;i++)
printf("%5d,",a[i]);
printf("\n");

system("pause");
}
