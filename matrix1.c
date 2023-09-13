#include<stdio.h>
main(){
	int a[2][2],b[2][2],c[2][2];
	int i,j;
	printf("Enter your two matrix:");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
			
		}
	}
    printf("Enter second matrix:");
    for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&b[i][j]);
			c[i][j]=a[i][j]+b[i][j];			
		}
	}
	printf("Disdplay the values:");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&c[i][j]);
		}
		printf("\n");
	}
}
	

