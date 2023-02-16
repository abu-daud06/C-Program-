#include<stdio.h>
#include<conio.h>
int main(){
	int a[10],sum=0,i,j,k,n,count=0;
	printf("Enter array size");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			sum=a[i]+a[j];
			for(k=0;k<n;k++){
				if(k!=i & k!=j){
					if(sum==a[k]){
						count++;
					}
				}
				
			}
		}
	}
	printf("%d",count);
	getch();return 0;
}
