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

	m[3] = 333;
	printMap(m);

	m[2]--;
	printMap(m);

	m[1] -= 11;
	printMap(m);
	

	
	return 0;
}