#include <bits/stdc++.h>
using namespace std;

int n,k,x[1000], oke;

void init(){
	cin >>n>>k;
	for (int i=0;i<k;i++){
		cin >>x[i];
	}
}
void previus_Combination(){
	int i =k-1;
	while(i>=1 && x[i] == x[i-1] +1){// dung lai phan tu  x[i] co the giam
		i--;
	}
	if(i==0 && x[i] == 1){ // neu day con la tap con lien tiep dau tien
		x[i] = n-k+1;
	}
	else{
		x[i] = x[i] - 1;
	}
	for (int j =k-1; j>i;j--){ // cap nhap cap phan tu x[i] sao cho chungs thanh day con lien tiep lon nhat co the
		x[j] = n -k+j+1;
	}
}
void result(){
	for (int i=0;i<k;i++){
		cout << x[i]<<" ";
	}
	
}

int main(){
	int t;
	cin >>t;
	while(t--){
		init();
		previus_Combination();
		result();
		cout << endl;
	}
}
