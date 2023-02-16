#include<stdio.h>
int digitCount(int n){
	static int c=0;
	if(n!=0){
		c++;
		digitCount(n/10);
	}
	return c;
}

int main(){
	int n,sum,a;
	scanf("%d",&n);
	a=10/5;
	printf("%d",a);
	sum=digitCount(n);
	printf(" Total digit %d",sum);
	return 0;
}

