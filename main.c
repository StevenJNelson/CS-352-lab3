/* Automorphic numbers */
/* Should work in MIPS for 4, 5, & 6 digit numbers */

#include <stdio.h>
#include <math.h>

void matchDigits(int);

int main(){
	
	int upperBound;
	printf("Enter an upper bound: ");
	scanf("%d", &upperBound);
	printf("Automorphic numbers up to %d are:\n", upperBound);
	int i;
	for (i = 0; i <= upperBound; i++){
		matchDigits(i);
	}
	// Call matchDigits
	return 0;


}

void matchDigits(int n){
	
	int divisor = pow(10, n);
	int product = pow(nDigits,2);
	int remainder = product % divisor;

	if (nDigits == remainder){
		printf("%d is an automorphic number\n", nDigits);
	}
}
