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

int leverOrder(node *root){
	queue<pair<node*, int>> q;
	q.push({root,0});
	int max =-1;
	pair<node*, int> top;
	while(!q.empty()){
		top = q.front(); q.pop();
		if(top.first->left == NULL){
			if(max == -1){
				max = top.second;
			}
			else if(top.second != max){
				return 0;
			}
		}
		else{
			q.push({top.first->left, top.second +1});
		}
		if(top.first->right == NULL){
			if(max == -1){
				max = top.second;
			}
			else if(top.second != max){
				return 0;
			}
		}
		else{
			q.push({top.first->right, top.second +1});
		}
		
	}
	return 1;
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
		preorder(root);
		cout <<endl;
		cout << leverOrder(root)<<endl;
	}
}
