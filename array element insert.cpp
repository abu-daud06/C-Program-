#include <stdio.h>
#include<conio.h>

int main(){
	int a[10],n,i,j,item=6,loc=4;
   printf("Enter array size");
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++){
       printf("a[%d]= %d\n",i,a[i]);
   }
   j=n;
   while(j>=loc){
   	a[j+1]=a[j];
   	j=j-1;
   }
   a[loc]=item;
   n=n+1;
   printf("after insert\n");
   for(i=0;i<n;i++){
       printf("a[%d]= %d\n",i,a[i]);
   }
	return 0;
}
