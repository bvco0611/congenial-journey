#include <stdio.h>
#include <stdlib.h>

float temp(float);
float temp(float F)
{
	float C;
	C = 5.0f/9.0f*(F-32.0f);

	if(C <= -268)
		printf("Zero Absoluto\n");
	else if( C >= -5 && C <= 5)
		printf("Congelamento da Água\n");
	else if(C >= 95 && C<= 105);
		printf("Ebulição da Àgua\n");
	return C;
}

int main ()
{	
	float tf, tc;

	printf("Digite a temperatura em F: ");
	scanf("%f", &tf);

	tc = temp(tf);

	printf("%f°F = %f°C\n",tf, tc);



	return EXIT_SUCCESS;
}
