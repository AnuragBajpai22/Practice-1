#include<iostream>
#include<conio>

using namespace std;
void main()
{
	clrscr();
	int n;
	cin>>n;
	int i,j,temp,arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"The entered array is "<<arr<<endl;
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
	cout<<"The sorted array is "<<arr;
	getch();
	return 0;
}
