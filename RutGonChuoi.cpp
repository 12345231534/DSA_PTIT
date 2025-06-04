#include <bits/stdc++.h>
using namespace std;
// aaabbbcccedddeeu
// xoa 3 phan tu lien tiep
string xuly(string s){
	stack<char> st;
	for (int i=0;i<s.size();i++){
		if(st.size()>=2){
			char x = st.top(); 
			char y = st.top(); 
			if(x==y && x== s[i]){
				st.pop();
				st.pop();
			}
			else{
				st.push(s[i]);
			}
		}
		else{
			st.push(s[i]);
		}
	}
	if(st.empty()){
		cout << "empty";
	}
	else{
		string res ="";
		while(!st.empty()){
			res = st.top() + res;
			st.pop();
		}
		cout << res<<endl;
	}
}

int main(){
	string s;
	cin >>s;
	stack<char> st;
	int n = s.size();
	for (int i=0;i<n;i++){
		if(st.empty()){
			st.push(s[i]);
		}
		else{
			char x = st.top();
			if(x == s[i]){
				st.pop();
			}
			else{
				st.push(s[i]);
			}
		}
	}
	string res = "";
	if(st.empty()){
		cout << "EMPTY"<<endl;
	}
	else{
		while(!st.empty()){
			res = st.top() + res;
			st.pop();
		}
		cout << res<<endl;
	}
	cout << xuly(s)<<endl;
}
