#include<stdio.h>
#include<conio.h>
#include<math.h>
 int main()
 {
   int a,b,c,s;
   float area;
   printf("Enter the value of A,B& C:");
   scanf("%d%d%d",&a,&b,&c);
   s=(a+b+c)/2;
   area=sqrt(s*(s-a)*(s-b)*(s-c));
   printf("Area is:%f",area);
   getch();
   return 0;
 
 }
 
