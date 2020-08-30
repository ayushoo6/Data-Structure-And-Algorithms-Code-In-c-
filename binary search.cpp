#include<iostream>
using namespace std;
int Binarysearch(int a[],int left,int right,int x)
{
	while(left<=right)
	{
		int mid=left+(right-left)/2;
		if(a[mid]==x)
		{
			return mid;
		}
		else if(a[mid]<x)
		{
			left = mid+1;
		}
		else 
		{
			right=mid-1;
		}
	
		
	}
	return -1;
}


int main()
{
int num;
int arr[10]; //={1,3,5,7,8,9,15,18,54,65};
int output;
cout<<"Enter the array element in ascending order :"<<endl;
for(int i=0;i<9;i++)
{
	cin>>arr[i];
}
cout<<"Enter the number want to search :"<<endl;
cin>>num;
output=Binarysearch(arr,0,9,num);
if(output==-1)
{
	cout<<"Match not Found"<<endl;
}
else
{
	cout<<"Match found at location : "<<output<<endl;
}
}
