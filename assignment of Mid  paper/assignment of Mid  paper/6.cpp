#include<iostream >
using namespace std;
int main()
{
	int a, b, c, d, ans1, ans2;
	char op, ch;
	do
	{
		cout << "Enter numerator for first fraction: ";
		cin >> a;
		cout << "Enter denominator for first fraction: ";
		cin >> b;
		cout << "Enter Operator:";
		cin >> op;


		switch (op)
		{
		case '+':
			cout << "Enter numerator for second fraction: ";
			cin >> c;
			cout << "Enter denominator for second fraction: ";
			cin >> d;
			ans1 = (a*d + b*c);
			ans2 = (b*d);
			cout << a << "/" << b << op << c << "/" << d << " = " << ans1 << "/" << ans2;
			break;
		case'-':
			cout << "Enter numerator for second fraction: ";
			cin >> c;
			cout << "Enter denominator for second fraction: ";
			cin >> d;
			ans1 = (a*d - b*c);
			ans2 = (b*d);
			cout << a << "/" << b << op << c << "/" << d << " = " << ans1 << "/" << ans2;
			break;
		case '*':
			cout << "Enter numerator for second fraction: ";
			cin >> c;
			cout << "Enter denominator for second fraction: ";
			cin >> d;
			ans1 = (a*c);
			ans2 = (b*d);
			cout << a << "/" << b << op << c << "/" << d << " = " << ans1 << "/" << ans2;
			break;
		case '/':
			cout << "Enter numerator for second fraction: ";
			cin >> c;
			cout << "Enter denominator for second fraction: ";
			cin >> d;
			ans1 = (a*d);
			ans2 = (b*c);
			cout << a << "/" << b << op << c << "/" << d << " = " << ans1 << "/" << ans2;
			break;
		default:
			cout << "you enterd a wrong choice ";
		}
		cout << "\nDo you want to continue Y for Yes : ";
		cin >> ch;
	} while (ch == 'Y' || ch == 'y');
}
