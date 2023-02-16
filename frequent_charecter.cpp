#include<stdio.h>
#include<conio.h>
int main()
{
	char c[1000],ch;
	int count=0,i;
	printf("Enter string\n");
	gets(c);
	printf("Enter Charecter ");
	scanf("%c",&ch);
	for(i=0;c[i]!='\0';i++)
	{
		if(ch==c[i]){
			count++;
		}
	}
	printf("frequency of %c = %d times",ch,count);
	getch();
	return 0;
	

}
