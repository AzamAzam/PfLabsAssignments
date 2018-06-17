#include<iostream>
using namespace std ;
int main()
{
	char str[100],count[25]={0};
	int ch=0,a=0;
	
	cout<<"enter characters upto 100 \n " ;
	cin.getline(str,100);
	cout <<"For upper case letters: \n ";
	cout << "__________________________ \n ";
	for (int i=0;str[i]!='\0';i++)
	{ 
		if (str[i]>='A'&& str[i]<='Z' )
            count[str[i]-'A']++;
	}
	for (int i=0 ; i<26;i++)
	{
		if (count[i]!=0)
		{
			cout <<"Frequency table : "<< "\t\t" << "Upper case \n" ;
			cout << static_cast<char>(i+'A') << "\t\t"<< static_cast<int>(count[i])<< "\n" ;
		}
	}
	 cout << "for lower case letters: \n " ;
	 cout <<"__________________________  \n" ;
	 for (int i=0;str[i]!='\0';i++)
	 {
		 if (str[i]<='a'&& str[i]>='z')
			 count[str[i]-'a']++ ;
	 }
	 for (int i=0;i<26;i++) 
	 {    
		 if (count[i]!=0)
		 { 
			 cout<< "Frequency Table :"<< "\t\t"<< "lowercase \n";
			 cout << static_cast<char>(i+'a')<< "\t\t"<< static_cast<int>(count[i])<< "\n";
		 }
	 }
	 cout <<" the pictogram for upper case letter is \n " ;
	 cout << "_______________________________________ \n" ;
	 for (int i=0 ;str[i]!='\0';i++ )
	 {

		 if (str[i]>='A'&& str[i]<='Z')
			 count[str[i]-'A']++;
	 }
	 for (int i=0;i<26;i++)
	 {
		 if (count[i]!=0)
		 {
			 cout<< static_cast<char>(i+'A')<< "\t\t";
			 a=static_cast<int> (count[i]);
			 while (ch<=a)
			 {
				 cout << 'char(178)' ;
				 ch++ ;
			 }
			 cout << "\n" ;
			 ch=0 ;
		 }
	 }
}









