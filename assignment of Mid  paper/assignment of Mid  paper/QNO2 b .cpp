/*Muhammad Azam
BCSF15M017 */
#include <iostream >
using namespace std ;
void main ()
{
	char user1 [30], user2[30];
	bool flag=false ;
	cin >> user1 >> user2;
	if (strcmp(user1,user2) == 0)
		flag =true;
	if (flag)
		cout << "TRUE";
	else 
		cout << "FALSE" ;
	cout <<endl ;
}