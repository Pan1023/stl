#include<iostream>
#include<queue>
using namespace std;
int main() {

	queue<int>q;
	for (int i = 0; i < 5; ++i) {
		q.push(i);
	}
	//0 1 2 3 4
	while (!q.empty()) {
		cout << "front=" << q.front() << " " << "back=" << q.back() << " "<<"size="<< q.size()<<endl;
		q.pop();
	}
	
	return 0;
}