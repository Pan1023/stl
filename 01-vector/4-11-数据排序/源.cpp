#include<iostream>
#include<algorithm>//有sort接口
#include<vector>
using namespace std;
void printVector(vector<int>&v) {
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;
}
bool cmp(int a, int b) {
	return a > b;//降序
	//return a < b;升序
}
/*- return a > b;							→ 你告诉它"大的在前" → 降序
-return a < b;								→ "小的在前" → 升序
-return abs(a) < abs(b);				 → "绝对值小的在前" → 按绝对值升序
-return to_string(a) < to_string(b);`→ "字典序小的在前" → 按字符串比较*/
int main() {
	vector<int>v = { 9,7,3,4,1,6,0 };
	sort(v.begin(), v.end(),cmp);//sort()默认升序
	printVector(v);
	return 0;
}