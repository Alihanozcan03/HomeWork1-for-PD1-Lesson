#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	
	/* Dairenin yarý çapýný ve iþlem türünü girince dairenin alanýný ya da çevresini hesaplayan kod */ 
    
    int r;
    int a;
    int c;
    
    printf("Dairenin yari capini giriniz: ");
    scanf("%d", &r);
    printf("islem turunu giriniz: ");
    scanf("%d", &a);
    
    if (a==1)
    {
    	c=2*r*3.14;
		printf("%d",c);
	}
    
    
    else if (a==2)
    {
       c=3.14*r*r;
       printf("%d",c);
	}
    else { printf("Yanlis giris... ");
	}
	
	
	return 0;
}
