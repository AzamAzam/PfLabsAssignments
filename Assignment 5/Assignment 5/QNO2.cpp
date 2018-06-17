//#include <iostream >
//using namespace std;
//void main ()
//{
//	int i ;
//	char str [100];
//	cout<< "Enter a string to  capitalize  the  first  character  of  each  sentence :";
//	cin.getline (str,99);
//	if (str[0]>='a' && str[0]<='z')			// to capitilize first character of the string 
//				str[0]=str[0]-32;
//	for (i=1;str[i]!='\0';i++)
//	{
//		if (str[i]=='.')					//find fullstop(.)
//		{
//			i++;							//move next character
//			if (str[i]==' ')				//find space after full stop
//			{
//				i++;				// to move to next character
//				if (str[i]>='a' && str[i]<='z')			// to capitilize first character of every sentence
//					str[i]=str[i]-32;
//				i++;
//			}
//		}
//		if (str[i]>='A' && str [i]<='Z')
//			str[i]=str[i]+32;
//	}
//	cout << str;
//	cout <<endl;
//}
