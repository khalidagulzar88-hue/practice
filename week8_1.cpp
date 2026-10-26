#include<iostream>
using namespace std;
int main( ){
	int w,h,a,b,c;
	cout<<"enter the width :";
	cin>>a;
	cout<<"enter the height";
	cin>>b;
	cout<<"enter the depth";
	cin>>c;
	cout<<"enter the width:";
	cin>>w;
	cout<<"enter the height:";
	cin>>h;
	if((a=w)&&(b=h)||(b==w)&&(a==h)||(c=w)&&(a=h)||(a==w)&&(c==h)||(b=w)&&(c=h)||(c==w)&&(b==h))
	{
		cout<<"true";
	}else{
	cout<<"false";
}
    return 0;
}
