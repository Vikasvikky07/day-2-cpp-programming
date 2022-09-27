#include<iostream>
using namespace std;
int main()
{
	int y;
	cout<<"enter the age:";
	cin>>y;
	if(y>=18)
	{
		cout<<"eligible for voting\n";
	}
	else
	{
		cout<<"not eligible ";
		cout<<"\n years left for eligibility: "<<18-y;
	}
	return 0;
}
