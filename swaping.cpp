#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter Two number\n");
	scanf("%d%d",&a,&b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("Swap number is %d %d",a,b);
	return (0);
}
