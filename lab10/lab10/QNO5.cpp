#include <iostream>
using namespace std;
void main ()
{
	int i, j,p ;
	char type;
	int account [100], blnc[100];
	do
	{

		cout << "Enter transaction type ";
		cin>>type;
		switch(type)
		{
		case  'O':
		case 'o':
			break;
		case 'B':
		case 'b':
			break ;
		case  'W':
		case 'w':
			break;
		case  'D':
		case 'd':
			break;
		case  'C':
		case 'c':
			
			break ;
		case 'I':
		case 'i':
			break;
		case 'P':
		case 'p':
				break ;
		case 'E':
		case 'e':
				break ;
		default :
		}
	}while (type!='E');

}
