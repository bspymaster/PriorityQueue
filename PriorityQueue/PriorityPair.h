class PriorityPair {
private:
	int data;
	int priority;
public:
	PriorityPair(int _data, int _priority){
		data = _data;
		priority = _priority;
	}
	PriorityPair(){
		data = 0;
		priority = 0;
	}
	int getData(){ return data; }
	int getPriority(){ return priority; }
	
	int setData(){}
};