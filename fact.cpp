#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,fac=1;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	fac=fac*i;
	printf("Factorial is:%d",fac);
	getch();
	return 0;
	
	
}
