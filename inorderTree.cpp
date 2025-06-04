#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
	node(int x){
		data = x;
		left = right = NULL;
	}
};

void makeNode(node *root, int u, int v, char c){
	if(c == 'L') root->left = new node(v);
	else root->right = new node(v);
}

void insertNode(node *root, int u, int v, int c){
	if(root == NULL) return;
	if(root->data == u){
		makeNode(root, u, v, c);
	}
	else{
		insertNode(root->left, u, v, c);
		insertNode(root->right, u, v, c);
	}
}

void inorder(node *root){
	if(root == NULL) return ;
	inorder(root->left);
	cout << root->data<<" ";
	inorder(root->right);
}
int main(){
	int n;
	cin >>n;
	node *root = NULL;
	for (int i=0;i<n;i++){
		int u,v;
		char c;
		cin >>u>>v>>c;
		if(root == NULL){
			root = new node(u);
			makeNode(root, u, v, c);
		}
		else{
			insertNode(root, u, v, c);
		}
	}
	inorder(root);
}
