#include<stdio.h>
#include<conio.h>
int main()
{
	char a[50];
	int vowel=0, conso=0,i;
	gets(a);
	for(i=0; a[i]!='\0'; i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i'|| a[i]=='o'|| a[i]=='u'|| a[i]=='A'|| a[i]=='E'|| a[i]=='I'|| a[i]=='O'|| a[i]=='U')
		{
			vowel++;
		}
		
		else
		{
			conso++;
		}
	}
	printf("%d %d", vowel,conso);	
	getch();
	return 0;
	
}
