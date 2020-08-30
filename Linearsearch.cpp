#include<iostream>
using namespace std;
void Linearsearch(int a[],int n)
{
	int temp=-1;
	cout<<"enter element we want to search:"<<endl;
	for(int i=0;i<5;i++)
	{
		if(a[i]==n)
		{
			cout<<"element found at location"<<i<<endl;
			temp=0;
		}
	}
	if(temp==-1)
	{
		cout<<"no element found"<<endl;
	}
}
int main()
{
	int arr[5];
	cout<<"enter array element"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	int num;
	cout<<"Please enter the an element to search"<<endl;
	cin>>num;
	Linearsearch(arr,num);
}
