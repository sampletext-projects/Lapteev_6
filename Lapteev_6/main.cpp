#include <iostream>
#include <iomanip>

using namespace std;

double min(double k, double m)
{
	double res;
	if (k <= m)
	{
		res = k;
	}
	else
	{
		res = m;
	}
	return res;
}

int main()
{
	setlocale(LC_ALL, "russian");

	double x, y;
	
	cout << "Введите x: ";
	cin >> x;

	cout << "Введите y: ";
	cin >> y;

	double t = (min(x, y) - min(x * x, x - y)) / (1.2 + min(x * x, y * y));

	cout << "x: " << x << ", y: " << y << ", t: " << t << endl;

	system("pause");

	return 0;
}
