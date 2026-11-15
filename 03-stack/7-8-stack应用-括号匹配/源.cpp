#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
	string s;
	cin >> s;
	stack<char> st;
	//把s里的元素从头到尾挨个取出来，每次拷一份放进c，然后执行一次循环体。
	for (char c : s) {
		if (c == '('||c=='['||c=='{') {
			st.push(c);
		}
		else if (c == ')' || c == ']' || c == '}') {
			if (st.empty()) {
				cout << "NO" << endl;
				return 0;
			}
			char top = st.top();
			if ((c == ')' && top == '(') || (c == ']' && top == '[') || (c == '}' && top == '{')) {
				st.pop();
			}
			else {
				cout << "NO" << endl;
				return 0;
			}
			
		}
		
	}
	if (st.empty()) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}