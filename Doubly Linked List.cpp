#include<iostream>
using namespace std;
class Node{
	public:
		int key;
		int data;
		Node* next;
		Node* prev;
		Node(){
			key=0;
			data=0;
			next=NULL;
			prev=NULL;
		}
		Node(int k,int d)
		{
			key=k;
			data=k;
		}
};
class DoublyLinkedList{
	public:
		Node* head;
		DoublyLinkedList()
		{
			head=NULL;
			
		}
		DoublyLinkedList(Node* h)
		{
			head=h;
		}
		Node* Exists(int k)
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
		void Append(Node* h)
		{
			if(Exists(h->key)!=NULL)
			{
				cout<<"Node exists"<<endl;
				
			}
			else{
				if(head==NULL)
				{
					head=h;
					cout<<"Node Appended"<<endl;
					
				}
				else{
					Node* ptr=head;
					while(ptr->next!=NULL)
					{
						ptr=ptr->next;
					}
					ptr->next=h;
					h->prev=ptr;
					cout<<"Node Appended"<<endl;
				}
			}
		}
		void Prepend(Node* h)
		{
				if(Exists(h->key)!=NULL)
			{
				cout<<"Node exists"<<endl;
				
			}
			else{
				if(head==NULL)
				{
					head=h;
					cout<<"Node prepended"<<endl;
					
				}
				else{
					head->prev=h;
					h->next=head;
					head=h;
					cout<<"Node Prepended "<<endl;
					
					
				}
			}
		}
		void Insert(int k,Node* h)
		{
			Node* ptr=Exists(k);
			if(ptr==NULL)
			{
				cout<<"Node exists"<<endl;
				
			}
			else{
					if(Exists(h->key)!=NULL)
			{
				cout<<"Node exists"<<endl;
				
			}
			else
			{
				Node* nextNode=ptr->next;
				if(nextNode==NULL)
				{
					ptr->next=h;
					h->prev=ptr;
					cout<<"Node Inserted"<<endl;
					
				}
				else
				{
					h->next=nextNode;
					nextNode->prev=h;
					h->prev=ptr;
					ptr->next=h;
					cout<<"Node Inserted"<<endl;
					
				}
			}
			}
		}
		void Delete(int k)
		{
			Node* ptr=Exists(k);
			if(ptr==NULL)
			{
				cout<<"Node exists"<<endl;
				
			}
			else{
				if(head->key==k)
				{
					head=head->next;
					cout<<"Node Unlinked"<<k<<endl;
					
				}
				else{
					Node* nextNode=ptr->next;
					Node* prevNode=ptr->prev;
					if(nextNode==NULL)
					{
						prevNode->next=NULL;
						cout<<"Node deleted at end"<<endl;
						
					}
					else{
						prevNode->next=nextNode;
						nextNode->prev=prevNode;
						cout<<"Node Deleted in b/w"<<endl;
					}
				}
			}
			
		}
		void Update(int k,int d)
		{
			Node* ptr=Exists(k);
			if(ptr!=NULL)
			{
				ptr->data=d;
				cout<<"Node data Updated"<<endl;
			}
			else
			{
				cout<<"Node doesn't exists"<<endl;
			}
			
		}
		void Print()
		{
			if(head==NULL)
			{
				cout<<"Node is not in the list"<<endl;
				
			}
			else
			{
				cout<<"Doubly Linked List"<<endl;
				Node* temp=head;
				while(temp!=NULL)
				{
					cout<<"("<<temp->key<<","<<temp->data<<") <-->"<<endl;
					temp=temp->next;
				}
			}
		}
};
int main()
{
	DoublyLinkedList obj;
	int option,k1,key1,data1;
	do{
		cout<<"what choice you want to enter ? Enter 0 for exit"<<endl;
		cout<<"1. Append"<<endl;
		cout<<"2. Prepend"<<endl;
		cout<<"3. Insert"<<endl;
		cout<<"4. Delete"<<endl;
		cout<<"5. Update"<<endl;
		cout<<"6. Print"<<endl;
		cout<<"7. Clear Screen"<<endl;
		cin>>option;
		Node* n1=new Node();
		switch(option)
		{
			case 0:
				break;
			case 1:
				cout<<"Append Node"<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				obj.Append(n1);
				break;
				
			case 2:
				cout<<"Prepend Node"<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				obj.Prepend(n1);
				break;
			
			case 3:
				cout<<"Insert Node"<<endl;
				cin>>k1;
				cout<<"enter key and new data"<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				obj.Insert(k1,n1);
				break;
			case 4:
				cout<<"Delete Node"<<endl;
				cin>>k1;
				obj.Delete(k1);
				break;
			case 5:
				cout<<"Update Node"<<endl;
				cin>>key1;
				cin>>data1;
				obj.Update(key1,data1);
				break;
			case 6:
				cout<<"print Node"<<endl;
				obj.Print();
				break;
			case 7:
				system("cls");
				break;
			default:
				cout<<"Enter valid choice"<<endl;
				break;
				
		}
	}
	while(option!=0);
	return 0;	
	
}
