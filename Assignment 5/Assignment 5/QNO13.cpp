//#include <iostream>
//#include <conio.h>
//using namespace std ;
//void main ()
//{
//	int i,lowercase=0,uppercase=0,digits=0;
//	char password[50];
//	cout << "Enter your password at least 6 characters (UPPERcase,lowercase & digits are necessary): ";
//	for (i=0;i<50 ;i++)
//	{
//		password[i]=getch();						
//		if ( password[i]==13)					// 13 is ascii of cariage return
//			break;
//
//		else if (password[i]>='a' && password[i]<='z')
//			lowercase++;
//		
//		else if (password[i]>='A' && password[i]<='Z')
//			uppercase++;
//
//		else if (password[i]>='0' && password[i]<='9')
//			digits++;
//		cout <<"*";
//
//	}
//	cout <<endl;
//	if (i<6)
//		cout <<"Enter at least 6 characters ";
//	else if (lowercase<1)
//		cout <<" Enter one lowercase character at least ";
//	else if (uppercase<1)
//		cout <<" Enter one upperercase character at least ";
//	else if (digits<1)
//		cout <<" Enter one Digit at least ";
//	else 
//		cout <<"Password successfully entered ";
//	 
//	cout <<endl;
//
//}
