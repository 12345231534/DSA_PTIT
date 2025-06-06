#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		stack<int> st;
		int oke =1;
		for (int i=0;i<s.size();i++){
			if(s[i] == '('){
				st.push(i);
			}
			else if(s[i] == ')'){
				int top = st.top(); st.pop();
				if(i-top == 2){
					oke =0;
				}
				if(s[top+1]=='(' && s[i-1] == ')'){
					oke =0;
				}
			}

		}
		if(!st.empty()){
			oke =0;
		}
		if(oke) cout <<"No"<<endl;
		else cout << "Yes"<<endl;
	}
}
