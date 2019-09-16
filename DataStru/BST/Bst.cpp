#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node* left;
	node* right;

	node(int d)
	{
		this->data=d;
		left=NULL;
		right=NULL;
	}
};

node* buildTree()
{
	int data;
	cin>>data;

	if (data==-1)
	{
		return NULL;
	}

	node* root= new node(data);
	root->left=buildTree();
	root->right= buildTree();
	return root;

}

void displayPrOrder(node* root)

{
	if (root==NULL)
	{
		return ;
	}

	cout<<root->data<<" ";
	displayPrOrder(root->left);
	displayPrOrder(root->right);
}

void displayInOrder(node* root)

{
	if (root==NULL)
	{
		return ;
	}

	displayInOrder(root->left);
	cout<<root->data<<" ";
	displayInOrder(root->right);
}
void print(node* root)
{
	if (root==NULL)
	{
		return ;
	}
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);
}

int main(int argc, char const *argv[])
{
	node* root=buildTree();

	displayPrOrder(root);
	//print(root);
	cout<<endl;
	displayInOrder(root);

	return 0;
}