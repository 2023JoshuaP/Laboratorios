#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct node {
	int data;
	struct node* next;
};

struct node* BuildOneTwoThree();
struct node* BuildTwoThree();
void print(struct node* head);
int Length(struct node* head);
void freememory(struct node* head);

#endif
