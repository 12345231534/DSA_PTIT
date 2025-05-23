#include <bits/stdc++.h>
using namespace std;

int TinhGiaTri(int x, int y, char c){
	if(c=='+'){
		return x+y;
	}
	else if(c=='-'){
		return x-y;
	}
	else if(c=='*'){
		return x*y;
	}
	else 
	return x/y;
}

int TinhHauTo(string s){
	stack<int> st;
	for (int i=0;i<s.length();i++){
		if(isdigit(s[i])){
			st.push(s[i] - '0');
		}
		else {
			int x = st.top();
			st.pop();
			int y = st.top();
			st.pop();
			int z = TinhGiaTri (y,x, s[i]);
			st.push(z);
		}
	}
	int res = st.top();
	st.pop();
	return res;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		int res = TinhHauTo(s);
		cout << res<<endl;
	}
}
