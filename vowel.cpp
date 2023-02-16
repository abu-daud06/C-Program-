#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter character\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf("%c is a vowel",ch);
			break;
		default:
			printf("%c is not a vowel",ch);
			
	}
	
	getch();
	return 0;
}
