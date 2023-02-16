#include<stdio.h>
#include<conio.h>
int main()
{
	int n,p,tmp=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
	p=n%10;
	printf("%d",p);
	n=n/10;
    }
    getch();
    return 0;

}
