#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

char *createText(char *myString){
    int size = strlen(myString);
  char   *string = malloc(size * sizeof(string));
    for(int i = 0 ; i < size ; i++){
        string[i] = myString[i];
    }
    free(string);
    return string;
};

char createFile(char *name){
    FILE *ftp;
    ftp = fopen(name,"w");
    fclose(ftp);
};

char appendText(char *filenam, char *string){
    FILE *ftpr;
    ftpr = fopen(filenam,"a");
    createText(string);
    fprintf(ftpr,string);
    fclose(ftpr);
}


char readText(char *fileName){
    char oldString[1000];

    FILE *frpt;
    frpt = fopen(fileName,"r");
    fgets(oldString,1000,frpt);
    fclose(frpt);


  



}

char editText(char *text){
    int awnser;
    printf("are you want edit this text?\n");
    printf("Enter Yes(1) or (0)No:\n");
    scanf("%d",&awnser);

   
    if(awnser == 0)printf("thank you");
    else if (awnser == 3){
        printf("awnser the quition motherfucker\n");
        return 1;
    } else if (awnser == 1){
        printf("come on bitch here the fuckin text get put it in youre as:\n");
        printf("%s",text);
        return 1;
    }else{
        printf("kose nanat\n");
    }

}



int main(void){
        
    char fileName[10];
    char someText[1000];
    
    printf("please Enter file Name\n");
    gets(fileName);
    
    printf("write some Text\n");
    gets(someText);

    createFile(fileName);
    appendText(fileName,someText);
    readText(fileName);
    editText(someText);

    return 0;
}
