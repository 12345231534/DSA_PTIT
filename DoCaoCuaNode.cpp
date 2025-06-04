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
map<int,int> mp;
void inOrder(node *root, int cnt){
	if(root == NULL) return;
	mp[root->data]= cnt;
	inOrder(root->left, cnt+1);
	inOrder(root->right, cnt+1);
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		node *root = NULL;
		mp.clear();
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
		inOrder(root,0);
		for (auto it : mp){
			cout << it.first<<" "<<it.second<<endl;
		}
	}
}



