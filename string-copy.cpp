#include<stdio.h>
#include<conio.h>
int main(){
	char s1[100],s2[100];
	int i=0;
	printf("Enter your string\n");
	scanf("%s",&s1);
	while(s1[i]!='\0'){
		s2[i]=s1[i];
		i++;
	}
	s2[i]='\0';
	printf("The copy string = %s",s2);
	getch();
	return 0;
}
