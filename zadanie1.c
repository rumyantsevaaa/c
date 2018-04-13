#include "stdafx.h"
#include <stdlib.h>

typedef struct node {
	int data;
	struct node * next;
} node_t;


void push(struct node* head, int data) {
	struct node* newNode = (node*)malloc(sizeof(node));
	newNode->data = data;
	newNode->next = head;
	head = newNode;
}
void push_test() {
	node* head = build();
	push(head, 1);
}

