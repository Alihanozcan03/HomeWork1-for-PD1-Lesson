#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

/* girilen sayının basamağını hesaplayan kod */
	
	int a;
    int  b;
    
    b=0;
    
    printf("Enter a number: ");
    scanf("%d",&a);
    
    while(a > 0)
	{ 
        a = a / 10;
        b++;  
    }
    
	printf("number %d digits. ",b);
    
	return 0;
}
