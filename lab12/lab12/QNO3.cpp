//#include <iostream>
//using namespace std;
//void getjudgeData (char,float & );
//void calcScore (float, float,float, float, float );
//float  findHighest (float, float,float, float, float );
//float findLowest (float, float,float, float, float );
//void main ()
//{
//	float i;
//	float score1=0,score2=0,score3=0,score4=0,score5=0;
//		getjudgeData('A',score1 );
//		getjudgeData('B',score2 );
//		getjudgeData('C',score3 );
//		getjudgeData('D',score4 );
//		getjudgeData('E',score5 );
//		cout <<endl;
//		calcScore(score1,score2,score3,score4,score5);
//		cout <<endl;
//		
//}
//void getjudgeData(char judge, float &x)
//{
//
//	cout <<"Enter score of judge "<<judge<<" : ";
//	do 
//	{
//		
//		cin>>x;
//		if (x<0 || x>10)
//			cout <<"Enter a valid score : ";
//	}while (x<0 || x>10);
//
//}
//void calcScore(float a,float b, float c,float d,float e)
//{
//	float max,min,avg ;
//	max=findHighest (a,b,c,d,e);
//	min=findLowest (a,b,c,d,e);
//	avg=(a+b+c+d+e-max-min)/3;
//	cout <<"average score = "<<avg;
//}
//float findHighest (float a, float b,float c , float d, float e)
//{
//	
//	if (a>b && a>c && a>d && a>e)
//		return a;
//	else if ( b>c && b>d && b>e)
//		return b;
//	else if ( c>d && c>e)
//		return c;
//	else if ( d>e)
//		return d;
//	else 
//		return e;
//}
//float findLowest (float a, float b,float c , float d, float e)
//{
//	
//	if (a<b && a<c && a<d && a<e)
//		return a;
//	else if ( b<c && b<d && b<e)
//		return b;
//	else if ( c<d && c<e)
//		return c;
//	else if ( d<e)
//		return d;
//	else 
//		return e;
//}
