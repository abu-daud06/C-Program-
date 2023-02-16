#include<stdio.h>
#include<conio.h>

int main(){
	int i,j,n,k;
 	printf("Enter number to row!");
 	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			printf(" ");
		}
		for(k=0;k<2*i+1;k++){
			printf("*");
		}
		printf("\n");
	}
}


