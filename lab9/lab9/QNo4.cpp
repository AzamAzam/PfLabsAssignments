#include <iostream>
using namespace std ;
void main ()
{
	int i,n, numb[50];
	cout << "Enter number of valus , you want to perform addition : ";
	cin >> n;
	cout << "Enter numbers you want to add : ";
	numb[n]=0;
	for (i=0; i<n;i++  )
	{
		cin >> numb[i];
		numb[n]=numb[n]+numb[i];
	}
	cout << "Average  of entered Numbers ="<<static_cast<float> (numb [n])/n;
	cout<<endl;
}