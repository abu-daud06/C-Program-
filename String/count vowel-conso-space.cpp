#include<stdio.h>
#include<conio.h>
#include<string.h>
int vowel_charecter(char a[]);

int main(){
	char a[100],ch;
	int result;
	printf("Enter a string ");
	gets(a);
	vowel_charecter(a);
	getch();
}
int vowel_charecter(char a[]){
	int vowel=0,i,digit=0,space=0,consonante;
	for(i=0;a[i]!='\0';i++){
		if(a[i]=='a' ||a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u' ||a[i]=='A' ||a[i]=='E' ||a[i]=='I' ||a[i]=='O' ||a[i]=='U' ){
			vowel++;
		}
		else if(a[i]>='0' && a[i]<='9'){
			digit++;
		}
		else if(a[i]==' '){
			space++;
		}
		else{
			consonante++;
		}
	}
	printf("Vowel = %d\n",vowel);
	printf("digit = %d\n",digit);
	printf("consonante = %d\n",consonante);
	printf("space = %d\n",space);
}

