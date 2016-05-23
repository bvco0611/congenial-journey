#include <stdio.h>
#include <stdlib.h>

void troca(float*, float*);
void troca(float *a, float *b){
	int c;
	c = *a;
	*a = *b;
	*b = c;
	
}

int main (int argc,char *argv[]){

	float x,y;
	
	x =54.0f;
	y= 43.0f;

	printf("X=%.2f Y=%.2f\n",x,y);
	troca(&x,&y);
	printf("X=%.2f Y=%.2f\n",x,y);

	return EXIT_SUCCESS;
}
