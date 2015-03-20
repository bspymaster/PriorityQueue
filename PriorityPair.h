class PriorityPair {
private:
	int data;
	int priority;
public:
	PriorityPair(int _data, int _priority){
		data = _data;
		priority = _priority;
	}
	int getData(){ return data; }
	int getPriority(){ return priority; }
};