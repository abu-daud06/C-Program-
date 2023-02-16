#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char ip[30],a[30];
	int l=0,i,j=0;
	gets(ip);
	//while(ip[l] !='\0'){
	//	l++;
	//}
//	printf("length= %d\n",l);
	//for(i=0;i<=l;i++){
	//	printf("%c",ip[i]);
	//}
	while(ip[j] !='.'){
		a[j]=ip[j];
		j++;
	}
	
	j--;
	
	int ip2 = 0, k = 1; 
    while (j >= 0) 
    { 
        ip2 = ip2 +(ip[j]-'0') * k;         
        k = k * 10; 
        j--; 
    }
    
	if(ip2>=1 && ip2<=126) {
		printf("A");
	}
	else if(ip2>=128 && ip2<=191) {
		printf("B");
	}
	else if(ip2>=192 && ip2<=223) {
		printf("C");
	}
	getch();
	return 0;
}
