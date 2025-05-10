#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin >>a[i];
	}
	vector<string> v;
	for (int i=0;i<n;i++){
		int key = a[i];
		int j = i-1;
		while(j>=0 && a[j] > key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
		string s = "Buoc ";
		s += to_string(i) + ": ";
		for (int x =0; x<=i; x++){
			s += to_string(a[x]) + " ";
		}
		v.push_back(s);
	}
	for (int i= v.size()-1; i>=0; i--){
		cout << v[i]<<endl;
	}
	
}
