#include<stdio.h>
#include<conio.h>
int main()
{
	int d,m,y;
	printf("Enter the day:");
	scanf("%d",&d);
	{
		y=d/365;
		d=d%365;
		m=d/30;
		d=d%30;
		
	}
	printf("year=%d,month=%d,day=%d",y,m,d);
	getch();
	return 0;
}
