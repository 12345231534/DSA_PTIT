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
		int oke =1;
		for(int i=0;i<s.size();i++){
			if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
				st.push(s[i]);
			}
			else if(s[i] == ')'){
				if(!st.empty()){
					char x = st.top();
					if(x=='(') st.pop();
					else {
						oke =0;
						break;
					}
				}
			}
			else if(s[i] == ']'){
				if(!st.empty()){
					char x = st.top();
					if(x=='[') st.pop();
					else {
						oke =0;
						break;
					}
				}
			}
			else if(s[i] == '}'){
				if(!st.empty()){
					char x = st.top();
					if(x=='{') st.pop();
					else {
						oke =0;
						break;
					}
					
				}
			}
		}
		if(!st.empty()){
			oke =0;
		}
		if(oke){
			cout << "YES"<<endl;
		}
		else {
			cout << "NO"<<endl;
		}
	}
}
