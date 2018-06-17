#include <iostream >
using namespace std;
int main ()
{
	int a,b,c=0,d=0,l2,l3;
	char string1[400],string2[50],string3[50],string4[400];
	cout << "Input 1st string :";
	cin.getline (string1,400);
	
	cout << "Input 2nd string to find  :";
	cin.getline (string2,50);
	
	cout << "Input 3rd string to replace 2nd string :";
	cin.getline (string3,50);
	
	for (l2=0;string2[l2]!='\0';l2++ );		//find length of string2
	for (l3=0;string3[l3]!='\0';l3++ );		//find length of string3
	for (a=0;string1[a]!='\0';a++)
	{
		c=a;
		for (b=0;string2[b]!='\0';b++)						//do find string2 from string1 
		{
			if (string2[b]!=string1[c++])					
				break;									// if string1's character do not match with string2's character

		}
		
		
		if (b==l2)
		{
			                                         // string2 found 
			for(c=0;c<l3;c++)
			{
				string4[d++]=string3[c];				// replace string 3 
			}
			a=a+l2;							//remove sring2 from sring1
		}
		string4[d++]=string1[a];						// copy string1 to 

	}
	string4[d]='\0';      
	cout <<string4<<endl;
	return 0 ;
}
