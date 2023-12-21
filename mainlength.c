#include "linkedlist.h"
#include <stdio.h>

int main() {
	struct node* myList = BuildOneTwoThree();
	int len = Length(myList);
	printf("Tamanio: %d\n", len);
}
