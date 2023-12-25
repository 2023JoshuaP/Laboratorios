#include "linkedlist.h"
#include <stdlib.h>
#include <stdio.h>

struct node* BuildTwoThree() {
	struct node* second = NULL;
	struct node* third = NULL;

	second = malloc(sizeof(struct node));
	third = malloc(sizeof(struct node));

	second -> data = 2;
	second -> next = third;

	third -> data = 3;
	third -> next = NULL;

	return second;
}

void Push(struct node** headRef, int data) {
	struct node* newNode = malloc(sizeof(struct node));
	newNode -> data = data;
	newNode -> next = *headRef;
	*headRef = newNode;
}

void print(struct node *head) {
	while (head) {
		printf("%d", head -> data);
		head = head -> next;
	}
	printf("\n");
}
