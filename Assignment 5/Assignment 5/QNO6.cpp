//#include <iostream>
//using namespace std;
//int main ()
//{
//	int i,index,repeat=0;
//	char  str[200], ch='0';
//	int	count [80]={0};
//
//	cout <<"Enter a string to check  highest occurences in it :"<<endl;
//	cin.getline (str,199);
//	str[199]='\0';
//
//	for (i=0;str[i]!='\0';i++)
//	{
//		index=(str[i])-48;
//		count[index]++;
//	}
//
//	for (i=0;i<79;i++)
//	{
//		if (count [i]>repeat )						//repeat is max character occurence
//		{
//			repeat=count[i];
//			
//		}
//	}
//
//	cout << "Max character repeated \" "<<repeat<<"  times "<<endl;
//	for (i=0;i<80;i++)								// print repated characters
//	{
//		if (count [i]==repeat)
//			cout <<ch<<", ";									
//		ch++;
//	}
//
//	cout <<endl;
//}
