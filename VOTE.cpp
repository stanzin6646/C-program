#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age:\n";
	cin>>age;
	if(age<18)
	{
	cout<<"You are not eligible for vote\n";	
	} 
	if(age>=18)
	{
	cout<<"You are eligible for vote";
	}
	return 0;
}
