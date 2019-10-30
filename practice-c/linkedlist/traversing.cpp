/*
Traversing a LinkedList
*/
#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *prev;
	struct node *next;
};

void print (struct node *n);

int main(void) {
	
	int num1;
	int num2;
	int num3;
	
	struct node *head;
	struct node *second;
	struct node *third;
	
	head=(struct node*) malloc(sizeof(struct node));
	second=(struct node*) malloc(sizeof(struct node));
	third=(struct node*) malloc(sizeof(struct node));
	
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");	
	scanf("%d",&num2);
	printf("Enter third number:");
	scanf("%d",&num3);
	
	head->data=num1;
	head->prev=NULL;
	head->next=second;
	
	second->data=num2;
	second->prev=head;
	second->next=third;
	
	third->data=num3;
	third->prev=second;
	third->next=NULL;
	
	print(third);
	
	system("pause");
	return 0;
}

void print (struct node *n) {
	
	struct node *temp;
	
	for(temp=n; temp!=NULL; temp=temp->prev) {
		printf(" %d ",temp->data);
	}
	
}












