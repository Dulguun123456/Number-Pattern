/*
Number 
pattern3

row1 01010
row2 01010
row3 01010
row4 01010
row5 01010
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
			if(col%2==0)
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
