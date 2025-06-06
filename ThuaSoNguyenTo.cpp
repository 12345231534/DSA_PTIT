#include <bits/stdc++.h>
using namespace std;

int nto(int n){
	int maxVal=0;
	for (int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			maxVal = i;
			n/=i;
		}
	}
	if(n>=2) maxVal = n;
	return maxVal;
}

int main(){
	
	int l, r;
	cin >>l>>r;
	int sum =0;
	for (int i=l;i<=r;i++){
		cout << i<< " "<< nto(i)<<endl;
		sum += nto(i);
	}
	cout << sum<<endl;
}
