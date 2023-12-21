#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

struct node* BuildOneTwoThree() {
	struct node* head = NULL;
	struct node* second = NULL;
	struct node* third = NULL;

	head = malloc(sizeof(struct node));
	second = malloc(sizeof(struct node));
	third = malloc(sizeof(struct node));

	head -> data = 1;
	head -> next = second;

	second -> data = 2;
	second -> next = third;

	third -> data = 3;
	third -> next = NULL;

	return head;
}

void print(struct node* head) {
	while (head) {
		printf("%d", head -> data);
		head = head -> next;
	}
	printf("\n");
}

void freememory(struct node *head) {
	while (head) {
		struct node* next = head -> next;
		free(head);
		head = next;
	}
}
