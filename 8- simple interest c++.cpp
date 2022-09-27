#include<iostream>
using namespace std;
int main()
{
	int p,r,t,i,y,n; 	
	cout<<" enter the principle amount : ";
	cin>>p;
	cout<<" enter the no of years: ";
	cin>>t;
	cout<<" Is customer senior citizen (y/n) ";
	cin>>r;
	
	if (r==y)
	{
		i=(p*t*10)/100;
		cout<<"interest "<<"="<<i;
		cout<<endl;
	}
	else if (r==n)
	{
	i=(p*r*12)/100;
	cout<<" interest "<<"="<<i;
    cout << endl;
    }
	return 0;
}
