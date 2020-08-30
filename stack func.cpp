#include<iostream>
#include<string>
using namespace std;
class Stack{
	private:
		int top;
		int arr[5];
	public:
		Stack()
		{
			top=-1;
			for(int i=0;i<5;i++)
			{
				arr[i]=0;
			}
		}
		bool isEmpty()
		{
			if(top==-1)
			return true;
			else
			return false;
		}
		bool isFull()
		{
			if(top==4)
			return true;
			else
			return false;
		}
		void push(int val)
		{
			if(isFull())
			{
				cout<<"Stack overflow"<<endl;
			}
			else
			{
				top++;
				arr[top]=val;
			}
		}
		int pop()
		{
			if(isEmpty())
			{
				cout<<"Stack overflow"<<endl;
			}
			else
			{
				int popvalue=arr[top];
				arr[top]=0;
				top--;
				return popvalue;
			}
		}
		int count()
		{
			return(top+1);
		}
		int peek(int pos)
		{
			if(isEmpty())
			{
				cout<<"underflow"<<endl;
				return 0;
			}
			else
			{
				return arr[pos];
			}
		}
		void change(int val,int pos)
		{
			arr[pos]=val;
			cout<<"position value changed"<<endl<<pos;
		}
		void display()
		{
			cout<<"Value of stack"<<endl;
			for(int i=4;i>=0;i--)
			{
				cout<<arr[i]<<endl;
			}
		}
		
};
int main()
{
	Stack s1;
	int option,position,value;
	do
	{
		cout<<"perform the operations between 1 to 9 and press 0 to exit: "<<endl;
		cout<<"1. Push()"<<endl;
		cout<<"2. Pop()"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. peek()"<<endl;
		cout<<"6. count()"<<endl;
		cout<<"7. change()"<<endl;
		cout<<"8. display()"<<endl;
		cout<<"9. clear screen"<<endl;
		cin>>option;
		switch(option)
		{
			case 1:
				cout<<"enter the stack item"<<endl;
				cin>>value;
				s1.push(value);
				break;
			case 2:
				cout<<"Enter the item for pop"<<s1.pop()<<endl;
				break;
			case 3:
				if(s1.isEmpty())
				cout<<"Stack is Empty"<<endl;
				else
				cout<<"Stack is not empty"<<endl;
				break;
			case 4:
				if(s1.isFull())
				cout<<"Stack is Full"<<endl;
				else
				cout<<"Stack is not Full"<<endl;
				break;
			case 5:
				cout<<"enter position we want to peek:"<<endl;
				cin>>position;
				cout<<"peek func"<<position<<" is "<<s1.peek(position)<<endl;
				break;
			case 6:
				cout<<"count func"<<s1.count()<<endl;
				break;
			case 7:
				cout<<"change func called"<<endl;
				cout<<"enter position we want to change:"<<endl;
				cin>>position;
				cout<<"enter value we want to put in :"<<endl;
				cin>>value;
				s1.change(position,value);
				break;
			case 8:
				cout<<"display:"<<endl;
				s1.display();
				break;
			case 9:
				system("cls");
				break;
			default:
				cout<<"enter a valid choice:";
		}
}
		while(option!=0);

}


