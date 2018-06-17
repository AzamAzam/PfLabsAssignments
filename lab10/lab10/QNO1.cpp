//#include <iostream >
//using namespace std ;
//void main ()
//{
//	int  arr[300];
//	int i,j,len,max_index=0,flag,n;
//	cout <<"Enter how many numbers you want to enter : ";
//	cin>>n;
//	cout <<"Enter numbers : ";
//	for (i=0;i<n;i++)
//	{
//		cin>>arr[i];
//	}
//	len=i-1;					//length of array excluding -1
//	for (i=0;i<len;i++)
//	{
//		for(j=i;j<=len;j++)
//		{
//			if (arr[max_index]>arr[j])
//				max_index=j;
//		}
//		flag =arr[i];
//		arr[i]=arr[max_index];
//		arr[max_index]=flag;
//	}
//	cout << "Sorted Array :\n";
//	for (i=0;i<=len;i++)
//	{
//		cout <<arr[i]<<endl;
//	}
//
//}
