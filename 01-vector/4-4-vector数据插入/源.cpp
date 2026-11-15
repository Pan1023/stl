#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int>&v) {
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;
}
int main() {
	//1.push_back
	vector<int>v;
	for (int i = 0; i < 10; ++i) {
		v.push_back(i);
	}
	printVector(v);

	//2.v.insert(迭代器)：插在迭代器前面
	// 
	//insert(pos, value)插一个值
	v.insert(v.begin(), 888);
	printVector(v);
	v.insert(v.end(), 666);
	printVector(v);

	//insert(pos, n, value)插 n 个相同的值
	v.insert(v.begin(), 3, 1);
	printVector(v);

	//insert(pos, {1,2,3}) 插一个初始化列表
	v.insert(v.begin(), { 1,2,3 });
	printVector(v);

	//insert(pos, first, last) 插一段区间
	vector<int>src = { 7,8 };
	v.insert(v.end(), src.begin(), src.end());
	printVector(v);
	return 0;
}