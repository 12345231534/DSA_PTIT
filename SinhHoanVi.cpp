#include<bits/stdc++.h>
using namespace std;

int oke;
int n,k;
int a[1005];
void ktao(){
	for (int i=1;i<=n;i++){
		a[i] = 0;
	}
}

void sinh(){
	int i =n;
	while(i>=1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i==0){
		oke =0;
	}
	else{
		a[i]++;
	}
}
bool check(){
	if(a[1] == 0 || a[n] == 1) return false;
	for (int i=1;i<=n-1;i++){
		if(a[i] == a[i+1] && a[i] == 1) return false;
	}
	
	int dem =1; int res=-1;
	for (int i=1;i<=n-1;i++){
		if(a[i] == a[i+1] && a[i] == 0){
			dem++;
			res = max(dem, res);
		}
		else{
			dem =1;
		}
	}
	if(res >3){
		return false;
	}
	return true;
}
int main(){
	
		cin >>n;
		ktao();
		oke =1;
		while(oke){
			if(check()){
				for (int i=1;i<=n;i++){
					if(a[i] == 0) cout << 6;
					else cout << 8;
				}
				cout << endl;
			}
			sinh();
		}
	
}
