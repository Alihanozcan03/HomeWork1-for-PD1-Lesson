#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
/* 1000 ile 2000 aras�ndaki �ift say�lar� ve toplamlar�n� yazd�ran kod */
	
	int a;
	int Toplam;
	int i;
	
	Toplam=0;
	
	for(i=1001;i<2000;i++)
	{
		if(i%2==0)
		{
			Toplam=Toplam+i;
			printf("%d\n",i);
		}
		
		else
		{
		}
	}
	
	printf("%d",Toplam);
	
	return 0;
}
