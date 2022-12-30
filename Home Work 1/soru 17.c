#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
/* girilen n sayýsý için S=(1/2)+(1/4)+...+(1/n) iþleminin sonucunu bulan kod */
	
	int n;
	double i;
	double T;
	
	T=0;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for( i=2; i<=n; i+=2)
	{
		T=T+(1/i);
	}
	
	printf("%lf",T);
	
	return 0;
}
