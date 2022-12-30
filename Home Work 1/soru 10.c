#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

/* girilen üç sayýdan en büyüðünü ve en küçüðünü bulan kod */

	int a;
	int b;
	int c;
     
    printf("Enter the number a: ");
	scanf("%d",&a); 
    printf("Enter the number b: ");
	scanf("%d",&b); 
	printf("Enter the number c: ");
	scanf("%d",&c); 
	
	if(a>b && a>c)
	{
		printf("a is the highest number\n");
		if(b>c)
		{
			printf("c is the lowest number");
		}
		else 
		{
			printf("b is the lowest number");
		}
    }
	else if(b>a && b>c)
	    {
	    printf("b is the highest number\n");
	    if(a>c)
		{
		   	printf("c is the lowest number");
		}	
		else
		{
			printf("a is the lowest number");
		}
		}
		else if(c>a && c>b)
	    {
	    printf("c is the highest number\n");
	    if(a>b)
		{
		   	printf("b is the lowest number");
		}	
		else
		{
			printf("a is the lowest number");
		}
		}
	
	return 0;
}
