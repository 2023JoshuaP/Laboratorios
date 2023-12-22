#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

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
