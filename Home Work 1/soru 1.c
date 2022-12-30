#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
/* a ile b nin toplamýný c ye atayan ve c yi yazdýran kod */
		
	int a;
	int b;
	int c;
	
	printf("Enter a number ");
	scanf("%d", &a);
	printf("Enter a number ");
	scanf("%d", &b);
	
	c=a+b;
	
	printf("%d", c);

	
	
	return 0;
}
