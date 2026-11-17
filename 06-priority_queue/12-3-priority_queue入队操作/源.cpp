#include<iostream>
#include<queue>
using namespace std;
int main() {
	//1.最大优先队列
	priority_queue<int>q1;
	q1.push(3);
	q1.push(14);
	q1.push(1);
	q1.push(32);
    q1.push(23);
	q1.push(11);
	//2.最小优先队列(priority_queue<元素类型, 底层容器, 比较器>)
	priority_queue<int, vector<int>, greater<int>>q2;
	q2.push(3);
	q2.push(14);
	q2.push(1);
	q2.push(32);
	q2.push(23);
	q2.push(11);
	return 0;
}