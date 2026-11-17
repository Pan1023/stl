#include<iostream>
#include<queue>
using namespace std;
int main() {
	//1.最大优先队列
	priority_queue<int>q1;
	q1.push(6); 
	q1.push(3); 
	q1.push(9); 
	q1.push(1);
	q1.push(12); 
	q1.push(17); 
	q1.push(0);
	for (int i = 0; i < 7; ++i) {
		cout << "top=" << q1.top() << endl;
		q1.pop();
	}

	return 0;
}