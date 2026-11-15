#include<iostream>
using namespace std;
int main() {
	
	string s = "i love you 1314";
	cout << s << endl;
	//1.[]访问
	//s.size()不包括\0
	for (int i = 0; i < s.size(); ++i) {
		cout << s[i] << " " ;
	}
	cout << endl;

	//2.s.at()：会做下标检查，更加安全，作用跟[]一样
	for (int i = 0; i < s.size(); ++i) {
		cout << s.at(i) << " ";
	}
	cout << endl;

	//3.修改
	s[11] = '5';
	s[12] = '2';
	s.at(13) = '0';
	s.at(14) = ' ';
	cout << s << endl;
	return 0; 
}