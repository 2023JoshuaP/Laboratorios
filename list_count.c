#include "linkedlist.h"
#include <stdlib.h>
#include <stdio.h>

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

int count(struct node* head, int search) {
	int count = 0;
	while (head != NULL) {
		if (head -> data == search) {
			count++;
		}
		head = head -> next;
	}
	return count;
}
