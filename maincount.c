#include "linkedlist.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
	struct node* mylist = BuildOneTwoThree();
	int search = 3;
	int cont = count(mylist, search);

	if (!cont) {
		printf("No aparece %d \n", cont);
	}
	else {
		printf("Aparece %d veces \n", cont);
	}
}
