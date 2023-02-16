#include<stdio.h>
#include<conio.h>
int main(){
	int a[50],i,j,n,tmp;
	printf("Enter number");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter number%d ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
		if(a[j]>a[j+1]){
			tmp=a[j];
			a[j]=a[j+1];
			a[j+1]=tmp;
		}
	}
	}
	
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	getch();
	return 0;
	
}
