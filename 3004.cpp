#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin >>a[i];
		}
		sort(a, a+n);
		string s1="", s2="";
		if(n%2==0){
			for (int i=0;i<n;i+=2){
				s1 += to_string(a[i]);
				s2 += to_string(a[i+1]);
			}
		}
		else{
			for (int i=0;i<n-1;i+=2){
				s1 += to_string(a[i]);
				s2 += to_string(a[i+1]);
			}
			s1 += to_string(a[n-1]);
		}
		long long res = stoll(s1) + stoll(s2);
		cout << res<<endl;
	}
}
