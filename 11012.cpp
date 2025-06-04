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
string s1,s2;
void inorder1(node *root){
	if(root == NULL){
		return;
	}
	s1 += to_string(root->data);
	inorder1(root->left);
	inorder1(root->right);
}
void inorder2(node *root){
	if(root == NULL){
		return;
	}
	s2 += to_string(root->data);
	inorder2(root->left);
	inorder2(root->right);
	
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
		int m;
		cin >>m;
		node *root2 =NULL;
		for (int i=0;i<m;i++){
			int u,v;
			char c;
			cin >>u>>v>>c;
			if(root2 == NULL){
				root2 = new node(u);
				makeNode(root2, u, v, c);
			}
			else{
				insertNode(root2,u,v,c);
			}
		}
		s1 ="";
		s2 ="";
		inorder1(root);
		inorder2(root2);
		if(s1==s2){
			cout << 1<<endl;
		}
		else{
			cout <<0<<endl;
		}
	}
}
