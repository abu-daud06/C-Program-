#include<stdio.h>
#include<conio.h>
#include<string.h>
int string_revers(char a[]);

int main(){
	char a[100],rev[100];
	printf("Enter a string ");
	gets(a);
	string_revers(a);
	//printf("Reverse string is %s",a);
	getch();
}
int string_revers(char a[]){
	int l=0,i;
	while(a[l] !='\0'){
		l++;
	}
	for(i=l;i>=0;i--){
		printf("%c",a[i]);
	}
}
