#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	if(num%i==0)
	{
		break;
	}
	if(i==num)
	printf("prime number");
	else 
	printf("Not prime");
	getch();
	return 0;
}
