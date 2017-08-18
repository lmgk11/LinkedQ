#pragma once

#include "node.h"
#include <iostream>
#include <string>

using namespace std;

class LinkedQ
{
public:
	Node* first;
	Node* last;
	int size = 0;

	LinkedQ();
	void enqueue(int x);
	Node* dequeue();
	string getstr();
};