//#include <iostream>
//using namespace std;
//void main ()
//{
//	int i,sum=0,length=0;
//	char high='0',low='9',str[50];
//	cout <<"Enter a  series  of  single  digit  numbers : ";
//	cin >>str;
//
//	for (i=0;str[length]!='\0';length++)			//calulate length of string 
//	{ 
//		if (str[i]>='0' && str[i]<='9')				//if number is in range or not 
//		{
//			sum=sum+str[i]-48;						//sum of digits 
//			
//			if(str[i]>=high)
//				high=str[i];
//			if (str[i]<=low )
//				low=str[i];
//
//			i++;
//		}
//
//	}
//	if (i==length)							//input validation 
//
//	cout <<"Sum = "<< sum <<endl<<"Highest = "<<high<<endl<<"Lowest = "<<low <<endl;
//	else 
//		cout <<" You entered Wrong Input \n Enter digits :"<<endl;
//}
