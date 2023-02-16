#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,n,k,p,q;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			//printf("*");
			printf("%c",'A'+i);
		}
		printf("\n");
	}
	getch();
	return 0;
}
