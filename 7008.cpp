#include <bits/stdc++.h>
using namespace std;


int priority(char x){
	if(x == '+' || x == '-'){
		return 1;
	}
	if(x == '*' || x == '/' ){
		return 2;
	}
	if(x == '('){
		return 0;
	}
	if(x == '^'){
		return 3;
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		stack<char> st;
		string res="";
		for (int i=0;i<s.size();i++){
			if(s[i] == '('){
				st.push(s[i]);
			}
			else if(!st.empty() &&  s[i] == ')'){
				while(st.top() != '('){
					res += st.top();
					st.pop();
				}
				st.pop();
			}
			else if(isalpha(s[i])){
				st.push(s[i]);
			}
			else{
				while(!st.empty() && priority(st.top()) >= priority(s[i])){
					char  c = st.top();
					st.pop();
					res += c;
				}
				st.push(s[i]);
			}
		}
		while(!st.empty()){
			res += st.top();
			st.pop();
		}
		cout << res<<endl;
	}
}
