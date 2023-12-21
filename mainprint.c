#include <stdio.h>
#include "linkedlist.h"

int main() {
	struct node* myList = BuildOneTwoThree();
	print(myList);
	freememory(myList);
	return 0;
}
