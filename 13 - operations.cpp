#include<iostream>
using namespace std;
int main()
{
	int n1,n2,operation;
    cout<<"enter ur choice:\n 1. for addition\n 2.for subtraction\n 3. for multiplication\n 4. for division\n";
 	cin>>operation;
 	cout<<"enter two numbers:\n";
 	cin>>n1>>n2;
 	switch(operation)
 	{
 	case 1:
 		cout<<"addition of numbers = "<<n1+n2;
		break;
 	case 2:
 		cout<<"subtraction of numbers = "<<n1-n2;
		break;
 	case 3:
 		cout<<"multiplication of numbers = "<<n1*n2;
		break;
 	case 4:
 		cout<<"division of numbers = "<<n1/n2;
		break;
    }
 	return 0;
}
