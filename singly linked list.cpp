#include<iostream>
using namespace std;
class Node{
	public:
		int key,data;
		Node* next;
	Node()
	{
		key=0;
		data=0;
		next=NULL;
	}
	Node(int k,int d)
	{
		key=k;
		data=d;
	}
};
class SinglyLinkedList{
	public:
		Node* head;
		SinglyLinkedList()
		{
			head=NULL;
		}
		SinglyLinkedList(Node *n)
		{
			head=n;
		}
		Node* nodeExists(int k)
		{
			Node* temp=NULL;
			Node* ptr=head;
			while(ptr!=NULL)
			{
				if(ptr->key==k)
				{
					temp=ptr;
				}
				ptr=ptr->next;
			}
			return temp;
			}
		void append(Node* n)
		{
			if(nodeExists(n->key)!=NULL)
			{
				cout<<"Node already exists"<<n->key<<". Append another node with different key"<<endl;
			}
			else{
				if(head==NULL)
				{
					head=n;
					cout<<"Node appended"<<endl;
				}
				else
				{
					Node *ptr=head;
					while(ptr->next!=NULL)
					{
						ptr=ptr->next;
					}
					ptr->next=n;
					cout<<"Node Appended"<<endl;
				}
			}
		}
		void prepend(Node* n)
		{
			if(nodeExists(n->key)!=NULL)
			{
				cout<<"Node already exists"<<n->key<<". Append another node with different key"<<endl;
			}
			else
			{
				n->next=head;
				head=n;
				cout<<"Node prepended"<<endl;
			}
		}
		void insert(int k,Node* n)
		{
			Node* ptr=nodeExists(k);
			if(ptr==NULL)
			{
				cout<<"NO Node Exists with the key value:"<<k<<endl;
			}
			else
			{
			if(nodeExists(n->key)!=NULL)
			{
				cout<<"Node already exists"<<n->key<<". Append another node with different key"<<endl;
			}
			else
			{
				n->next=ptr->next;
				ptr->next=n;
				cout<<"node inserted"<<endl;
				
			}
			}
		}
		
		void deleteNode(int k)
		{
			if(head==NULL)
			{
				cout<<"Cannot delete "<<endl;
			}
			else if(head!=NULL)
			{
				if(head->key==k)
				{
					head=head->next;
					cout<<"Node Unliked with key value: "<<k<<endl;
				}
				else
				{
					Node* temp=NULL;
					Node* prevptr=head;
					Node* currentptr=head->next;
					while(currentptr!=NULL)
					{
						if(currentptr->key==k)
						{
							temp=currentptr;
							currentptr=NULL;
						}
						else
						{
							prevptr=prevptr->next;
							currentptr=currentptr->next;
						}
					}
					if(temp!=NULL)
					{
						prevptr->next=temp->next;
						cout<<"Node Unlinked"<<k<<endl;
					}
					else
					{
						cout<<"Node doesn't exists with the key: "<<k<<endl;
					}
				}
				
			}
		}
		void update(int k,int d)
		{
			Node* ptr=nodeExists(k);
			if(ptr!=NULL)
			{
				ptr->data=d;
				cout<<"Node updated "<<endl;
				
			}
			else
			{
				cout<<"Node doesn't exits with the key : "<<k<<endl;
			}
		}
		void display()
		{
			if(head==NULL)
			{
				cout<<"No nodes :"<<endl;
			}
			else{
				cout<<"Singly Linked list values "<<endl;
				Node* temp=head;
				while(temp!=NULL)
				{
					cout<<"("<<temp->key<<","<<temp->data<<")-->"<<endl;
					temp=temp->next;
				}
			}
		}
};
int main()
{
	SinglyLinkedList s;
	int option,key1,k1,data1;
	do
	{
		cout<<"Enter choice \nEnter 0 to exit"<<endl;
		cout<<"1.Append"<<endl;
		cout<<"2.Prepend"<<endl;
		cout<<"3.Insert"<<endl;
		cout<<"4.Delete"<<endl;
		cout<<"5.Update"<<endl;
		cout<<"6.Display"<<endl;
		cout<<"7. Clear Screen"<<endl;
		cin>>option;
		
		Node* n1=new Node();
		switch(option)
		{
			case 0:
				break;
			case 1:
				cout<<"Append Node \nEnter key&data to the node to be append : "<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				s.append(n1);
				break;
			case 2:
				cout<<"Prepend Node \nEnter key&data to the node to be prepend : "<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				s.prepend(n1);
				break;
			case 3:
				cout<<"Insert Node where you want to insert"<<endl;
				cin>>k1;
				cout<<"Insert Node \nEnter key&data to the node to be insert : "<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				s.insert(k1,n1);
				break;
			case 4:
				cout<<"Delete node by key operation \nEnter the key of the node to be deleted :"<<endl;
				cin>>k1;
				s.deleteNode(k1);
				break;
			case 5:
				cout<<"Update"<<endl;
				cin>>key1;
				cin>>data1;
				s.update(key1,data1);
				break;
			case 6:
				s.display();
				break;
			case 7:
				system("cls");
				break;
			default:
				cout<<"Enter a valid choice"<<endl;
				break;
			
		}
	}
	while(option!=NULL);
	return 0;
}
