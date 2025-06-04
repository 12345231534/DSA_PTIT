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
void preorder(node *root){
	if(root == NULL) return;
	cout << root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

int count(node *root){
	if(root == NULL){
		return 0;
	}
	if(root->left == NULL && root->right == NULL){
		return 1;
	}
	int dem =0;
	dem += count(root->left);
	dem += count(root->right);
	return dem;
}
set<int> se;
void inorder(node *root, int cnt){
	if(root == NULL) return;
	if(root->left==NULL && root->right==NULL){
		se.insert(cnt);
	}
	inorder(root->left, cnt+1);
	inorder(root->right, cnt+1);
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		node *root =NULL;
		se.clear();
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
		inorder(root,0);
		if(se.size() ==1 ){
			cout << 1;
		}
		else {
			cout << 0;
		}
		cout << endl;
	}
}
