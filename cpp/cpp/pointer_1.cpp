#include<iostream>
using namespace std;

struct Node {
	int value;
	Node* next;
	Node(int v=-1) {
		value = v;
		next = NULL;
	}
};
void push(Node* head, int x) {
	Node* temp = new Node(x);

	while (head->next != NULL) {
		head = head->next;
	}
	head->next = temp;
}
void print_list(Node* head) {
	if (head == NULL) {
		cout << "Empty";
	}
	while (head != NULL) {
		cout << head->value<<" ";
		head = head->next;
	}
}
void insert_after(Node* head, int x, int y) {
	Node* temp = new Node();
	if (head == NULL) {
		cout << "Empty";
	}
	while (head->next != NULL) {
		if (head->value == x) {
			temp = head->next;
			break;
		}
		head = head->next;
	}
	head->next = new Node(y);
	head->next->next = temp;
}
int main() {
	Node* head = new Node(3);
	push(head, 5);
	push(head, 3);
	push(head, 7);
	push(head, 1);
	push(head, 4);
	insert_after(head, 3, 10);
	print_list(head);
	return 0;
}