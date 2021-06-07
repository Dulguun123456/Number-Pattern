/*
Number 
Pattern 1
row1 11111
row2 11111
row3 11111
row4 11111
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
			cout<<"1";
		}
		cout<<endl;
	}
			
	return 0;
}
