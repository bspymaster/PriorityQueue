// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.


#include "heap.h"
#include "PriorityPair.h"

class IntCompare{
public:
	static bool prior(PriorityPair* current, PriorityPair* parent){
		return (current->getPriority() > parent->getPriority());
	}
};
class PriorityQueue{
private:
	heap<PriorityPair, IntCompare>* tree;
public:
	PriorityQueue(PriorityPair* objArray, int size, int maxSize){
		tree = new heap<PriorityPair, IntCompare> (objArray, size, maxSize);
	}
	void enqueue(int ObjectID, int priority){
		PriorityPair* obj = new PriorityPair(ObjectID, priority);
		tree->insert(obj);
	}
	void dequeue(){
		delete tree->removefirst();
	}
	void changeWeight(int ObjectID, int newPriority){
		
	}
};