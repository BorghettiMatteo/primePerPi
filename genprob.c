#include<stdio.h>
#define NUMTOBE 100001

int isprime(int);

void main(){
	int gencounter= 0;
	int counter = 0;
	while(counter != NUMTOBE){
		if(isprime(gencounter) == 1)
			counter++;
		gencounter++;
	}
	printf("counter : %d \n",gencounter-1);	
}

int isprime(int prime){
	int copiaprime = 2;
	if(prime <= 1)
		return 0;
	while(copiaprime != prime){
		if(prime%copiaprime == 0)
			return 0;
	copiaprime++;
	}
	return 1;
	
}

