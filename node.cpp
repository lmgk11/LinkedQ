#include "node.h"



Node::Node()
{
	next = nullptr;
}

void Node::setValue(int x) {
	this->value = x;
}