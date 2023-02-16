#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,n,k,p,q;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<n;i++){
		for(j=0;j<=i;j++){
			printf(" ");
		}
		for(k=i;k<n;k++){
			printf("*");
		}
		printf("\n");
	}
	getch();
	return 0;
}
