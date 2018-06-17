//#include <iostream>
//using namespace std;
//double getSales(char []);
//void findHighest (double sale[]);
//void main ()
//{
//	double  sale[4];
//	sale[0]=getSales("Northest");
//	sale[1]=getSales("Southest");
//	sale[2]=getSales("Northwest");
//	sale[3]=getSales("Southwest");
//	findHighest( sale );
//	cout <<endl;
//}
//double getSales(char division[])
//{
//	double sale; 
//	cout <<"Enter sales of "<<division<<" : ";
//	do 
//	{
//		cin >>sale ;
//		if (sale >=0)
//			return sale ;
//		else 
//			cout <<"Dont enter less than 0\n Enter greater than 0 ;";
//	}while (sale>=0);
//}
//void findHighest(double sale[])
//{
//	int i, max=0 ;
//	for (i=0;i<4;i++)
//		if(sale [i]>max )
//			max=sale[i];
//	if (max==sale [0])
//		cout <<"Northest has greatest sale that is "<<sale[0];
//	else if (max==sale [1])
//		cout <<"Southest has greatest sale that is "<<sale[1];
//	else if (max==sale [2])
//		cout <<"Northwest has greatest sale that is "<<sale[2];
//	else if (max==sale [3])
//		cout <<"Southest has greatest sale that is "<<sale[3];
//}
//
