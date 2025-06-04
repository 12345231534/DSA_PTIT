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
set<int> se;
void check(node *root, int cnt){
	if(root == NULL) return;
	if(root->right == NULL && root->left ==NULL){
		se.insert(cnt);
	}
	check(root->left, cnt+1);
	check(root->right, cnt+1);
}

void postOrder(node *root){
	if(root == NULL) return;
	postOrder(root->left);
	postOrder(root->right);
	cout << root->data<<" ";
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		node *root = NULL;
		se.clear();
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
//		check(root, 0);
//		if(se.size() == 1){
//			cout <<1<<endl;
//		}
//		else{
//			cout <<0<<endl;
//		}
		postOrder(root);
	}
}



