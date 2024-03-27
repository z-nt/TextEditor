#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char c ;
    while(1){
    read(STDIN_FILENO,&c,1);

    if(iscntrl(c)){
        printf("%d\n",c);
    }else{
        printf("%d('%c')\n",c,c);
    }

    if(c == CTRL_KEY('q')){
        break;
    }
    }
    
    return 0;
}