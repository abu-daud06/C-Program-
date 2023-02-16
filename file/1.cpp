#include<stdio.h>
#include<conio.h>
int main(){
	int name[10],n,i,j,max;
	FILE *fp;
	fp=fopen("G:\\Tonmoy\\c practis\\file\\test.txt","a+");
	printf("Enter number to save in file\n");
	//scanf("%d",&n);
	for(i=0;i<10;i++){
		fprintf(fp,"%d ",name[i]);
	}
	//max=name[i];
	//for(i=1;i<=90;i++){
	//	if(max<name[i]){
	//		max=name[i];
	//	}
	//}
	//fprintf(fp,"%d",max);
//	printf("\n max value is %d",max);
//	fprintf(fp,"\n max value is %d",max);
	
	fclose(fp);
	getch();
	return 0;
}
