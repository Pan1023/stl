#include<iostream>
using namespace std;
//substr(pos, count) 的两个参数是 (起点, 长度)
int main() {
	string s;
	s = "hello woooorld";
	string subStr = s.substr(7, 4);
	cout << subStr << endl;
	
	//应用
	string s1 = "英雄算法联盟&&夜深人静写算法";
	int pos = s1.find("&&");
	string s2 = s1.substr(0, pos);
	string s3 = s1.substr(pos+2);
	cout << s2 << " " << s3 << endl;
	return 0;
}