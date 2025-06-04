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
vector<int> v;
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

void inOrder(node *root){
	if(root == NULL) return;
	inOrder(root->left);
	v.push_back(root->data);
	inOrder(root->right);
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
		v.clear();
		inOrder(root);
		int oke =1;
		for (int i=0;i<n;i++){
			if(v[i] != b[i]){
				oke =0;
			}
		}
		cout << oke<<endl;
	}
}
