#include<stdio.h>
#include<conio.h>
int main()
{
 int a[50],n,i,min,max;
 printf("Enter the array size:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 	scanf("%d",&a[i]);
 }
 min=a[0];
 max=a[0];
  for(i=1;i<n;i++)
   {  
     if(a[i]<min){
     min=a[i];
       }
     else if(a[i]>max){
    	max=a[i];
    }  
   }
 	printf("Minimum is=%d  \nmaximum is=%d ",min,max);

 
 getch();
 return 0;	
	
}
