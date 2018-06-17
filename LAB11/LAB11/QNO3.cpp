//#include <iostream>
//using namespace std;
//void main ()
//{
//	int A[3][3],B[3][3];
//	float	R[3][3];
//	int c,r,k,sum;
//	cout <<"Enter first matrix : \n";
//
//	for (r=0;r<3;r++)
//	{
//		for (c=0;c<3;c++)
//		{
//			cin >>A[r][c];
//		}
//
//	}
//	cout <<"Enter second matrix : \n";
//	for (r=0;r<3;r++)
//	{
//		for (c=0;c<3;c++)
//		{
//			cin >>B[r][c];
//		}
//
//	}
//	//cout <<"Multiplication A*B: \n";
//	for (r=0;r<3;r++)
//	{
//		for (c=0;c<3;c++)
//		{
//			sum=0;
//			for (k=0;k<3;k++)
//			{
//				sum=sum+A[r][k]*B[k][c];
//			}
//			R[r][c]=sum;
//		//	cout <<sum<<" ";
//		}
//		//cout <<endl;
//
//	}
//	cout <<"REsultant Matrix : \n";
//	for (r=0;r<3;r++)
//	{
//		for (c=0;c<3;c++)
//		{
//			R[r][c]=(4*A[r][c]+B[r][c]/10)-R[r][c];
//			cout <<R[r][c]<<" ";
//		}
//		cout <<endl;
//
//	}
//	cout <<endl;
//}
