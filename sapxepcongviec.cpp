#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.second == b.second){
		return a.first > b.first;
	}
	else return a.second < b.second;
}

int main(){
	int n;
	cin >>n;
	int s[n+1];
	int f[n+1];
	for (int i=0;i<n;i++){
		cin >> s[i];
	}
	for (int i=0;i<n;i++){
		cin >> f[i];
	}
	vector<pair<int, int>> v;
	for (int i=0;i<n;i++){
		pair<int, int> p;
		p.first = s[i];
		p.second = f[i];
		v.push_back(p);
	}
	
	sort(v.begin(), v.end(), cmp);
	for (int i=0;i<n;i++){
		s[i] = v[i].first;
		f[i] = v[i].second;
	}
	vector <int> res;
	res.push_back(1);
	for (int i=0;i<n-1;i++){
		for (int j =i+1;j<n;j++){
			if(s[j] >= f[i]){
				cout << "j: "<<j << " s[j]: "<< s[j] << " i: "<<i << " f[i]: "<< f[i]<<endl;
				res.push_back(j+1);
				i =j;
				cout << i<<endl;
			}
		}
	}
	for (int x : res){
		cout << x<<" ";
	}
}
