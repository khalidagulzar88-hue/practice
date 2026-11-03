#include<iostream>
using namespace std;
int main()
{
	int units,bill;
	cout<<"enter the units";
	cin>>units;
	if(units<=300)
	{
		cout<<"rupees="<<300*3;
	}if(units>=500&&units<=500){
		cout<<"rupees="<<300*3;
		cout<<"rupees="<<200*5;
	}else(units>500)
	{
		cout<<"rupees="<<300*3;
		cout<<"rupees="<<200*5;
		cout<<"rupees="<<200*7;
	}
	
}
