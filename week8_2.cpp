#include<iostream>
using namespace std;
int main(){
	int a,d,e,damage;
	cout<<"enter the type of attack";
	cin>>a;
	cout<<"enter the type of defence";
	cin>>d;
	damage=50*(a/d)*e;
	if(a=="fire"&& d=="grass"){
		e=2*damage;
	}if(a=="fire"&& d=="water"){
		e=0.5*damage;
	}
	{if(a=="fire"&& d=="electric"){
		e=1*damage;
	
	if(a=="water"&& d=="grass"){
		e=0.5*damage;
	
	if(a=="water"&& d=="electric"){
		e=0.5*damage;
	
	if(a=="grass"&& d=="electric"){
		e=1*damage;
}
} 
