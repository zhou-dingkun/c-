

#include<iostream>;
using namespace std;
int main()
{
	int a, b, c, d = 0;
	for (int e = 0; e <= 10; ++e)
	{
		a = rand() % 100 + 1;
		b = rand() % 100 + 1;
		cout << a << "+" << b << "=" << endl;
		cin >> c;
		if (a + b == c)
		{
			cout << "¶Ô" << endl;
			d = d + 1;

		}
		else
		{
			cout << "´í" << endl;
			d = d - 1;
		}

	}
	cout << d << endl;
}
