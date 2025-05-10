#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin >>a[i];
	}
	int cnt=0;
	for(int i=0;i<n-1;i++){
		for (int j = i+1;j<n;j++){
			if(a[i] %2 ==0 && a[j] %2==0){
				int oke = 0;
				for (int x = i+1;x<j;x++){
					if(a[x] %2 != 0){
						oke =1;
					}
				}
				if(oke) cnt++;
			}
		}
	}
	cout << cnt;
}
