#include<stdio.h>
#include<conio.h>
int maximun(int a[] , int n);
int main()
{
	int a[20],i,min,max,n;
	
    scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	max=maximun(a,n);
	printf("maximum is=%d",max);
	getch();
	
}
int maximun(int a[] , int n){
	int i,k,mx;
	mx=a[0];
	for(i=1;i<=n;i++)
	{
		if(a[i]>mx){
			mx=a[i];
		}
	}
	return (mx);
}
