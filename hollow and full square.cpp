#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"enter the number of rows:";
	cin>>n;
	cout<<"--------HOLLOW SQUARE--------\n";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||j==1||j==n)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	cout<<"-------FULL SQUARE---------";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<"$";
		}
		cout<<"\n";
	}
	return 0;
}
