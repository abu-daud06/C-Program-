#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j=1,k=1,n;
    printf("\nEnter number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     
     for(j=1;j<=i;j++)
     {
     	printf(" %d",k);
     	k++;
	 }
	printf("\n");
     k=k+1;
	}
     getch();
     return 0;
}
