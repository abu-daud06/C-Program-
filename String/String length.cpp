#include<stdio.h>
#include<conio.h>
#include<string.h>
int string_length(char a[]);
int main(){
	char a[20],length;
	printf("Enter a string ");
	//scanf("%s",a);
	gets(a);
	length=string_length(a);
	printf("length of string is %d",length);
	getch();
	//return 0;
}
int string_length(char a[]){
	int i,l=0;
	for(i=0;a[i]!='\0';i++){
		l++;
	}
	return l;
} 

