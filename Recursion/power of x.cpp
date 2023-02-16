#include<stdio.h>
int powercal(int x,int n){
	if(n==0){
		return 1;
	}
	else {
		return (x*powercal(x,n-1));
	}
	
}

int main(){
	int x,n,result;
	printf("Enter base and power");
	scanf("%d%d",&x,&n);
	result=powercal(x,n);
	printf("result is %d",result);
	return 0;
}
