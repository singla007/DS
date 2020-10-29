#include<iostream>
using namespace std;

struct Node {
	int value;
	Node* next;
	Node(int v) {
		value = v;
		next = NULL;
	}
};
int main() {
	Node* head = new Node(5);
	Node* temp1 = new Node(3);
	Node* temp2 = new Node(4);
	head->next = temp1;
	temp1->next = temp2;

	return 0;
}