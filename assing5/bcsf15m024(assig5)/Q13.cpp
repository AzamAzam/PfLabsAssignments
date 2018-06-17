#include<iostream>
using namespace std;
int main()
{
	char pass[9];
	int l=0,low=0,u=0,d=0;
	cout << "Enter a six characters paaword \n";
	cin.getline(pass,9);
		for (int i=0; pass[i]!='\0';i++)
		{	l++;
		
		    if ( pass[i]>='A' && pass[i]='Z')
				u=1;
		if (pass[i]>='a'&& pass[i]<='z')
				low=1;
			if (pass[i]>='0'&&pass[i]<='9')
				d=1 ;
		}
		if (l>=6&& u==1 && d==1 && low ==1)
		{
			cout <<"Your password matches stated critera \n";
		} 
		else 
			cout << "ÿour password does not matches the stated criteria because \n" ;
		if (l<6)
		{  cout << "the length of the password is less than six" ;
		}
		if (u!=0)
			cout << "your password doesn't contain an uper case letter " ;
		if (d!=0)
			cout << "your password doesn't contain one digit" ;
		if (low!=0)
			cout  << "your password doesn't contain a lowercase letter" ;
}