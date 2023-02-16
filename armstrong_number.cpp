#include<stdio.h>
#include<math.h>
 
int main() {
   int num, temp, sum = 0, rem,n=0;
 
   printf("\nEnter number for checking Armstrong : ");
   scanf("%d", &num);
    temp = num;
 	while(temp!=0){
 		temp=temp/10; 	
 		n++; 		
	 }
	 temp = num;
   while (num != 0) {
      rem = num % 10;
      sum = sum + pow(rem,n);
      num = num / 10;
   }
 
   if (temp == sum){
   	printf("%d is Amstrong Number", temp);
   }
      
   else
      printf("%d is not Amstrong Number", sum);
 
   return (0);
}
