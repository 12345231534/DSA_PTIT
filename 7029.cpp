#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		stack<char> st;
		for (int i=0;i<s.size() ;i++){
			if(s[i] == ']'){
				string tmp ="";
				while(st.top() != '['){
					tmp =st.top() + tmp;
					st.pop();
				}
				st.pop();
				int n=0;
				string c ="";
				while(st.size() && st.top() >= '0' && st.top() <= '9'){
					c = st.top() +c;
					st.pop();
				}
				for(char x :c){
					n = n*10 + (x -'0');
				}
				if(n==0) n++;
				string res="";
				for (int j =0;j<n;j++){
					res += tmp;
				}
				for (char x : res){
					st.push(x);
				}
			}
			else{
				st.push(s[i]);
			}
		}
		string result="";
		while (!st.empty()) {
            result = st.top() + result;
            st.pop();
        }
        cout << result << endl;
	}
}

