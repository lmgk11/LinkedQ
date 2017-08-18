#include "linkedQ.h"



LinkedQ::LinkedQ()
{
	first = nullptr;
	last = nullptr;
}

void LinkedQ::enqueue(int x) {
	Node* n = new Node();
	n->setValue(x);

	if (size == 0) {
		this->first = n;
		this->last = n;
	}
	else {
		this->last->next = n;
		this->last = this->last->next;
	}

	size++;
}

Node* LinkedQ::dequeue() {
	if (size == 0) {
		return nullptr;
	}
	else {
		Node* n = first;
		first = first->next;
		size--;
		return n;
	}
}

string LinkedQ::getstr() {
	string s = "";
	Node* n = first;

	for (int i = 0; i < size; i++) {
		s = (s + to_string(n->value) + " ");
		n = n->next;
	}
	return s;
}