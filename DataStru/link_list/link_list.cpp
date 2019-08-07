#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;

	node(int d)
	{
		this->data=d;
		next=NULL;
	}

};

void insert_At_Head(node*&head, int data)
{
	node* n= new node(data);
	n->next=head;
	head=n;
}

void display(node* head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	node* head=NULL;
	insert_At_Head(head, 5);
	insert_At_Head(head, 4);
	insert_At_Head(head, 3);
	insert_At_Head(head, 2);
	insert_At_Head(head, 1);
	display(head);

	return 0;
}