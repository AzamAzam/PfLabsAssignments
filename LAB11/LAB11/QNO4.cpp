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
//	j=0;
//	bool start = true;
//	for (i=1;str1[i]!='\0';i++)
//	{
//		if (str1[i] >= 'A' && str1[i] <= 'Z' && start == true){
//			start = false;
//			str2[j++] = str1[i];
//		}
//		else if (str1[i] >= 'a' && str1[i] <= 'z' && start == true){
//			start = false;
//			str2[j++] = str1[i] - 32;
//		}
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