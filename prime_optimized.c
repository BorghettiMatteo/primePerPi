#include<stdio.h>
#define NUMTOBE 10001


int isprime(int);

void main(){
	int gencounter= 5;
	int counter = 2;
	while(counter != NUMTOBE){
		if(isprime(gencounter) == 1)
			counter++;
		gencounter = gencounter+2;
	}
	printf("counter : %d \n",gencounter-2);	
}

int isprime(int prime){
	int copiaprime = 3;
	int to_update_copiaprime = (int)prime/2+1;
	while(copiaprime <= to_update_copiaprime){
		if(prime%copiaprime == 0)
			return 0;
		copiaprime = copiaprime +2;
	}
	return 1;
}
