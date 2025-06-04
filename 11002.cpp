#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		stack<int> st;
		for (int i=0;i<s.size();i++){
			if(isdigit(s[i])){
				st.push(s[i]);
			}
			else{
				int x = st.top(); st.pop();
				int y = st.top(); st.pop();
				if(s[i] == '+'){
					st.push(x+y);
				}
				if(s[i] == '-'){
					st.push(x-y);
				}
				if(s[i] == '*'){
					st.push(x*y);
				}
				if(s[i] == '/'){
					st.push(x/y);
				}
				
			}
		}
		cout << st.top()<<endl;
	}
}
