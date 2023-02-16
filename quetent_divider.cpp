#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,q,r;
	scanf("%d%d",&a,&b);
	q=a/b;
	r=a%b;
	printf("Quetent=%d\ndivider=%d",q,r);
	getch();
	return 0;
}
