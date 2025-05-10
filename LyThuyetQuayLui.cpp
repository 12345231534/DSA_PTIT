#include <bits/stdc++.h>
using namespace std;

int x[100], n;

void Try(int i){
	Thu gan cac gia tri cho x[i]
	for (j = gia tri 1 .... <gia tri m>){
		<Kiem tra xem co gan duoc j cho x[i] khong>
		x[i] =j;
		<kiem tra xem i co phai la phan tu cuoi cung khong>
		if(i==n){
			tim duoc 1 cau hinh
		}
		else{
			Tiep tuc xay dung phan tu thu i+1;
			Try(i+1);
		}
		<backTrack>
		<Bo ghi nhan x[i] = j>
	}
	
}
