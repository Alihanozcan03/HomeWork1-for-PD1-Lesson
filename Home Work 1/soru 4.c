#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	/* Girilen s�cakl�k de�erinin donma noktas�n�n alt�nda m� �st�nde mi oldu�unu belirten kod */

    int a;
	
	
    printf("Enter a temperature: ");
    scanf("%d",&a);
    
    if (a>=0)
    {
	printf("temperature is above of freezing point.");
	}
    
	else 
	{
	printf("temperature is below of freezing point.");
	}
	
	
	return 0;
}
