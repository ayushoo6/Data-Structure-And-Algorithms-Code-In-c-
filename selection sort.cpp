#include<iostream>
using namespace std;
void selectionSort(int a[])
{
	for(int i=0;i<4;i++)
	{
		int min=i;
		for(int j=i+1;j<5;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			int temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
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
	selectionSort(arr);
	cout<<"sorted array list :"<<endl;
	for(int i=0;i<5;i++)
	{
	cout<<arr[i]<<" ";
	}
	
}
