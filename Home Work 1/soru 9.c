#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

/* en y�ksek de�er ile en d���k de�er aras�ndaki say�lardan girilen say�ya b�l�nebilenlerini ekrana yazd�ran kod */
	
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
