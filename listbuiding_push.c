#include "linkedlist.h"
#include <stdlib.h>
#include <stdio.h>

void Push(struct node** headRef, int data) {
	struct node* newNode = malloc(sizeof(struct node));
	newNode -> data = data;
	newNode -> next = *headRef;
	*headRef = newNode;
}

int main() {
	struct node* head = BuildTwoThree();

	Push(&head, 1);
	Push(&head, 13);
}
