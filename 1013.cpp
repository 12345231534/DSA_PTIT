#include <bits/stdc++.h>
using namespace std;

string grayToBinary(string gray){
	string binary ="";
	binary += gray[0];
	
	for(int i =1; i< gray.length(); i++){
		if(gray[i] == '0'){
			binary += binary[i-1];
		}
		else{
			binary += (binary[i - 1] == '0') ? '1' : '0';
		}
	}
	return binary;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		string gray;
		cin >>gray;
		string binary = grayToBinary(gray);
		cout << binary<<endl;
	}
}
