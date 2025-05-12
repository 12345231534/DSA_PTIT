#include <bits/stdc++.h>
using namespace std;
int a[] = {1,2,5,10,20,50,100,200, 500,1000};

int solve(int n){
	sort(a, a+10, greater<int>());
	int cnt = 0;
	for (int i=0;i<10;i++){
		if(n>0){
			cnt += n / a[i];
			n %=a[i];
		}
		
	}
	return cnt;
}
int main(){
	int t;
	cin >>t;
	
	while(t--){
		int n;
		cin >>n;
		cout <<solve(n)<<endl;
	}
}
