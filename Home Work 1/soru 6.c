#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
/*  girilen feet de�erini cm ye �eviren kod */

    double a;
    double b;
    
    printf("Enter a feet value: ");
    scanf("%lf",&a);
    
    b=a/30.48;
    
    printf("%lf cm",b);

    
	return 0;
}
