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
void Push(struct node** headRef, int data);
void freememory(struct node* head);
int count(struct node* head, int search);
int GetNth(struct node* current, int index);
void DeleteList(struct node** headRef);

#endif
