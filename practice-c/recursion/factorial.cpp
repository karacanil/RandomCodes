#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*Factorial Calculator with recursion*/
int factorial(int x);

int main(void){
	
	int number=0;
	int64_t answer=0; //must be called with lld later
	
	do{
		printf("Enter a number>");
		scanf("%d",&number);
	} while(number<0);
	
	answer=factorial(number);
	
	printf("Factorial of %d = %lld\n",number,answer); //Calling int64_t type integer by lld
		
	system("pause");
	return 0;
}

int factorial(int x) {
	int64_t y;
	
	if(x==0)
	y=1;
	else
	y=x*factorial(x-1);
	
	return y;
}
