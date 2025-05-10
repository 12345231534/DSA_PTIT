#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n; cin >>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin >>a[i];
		}
		int idx = 1;
		vector<string> v;
		for(int i =n-1;i>=1;i--){
			int oke = 0;
			for (int j=0;j<i;j++){
				if(a[j] > a[j+1]){
					swap(a[j+1], a[j]);
					oke =1;
				}
			}
			if(oke ==0){
				break;
			}
			string s = "Buoc ";
			s += to_string(idx)+": ";
			for (int x = 0;x<n;x++){
				s += to_string(a[x]) + " ";
			}
			v.push_back(s);
			idx++;
		}
		for (int i = v.size()-1; i>=0;i--){
			cout << v[i]<<endl;
		}
	}
}
