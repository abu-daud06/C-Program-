#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	if((year%4==0 && year%100!=0)||(year%400==0))
	{
	printf("\nLepyear");
	}
	else
	printf("\nNot Lepyear");
	getch();
	return 0;
	
}
