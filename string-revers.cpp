#include <stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s[1000];
    int i,l=0,k;
    printf("Enter a string: ");
    gets(s);
    while(s[l]!='\0')
    {
    	l++;
	}
	for(i=l-1;i>=0;i--)
	{
		printf("%c",s[i]);
	}
	printf("\nlength of string %d",l);
    getch();
    return 0;
}
