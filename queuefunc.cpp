#include<iostream>
using namespace std;
class Queue{
	private:
		int arr[5];
		int rear,front;
	public:
		Queue()
		{
		front=-1;
		rear=-1;
		for(int i=0;i<5;i++)
		{
			arr[i]=0;
		}	
		}
		bool isEmpty()
		{
			if(front==-1 || rear==-1)
			return true;
			else 
			return false;
		}
		bool isFull()
		{
			if(rear==4)
			return true;
			else 
			return false;
		}
		void Enqueue(int val)
		{
			if(isFull())
			cout<<"Queue is Full"<<endl;
			else if(isEmpty())
			{
				rear=0;
				front=0;
				arr[rear]=val;
			}
			else
			{
				rear++;
				arr[rear]=val;
			}
		}
		int Dequeue()
		{
			int x=0;
			if(isEmpty())
			{
			cout<<"Queue is Empty"<<endl;
			return 0;
			}
			else if(front==rear)
			{
				x=arr[front];
				arr[front]=0;
				front=-1;
				rear=-1;
				return x;
			}
			else
			{
				x=arr[front];
				arr[front]=0;
				front++;
				return x;
			}
		}
		int count()
		{
			return(rear-front+1);	
		}	
		void display()
		{
			cout<<"All Value"<<endl;
			for(int i=0;i<5;i++)
			{
				cout<<arr[i]<<endl;
			}
		}
	
};
int main()
{
	Queue q1;
	int option,value;
	do
	{
		cout<<"Enter what choice you want to perform? Select the no. \n Enter 0 to exit"<<endl;
		cout<<"1. Enqueue"<<endl;
		cout<<"2. Dequeue"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. Count"<<endl;
		cout<<"6. Display"<<endl;
		cout<<"7. Clear screen"<<endl;
		cin>>option;
		switch(option)
		{
			case 1:
				cout<<"Enqueue operations: "<<endl;
				cin>>value;
				q1.Enqueue(value);
				break;
			case 2:
				cout<<"Dequeue Operation :"<<q1.Dequeue()<<endl;
				break;
			case 3:
				if(q1.isEmpty())
				{
					cout<<"queue is Empty"<<endl;
				}
				else
				cout<<"queue is not empty"<<endl;
				break;
			case 4:
				if(q1.isFull())
				{
					cout<<"queue is Full"<<endl;
				}
				else
				cout<<"queue is not Full"<<endl;
				break;
			case 5:
				cout<<"count operation \n Count value in queue:"<<q1.count()<<endl;
				break;
			case 6:
				cout<<"Display Operation"<<endl;
				q1.display();
				break;
			case 7:
				system("cls");
				break;
			default :
				cout<<"Enter a valid choice"<<endl;
				break;
		}
		
	}
	while(option!=0);
	return 0;
}
