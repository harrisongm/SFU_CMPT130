#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "Enter an integer";
	cin >> n;

	if (n >= 100)
	{
		cout << "You entered a big positive number." << endl;
	}

	else if (n <= -100)
	{
		cout <<"You entered a big negative number." << endl;
	}

	else if (n < 100 && n > 0)
	{
		cout << "You entered a small positive number." << endl;
	}

	else if (n > -100 && n < 0)
	{
		cout << "You entered a small negative number." << endl;
	}

	system("pause");
	return 0;
}