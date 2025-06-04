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
	if(c=='L') root->left = new node(v);
	else root->right = new node(v);
}
void insertNode(node *root, int u, int v, char c){
	if(root == NULL) return;
	if (root->data == u){
		makeNode(root, u, v, c);
	}
	else {
		insertNode(root->left, u, v, c);
		insertNode(root->right, u, v, c);
	}
}

void preorder(node *root){
	if(root == NULL) return;
	cout << root->data <<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(node *root){
	if(root == NULL) return;
	postorder(root->left);
	postorder(root->right);
	cout << root->data<<" ";
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
			root  = new node(u);
			makeNode(root, u,v,c);
		}
		else{
			insertNode(root, u, v, c);
		}
	}
	preorder(root);
}
