#include<iostream>
using namespace std;
int insertionSort(int a[])
{
	int key=0;
	int j=0;
	for(int i=1;i<5;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
			
		}
		a[j+1]=key;
	}
	
}

int main()
{
	int arr[5];
	cout<<"enter 5 integer element :"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"Unsorted array list :"<<endl;
	for(int i=0;i<5;i++)
	{
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
	insertionSort(arr);
	cout<<"sorted array list :"<<endl;
	for(int i=0;i<5;i++)
	{
	cout<<arr[i]<<" ";
	}
	
}
