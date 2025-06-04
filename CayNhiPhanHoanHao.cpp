#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
	node (int x){
		data  =x;
		left = right = NULL;
	}
};

void makeNode(node *root, int u, int v, char c){
	if(c=='L') root->left = new node(v);
	else root->right = new node(v);
}

void insertNode(node *root, int u, int v, char c){
	if(root == NULL) return;
	
	if(root->data == u){
		makeNode(root, u,v,c);
	}
	else{
		insertNode(root->left,u,v,c);
		insertNode(root->right, u,v,c);
	}
}

int check(node *root){
	queue<node *> q;
	q.push(root);
	int cnt=0;
	while(!q.empty()){
		int s = q.size();
		if(s != pow(2,cnt)) return 0;
		for (int i=0;i<s;i++){
			node *tmp = q.front(); q.pop();
			if(tmp->left) q.push(tmp->left);
			if(tmp->right) q.push(tmp->right);
		}
		cnt++;
	}
	return 1;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		node *root = NULL;
		for (int i=0;i<n;i++){
			int u,v;
			char c;
			cin >>u>>v>>c;
			if(root==NULL){
				root = new node(u);
				makeNode(root,u,v,c);
			}
			else{
				insertNode(root, u,v,c);
			}
		}
		if(check(root)){
			cout <<"Yes"<<endl;
		}
		else{
			cout <<"No"<<endl;
		}
	}
}



