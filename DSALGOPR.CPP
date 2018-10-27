#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,x=0;
	cout<<"Enter the no. of rows:";
	cin>>n;
	for(int i=n;i!=0;i--)
	{
		for(int j=(i-1);j!=0;j--)
		{
			cout<<" ";
		}
		for(int l=0;l<=x;l++)
		{
			cout<<"* ";
		}
		cout<<endl;
		x++;
	}
	getch();
}