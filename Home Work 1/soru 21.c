#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	
/* girilen sayýnýn ilk ve son basamaðýný yazdýran kod */
	
	int a;
	int b;
	int c;
	
	printf("Enter a number: ");
	scanf("%d",&a);
	
	c=a%10;
	
	while (a>10)
	{
		a=a/10;
	}
	
	b=a;	
	
	printf("First digit is %d\n",b);
	printf("Last digit is %d",c);




	return 0;
}
