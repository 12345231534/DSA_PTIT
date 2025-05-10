#include <bits/stdc++.h>
using namespace std;

float sum(int n){
	float sum = 0;
	float i =1;
	while(i<=n){
		sum += (float)(2*i+1)/(float)(2*i+2);
		i++;
	}
	return sum;
}
int main(){
	int n;
	cin >>n;
	float s = sum(n);
	cout << s;
}
