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
			cin >> a[i];
		}
		vector<string> v;
		for (int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i] > a[j]){
					swap(a[i], a[j]);
				}
			}
			string s="Buoc ";
			s += to_string(i+1) + ": ";
			for (int x = 0; x<n;x++){
				s += to_string(a[x]) + " ";
			}
			v.push_back(s);
		}
		for (int i=v.size()-1;i>=0;i--){
			cout << v[i]<<endl;
		}
	}
}
