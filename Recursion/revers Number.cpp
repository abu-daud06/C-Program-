#include<stdio.h>
#include<conio.h>
int reversnumber(int n){
	static int c,sum=0,res;
	if(n!=0){
		res=n%10;
		sum=sum*10+res;
		reversnumber(n/10);
	}	
	return sum;	
}
int main(){
int x,i,n,j;
    scanf("%d",&n);
    x=reversnumber(n);    
	printf("%d",x);
    return 0;	
}
