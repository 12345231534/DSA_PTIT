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

int n;
int preOrder[1005], inOrder[1005];
// inOrder: dung de xet vi tri
// preOrder: dung de xet gia tri
void ktao(){
	cin >>n;
	for (int i=0;i<n;i++){
		cin >> inOrder[i];
	}
	for (int i=0;i<n;i++){
		cin >> preOrder[i];
	}
}
int search(int a[], int x){
	for (int i=0;i<n;i++){
		if(a[i] == x) return i;
	}
	return 0;
}

void buildTree(node *root, int in_left, int  in_right){
	int in_pos = search(inOrder, root->data);
	int pre_pos = search(preOrder, root->data);
	if(in_left < in_pos){
		// co node trai
		root->left = new node(preOrder[pre_pos+1]);
		buildTree(root->left, in_left, in_pos-1);
	}
	if(in_right> in_pos){
		// so luong phan tu ben trai
		int so_luong = in_pos - in_left +1;
		root->right = new node(preOrder[pre_pos+so_luong]);
		buildTree(root->right, in_pos+1, in_right);
	}
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
		ktao();
		node *root = new node(preOrder[0]);
		buildTree(root, 0, n-1);
		postOrder(root);
		cout <<endl;
	}
}
