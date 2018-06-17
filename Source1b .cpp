#include <iostream > 
using namespace std;
int  main ()
{
	int nWhite=0, nOther=0, nDigits=0;
	char c=0;
	
	while (c != '$')
	{
		cin.get(c );
		switch(c) 
		{
		case '0':  
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6': 
		case '7':
		case '8': 
		case '9':
			nDigits ++; 
			break;
		case ' ': 
		case '\n' : 
		case'\t':
			nWhite++; 
			break;
		default: 
			nOther++;
			break;
		}
	}
	cout << "Digits : "<< nDigits;
	cout << "\nOther Characters: " << nOther;
	cout << "\nWhite Spaces : " << nWhite<<endl;
	system ("pause ");

}
