#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n, m;
		cin >>n>>m;
		int a[n], b[m];
		for (int i=0;i<n;i++){
			cin >>a[i];
		}
		for (int i=0;i<m;i++){
			cin >>b[i];
		}
		sort(a,a+n);
		sort(b,b+m);
		int cnt =0;
		for (int i=0;i<n;i++){
			for(int j= 0;j<m;j++){
				
				if(pow(a[i],b[j]) > pow(b[j],a[i])){
					cnt += m-j;
					break;
				}
				
			}
		}
		cout << cnt<<endl;
	}
}
