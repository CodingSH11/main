#include<stdio.h>
main(){
	int a[2][2],b[2][2],i,j,f;
	printf("Enter your first matrix");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
			
		}
	}
	//second matrix
	printf("Enter your second matrix");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	//two matrix of equal
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(a[i][j]==b[i][j]){
				continue;
			}
			else{
				f=1;
				break;
			}
		}
	}
	//
	if(f==0)
		{
	printf("equal matrix");
	
			}
			
			
			else
			{
				printf("matrix not equal");
			}			
	
}
