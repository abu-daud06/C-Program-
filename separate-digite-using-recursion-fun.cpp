#include<stdio.h>
#include<conio.h>
int seperate(int tmp);
int main()
{
	int n,tmp=0,p,rev;
 	printf("enter number");
	scanf("%d",&n);	
	while(n!=0)
	{
	p=n%10;
	n=n/10;
	tmp=tmp*10+p;
    }
    seperate(tmp);
    getch();
}
int seperate(int tmp){
	int rev;
	while(tmp !=0){
		rev = tmp%10;
		printf("%d\n",rev);
		return(seperate(tmp/10));
		}
	getch();
	return 0;
}

