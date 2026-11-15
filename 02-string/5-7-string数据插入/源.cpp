#include<iostream>
using namespace std;
int main() {

	string s = "Heworld";
	//在第2个位置 前 插入2个'l'
	s.insert(2, 2, 'l');//在下标 2 处插入 2 个'l'
	cout << s << endl;
	//插一个只能s.insert(2, 1,'l');  不能s.insert(2,'l');


	s.insert(4, "o ");
	cout << s << endl;

	//那怎么插到尾部呢？
	s.insert(s.size(), "嘿嘿");
	cout << s << endl;

	//迭代器
	s.insert(s.begin(), ':');
	cout << s << endl;
	return 0;
}