#include<iostream>
#include<map>
using namespace std;
void printMap(const map<int, int>& m) {
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); ++it) {
		cout << "key=" << it->first << " " << "value=" << it->second << endl;
	}
	cout << "----------------" << endl;
}
//m.find()返回一个迭代器
int main() {
	map<int, int>m = {
		pair<int, int>(1, 10),
		pair<int, int>(3, 43),
		pair<int, int>(4, 170),
		pair<int, int>(2, 99)
	};
	for (int i = 4 ; i <= 5; ++i) {
		map<int, int>::iterator it = m.find(i);
		if (it != m.end()) {
			cout << "找到键值对：" << '(' << it->first << ',' << it->second << ')' << endl;
		}
		else {
			cout << "未找到键值对：" << i << endl;
		}
	}
	
	
	



	

	

	

	
	return 0;
}