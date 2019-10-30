#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*Fibonacci Series - Element finder*/
int fibonacci(int x);

int main(void){
	
	int number=0;
	int64_t value=0;
	
	do{
		printf("Enter a number>");
		scanf("%d",&number);
	}while(number<=0);
	
	value=fibonacci(number);
	
	printf("%d. element of the fibonacci series is %lld\n",number,value);
	
	system("pause");
	return 0;
}
int fibonacci(int x){
	int64_t answer;
	
	if(x==1 || x==2)
	answer=1;
	
	else
	answer= fibonacci(x-1) + fibonacci(x-2);
	
	return answer;
}
