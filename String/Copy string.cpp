#include<stdio.h>
#include<conio.h>
#include<string.h>
//int string_copy(char s[], char d[]);
int string_copy(char s[], char d[]){
	int i;
	for(i=0;s[i]!='\0';i++){
		d[i]=s[i];
	}
}
int main(){
	char s[100],d[100];
	printf("Enter a string for copy ");
	gets(s);
	string_copy(s,d);
	printf("Copy string is %s",d);
	getch();
}

