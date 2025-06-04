#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node * left;
	node *right;
	node (int x){
		data =x;
		left =right = NULL;
	}
};
void insert(node *root, int x){
	if(root->data > x){
		if(root->left) insert(root->left, x);
		else root->left = new node (x);
	}
	if(root->data < x){
		if(root->right) insert(root->right, x);
		else root ->right = new node(x);
	}
}
int maxVal;
void check(node *root, int cnt){
	if(root == NULL) return;
	maxVal = max(maxVal, cnt);
	check(root->left, cnt+1);
	check(root->right, cnt+1);
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n], b[n];
		for (int i=0;i<n;i++){
			cin >>a[i];
			b[i] = a[i];
		}
		node *root = new node(a[0]);
		for (int i=1;i<n;i++){
			insert(root, a[i]);
		}
		maxVal =1;
		check(root,0);
		cout <<maxVal<<endl;
	}
}
