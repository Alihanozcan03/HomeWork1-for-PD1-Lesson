#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	/* girilen birinci say�dan ikinci say�ya kadar olan say�lar� toplay�p ekrana yazd�ran kod */
    
        int a;
	int b;
	int i;
	int T;
	
	T=0;
	
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	
	if (a>b)
	{
		for(i=b;i<a;i++)
		{
			T=T+i;
		}
		
	}
	
	else 
	{
		for(i=a;i<b;i++)
		{
			T=T+i;
		}
	}
	
	printf("%d",T);
	
	
	return 0;
}
