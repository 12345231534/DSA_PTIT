#include <bits/stdc++.h>
using namespace std;

int t;

int n, a[10][10], x[100];
int cot[100], cheo1[100], cheo2[100];
int maxVal;
void init(){
	n=8;
	maxVal = -1e9;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cin >>a[i][j];
		}
	}
}
void Try(int i){
	for (int j=1;j<=n;j++){
		if(cot[j] ==0 && cheo1[n+i-j] ==0 && cheo2[i+j-1] == 0){
			x[i] = j;
			cot[j] = 1; cheo1[n+i-j] = 1; cheo2[i+j-1] = 1;
			if(i==n){
				int sum =0;
				for (int i=1;i<=n;i++){
					sum += a[i][x[i]];
				}
				maxVal = max(maxVal, sum);
			}
			else{
				Try(i+1);
			}
			cot[j] = 0; cheo1[n+i-j] = 0; cheo2[i+j-1] = 0;
		}
	}
}
int main(){
	int t;
	cin >>t;
	for (int i=1;i<=t;i++){
		
		init();
		Try(1);
		cout << "Test "<<i<<": "<<maxVal<<endl;
	}
}
