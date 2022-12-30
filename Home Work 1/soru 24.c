#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	// girilen sayýnýn basamaklarýnýn sýklýðýný bulup yazdýran kod //
	
	int x;
	int y;
	int z=0;
	int k;
	int l;
	int m;
	int n;
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
	
	printf("Enter a number: ");
	scanf("%d",&x);
	
	y=x;
	
	while (y>0)
	{
		y=y/10;
		z++;
	}
	
	l=x;
	k=z;
	
	for (n=1;n<=k;n++)
	{
		m=l%10;
		if(m==0){a++;
		}else if (m==1){b++;
		}else if (m==2){c++;
		}else if (m==3){d++;
		}else if (m==4){e++;
		}else if (m==5){f++;
		}else if (m==6){g++;
		}else if (m==7){h++;
		}else if (m==8){i++;
		}else if (m==9){j++;
		}else{
		}
		l=l/10;	
	}
	
	printf("Frequency of the number 0 is %d\n",a);
	printf("Frequency of the number 1 is %d\n",b);
	printf("Frequency of the number 2 is %d\n",c);
	printf("Frequency of the number 3 is %d\n",d);
	printf("Frequency of the number 4 is %d\n",e);
	printf("Frequency of the number 5 is %d\n",f);
	printf("Frequency of the number 6 is %d\n",g);
	printf("Frequency of the number 7 is %d\n",h);
	printf("Frequency of the number 8 is %d\n",i);
	printf("Frequency of the number 9 is %d\n",j);
	
	
	
	
	return 0;
}
