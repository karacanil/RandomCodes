#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

void print(struct node *n);

int main(void) {
	
	struct node *head;
	struct node *second;
	struct node *third;
	
	head=(struct node*) malloc(sizeof(struct node));
	second=(struct node*) malloc(sizeof(struct node));
	third=(struct node*) malloc(sizeof(struct node));
	
	head->data=3;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=1;
	third->next=NULL;
	
	print(head);
	
	system("pause");
	return 0;
}

void print(struct node *n) {
	while(n !=NULL) {
		printf(" %d ",n->data);
		n=n->next;
	}
}

