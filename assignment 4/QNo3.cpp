//#include<iostream>
//using namespace std;
//main ()
//{
//	int i,j,lowerLimit , uperLimit,index=0 ,prime[10];
//	cout << " Input lower Limit :";
//	cin >> lowerLimit ;
//	cout << "input Uper limit :";
//	cin >> uperLimit ;
//	
//	for (j=lowerLimit;j<=uperLimit ; j++)
//	{	
//		for (i=2;i<j;i++)		// loop for check prime Numbers  
//		{
//			if (j%i==0)
//				i=j+2; // loopbreak 
//		}
//		
//		
//		if (i==j)
//		{
//			prime [index]=i;
//			index++;
//		}
//	}
//	i=index;		// for printing only prime stored values
//	for (index=0;index<i;index++)
//	cout << prime[ index ]<< ", ";
//cout<< "\n";
//system("pause");
//}
//
