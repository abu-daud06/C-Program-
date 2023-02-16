#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,n,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			printf(" ");
		}
		for(k=i;k>=0;k--){
			printf("%d",k);
		}
		printf("\n");
	}
	getch();
	return 0;
}
