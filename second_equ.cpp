#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float D,x1,x2;
	printf("Enter the value of a, b, c:");
	scanf("%d%d%d",&a,&b,&c);
	D=sqrt(b*b-(4*a*c));
	x1=(-b+D)/(2*a);
	x2=(-b-D)/(2*a);
	printf("first root:%.2f",x1);
	printf("\nsecond root:%.2f",x2);
	getch();
	return 0;
}
