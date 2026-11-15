#include<iostream>
using namespace  std;
int main() {
	string s = "hello woooorld";
	//1.
	cout << s.find("oooo") << endl;

	//2.
	cout << (int)s.find("oooo",8) << endl;//没有找到返回-1
	cout << s.find("oooo",5) << endl;//找到返回找到位置

	//3.
	cout << s.find('o') << endl;//找到第一个o
	cout << s.find('o', s.find('o')+1) << endl;//找到第二个o

	//4.rfind从右边开始找
	cout << s.rfind('o') << endl;

	//rfind 改的是“从哪头开始找”，没改“找到后怎么表示”
	cout << s.rfind("oo") << endl;//返回的是 匹配的起点
	//rfind 在 7、8、9 这三个起点中选择最大的一个，所以返回 9
	/*从最大的候选起点开始，逐个往前试：
	起点 12 → 取 "ld"   
	起点 11 → 取 "rl"   
	起点 10 → 取 "or"   
	起点  9 → 取 "oo"    命中，返回 9*/
	return 0;
}