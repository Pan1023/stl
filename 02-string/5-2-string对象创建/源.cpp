#include<iostream>
using namespace std;
int main() {
	//1.无参构造
	string s1;
	cout << s1 << endl;

	//2.初始化列表
	string s2({ 'h','e','l','l','o' });
	cout << s2 << endl;

	//3.字符串初始化
	string s3("hello world");
	cout << s3 << endl;

	//4.字符串的前n个字符
	string s4("hello world",6);
	cout << s4 << endl;

	//5.拷贝构造
	string s5(s3);
	cout << s5 << endl;

	//6.a个b
	string s6(8, 'o');
	cout << s6 << endl;
	return 0;
}