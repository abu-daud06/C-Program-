#include<stdio.h>
 
int main() {
   int num, i=1, sum = 0;
 
   printf("\nEnter number : ");
   scanf("%d", &num);
   
   for(i=1;i<num;i++){
   		if(num%i==0){
   			sum=sum+i;
		   }
   }
   if (num == sum)
      printf("%d Number is perfect", num);
   else
      printf("%d is not perfect", num);
 
   return (0);
}
