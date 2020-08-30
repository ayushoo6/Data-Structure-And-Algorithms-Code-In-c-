#include<iostream>
using namespace std;
int BubbleSort(int a[])
{
	int round=0;
	int i,j;
	for(int i=0;i<5;i++)
	{
		round++;
		for(j=0;j<(5-i-1);j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"No. of rounds : "<<round<<endl;
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
	BubbleSort(arr);
	cout<<"sorted array list :"<<endl;
	for(int i=0;i<5;i++)
	{
	cout<<arr[i]<<" ";
	}
	
}
