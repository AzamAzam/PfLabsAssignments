//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//void main ()
//{
//	int r,c;
//	float mean2,mean3;
//	float mat1[7][7];
//	float mat2[7][7]={0},mat3[7][7]={0};	
//	srand(time(NULL));								//mat2 for 4 neighbours & mat3 for 8 nieghbours 
//	for (r=0;r<7;r++)
//	{
//		for(c=0;c<7;c++)
//		{
//
//			mat1[r][c]=rand()%10;
//			cout <<mat1[r][c]<<" ";
//		}
//	cout <<endl;
//	}
//	for (r=2;r<5;r++)
//	{
//		for(c=2;c<5;c++)
//		{
//			mean2=(mat1[r][c-1]+mat1[r][c+1]+mat1[r-1][c]+mat1[r+1][c]);
//			mean3=(mat1[r][c-1]+mat1[r][c+1]+mat1[r-1][c]+mat1[r+1][c]+mat1[r-1][c-1]+mat1[r+1][c-1]+mat1[r-1][c+1]+mat1[r+1][c+1]);
//		
//		mat2[r][c]=mean2/4;
//		mat3[r][c]=mean3/8;
//		}
//	}
//	/*	for (r=0;r<7;r++)
//		{
//			mat2[r][0]=0;
//			mat2[r][6]=0;
//			mat3[r][0]=0;
//			mat3[r][6]=0;
//		}
//	for (c=0;c<7;c++)
//	{
//			mat2[0][c]=0;
//			mat2[6][c]=0;
//			mat3[0][c]=0;
//			mat3[6][c]=0;
//	}*/
//	cout <<endl<<"mean of 4 neighbouts : \n";
//	for (r=0;r<7;r++)
//	{
//		for(c=0;c<7;c++)
//		{
//			
//			cout <<mat2[r][c]<<" ";
//		}
//		cout <<endl;
//	}
//	cout <<endl<<"mean of 8 neighbours : \n";
//	for (r=0;r<7;r++)
//	{
//		for(c=0;c<7;c++)
//		{
//			
//			cout <<mat3[r][c]<<" ";
//		}
//		cout <<endl;
//	}
//}
