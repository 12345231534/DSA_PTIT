#include <bits/stdc++.h>
using namespace std;

char c;
int a[10];
int n, oke;
void init(){
	for (int i=1;i<=n;i++){
		a[i] = i;
	}
}
bool nguyenAm(char x){
	if(x== 'A' || x == 'E'){
		return true;
	}
	return false;
}
bool check(){
	for (int i=2;i<n;i++){
		if(!nguyenAm(char(a[i-1] +64)) && nguyenAm(char(a[i] +64)) && !nguyenAm(char(a[i+1] + 64)))
		return false;
	}
	return true;
}

void result(){
	if(check()){
		for (int i =1;i<=n;i++){
			cout << char(a[i] + 64);
		}
		cout << endl;
	}
	
	
}
void sinh(){
	int i = n-1;
	while(i >=1 && a[i] > a[i+1]){
		i--;
	}
	if(i==0){
		oke = 0;
	}
	else{
		int j =n;
		while(a[j] < a[i]) j--;
		swap(a[i], a[j]);
		sort(a+i+1, a+n+1);
	}
}


int main(){
	cin >>c;
	n = (int)c - 64;
    oke = 1;
    init();
	while (oke) {
		result();
		sinh();
	}
}

