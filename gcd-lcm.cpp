#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,gcd,lcm,x,y;
	scanf("%d%d",&a,&b);
	x=a;
	y=b;
	while(b!=0){
		gcd=a%b;
		a=b;
		b=gcd;
	}
	lcm=(x*y)/a;
	printf("G.C.D=%d\nL.C.M=%d",a,lcm);
	getch();
	return 0;
}
