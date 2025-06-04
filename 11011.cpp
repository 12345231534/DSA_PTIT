#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
	node(int x){
		data =x;
		left =right = NULL;
	}
};
void makeNode(node *root, int u, int v, char c){
	if(c=='L') root->left = new node(v);
	else root->right= new node(v);
}
void insertNode(node *root, int u, int v, char c){
	if(root == NULL) return;
	if(root->data == u){
		makeNode(root, u,v,c);
	}
	else{
		insertNode(root->left, u, v, c);
		insertNode(root->right, u,v,c);
	}
}

int check;
void inorder(node *root){
	if(check ==0) {
		return;
	}
	if(root == NULL){
		return;
	}
	if(root->left != NULL && root->right == NULL || root->left == NULL && root->right != NULL ){
		check =0;
	}
	inorder(root->left);
	inorder(root->right);
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		node *root =NULL;
		for (int i=0;i<n;i++){
			int u,v;
			char c;
			cin >>u>>v>>c;
			if(root == NULL){
				root = new node(u);
				makeNode(root, u, v, c);
			}
			else{
				insertNode(root,u,v,c);
			}
		}
		
		check =1;
		inorder(root);
		cout <<check<<endl;
	}
}
