 #include <stdio.h>
 #include "./src/engine.c"
 #include <unistd.h>
 #include <termios.h>


char getch (){
	struct termios oldt , newt;
	char ch;

	tcgetattr(STDIN_FILENO,&oldt);
	newt = oldt;
	newt.c_lflag &= ~(ICANON | ECHO );
	tcsetattr (STDIN_FILENO , TCSANOW , &newt);


	ch =getchar();

	tcsetattr(STDIN_FILENO , TCSANOW , &oldt);

	return ch;
	
}






int  main(){
	
	char ch; 
	
	printf("press a key: ");

	ch = getchar();

	printf("pressed this :%c\n ", ch );
	

	return 0;
}
