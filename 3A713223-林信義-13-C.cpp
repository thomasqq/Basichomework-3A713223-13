#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

    int age;
    char str1='b';
	char str2='g';
    char str;
    
    printf("�п�J�ʧO(�k:b,�k:g):");
    scanf("%s",&str);
    printf("�п�J�~��:");
    scanf("%d",&age);    

	
	if(str==str1 && age>=18){
		printf("���H�b����100�~�H�e�i�H���B�C\n");
	}
	else if(str==str2 && age>=16){
		printf("���H�b����100�~�H�e�i�H���B�C\n");
	}
	else{
		printf("���H�b����100�~�H�e���i�H���B�C\n");	
	}	

    system("PAUSE");
	return 0;
}
