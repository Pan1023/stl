#include<iostream>
#include<queue>
using namespace std;
struct type {
	int key;
	int value;
	type() { key = value = 0; }
	type(int k, int v) :key(k), value(v){}

	//有2个值，不知道比较谁，重载一个函数
	//a<b(等于a.operator<(b))
	bool operator<(const type& t)const {
		return key < t.key;
	}
	//if ( 父.key < 子.key ) // 父亲比孩子小 交换(父, 子); // 那就让小的父亲下去，大的孩子上来

};
int main() {
	//priority_queue<type, vector<type>, less<type>>
	//            元素类型   底层容器       比较器
	priority_queue <type>q1;
	q1.push(type(2,34));
	q1.push(type(4,55));
	q1.push(type(6, 23));
	q1.push(type(9, 0));
	q1.push(type(1,8));
	q1.push(type(12,4));
	q1.push(type(11,78));
	while (!q1.empty()) {
		cout << "top=" << q1.top().key << " " << "size=" << q1.size() << endl;
		q1.pop();
	}

	return 0;
}