#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >> s;
		int maxVal = 0;
		stack<char> st;
		int res=0;
		for (int i=0;i<s.size();i++){
			if(s[i] == ')'){
				if(st.empty()){
					res =0;
				}
				else{
					char x = st.top();
					if(x == '('){
						res += 2;
						maxVal = max(maxVal, res);
						st.pop();
					}
					else{
						res =0;
					}
					
				}
			}
			else{
				st.push(s[i]);
			}
		}
		cout << maxVal<<endl;
	}
}
