#include<iostream>
using namespace std;
int main() {
	//1.+(运算符重载)
	string s1 = "英雄";
	string t1 = "出来";

	s1 = s1 + "哪里";//+const char*
	cout << s1 << endl;
	s1 =s1 + t1;//+const string&
	cout << s1 << endl;
	s1 =s1 + ';';//+char
	cout << s1 << endl;

	//2.+=(运算符重载)
	string s2 = "英雄";
	string t2 = "出来";

	s2 += + "哪里";//+const char*
	cout << s2 << endl;
	s2 += t2;//+const string&
	cout << s2 << endl;
	s2 += ';';//+char
	cout << s2 << endl;
	

	//3.append(函数重载)
	string s3 = "英雄";
	string t3 = "联盟";
	s3.append("算法");
	s3.append(t3);
	s3.append("5201314", 3);//取前3个
	cout << s3 << endl;
	s3.append("5201314", 3, 4);//从第3个位置开始，取4个元素
	cout << s3 << endl;

	//4.push_back
	string s4 = "hello world";
	s4.push_back('6');
	s4.push_back('6');
	s4.push_back('6');
	cout << s4 << endl;
	return 0;
}