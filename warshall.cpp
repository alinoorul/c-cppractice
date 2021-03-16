#include<iostream>
using namespace std;
class matrix
{
	int mat[4][4],r,c;

public:
	matrix(){r=c=0;}
	void input();
	void display();
	void warshall();
};
void matrix :: input()
{
	cin>>r>>c;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
			cin>>mat[i][j];
	}
}
void matrix::display()
{
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
			cout<<" "<<mat[i][j];
		cout<<endl;
	}
}
void matrix::warshall()
{
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			for(int k=0; k<r; k++)
			mat[i][j]=mat[i][j]|(mat[i][k]&mat[k][j]);
		}
	}
	display();
}
int main()
{
	matrix m;
	m.input();
	m.display();
	m.warshall();
	return 0;
}
