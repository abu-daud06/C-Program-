#include<stdio.h>
#include<conio.h>
int main(){
	int intT;
	float folatT;
	char characterT;
	double doubleT;
	printf("Integer size= %ld byte \n",sizeof(intT));
	printf("charecter size= %ld byte \n",sizeof(characterT));
	printf("floating size= %ld byte \n",sizeof(folatT));
	printf("Double size= %ld byte \n",sizeof(doubleT));
	
	getch();
	return 0;
}
