#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	
	/* girilen say�n�n fakt�riyelini hesaplayan kod */	
	
	int N;
	int i;
	int T;
	
	T=1;
	
	printf("Enter a number: ");
	scanf("%d",&N);
	
	for (i=1;i<=N;i++)
	{
		T=T*i;
	}
	
	printf("%d",T);
	
	
	return 0;
}
