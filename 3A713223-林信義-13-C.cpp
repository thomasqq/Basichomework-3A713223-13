#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

    int age;
    char str1='b';
	char str2='g';
    char str;
    
    printf("請輸入性別(男:b,女:g):");
    scanf("%s",&str);
    printf("請輸入年齡:");
    scanf("%d",&age);    

	
	if(str==str1 && age>=18){
		printf("此人在民國100年以前可以結婚。\n");
	}
	else if(str==str2 && age>=16){
		printf("此人在民國100年以前可以結婚。\n");
	}
	else{
		printf("此人在民國100年以前不可以結婚。\n");	
	}	

    system("PAUSE");
	return 0;
}
