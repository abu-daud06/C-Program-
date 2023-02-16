#include <stdio.h>
#include<conio.h>
int main()
{
    char s1[1000],s2[1000];
    int i,l=0,k;
    printf("Enter a s1: ");
    gets(s1);
    printf("Enter a s2: ");
    gets(s2);
    while(s1[l]!='\0')
    {
    	l++;
	}
	for(i=0;s2[i]!='\0';i++)
	{
		s1[l]=s2[i];
		l++;
	}
	printf("Concate string is %s",s1);
	printf("\nlength of string %d",l);
    getch();
    return 0;
}
