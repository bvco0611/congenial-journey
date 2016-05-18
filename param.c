#include <stdio.h>

int main (int argc, char* argv[]) {  /* Char* é equivalente à uma string. */

	printf("Teste de parâmetro.\n");
	printf("Nosso programa recebeu %i argumentos.\n", argc);
	
	int i;
	for (i=0 ; i<argc ; i++) {
		printf("Parâmetro %i recebeu %s.\n",i , argv[i]);
	}
	return 0;
} 
