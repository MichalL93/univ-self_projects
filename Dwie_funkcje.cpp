#include <stdio.h>

/* Program zawieraj¹cy dwie funkcje*/
int do_kwadr(void);

int main(void) 
{
	int kwad;
	
	kwad=do_kwadr();
	printf("Kwadrat: %d",kwad);
	return 0;
}

int do_kwadr(void)
{
	int num;
	
	printf("Podaj liczbe: ");
	scanf("%d", &num);
	return num*num;
}
