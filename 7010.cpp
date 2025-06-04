#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		stack<string> st;
		for (int i=s.size()-1; i>=0;i--){
			if(isalpha(s[i])){
				st.push(string(1,s[i]));
			}
			else{
				string x = st.top();
				st.pop();
				string y = st.top(); st.pop();
				string z = x+y+s[i];
				st.push(z);
			}
		}
		cout << st.top()<<endl;
	}
}
