#include<bits/stdc++.h>
using namespace std;

int n, a[100];
vector<string> v;
void init(){
	v.clear();
	cin >>n;
	for (int i=0;i<n;i++){
		cin >>a[i];
	}
}

void Try(){
	if(n==0){
		return ;
	}
	string s;
	s = "[";
	for (int i=0;i<n-1;i++){
		s += to_string(a[i]) + " ";
	}
	s += to_string(a[n-1])+"]";
	v.push_back(s);
	for (int i=0;i<n-1;i++){
		a[i] = a[i] + a[i+1];
	}
	n--;
	Try();
}

int main(){
	int t;
	cin >>t;
	while(t--){
		init();
		Try();
		for(int i =v.size()-1;i>=0;i--){
			cout << v[i]<<" ";
		}
		cout <<endl;
	}
}
