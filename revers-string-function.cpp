#include<stdio.h>
#include<conio.h>
char* reverse(char* str);

int main()
{
   int i, j, k;
   char str[100];
   printf("Enter a string\t");
   scanf("%s",&str);
   reverse(str);
   return 0;
   getch();
}

char* reverse(char *str)
{
   int l=0,i;
	while(str[l]!='\0')
	    {
	    	l++;
		}
		for(i=l-1;i>=0;i--)
		{
			printf("%c",str[i]);
		}
 }
