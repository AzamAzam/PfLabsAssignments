#include <iostream >
using namespace std;
void main ()
{
	int i,j,k=0,l=0,len2,len3;
	char str1[200],str2[30],str3[30],str4[200];
	cout << "Enter a string1 :";
	cin.getline (str1,199);
	str1[199]='\0';
	cout << "Enter a string2 to find  :";
	cin.getline (str2,29);
	str2[29]='\0';
	cout << "Enter a string3 to replace string2 :";
	cin.getline (str3,29);
	str3[29]='\0';
	for (len2=0;str2[len2]!='\0';len2++ );		//find length of string2
	for (len3=0;str3[len3]!='\0';len3++ );		//find length of string3
	for (i=0;str1[i]!='\0';i++)
	{
		k=i;
		for (j=0;str2[j]!='\0';j++)						//loop to find string2 from string1 
		{
			if (str2[j]!=str1[k++])					
				break;									// if string1's character not match to  string2's

		}
		
		
		if (j==len2)
		{
			                                         // string2 found 
			for(k=0;k<len3;k++)
			{
				str4[l++]=str3[k];				// replace string 3 
			}
			i=i+len2;							//remove sring2 from sring1
		}
		str4[l++]=str1[i];						// copy string1 to 

	}
	str4[l]='\0';      
	cout <<str4<<endl;
}