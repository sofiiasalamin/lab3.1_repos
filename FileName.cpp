#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;  //вхідний параметр
	double y;  //вихідний параметр
	double A;  //проміжний результат - функціонально стала частина виразу
	double B;  //проміжний результат - функціонально змінна частина виразу

	cout << "x= "; cin >> x;
	A = 4.95 * x * x;

	// спосіб 1: розгалуження в скороченій формі
	if (x <= -3.5)
		B = cos (3*x) - sin (x);
	if (-3.5<x && x<=1)
		B = atan((x+3.5)/5.0);
	if (x > 1)
		B = pow(x, -2) + 4;

	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// спосіб 2: розгалуження в повній формі
	if (x <= -3.5)
		B = cos (3*x) - sin (x);
	else
		if (x > 1)
			B = pow(x, -2) + 4;
		else
			B = atan((x+3.5)/5.0);

	y = A + B;
	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}
	 
