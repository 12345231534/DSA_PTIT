#include <bits/stdc++.h>
using namespace std;

string s;
int priority(char x){
	if(x== '+' || x== '-'){
		return 1;
	}
	if(x == '/' || x == '*'){
		return 2;
	}
}

void TrungToHauTo(string s){
	stack<char> st;
	string out ="";
	for(int i=0;i<s.length();i++){
		if(s[i] == '(') st.push(s[i]);
		else if(isalnum(s[i])) out += s[i];
		else if( s[i] == ')'){
			while(!st.empty() && s[i] != '('){
				char y = st.top();
				st.pop();
				out+= y;
			}
			st.pop();
			
		}
		else{
			while(!st.empty() && priority(s[i]) <= priority(st.top())){
				char c = st.top();
				st.pop();
				out +=c;
			}
			st.push(s[i]);
		}
	}
	while(!st.empty()){
		char c = st.top();
		if (c!= '(') out += c;
		st.pop();
	}
	cout << out<<endl;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>s;
		TrungToHauTo(s);
	}
}
