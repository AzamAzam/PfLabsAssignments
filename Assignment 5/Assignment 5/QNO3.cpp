//#include <iostream>
//using namespace std ;
//void main ()
//{
//	int i,j,k,len ;			
//	char str[100],substr[10];
//	cout << "Enter a large string : ";
//	cin.getline(str,99);
//	str[99]='\0';
//	cout <<"Enter substring which is to find from larger string  : ";
//	cin.getline (substr,9);
//	substr[9]='\0';
//	for (len=0;substr[len]!='\0';len++);				 //len is length of substring 
//
//	for (i=0;str[i]!='\0';i++)
//	{
//		k=i;
//		for (j=0;substr[j]!='\0';j++)
//		{
//			if (substr[j]!=str[k++])
//				break;
//
//		}
//		if (j==len)
//		{
//			cout <<"Substring Found  ";
//			break;
//		}
//
//	}
//	if (j!=len)
//		cout << "substring Not found ";
//
//	cout <<endl;
//}
