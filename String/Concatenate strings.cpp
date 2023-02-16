#include<stdio.h>
#include<conio.h>
#include<string.h>
int string_concate(char s[], char d[]);

int main(){
	char s[100],d[100];
	printf("Enter first string ");
	gets(s);
	printf("Enter second string ");
	gets(d);
	string_concate(s,d);
	printf("string is %s ",s);
	getch();
}
int string_concate(char s[], char d[]){
	int i,l=0;
	while(s[l]!='\0'){
		l++;
	}
	int j=0;
	while(d[j] !='\0'){
		s[l]=d[j];
		l++;
		j++;
	}
}
