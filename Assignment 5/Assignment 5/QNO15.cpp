//#include <iostream>
//using namespace std;
//int main ()
//{
//	int i,j,index;
//	char  str[400], ch;
//	int	count [60]={0};
//
//	cout <<"Enter a string to check  frequency table  :"<<endl;
//	cin.getline (str,399);
//	str[399]='\0';
//
//	for (i=0;str[i]!='\0';i++)
//	{
//		index=(str[i])-65;
//		count[index]++;
//	}
//	cout <<"Frequency Table: Uppercase"<<endl;
//	for (i=0;i<26;i++)											// to print uppercase letter frequency table   
//	{
//		if (count [i]>0)
//			cout <<static_cast<char>(i+65)<<" \t" <<count[i] <<endl;
//	}
//	
//	cout <<endl <<endl <<"Frequency Table: lowercase"<<endl;
//	for (i=32;i<58;i++)											// to print lowercase letter frequency table   32+26=58
//	{
//		if (count [i]>0)
//			cout <<static_cast<char>(i+65)<<" \t" <<count[i] <<endl;
//	}
//	cout <<"Pictogram for UPPER case Latter  :"<<endl;
//	for (i=0;i<26;i++)											// to print uppercase letter pictogram  
//	{
//		if (count [i]>0)
//		{
//			cout <<static_cast<char>(i+65)<<":\t";
//			for (j=1;j<=count [i];j++)
//				cout  <<char(219);
//			cout <<endl;
//		}
//		
//	}
//	
//}
