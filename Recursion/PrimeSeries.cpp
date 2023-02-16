#include<stdio.h>
#include<conio.h>
int primeseries(int n){
	int i,j;
	for(i=2;i<=n;i++){
		for(j=2;j<=i;j++){
			if(i%j==0){
			break;
			}
		}
		if(i==j){
			printf(" %d",i);
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	primeseries(n);
	return 0;
	
}
