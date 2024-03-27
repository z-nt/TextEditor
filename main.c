#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *createText(char *s, char *arr,int length){

}


int main(void){
    char fileName[10];
        
    printf("please Enter file Name\n");
    scanf("%s",&fileName);
 
   

    FILE *file;
    file = fopen(fileName,"w");
    

    fopen(fileName,"a");

            
    fprintf(file,"hello World");
    fclose(file);


return 0;
}
