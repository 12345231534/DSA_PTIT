#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
	node (int x){
		data =x;
		left = right = NULL;
	}
};

void makeNode(node *root, int u ,int v, char c){
	if(c=='L') root->left = new node(v);
	else root->right = new node(v);
}

void insertNode(node *root, int u, int v, char c){
	if(root == NULL ) return ;
	if(root->data == u){
		makeNode(root, u,v,c);
	}
	else{
		insertNode(root->left, u,v,c);
		insertNode(root->right, u,v,c);
	}
}
void levelOrder(node *root){
	queue<node*> q;
	q.push(root);
	
	while(!q.empty()){
		node *tmp = q.front(); q.pop();
		if(tmp != NULL){
			cout << tmp->data <<" ";
			q.push(tmp->left);
			q.push(tmp->right);
		}
		
	}
}
void inOrder(node *root){
	if(root == NULL) return;
	cout << root->data<<" ";
	inOrder(root->left);
	inOrder(root->right);
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		node *root = NULL;
		for (int i=0;i<n;i++){
			int x,y;
			char c;
			cin >>x>>y>>c;
			if(root == NULL){
				root = new node(x);
				makeNode(root,x,y,c);
			}
			else{
				insertNode(root, x,y,c);
			}
		}
		levelOrder(root);
	}
}
