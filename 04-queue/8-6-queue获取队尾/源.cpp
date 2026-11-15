#include<iostream>
#include<queue>
using namespace std;
int main() {

	queue<int>q;
	q.push(5); cout << q.back() << endl;//5
	q.push(4); cout << q.back() << endl;//5 4
	q.push(3); cout << q.back() << endl;//5 4 3
	q.push(2); cout << q.back() << endl;//5 4 3 2
	q.push(1); cout << q.back() << endl;//5 4 3 2 1
	//5是队首元素，1是队尾元素
	return 0;
}