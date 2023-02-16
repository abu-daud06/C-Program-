#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,sum=0;
	printf("Enter number:");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		sum=sum+i;
    }
    if(sum==num)
    printf("Perfect Number");
    else 
    printf("Not Parfect");
	getch();
	return 0;
	
}
