#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b, char c){
	if(c=='+'){
		return a+b;
	}
	if(c=='-'){
		return a-b;
	}
	if(c=='*'){
		return a*b;
	}
	if(c=='/'){
		return a/b;
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		stack<int> st;
		for (int i = s.size()-1; i>=0;i--){
			if(isdigit(s[i])){
				st.push(s[i] - '0');
			}
			else{
				int  x = st.top(); st.pop();
				int y = st.top(); st.pop();
				int z = solve(x,y, s[i]);
				st.push(z);
			}
		}
		cout << st.top()<<endl;
	}
}
