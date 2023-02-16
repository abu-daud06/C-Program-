#include<stdio.h>
int fibo(int n){
	static int f=0,f1=1,f2=0;
	if(n!=0){
		printf("%d ",f);
		f=f1+f2;
		f1=f2;
		f2=f;
		fibo(n-1);
	}
}
int main(){
	int n,i;
	scanf("%d",&n);
	fibo(n);
	return 0;
}
