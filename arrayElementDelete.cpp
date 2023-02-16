#include <stdio.h>
#include<math.h>

int main(){
	int a[10],n,i,j,item=6,loc;
   printf("Enter array size");
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++){
       printf("a[%d]= %d\n",i,a[i]);
   }   
   printf("which location you delete\n");
   scanf("%d",&loc);
   for(i=loc;i<n;i++){
   		a[i]=a[i+1];
   }   
   n=n-1;
   printf("after delete\n");
   for(i=0;i<n;i++){
       printf("a[%d]= %d\n",i,a[i]);
   }
	return 0;
}

