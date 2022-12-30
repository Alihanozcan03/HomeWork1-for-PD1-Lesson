#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

/* girilen en düþük deðerden en yüksek deðere doðru adým adým sayan kod */
	
	int a;
	int b;
	int c;
	int i;
	
	printf("Enter the highest number:");
	scanf("%d",&a);
	printf("Enter the lowest number:");
	scanf("%d",&b);
	printf("Enter the step number:");
	scanf("%d",&c);
	
	for(i=b;i<a;i+=c)
	{
		printf("%d\n",i);
	}
	
	
	return 0;
}
