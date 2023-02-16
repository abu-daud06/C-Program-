#include<stdio.h>
#include<conio.h>
int main()
{
	int a1[50],a2[50],i,j=0,k=0,l=0,n1,n2,temp;
	printf("enter a1 aize");
	scanf("%d",&n1);
	printf("enter a1 element");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a1[i]);
	}
	printf("enter a2 aize");
	scanf("%d",&n2);
	printf("enter a2 element");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&a2[i]);
	}
	k=n1;
	for(i=0;i<n2;i++)
	{
		a1[k]=a2[i];
		k++;
	}
	l=n1+n2;
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
		if(a1[i]>a1[j])
		{
			temp=a1[i];
			a1[i]=a1[j];
			a1[j]=temp;
		}
		}
	}
	for(i=0;i<l;i++)
	{
		printf(" %d",a1[i]);
	}
	getch();
	return 0;
}
