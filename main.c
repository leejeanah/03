#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <stdio.h>

int main(void) {
	char text;
	
	printf("input a character : ");
	scanf("%c", &text);
	
	printf("the next charater of %c (%d) is %c (%d)\n", text, text, text+1, text+1 );
	
	return 0;
}
