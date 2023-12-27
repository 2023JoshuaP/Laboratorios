#include "linkedlist.h"
#include <stdio.h>

int main() {
	struct node* myList = BuildOneTwoThree();
	print(myList);
	DeleteList(&myList);
	print(myList);
}
