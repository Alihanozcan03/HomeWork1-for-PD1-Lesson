#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

/* en yüksek deðer ile en düþük deðer arasýndaki sayýlardan girilen sayýya bölünebilenlerini ekrana yazdýran kod */
	
	int a;
	int b;
	int c;
	int i;
	
	printf("Enter a number: ");
	scanf("%d",&a);
    printf("Enter highest value: ");
	scanf("%d",&b);
	printf("Enter lowest value: ");
	scanf("%d",&c);
	
	for(i=c+1;i<b;i++)
	{
		if(i%a==0)
		{
			printf("%d\n",i);
		}
		
		else{}
	}
	
	return 0;
}
