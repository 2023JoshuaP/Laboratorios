#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
	struct node* head = BuildTwoThree();

	Push(&head, 1);
	Push(&head, 13);

	print(head);
}
