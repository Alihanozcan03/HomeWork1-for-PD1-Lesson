#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	
/* girilen fahrenite deðerini celcius a çeviren kod */

    int a;
	int b;
	
	printf("Enter a fahrenite value: ");
	scanf("%d",&a);
	
	a=a-32;
	a=a*5;
	a=a/9;
    b=a;
    
    printf("%d celcius",b);
    
    
	return 0;
}
