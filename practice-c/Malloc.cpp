#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Memory Allocation study with voltages*/

typedef struct test {
	int voltage;
	char type[3];
	struct test *p; 
}test_t;

int main(void) {
	
	test_t *n1,*n2;
	
	n1=(test_t *) malloc(sizeof(test_t));
	n2=(test_t *) malloc(sizeof(test_t));
	
	n1 -> voltage = 10;
	n2 -> voltage = 20;
	
	strcpy(n1->type,"DC");
	strcpy(n2->type,"AC");
	
	n1 -> p = n2;
	n2 -> p =NULL;
	
	printf("%d\n",n1->voltage);
	printf("%d\n",n2->voltage);
	
	printf("%s\n",n1->type);
	printf("%s\n",n2->type);
	
	system("pause");
	return 0;
}
