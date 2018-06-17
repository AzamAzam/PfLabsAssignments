#include <iostream >
using namespace std ;
int  main ()
{
	int l=1,totalLines=0 , numb=1,tSpaces,i ;
	char ch='A';
	cout <<"Enter Total Lines to be printed : ";
	cin >>totalLines;
	tSpaces=totalLines;
	while (l<=totalLines)
	{
		i=1 ;
		while (i <tSpaces )
		{
			cout <<"\t";
			i++;
		}
		i=1;
		if(l%2==0)
		{
			while (i<=l)
			{
				cout << ch++<<"\t";
				i++;
			}
		}
		else 
		{
			while (i<=l)
			{
				cout <<numb++<<"\t";
				i++;
			}
		}
		l++;
		cout<<endl;
		tSpaces--;
	}
}
