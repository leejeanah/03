#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <stdio.h>

int main(void) {
	char text;
	int i;
	
	printf("input a numbr : ");
	scanf("%c", &text);
	
	i = text- '0';
	printf("The input number is %i\n", i);
	
	return 0;
}
