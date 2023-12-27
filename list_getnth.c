#include "linkedlist.h"
#include <assert.h>
#include <stdlib.h>

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

int GetNth(struct node *current, int index) {
	assert(0 <= index && index < Lenght(current));
	assert(current);
	for (int i = 0; i < index; i++) {
		current = current -> next;
	}
	return current->data;
}
