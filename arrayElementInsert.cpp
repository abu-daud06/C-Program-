#include <stdio.h>
#include<conio.h>

int main(){
	int a[10],n,i,j,item=6,loc;
   printf("Enter array size\n");
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++){
       printf("a[%d]= %d\n",i,a[i]);
   }   
   printf("which location you insert\n");
   scanf("%d",&loc);   
   for(i=n-1;i>=loc;i--){
   		a[i+1]=a[i];
   }
   a[loc]=item;
   n=n+1;
   printf("after insert\n");
   for(i=0;i<n;i++){
       printf("a[%d]= %d\n",i,a[i]);
   }
	return 0;
}
