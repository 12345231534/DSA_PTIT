#include <bits/stdc++.h>
using namespace std;

string s;
int n;
int a[100], used[100];
void init(){
	cin >>s;
	n = s.size();
}


void Try(int i){
	
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			a[i] = j;
			used[j] =1;
			if(i==n){
				for (int x=1;x <=n;x++){
					cout << s[a[x]-1];
				}
				cout<< " ";
			}
			else{
				Try(i+1);
			}
			used[j] =0;
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		init();
		Try(1);
		memset(used,0, sizeof(used));
		cout <<endl;
	}
}

