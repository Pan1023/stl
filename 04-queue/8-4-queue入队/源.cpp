#include<iostream>
#include<queue>
using namespace std;
int main() {
	
	queue<int>q;
	q.push(5);//5
	q.push(4);//5 4
	q.push(3);//5 4 3
	q.push(2);//5 4 3 2
	q.push(1);//5 4 3 2 1
	//5是队首函数，1是队尾函数
	return 0;
}