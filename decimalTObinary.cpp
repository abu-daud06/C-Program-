#include<stdio.h>
#include<conio.h>
int main(){
	int n,bi,i=0,j,a[50];
	printf("enter decimal number");
	scanf("%d",&n);
	//for(i=0;n>0;i++)
	while(n!=0)
	{
	a[i]=n%2;	
	n=n/2;
	i++;
	}
	
	for(i=i-1;i>=0;i--){
		printf("%d",a[i]);
	}
	getch();
	return 0;
}
