#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	
	
	
	
/* Girilen say�n�n �ift mi tek mi oldu�unu s�yleyen kod */


    int a;
    int b;
     
    printf("Enter a number: ");
    scanf("%d",&a);
     
    b=a%2;
     
    if (b==0)
     
    {
	printf("Your number is even");
    }
    
    else 
     
    {
	printf("Your number is odd");
	}
	
	

	return 0;
}
