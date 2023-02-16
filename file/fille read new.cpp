    #include <stdio.h>
    #include<conio.h>
    //#include <stdlib.h>
     
    int main()
    {
       char ch, file_name[25];
       int l;
       FILE *fp;
       fp= fopen("G:\\Tonmoy\\add.txt","r");
       
        while((ch=getc(fp) )!= EOF){
       		//printf("%c", ch);
       		l++;
       	}
       	//while()
       	printf("%d", l);
            
       fclose(fp);
       return 0;
    }
