#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"Enter elements:\n";
	
	for (int i=0;i<5;i++)
    cin>>arr[i];
    
	cout<<"You entered are:\n";
	for (int i=0;i<5;i++)
	cout<<endl<<*(arr+i);
	return 0;
}
