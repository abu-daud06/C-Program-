#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,n,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			printf(" ");
		}
		for(k=1;k<=i*2+1;k++){
			printf("*");
		}
		printf("\n");
	}
	getch();
	return 0;
}
