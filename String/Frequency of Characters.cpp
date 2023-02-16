#include<stdio.h>
#include<conio.h>
#include<string.h>
int frequency_charecter(char a[],char ch);

int main(){
	char a[100],ch;
	int result;
	printf("Enter a string ");
	gets(a);
	printf("Enter a charecter ");
	scanf("%c",&ch);
	result=frequency_charecter(a,ch);
	printf("Frequent charecter is %d",result);
	getch();
}
int frequency_charecter(char a[], char ch){
	int count=0,i,flag=0;
	for(i=0;a[i]!='\0';i++){
		if(a[i]==ch){
			count++;
		}
	}
	return count;
}

