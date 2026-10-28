#include<iostream>
using namespace std;
int main()
{
	int points_for_a_basketballgame;
	int amount_of_2pointer_scored;
	int amount_of_3pointer_scored;
	int final_points;
	cout<<"enter the points for a basketball game"<<endl;
	cin>>points_for_a_basketballgame;
	cout<<"enter the amount of 2 pointer scored"<<endl;
	cin>>amount_of_2pointer_scored;
	cout<<"enter the amount of 3 pointer scored"<<endl;
	cin>>amount_of_3pointer_scored;
	final_points=(amount_of_2pointer_scored*2)+(amount_of_3pointer_scored*3);
	cout<<"final points"<<final_points<<endl;
	return 0;
}
