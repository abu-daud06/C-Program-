#include<stdio.h>
#include<conio.h>
int main()
{
 int a[50],n,i,min,j;
 printf("Enter the size:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 	scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 	for(j=i+1;j<n;j++)
 	{
 	if(a[i]>a[j])
	 {
	 	min=a[i];
	 	a[i]=a[j];
		a[j]=min;
	 }
	// printf("%d\n",a[i]);
 	}
 }
 for(i=0;i<n;i++){
 	printf("%d\n",a[i]);
 }
 getch();
 return 0;
}
