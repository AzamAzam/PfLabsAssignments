#include <iostream>
using namespace std;
void main ()
{
	int i,j;
	char str1[30],str2[30];
	cout <<"Enter first sentence :"<<endl;
	cin.getline (str1,29);
	str1[29]='\0';
	cout <<"Enter second sentence  :"<<endl;
	cin.getline(str2,29);
	str2[29]='\0';
	j=0;
	for (i=0;str1[i]!='\0'&& str2[i]!='\0';i++)
	{
		if (str1[i]>='a' && str1[i]<='z')
		{
			if (str1[i]==str2[i] || str1[i] == str2[i] +32)				// charcter in 1st string are lowercase 
				j++;
		}
		else if (str1[i]>='A' && str1[i]<='Z')						// charcter in 1st string are uppercase 
		{
			if (str1[i]==str2[i] || str1[i] == str2[i] -32)
				j++;
		}
		else if (str1[i]==str2[i])
			j++;

	}
	if (j==i)
		cout << "same string ";
	else 
		cout << " Different ";
	cout <<endl;
}
