#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
	node (int x){
		data = x;
		left= right = NULL;
	}
};

node *buildTree(int a[], int left, int right){
	if(left > right) return NULL;
	int mid = (left+right)/2;
	node *root = new node (a[mid]);
	root->left = buildTree( a, left, mid-1);
	root->right = buildTree( a, mid+1, right);
	return root;
}
void preOrder(node *root){
	if(root == NULL) return;
	cout << root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin >>a[i];
		}
		sort(a, a+n);
		node *root = buildTree(a, 0 ,n-1);
		preOrder(root);
		cout <<endl;
	}
}
