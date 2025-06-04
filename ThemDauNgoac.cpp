#include <bits/stdc++.h>
using namespace std;

int xuly(string s){
	stack<int> st;
	int cnt =0;
	for (int i=0;i<s.size();i++){
		if(s[i] == '('){
			st.push(i);
		}
		else{
			if(!st.empty()){
				st.pop();
			}
			else{
				cnt++;
			}
		}
	}
	return st.size() + cnt;
}

int main(){
	string s;
	cin >>s;
	cout << xuly(s);
}
