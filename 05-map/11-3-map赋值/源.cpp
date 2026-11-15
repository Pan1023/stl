#include<iostream>
#include<map>
using namespace std;
void printMap(const map<int, int>& m) {
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); ++it) {
		cout << "key=" << it->first << " " << "value=" << it->second << endl;

	}
	cout << "---------------" << endl;
}

int main() {
	//这里=是初始化，调用构造函数，不是赋值
	map<int, int>m= {
		pair<int,int>(1, 10),
		pair<int,int>(3, 9),
		pair<int,int>(4, 520),
		pair<int,int>(2, 33)
	};
	cout << "m" << endl;
	printMap(m);

	//1.=对象
	map<int, int>m1;
	m1 = m;
	cout << "m1" << endl;
	printMap(m1);

	//2.=初始化
	map<int, int>m2;
		m2 = {
		pair<int,int>(1, 1000),
		pair<int,int>(3, 1314),
		pair<int,int>(4, 520),
		pair<int,int>(2, 3)
	};
	cout << "m2" << endl;
	printMap(m2);
	return 0;
}