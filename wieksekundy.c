#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a,x;
	printf("Podaj swoj wiek a =\n");
	scanf("%f", &a);
	if (a==0)
	printf("Wiek wynosi 0 \n");
	else
	x=(a*31536000); 
	printf("Twoj wiek w sekundach to: %f\n", x);
system("pause");
return 0;
}

