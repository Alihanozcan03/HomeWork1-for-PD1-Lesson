#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a;
    int b;
    int c;
    int i;
    
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the first number: ");
    scanf("%d",&b);
    
    for(i=1;i<=a && i<=b;++i)
    {
        if(a%i==0 && b%i==0)
        c = i;
    }
    
	printf("HCF of this numbers is %d",c);
	
	return 0;
}
