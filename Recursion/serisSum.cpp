//Sum of the series 1^1 + 2^2 + 3^3 + ….. + n^n using recursion(MIST-2019BRGEN)
#include<stdio.h>
#include<math.h>
int seriessum(int n){
	if(n!=0){
		return (pow(n,n)+seriessum(n-1));
	}
	else {
		return 0;
	}
}

int main(){
	int n,result;
	scanf("%d",&n);
	printf("%d",seriessum(n));
	return 0;
}
