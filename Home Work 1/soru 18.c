#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a;
	int b;
	int i=1;
	int c[100];
	int d;
	int j;

    printf("Enter a number: ");
    scanf("%d",&a);
    
    d = a;
    
    b = a;
    
    while(b != 0)
	{
        c[i]= b % 2;
        b = b / 2;
        i++;
    }

    printf("Binary value of %d is ",d);
    
	for(j=i-1;j>0;
	j--)   
    
	printf("%d",c[j]);
	
	return 0;
}
