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

void spiralOrder(node *root){
	queue<node*> q;
	q.push(root);
	int cnt =0;
	while(!q.empty()){
		vector<node *> v;
		int s = q.size();
		for (int i=0;i<s;i++){
			node *tmp = q.front(); q.pop();
			v.push_back(tmp);
		}
		for(node *x : v){
			if(x->left) q.push(x->left);
			if(x->right) q.push(x->right);
		}
		if(cnt %2==0){
			reverse(v.begin(), v.end());
		}
		for (node *x : v){
			cout << x->data<<" ";
		}
		cnt++;
	}
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
		spiralOrder(root);
		cout <<endl;
	}
}



