#include <bits/stdc++.h>
using namespace std;

int n, x[100], a[10][10];
int cot[100], cheo1[100], cheo2[100];
int maxval;
void init(){
	n=8;
	maxval=-1e9;
	memset(cot,0, sizeof(cot));
	memset(cheo1, 0, sizeof(cheo1));
	memset(cheo2, 0, sizeof(cheo2));
}
void Try(int i){
	for (int j=1;j<=n;j++){
		if(cot[j] ==0 && cheo1[n+i-j] == 0 && cheo2[i+j-1] ==0){
			x[i] =j;
			cot[j]= 1; cheo1[n+i-j] = 1; cheo2[i+j-1] = 1;
			if(i==n){
				int sum =0;
				for (int i=1;i<=n;i++){
					sum += a[i][x[i]];
				}
				maxval = max(maxval, sum);
			}
			else Try(i+1);
			cot[j] =0; cheo1[n+i-j] = 0; cheo2[i+j-1] = 0;
		}
	}
}
int main(){
	int t;
	cin >>t;
	for(int l=1;l<=t;l++){
		init();
		for (int i=1;i<=n;i++){
			for (int j =1;j<=n;j++){
				cin >> a[i][j];
			}
		}
		Try(1);
		cout << "Test "<<l<<": "<< maxval<<endl;
	}
}

