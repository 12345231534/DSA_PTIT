#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		stack<string> st;
		for (int i=0;i<s.size();i++){
			if(isalpha(s[i])){
				st.push(string(1,s[i]));
			}
			else{
				string s1 = st.top();st.pop();
				string s2 = st.top();st.pop();
				string s3 = s[i]+s2+s1;
				st.push(s3);
			}
		}
		cout << st.top()<<endl;
	}
}
