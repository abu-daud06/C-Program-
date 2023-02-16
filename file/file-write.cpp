#include<stdio.h>
#include<conio.h>
int main()
{
	int mark,i,n,count=0;
	char name[30],c;
	printf("Enter number of student\n");
	scanf("%d",&n);
	FILE *fp;
	fp= fopen("G:\\Tonmoy\\add.txt","a+");
	for(i=0;i<n;i++){
		printf("for student %d \n Enter Name:",i+1);
		scanf("%s",name);
		printf("Enter Marks:");
		scanf("%d",&mark);
		fprintf(fp,"\n Name:%s \n Mark=%d",name,mark);
	}
	
		fclose(fp);
		getch();
		return 0;

}
