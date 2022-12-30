#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	// bir sayýnýn aplindrom olup olmadýðýna bakan kod //
	
	int a;
	int b;
	int c;
	int x;
	int y;
	int T=0;
	int B=0;
	int i;
	int j;
	
	printf("Enter a number: ");
	scanf("%d",&a);
	
	b=a;
	
	while (b>0)
	{
		b=b/10;
		B++;
	}
		
	y=B-1;
	c=a;
	
	for (i=1;i<=B;i++)
	{
		x=c%10;
		for(j=1;j<=y;j++)
		{
			x=x*10;
		}
		T=T+x;
		c=c/10;
		y=y-1;
	}
	
	if (T==a)
	{
		printf("Number is polyndrome. ");
	}
	else
	{
		printf("Number is not polyndrome. ");
	}
	

	return 0;
}
