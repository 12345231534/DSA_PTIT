#include <bits/stdc++.h>
using namespace std;

int n,k,x[100] ,a[100];
int oke, sum;
void Try(int i, int pos){
	if(oke) return;
	for (int j =pos; j<=n; j++){
		if(sum + a[j] <= k ){
			sum += a[j];
			x[i] = a[j];
			if(sum == k){
				oke = 1;
			}
			else{
				Try(i+1, j+1);
			}
			sum -= a[j];
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		int sumA =0;
		for (int i=1;i<=n;i++){
			cin >>a[i];
			sumA += a[i];
		}
		if(sumA%2 ==1){
			cout << "NO";
		}
		else{
			oke =0;
			sum =0;
			k = sumA/2;
			Try(1,1);
			if(oke){
				cout <<"YES";
			}
			else{
				cout << "NO";
			}
		}
		cout << endl;
		
	}
}

