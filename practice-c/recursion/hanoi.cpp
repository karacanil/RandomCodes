#include<stdio.h>
#include<stdlib.h>

/*Hanoi Tower Solver*/

void hanoi(int x, char from_d, char backup_d, char aim_d);

int main(void){
	
	int number=3;
	char from='A';
	char backup='B';
	char aim='C';
	
	hanoi(number,from,backup,aim);
	
	system("pause");
	return 0;
}
void hanoi(int x, char from_d, char backup_d, char aim_d) {
	
	if(x==1)
	printf("Move disk %d from %c to %c\n",x,from_d,aim_d);
	
	else{
		hanoi(x-1,from_d,aim_d,backup_d);
		printf("Move disk %d from %c to %c\n",x,from_d,aim_d);
		hanoi(x-1,backup_d,from_d,aim_d);
	}
}
