#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int>& v) {
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;
}
int main() {
	vector<int>v = { 9,8,5,211 };
	printVector(v);
	//1.pop_back
	v.pop_back();
	printVector(v);

	//2.erase(pos)
	vector<int>::iterator it=v.erase(v.begin()+1);//返回值是刚才删除的下一个位置
	printVector(v);
	cout << *it << endl;
	
	//erase(first, last)删除的是区间 [first, last)
	vector<int>v1 = {0,1,2,3,4,5,6,7,8,9};
	v1.erase(v1.begin() + 2, v1.begin() + 6);
	printVector(v1);
	/*删前 k 个:v.erase(v.begin(), v.begin() + k);
	* 删后 k 个:v.erase(v.end() - k, v.end());
	* 删中间一段:v.erase(v.begin() + i, v.begin() + j);   // 删下标 [i, j)
	* 删全部:v.erase(v.begin(), v.end());   // 等价于 v.clear()
	*/
	//3.clear()
	v.clear();
	printVector(v);
	return 0;
}
/*erase(first, last)删[first, last),返回原last位置的元素迭代器、
O(n)、capacity不变,first及之后的迭代器失效。记牢“左闭右开”和“返回值指向哪”*/