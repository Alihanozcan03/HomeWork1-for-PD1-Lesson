#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	
/* girilen say�n�n ilk ve son basama��n� yazd�ran kod */
	
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
