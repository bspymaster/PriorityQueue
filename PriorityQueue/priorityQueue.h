// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.


#include "heap.h"
#include "PriorityPair.h"

class IntCompare{
public:
	static bool prior(PriorityPair current, PriorityPair parent){
		return (current.getPriority() > parent.getPriority());
	}
};
class PriorityQueue{
private:
	heap<PriorityPair, IntCompare>* tree;
public:
	PriorityQueue(int maxSize){
		PriorityPair* objArray = new PriorityPair[maxSize];
		tree = new heap<PriorityPair, IntCompare> (objArray, 0, maxSize);
	}
	void enqueue(int ObjectID, int priority){
		PriorityPair obj(ObjectID, priority);
		tree->insert(obj);
	}
	int dequeue(){
		return tree->removefirst().getData();
	}
	void changeWeight(int ObjectID, int newPriority){
		
	}
};