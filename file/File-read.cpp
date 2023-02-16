#include<stdio.h>
#include<conio.h>
int main()
{
	int num[50],i;
	
	 FILE *fp;
	 fp= fopen("G:\\Tonmoy\\c practis\\file\\add.txt","r");
	
		for(i=0;i<8;i++){
			fscanf(fp,"%d",&num[i]);
		}
		for(i=0;i<8;i++){
			printf("number is %d\n",num[i]);
		}
		fclose(fp);
		getch();
		return 0;
}
