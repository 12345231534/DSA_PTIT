#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--){
		string s;
		cin >>s;
		stack<char> st;
		int cnt =0;
		for (int i=0;i<s.size();i++){
			if(s[i] == ')'){
				if(!st.empty()){
					st.pop();
				}
				else{
					cnt++;
					st.push('(');
				}
			}
			else if(s[i] == '('){
				st.push(s[i]);
			}
		}
		if(!st.empty()){
			cnt += st.size()/2;
		}
		cout << cnt<<endl;
	}
	
}
