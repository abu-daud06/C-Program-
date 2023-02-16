#include<stdio.h>

int main(){
	int n,i,j,k,s;
	scanf("%d",&n);
	s=n;
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
			printf("%d ",j);
		}
		for(j=1;j<=2*i-1;j++){
			printf("");
		}
		printf("\n");
	}
	for(i=1;i<=n-1;i++){
		for(j=1;j<=i+1;j++){
			printf(" ");
		}
		for(j=1;j<=2*(n-i)-1;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
