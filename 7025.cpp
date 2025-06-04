#include <bits/stdc++.h>
using namespace std;


long long solve(long long a, long b, string c){
	if(c=="+"){
		return a+b;
	}
	if(c=="-"){
		return a-b;
	}
	if(c=="*"){
		return a*b;
	}
	if(c=="/"){
		return a/b;
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		string a[n];
		stack<long long> st;
		for (int i=0;i<n;i++){
			cin >>a[i];
		} 
		for (int i=0;i<n;i++){
			string tmp = a[i];
			if(tmp == "*" || tmp == "/" || tmp == "+" || tmp =="-"){
				long long x = st.top(); st.pop();
				long long y = st.top(); st.pop();
				long long z = solve(y,x,a[i]);
				st.push(z);
			}
			else{
				st.push(stoll(a[i]));
			}
		}
		cout << st.top()<<endl;
		
		
	}
}
