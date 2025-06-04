#include <bits/stdc++.h>
using namespace std;

void XuLy(string s, int k){
	stack<pair<char,int>> st;
	for (int i=0;i<s.size();i++){
		if(!st.empty()){
			pair<char, int> top = st.top(); 
			if(top.first == s[i] && top.second +1 == k){
				st.pop();
			}
			else if(top.first == s[i] && top.second -1 != k){
				st.pop();
				st.push({top.first, top.second+1});
			}
			else{
				st.push({s[i], 1});
			}
		}
		else{
			st.push({s[i], 1});
		}
	}
	if(!st.empty()){
		string res;
		while(!st.empty()){
			pair<char, int> top = st.top();
			string ans ="";
			for(int i=0;i<top.second;i++){
				ans += top.first;
			}
			res = ans + res;
			st.pop();
		}
		cout << res<<endl;
	}
	else{
		cout << "Empty"<<endl;
	}
}

int main(){
	string s;
	cin >>s;
	int k; 
	cin >>k;
	XuLy(s,k);
}
