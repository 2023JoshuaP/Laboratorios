#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct node {
	int data;
	struct node* next;
};

struct node* BuildOneTwoThree();
void print(struct node* head);
void freememory(struct node* head);

#endif
