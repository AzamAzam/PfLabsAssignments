#include <iostream>
#include<iomanip>
using namespace std;
void main ()
{
	int i,count=1;
	char str[50];
	cout << "Enter a word ";
	cin.getline(str,5);
	for (i=0;str[i]!=NULL ;i++)
	{
		if (str[i]>='a' && str[i]<='z' )
			str[i]=static_cast<int>(str[i])-32;

	}
	cout <<str<<endl;
}

