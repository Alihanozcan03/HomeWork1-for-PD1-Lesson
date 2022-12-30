#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	// girilen sayýnýn son hanesiyle ilk hanesinin yerini deðiþtiren kod //
	
	
	int a;
	int b=0;
	int c;
	int x;
	int y;
	int z;
	int i;
	int j;
	
	printf("Enter a number: ");
	scanf("%d",&a);
	
	c=a;
	
	while (c>0)
	{
		c=c/10;
		b++;
	}
	
	y=b-1;
	x=a;
	
	for(i=1;i<=y;i++)
	{
		x=x/10;
	}
	
	
	z=a%10;
	a=a-z;
	a+=x;
	
	for (j=1;j<=y;j++)
	{
		x=x*10;
	}
	
	a-=x;
	
	for (j=1;j<=y;j++)
	{
		z=z*10;
	}
	
	a+=z;
	
	printf("%d",a);
	
	
	
	
	
	
	
	
	return 0;
}
