#include <bits/stdc++.h>
using namespace std;

// dau tien lon hon ben phai  => duyet tu trai qua phai; dau = ">"
// dau tien lon hon ben trai  => duyet tu phai qua trai; dau = ">"
// dau tien nho hon ben phai  => duyet tu trai qua phai; dau = "<"
// dau tien nho hon ben trai  => duy tu phai qua trai; dau = "<"

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		int b[n];
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		stack<int> st;
		for (int i=0;i<n;i++){
			while(!st.empty() && a[i] > a[st.top()]){
				b[st.top()] = a[i];
				st.pop();
			}
			st.push(i);
		}
		while(!st.empty()){
			b[st.top()] = -1;
			st.pop();
		}
		for (int i=0;i<n;i++){
			cout << b[i]<<" ";
		}
		cout << endl;
	}
}
