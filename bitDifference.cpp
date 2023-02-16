#include<stdio.h>
#include<conio.h>
int main()
{
	int x=31,y=14,z,j=0,c=0;
	int count = 0;

for(int z = x^y; z!=0; z = z>> 1)
{
   count += z & 1;
}
z = x^y;
printf("%d\n",z);
while(z){
	c=z%2;
	z=z/2;
	if(c==1){
		j++;
	}
}
 printf("%d\n",j);
 printf("%d",count);

	getch();
	return 0;
	
}
