#include <bits/stdc++.h>
using namespace std;

int n, x[100], cnt;
bitset<100> cot;
bitset<100> xuoi;
bitset<100> nguoc;

void Init(){
	cin >>n;
	cnt=0;
	cot.set();
	xuoi.set();
	nguoc.set();
}

void Try(int i){
	for (int j =1 ;j<=n;j++){
		if(cot[j] == 1 && xuoi[i-j+n] == 1 && nguoc[i+j-1] == 1){
			x[i] = j;
			cot[j] = 0;
			xuoi[i-j+n] =0;
			nguoc[i+j-1] = 0;
			if(i==n){
				cnt++;
			}
			else {
				Try(i+1);
			}
			cot[j] = 1;
			xuoi[i-j+n] = 1;
			nguoc[i+j-1] = 1;
		}
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		Init();
		Try(1);
		cout << cnt<<endl;
	}
}
