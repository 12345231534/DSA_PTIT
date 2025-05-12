#include <bits/stdc++.h>
using namespace std;

struct Job{
	int id, deadline, profit;
};
bool cmp(Job a, Job b){
	return a.deadline > b.deadline;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		Job a[n];
		for (int i=0;i<n;i++){
			cin >>a[i].id >> a[i].deadline >> a[i].profit;
		}
		sort(a,a+n, cmp);
		int idx =0;
		int cur_date = a[0].deadline;
		priority_queue<int> pq;
		int res =0;
		int cnt=0;
		while(cur_date >=1){
			while(idx <n && a[idx].deadline >= cur_date){
				pq.push(a[idx].profit);
				idx++;
			}
			if(!pq.empty()){
				cnt++;
				res += pq.top();
				pq.pop();
			}
			cur_date--;
		}
		cout <<cnt<<" " <<res<<endl;
	}
}

