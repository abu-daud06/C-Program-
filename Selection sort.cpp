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
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	getch();
	return 0;
}
