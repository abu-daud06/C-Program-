#include<stdio.h>
int fact(int n){
	int res;
	if(n==0){
		res=1;
	}
	else
		res=n*fact(n-1);
	return res;
}
int main(){
	int f,i,n;
	scanf("%d",&n);
	f =fact(n);
	printf("Factarial is = %d",f);
	return 0;
}
