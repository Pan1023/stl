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
	//因为map的 key 唯一，所以count等价于"这个 key 存不存在"
	for (int i = -1; i < 3; ++i) {
		cout << i << "出现次数是" << m.count(i) << endl;
	}

	multimap<int, int>mm = {
		pair<int,int>(1,10),pair<int,int>(1,10),pair<int,int>(1,10),pair<int,int>(1,10),
		pair<int,int>(2,77),pair<int,int>(2,77),
		pair<int,int>(4,22),
		pair<int,int>(3,30)

	};
	
	for (int i = -1; i < 3; ++i) {
		cout << i << "出现次数是" << mm.count(i) << endl;
	}



	return 0;
}