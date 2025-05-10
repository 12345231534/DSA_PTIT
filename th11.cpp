#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >>n;
	int a[n];
	for (int i=1;i<=n;i++){
		cin >>a[i];
	}
	vector<int> odd;
	vector<int> even;
	for (int i=1;i<=n;i++){
		if(i%2==0){
			even.push_back(a[i]);
		}
		else{
			odd.push_back(a[i]);
		}
	}
	sort(odd.begin(), odd.end());
	sort(even.begin(), even.end(), greater<int>());
	int idxOdd =0, idxEven =0;
	for (int i=1;i<=n;i++){
		if(i%2 != 0){
			a[i] = odd[idxOdd++];
		}
		else{
			a[i] = even[idxEven++];
		}
	}
	for (int i=1;i<=n;i++){
		cout << a[i]<<" ";
	}
}
