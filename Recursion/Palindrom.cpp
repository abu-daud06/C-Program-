#include<stdio.h>
void chkpalindrom(char a[]){
	int i,c=0,flag=0,end,l;
	while(a[c]!=0){
		c++;
	}
	end=c-1;
	for(i=0;i<c/2;i++){
		if(a[i]!=a[end]){
			flag=1;
			break;
		}
		end--;
	}
	if(flag==0)
		printf("Plindrom");
	else
		printf("Not Plindrom");
}
int main(){
	char a[20];
	int i,c=0,flag=0,end,l;
	printf("Enter String\n");
	gets(a);
	chkpalindrom(a);
	return 0;
}
