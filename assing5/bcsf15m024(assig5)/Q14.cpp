#include<iostream>
using namespace std;
int main()
{
	char str1[30],str2[30];
	int i,j;
	     cout << "enter first string \n" ;
		cin.getline(str1,29) ;
		cout << "enter second string \n" ;
		cin.getline(str2,29);
		j=0;
		 for (int i=0;str1[i]='\0'; str2[i]='\0' ;i++)
		 { 
		if (str1[i]>='a' && str1[i]<='z')
		{
			if (str1[i]==str2[i] || str1[i] == str2[i] +32)				// charcter in 1st string are lowercase
				j++;
		}
		else if (str1[i]>='A' && str1[i]<='Z')						// charcter in 1st string are uppercase 
		{
			if (str1[i]==str2[i] || str1[i] == str2[i] +32)
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

