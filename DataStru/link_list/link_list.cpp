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

void insertAtTail(node*&head,int data){
	if(head==NULL){
		insert_At_Head(head,data);
		return;
	}

	node* tail = head;

	while(tail->next!=NULL){
		tail = tail->next;
	}

	node* n= new node(data);
	tail->next = n;
}
int count=0;
int length(node* head)
{
	while(head!=NULL)
	{
		head=head->next;
		count++;
	}
	return count;
}

void delete_at_head(node* &head)

{
	node* temp=head;
	head= head->next;
	delete temp;
}



void deleteAtTail(node*head){
	node* prev = NULL;
	node* temp = head;

	while(temp->next!=NULL){
		prev = temp;
		temp = temp->next;
	}

	delete temp;
	prev->next = NULL;
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
	insertAtTail(head, 6);
	delete_at_head(head);
	deleteAtTail(head);
	display(head);
	cout<<length(head);

	return 0;
}