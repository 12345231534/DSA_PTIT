#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], y[100], oke;
vector<string> v;
void Init(){
	cin >>n>>k;
	v.clear();
	for (int i =0;i<n;i++){
		cin >> a[i];
	}
}
void Result(int i){
	string res ="{";
	for (int j=0;j<=i;j++){
		res += to_string(y[j])+" ";
	}
	res.pop_back();
	res += "}";
	v.push_back(res);
}
void Try(int i, int sum, int cur){ // Y = {y1, y2, ..yn) tong =x;
	for (int j =cur;j <n;j++){
		if(sum + a[j] <= k){
			y[i] = a[j];
			sum += a[j];
			if(sum==k){
				Result(i);
			}
			else{
				Try(i+1, sum, j);
			}
			sum -= a[j];
		}
			
	}
}
// ky thuat quay lui co rang buoc

int main(){
	int t;
	cin >>t;
	while(t--){
		Init();
		Try(0,0,0);
		if(v.size() ==0){
			cout << -1;
		}
		else{
			cout << v.size()<<" ";
			for (string x : v){
				cout << x<<" ";
			}
		}
		cout <<endl;
	}
}



