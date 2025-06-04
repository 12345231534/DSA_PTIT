#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};

node *makeNode(int x){
	node *ptr = new node();
	ptr->data =x;
	ptr->left = ptr->right = NULL;
	return ptr;
}

int main(){
	node *root = makeNode(1);
	root->left = makeNode(2);
	root->right = makeNode(3);
	root->left->left = makeNode(4);
	cout << root->left;
}
