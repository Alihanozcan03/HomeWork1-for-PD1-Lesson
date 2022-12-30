#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

/* girilen on tane sayýnýn topamýný ve çarpýmýný hesaplayýp yazdýran kod */	
	
	int i;
	int a;
	int Sum;
	int Product;
	
	Sum=0;
	Product=1;
	
	for(i=1;i<=10;i++)
	{
		printf("Enter a number:");
		scanf("%d",&a);
		Sum=Sum+a;
		Product=Product*a;
	}
	
	printf("Sum of all numbers %d\n",Sum);
	printf("product of all numbers %d",Product);
	
	
	return 0;
}
