#include<iostream>
#define R 3
#define C 2
using namespace std;
int main ()
{
	int i,r,c;
	int mat1[R][C],mat2[C][R];
	cout <<"Enter  matrix (3 row * 2 column ): \n";
	for (r=0;r<R;r++)
	{
		for (c=0;c<C;c++)
		cin >> mat1[r][c];
	}
	for (r=0;r<C;r++)
	{
		for (c=0;c<R;c++)
		mat2[r][c]=mat1[c][r];
	}
	cout <<"transpose is :\n";
	for (r=0;r<C;r++)
	{
		for (c=0;c<R;c++)
		cout<< mat2[r][c]<<"\t";
		cout <<endl;
	}
 cout<< "\n";
 system("pause");
}

