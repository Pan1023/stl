#include<iostream>
using namespace std;
int main() {
	string s;
	s = "hello woooorld";

	//1.
	//从7开始的5个元素 替换成 or
	s.replace(7, 5, "or");
	cout << s << endl;

	//2.
	s = "hello woooorld";
	//左闭右开
	s.replace(s.begin() + 7, s.begin() + 12, "or");
	cout << s << endl;

	//3.
	s = "hello woooorld";
	s.replace(s.begin() + 7, s.begin() + 12, "orjaosoas",2);//取前2个
	cout << s << endl;
	return 0;
}