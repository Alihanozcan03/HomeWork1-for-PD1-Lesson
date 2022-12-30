#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
/* 1 den n'e kadar olan doðal sayýlarý yazdýran kod */
	
	int n;
	int i;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
	}
	
	
	return 0;
}
