#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n], R[n], L[n];
		for (int i=0;i<n;i++){
			cin >>a[i];
		}
		stack<int> st1;
		// phan tu dau tien nho hon ben phai => duyet tu trai qua phai; dau = "<"
		for (int i=0;i<n;i++){
			while(!st1.empty() && a[i] < a[st1.top()]){
				R[st1.top()] = i;
				st1.pop();
			}
			st1.push(i);
		}
		while(!st1.empty()){
			R[st1.top()] = n;
			st1.pop();
		}
		// phan tu dau tien nho hon ben trai
		stack<int> st2;
		for (int i= n-1 ;i >=0; i--){
			while(!st2.empty() && a[i] < a[st2.top()]){
				L[st2.top()] = i;
				st2.pop();
			}
			st2.push(i);
		}
		while(!st2.empty()){
			L[st2.top()] = -1;
			st2.pop();
		}
		cout << endl;
		long long maxVal = -1e9;
		for (int i=0;i<n;i++){
			long long w = R[i] - L[i] -1;
			long long ans = a[i] * w;
			maxVal = max(maxVal, ans);
		}
		cout << maxVal<<endl;
	}
}
