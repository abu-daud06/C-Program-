#include<stdio.h>
int main()
{
	int f=0,f1=1,f2,n,i;
	printf("Enter number\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf(" %d",f);
		
		f=f1+f2;
		f1=f2;
		f2=f;
		
	}	
	return (0);
}
