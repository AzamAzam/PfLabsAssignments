//#include<iostream>
//using namespace std ;
//void main()
//{
//	char str [50];
//	int count[26]={0} ,k=0,max=0,n=0,ch='a';
//	cout << "enter characters : \n " ;
//	cin >> str ;
//	for (int i=0 ;str[i]!='\0';i++) 
//	{ 
//		if (str[i]>='a'&& str[i]<='z')
//		{
//			n=str[i]-97;
//			count[n]++;
//		}
//	}
//	for (int k=0 ;k<26 ;k++)  
//	{
//		if (count[k]>max )
//		{ 
//			max=count[k];
//		}
//	}
//	cout <<"the most repeated character is \n ";
//	for (int k=0;k<26;k++)
//	{ 
//		if (count[k]==max)
//			cout << static_cast<char>(ch) << " ";
//		ch++;
//	}
//}
