#include<iostream>
#include<queue>
using namespace std;
int main() {
	//1.最大优先队列
	priority_queue<int>q1;
	q1.push(3); cout << q1.top() << endl;
	q1.push(14); cout << q1.top() << endl;
	q1.push(1); cout << q1.top() << endl;
	q1.push(32); cout << q1.top() << endl;
	q1.push(23); cout << q1.top() << endl;
	q1.push(11); cout << q1.top() << endl;

	cout << "---------------------" << endl;

	//2.最小优先队列(priority_queue<元素类型, 底层容器, 比较器>)
	priority_queue<int, vector<int>, greater<int>>q2;
	q2.push(3); cout << q2.top() << endl;
	q2.push(14); cout << q2.top() << endl;
	q2.push(1); cout << q2.top() << endl;
	q2.push(32); cout << q2.top() << endl;
	q2.push(23); cout << q2.top() << endl;
	q2.push(11); cout << q2.top() << endl;
	return 0;
}