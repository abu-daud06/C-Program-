#include<stdio.h>
#include<conio.h>
#include<string.h>
int palindrom(char a[]);

int main(){
	char a[100];
	printf("Enter a string ");
	gets(a);
	palindrom(a);
	//printf("Reverse string is %s",a);
	getch();
}
int palindrom(char a[]){
	int l=0,i,flag=0;
	while(a[l] !='\0'){
		l++;
	}
	printf("%d",l);
	int j=l-1;
	printf("%d",j);
	for(i=0;i<l/2;i++){
		if(a[i]!=a[j]){
			flag=1;
			break;
		}
		j--;
	}

	if(flag==1){
		printf("not palindrom");
	}
	else{
		printf(" plaindrom");
	}
}
