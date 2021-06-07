/*
Number 
pattern 4
row1 11111
row2 10001
row3 10001
row4 10001
row5 11111
*/
#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"Input rows:";
	cin>>r;
	cout<<"Input columns:";
	cin>>c;
	for(int row=1;row<=r;row++)
	{
		for(int col=1;col<=c;col++)
		{
			if(col==1||col==c||row==r||row==1)
			{
				cout<<"1";
			}
		else
			{
				cout<<"0";
			}
		}
		cout<<endl;
	}
	return 0;
}
