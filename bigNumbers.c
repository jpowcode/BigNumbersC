#include <stdlib.h>
#include <stdio.h>
#include <gmp.h>

int main(int argc, char *argv[]){
	mpz_t num1, num2, output;			//declare big number variables
	mpz_init(num1);					//initialise bignumber variables
	mpz_init(num2);
	mpz_init(output);
	
	//set num1 to be the first command line argument in deciaml notation and num2 to be the second argument
	mpz_set_str(num1, argv[1], 10); 
	mpz_set_str(num2, argv[2], 10);
	
	//multiply num1 by num2 and save the output to output variable
	mpz_mul(output, num1, num2);
	
	//need special print function to display output variable as it is not a normal variable. 
	gmp_printf("%Zd\n", output);
	
	return 0;
}
