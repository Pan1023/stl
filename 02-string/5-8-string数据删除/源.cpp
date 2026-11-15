#include<iostream>
using namespace std;
int main() {
	string s;

	//1.
	s = "hello woooorld";
	s.erase();//默认0，就是把0及以后的全删
	cout << s << endl;

	//2.
	s = "hello woooorld";
	s.erase(7);//7及以后全删
	cout << s << endl;

	//3.
	s = "hello woooorld";
	s.erase(7,3);//删除下标 7、8、9（3 个）
	cout << s << endl;

	//4.
	s = "hello woooorld";
	s.erase(s.begin());//删除begin指向的字符
	cout << s << endl;

	//4.
	s = "hello woooorld";
	s.erase(s.begin()+7,s.begin()+10);//左闭右开
	cout << s << endl;
	return 0;
}