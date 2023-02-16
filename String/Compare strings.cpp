#include<stdio.h>
#include<conio.h>
#include<string.h>
int string_compair(char a[], char b[]);
int main(){
	char a[20],b[20],result;
	printf("Enter first string ");
	scanf("%s",a);
	printf("Enter second string ");
	scanf("%s",b);
	result=string_compair(a,b);
	if(result==0){
		printf("string is equal");
	}
	else
		printf("string is not equal");
	
	getch();
	
}
int string_compair(char a[],char b[]){
	int i,l=0;
	for(i=0;a[i]!='\0',b[i]!='\0';i++){
		if(a[i]!=b[i]){
			break;	
		}
	}
	if(a[i]=='\0' && b[i]=='\0'){
		return 0;
	}
	else 
	return 1;
} 

