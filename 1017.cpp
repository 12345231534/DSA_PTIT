#include <bits/stdc++.h>
using namespace std;

string binaryToGray(string binary){
	string gray = "";
	gray += binary[0];
	for (int i=1;i<binary.length();i++){
		if(binary[i] == '0'){
			gray += binary[i-1];
		}
		else{
			gray += (binary[i-1] == '0') ? '1' : '0';
		}
	}
	return gray;
}


int main(){
	int t;
	cin >>t;
	while(t--){
		string binary;
		cin >>binary;
		string gray = binaryToGray(binary);
		cout << gray<<endl;
	}
}
