#include <stdio.h>
#include<math.h>
#include<conio.h>

int main(){
	int a,b,i,p,c,k,cube=0;
	scanf("%d%d",&a,&b);
	p=a*b;
	for(i=8;i<p;i++){
		if(p%i==0){
		c=i;
		k=round(pow(c,1.0/3.0))	;		
			if(k*k*k==c){
			cube++;					
			}
		}
	}
	printf("%d ",cube);
	 
	return 0;
}
