#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <stdio.h>

int main(void) {
	float a,b;
	float c;
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%f", &a);
	
	printf("�и� �Է��ϼ��� : ");
	scanf("%f", &b);
	
	c = (float)a/b;
	
	printf("�������� �����%f �Դϴ�.", c);
	
	return 0;
}
