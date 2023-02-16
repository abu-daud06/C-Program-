#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
	int num,factorial;
	printf("Enter the number:");
	scanf("%d",&num);
	factorial=fact(num);
	printf("Factorial number is:%d",factorial);
	getch();
}
int fact(int n)
{
	if(n==0){
	return (1);
     }
 return(n*fact(n-1));

}
