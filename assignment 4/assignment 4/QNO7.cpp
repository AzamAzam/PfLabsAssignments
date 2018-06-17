//#include <iostream>
//#include <conio.h>
//using namespace std ;
//void main ()
//{
//	int i, j,k,n,flag=0,carry=0;
//	char bin1[16],bin2[16],ans[16];
//	for (i=0;i<16;i++)
//	{
//		bin1[i]='0';
//		bin2[i]='0';
//		ans[i]='0';
//	}
//
//	cout << "how many digits have 1st binary (less than 15):" ;
//	cin >> n; 
//	if (n<=15)
//	{
//		cout <<" Enter a binary :";
//	
//		for  (i=n;i>0;i-- )
//		{
//		 
//			bin1[i] =getche();
//		
//			if (!(bin1[i]=='0' || bin1[i]=='1'))
//			{
//				cout << " You entered a wrong digit \nEnter binary again :";
//				i=n+1;
//			}
//
//		}
//	}
//	cout << "\nHow many digits have 2nd binary (less than 15):" ;
//	cin >> n; 
//	cout <<" Enter 2nd binary ";
//	for (j=n;j>0;j--)
//	{
//		bin2[j] =_getche();
//		
//		if (!(bin2[j]=='0' || bin2[j]=='1'))
//		{
//			cout << "You entered a wrong digit \n Enter binary again :";
//			j=n+1;
//		}
//	}
//	
//		
//		k=1;
//		i=1;
//		j=1;
//		while( i<16)
//		{ 
//			
//			if ( static_cast<int>(bin1[i])+static_cast<int>(bin2[j])+carry==96)
//			{
//				ans[k]='0';
//				carry=0;
//			}
//			else if (static_cast<int>(bin1[i])+static_cast<int>(bin2[j])+carry==97)
//			{
//				ans[k]='1';
//				carry=0;
//			}
//			else if (static_cast<int>(bin1[i])+static_cast<int>(bin2[j])+carry==98)
//			{
//				ans[k]='0';
//				carry=1;
//			}
//			else if (static_cast<int>(bin1[i])+static_cast<int>(bin2[j])+carry==99)
//			{
//				ans[k]='1';
//				carry=1;
//			}
//
//
//			k++;
//			i++;
//			j++;
//
//		}
//		
//		cout<< "\nAns= " ;
//		for (i=15;i>0;i--)
//		{
//			if (ans[i]=='1'||flag==1)
//			{
//				cout << ans[i];
//				flag=1;
//			}
//		}
//	
//	cout <<endl;
//}