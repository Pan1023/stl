#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> v = {2,0,2,4};//vector<int>是类
	cout << v.capacity() << endl;
	v.push_back(7);
	cout << v.capacity() << endl;

	//迭代器：begin，end
	//当作指针
	cout << "begin->" << *v.begin() << endl;
	cout << "(end-1)->" << *(v.end()-1) << endl;

	//值：front,back
	cout << "front:" << v.front() << endl;
	cout << "back:" << v.back() << endl;

	return 0;
}