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
	map<int, int>m = {
		pair<int,int>(1,10),
		pair<int,int>(2,77),
		pair<int,int>(4,22),
		pair<int,int>(3,30)

	};
	printMap(m);
	
	m.erase(1);
	printMap(m);

	m.erase(m.begin());
	printMap(m);

	m.erase(m.begin(), m.end());
	printMap(m);

	m = {
		pair<int,int>(5,123),
		pair<int,int>(6,237),
		pair<int,int>(7,223),
		pair<int,int>(8,310)

	};


	//map是双向迭代器，只支持++，--，用prev,next表示
	m.erase(m.begin(), std::prev(m.end(), 2));//保留后2个
	//m.erase(m.begin(), std::next(m.begin(), 2)); // 删前 2 个
	printMap(m);

	m.clear();
	printMap(m);
	return 0;
}