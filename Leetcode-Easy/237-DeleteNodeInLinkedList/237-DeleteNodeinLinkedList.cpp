#include <bits/stdc++.h>
using namespace std;

struct node {
	int info;
	node* link = NULL;
	node() {}
	node(int a): info(a){}
};

void deleteNode(node*& head, int val)
{
	if (head == NULL) {
		cout << "Element not present in the list\n";
		return;
	}
	if (head->info == val) {
		node* t = head;
		head = head->link;
		delete (t);
		return;
	}
	deleteNode(head->link, val);
}

void push(node*& head, int data)
{
	node* newNode = new node(data);
	newNode->link = head;
	head = newNode;
}

void print(node* head)
{
	if (head == NULL and cout << endl)
		return;
	cout << head->info << ' ';
	print(head->link);
}

int main()
{
	node* head = NULL;
	push(head, 10);
	push(head, 12);
	push(head, 14);
	push(head, 15);
	print(head);

	deleteNode(head, 20);
	print(head);

	deleteNode(head, 10);
	print(head);

	deleteNode(head, 14);
	print(head);

	return 0;
}
