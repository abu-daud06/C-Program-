#include<stdio.h>
#include<conio.h>
int main()
{
	int h,m,s;
	printf("Enter the sec:");
	scanf("%d",&s);
		m=s/60;
		s=s%60;
		h=m/60;
		m=m%60;
	printf("hr=%d,minut=%d,sec=%d",h,m,s);
	getch();
	return 0;
}
