#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j,temp,arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"The entered array is ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	cout<<"The sorted array is ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	getch();
	return 0;
}
