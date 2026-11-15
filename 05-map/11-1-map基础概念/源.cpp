#include<iostream>
#include<map>
using namespace std;
/*map特点：
* 1.容器中所有元素都是pair,first 不重复
* 2.pair中第一个数据是key(键)，第二个数据是value(值)
* 3.所有元素会依据key值排序
*/
/*multimap特点：
* 1.容器中所有元素都是pair,first 可以重复
* 2.pair中第一个数据是key(键)，第二个数据是value(值)
* 3.所有元素会依据key值排序
*/
int main() {
	pair<int, int>p1;
	p1.first = 13;
	p1.second = 14;
	cout << p1.first << p1.second << endl;

	pair<int, string>p2(2, "666");
	cout << p2.first << p2.second << endl;

	pair<char, int>p3('5', 20);
	cout << p3.first << p3.second << endl;

	map<int, int> m;
	return 0;
}