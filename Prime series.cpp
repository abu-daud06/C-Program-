#include<stdio.h>
#include<conio.h>

int main(){
 	int i,j,c=0;
 	for (i=2;i<=100;i++){
        for (j=2;j<=i;j++){
            if (i%j==0){
                break;
            }
        }
        if (i==j){
        	c++;
        	printf(" %d",j);
        }            
    }
    printf("Total= %d",c); 
    getch();
}

