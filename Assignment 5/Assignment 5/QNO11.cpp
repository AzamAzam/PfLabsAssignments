//#include <iostream>
//using namespace std;
//void main ()
//{
//	int i,j;
//	char str1 [200],str2[200];
//	cout <<"Enter a string with capital of first character of each word and without spaces    : ";
//	cin.getline (str1,199);												 
//	str1 [199]='\0';
//	
//	if (str1[0]>='a'&& str1[0]<='z')			//make first character capital of string 
//		str2[0]=str1[0]-32;
//	else 
//		str2[0]=str1[0];
//	j=1;
//	for (i=1;str1[i]!='\0';i++)
//	{
//		if (str1[i]>='A' && str1[i]<='Z' )						//found  chracter capital, add a space before it and convert to small
//		{
//			str2[j++]=' '; 
//			str2[j++]=str1[i]+32;
//		}
//		else 
//		{
//			str2[j]=str1[i];
//			j++;
//		}
//	}
//	str2[j++]='.';
//	str2[j]='\0';
//	cout << "Formated string is : \n"<<str2<<endl;
//}
