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
	map<int, int>m1;
	cout << "m1.empty:" << m1.empty() << " " << "m1.size:" << m1.size() << endl;

	map<int, int>m2 = {
		pair<int,int>(1, 1000),
		pair<int,int>(3, 1314),
		pair<int,int>(4, 520),
		pair<int,int>(2, 3)
	};
	cout << "m2.empty:" << m2.empty() << " " << "m2.size:" << m2.size() << endl;
	return 0;
}