#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf(" ");
		}
		for(k=i;k<n;k++){
			printf("*");
			//printf(" ");
		}
		printf("\n");
	}
	
}
