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
	//1.默认构造函数
	map<int, int>m1;
	cout << "m1:" << endl;
	printMap(m1);

	//2.初始化列表
	map<int, int>m2_1 = {
		pair<int,int>(1, 10),
		pair<int,int>(3, 9),
		pair<int,int>(4, 520),
		pair<int,int>(2, 33)
	};
	cout << "m2_1:" << endl;
	printMap(m2_1);

	map<int, int>m2_2 ( {
		pair<int,int>(1, 18),
		pair<int,int>(3, 91),
		pair<int,int>(4, 50),
		pair<int,int>(2, 63)
	});
	cout << "m2_2:" << endl;
	printMap(m2_2);

	//3.迭代器
	map<int, int>m3(m2_1.begin(), m2_1.end());
	cout << "m3:" << endl;
	printMap(m3);

	//4.拷贝构造
	map<int, int>m4(m2_2);
	cout << "m4:" << endl;
	printMap(m4);
	return 0;
}