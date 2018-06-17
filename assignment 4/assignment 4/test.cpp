//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//  int gross[100];
//  int i,total;
//  int range[9];
//  for (i=0;i<9;i++)
//  	range[i]=0;
//  gross[0]=0;
//  cout<<"Enter your gross , And enter any value less than zero to terminate\n";
//  for(i=1;gross[--i]>-1;i++)
//  {
//	  
//	 // range[i]=0;
//    cin>>gross[i];
//	total=200+(0.09*gross[i]);
//	if(total>=200 && total<=299)
//		++range[0];
//	else if(total>=300 && total<=399)
//		++range[1];
//	else if(total>=400 && total<=499)
//		++range[2];
//	else if(total>=500 && total<=599)
//		++range[3];
//	else if(total>=600 && total<=699)
//		++range[4];
//	else if(total>=700 && total<=799)
//		++range[5];
//	else if(total>=800 && total<=899)
//		++range[6];
//	else if(total>=900 && total<=999)
//        ++range[7];
//	else if(total>=1000)
//		++range[8];
//
//	
//  }
//    cout<<range[0]<< " people earned salary in this range ($200 to $299)" <<endl;
//	cout<<range[1]<< " people earned salary in this range ($300 to $399)" <<endl;
//	cout<<range[2]<< " people earned salary in this range ($400 to $499)" <<endl;
//	cout<<range[3]<< " people earned salary in this range ($500 to $599)" <<endl;
//	cout<<range[4]<< " people earned salary in this range ($600 to $699)" <<endl;
//	cout<<range[5]<< " people earned salary in this range ($700 to $799)" <<endl;
//	cout<<range[6]<< " people earned salary in this range ($800 to $899)" <<endl;
//	cout<<range[7]<< " people earned salary in this range ($900 to $999)" <<endl;
//	cout<<range[8]<< " people earned salary in this range ($1000 or >$1000)" <<endl;
//
//	return 0;
//	system("pause");
//}