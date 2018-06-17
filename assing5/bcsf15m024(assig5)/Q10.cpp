#include <iostream>
using namespace std ;
void main ()
{
	char month [30] ;
	cout << "enter date in form of mm/dd/yyyy" <<endl ;
	cin.getline(month,30);
	cout << "enter date in form of month//dd//yyyy"<< endl ;
	if (month[0]=='0' && month[1]=='1')
		cout << "january " ;
	else if (month [0]=='0'&& month[1]=='2')
		cout << "February ";
	else if (month [0]=='0'&& month[1]=='3')
		cout << "March ";
 else if (month [0]=='0'&& month[1]=='4')
		cout < "April";
	else if (month [0]=='0'&& month[1]=='5')
		cout << "May ";
		else if (month [0]=='0'&& month[1]=='6')
		cout << "June ";
		else if (month [0]=='0'&& month[1]=='7')
		cout << "July";
		else if (month [0]=='0'&& month[1]=='8')
		cout << "August ";
		else if (month [0]=='0'&& month[1]=='9')
		cout << "September  ";
		else if (month [0]=='1'&& month[1]=='0')
		cout << "October ";
		else if (month [0]=='1'&& month[1]=='1')
		cout << "November ";
		else if (month [0]=='1'&& month[1]=='2')
		cout << "December";

		cout << month;
}

