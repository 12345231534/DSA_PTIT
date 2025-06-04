#include <bits/stdc++.h>
using namespace std;

int uoc(int a, int b){
	if(b==0) return a;
	else{
		int tmp = b;
		b = a%b;
		a =tmp;
		return uoc(a,b);
	}
}
int bcnn(int a, int b){
	return a*b/uoc(a,b);
}
int main(){
	int a, b;
	cin >>a>>b;
	int x = uoc(a,b);
	cout << x<<endl;
	int y = bcnn(a,b);
	cout << y<<endl;
}
