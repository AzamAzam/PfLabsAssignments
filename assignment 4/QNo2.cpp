//#include <iostream>
//using namespace std;
//int  main ()
//{
//	int i,j,n,count=0,numbers[20];
//	cout << " Enter 20 numbers between 10 to 100 :";
//	i=0;
//	do{
//		cin >> n;
//		if (n<10 || n>100)
//		{
//			cout << "Enter A valid Numbers :";
//			continue ;
//		}
//		for (j=0;j<i;j++)
//		{
//			if (n==numbers[j])
//				break;
//		}		
//		if (j==i)
//			numbers[i++]=n;
//		count++;
//	
//	}while (count<20);
//	count =i;
//	if (count ==20)
//		cout << "It is worst case \n";
//	cout << "Non dublicte valus :";
//		for (i=0;i<count ;i++ )
//		{
//			cout <<numbers [i] << ", ";
//		}
//		cout << endl;
//}