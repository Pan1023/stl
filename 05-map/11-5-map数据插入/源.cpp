#include<iostream>
#include<map>
using namespace std;
void printMap(const map<int, int>& m) {
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); ++it) {
		cout << "key=" << it->first << " " << "value=" << it->second << endl;
	}
	cout << "----------------" << endl;
}
int main() {
	map<int, int>m;
	//1.insert的3种方法
	m.insert(pair<int, int>(1, 10));
	printMap(m);

	//2.
	m.insert(make_pair(3, 20));
	//make_pair拿着两个参数，自动推导类型
	printMap(m);

	//3.
	m.insert(map<int, int>::value_type(2, 78));
	printMap(m);

	//4.
	m[4] = 6;
	printMap(m);

	//5.插入失败时
	pair<map<int,int>::iterator,bool>ret=m.insert(make_pair(3, 32));
	cout << "m.insert(make_pair(3, 32))=" << ret.second << endl;//bool=0,表示插入失败
	printMap(m);

	//6.insert与[]区别
	m[3] = 22;
	printMap(m);//发现能改变

	//7.当用[]访问，如果键不存在会自动插入进来
	m[0];
	printMap(m);
	return 0;
}