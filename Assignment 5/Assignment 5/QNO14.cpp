//#include <iostream>
//using namespace std;
//void main ()
//{
//	int i,j;
//	char str1[50],str2[50];
//	cout <<"Enter first sentence :"<<endl;
//	cin.getline (str1,49);
//	str1[49]='\0';
//	cout <<"Enter second sentence to compare 1st sentence :"<<endl;
//	cin.getline(str2,49);
//	str2[49]='\0';
//	j=0;
//	for (i=0;str1[i]!='\0'&& str2[i]!='\0';i++)
//	{
//		if (str1[i]>='a' && str1[i]<='z')
//		{
//			if (str1[i]==str2[i] || str1[i] == str2[i] +32)				// charcter in 1st string are lowercase 
//				j++;
//		}
//		else if (str1[i]>='A' && str1[i]<='Z')						// charcter in 1st string are uppercase 
//		{
//			if (str1[i]==str2[i] || str1[i] == str2[i] -32)
//				j++;
//		}
//		else if (str1[i]==str2[i])								// special characters 
//			j++;
//
//	}
//	if (j==i)
//		cout << "same string ";
//	else 
//		cout << " Different ";
//	cout <<endl;
//}
