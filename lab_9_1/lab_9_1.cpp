// lab_9_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << endl;
	if (fabs(xp) < 1 && fabs(xk) < 1) {

		cout << fixed;
		cout << "-------------------------------------------------" << endl;
		cout << "|" << setw(7) << "x" << "    |"
			<< setw(11) << "arcctg(x)" << "  |"
			<< setw(10) << "S" << "   |"
			<< setw(5) << "n" << "   |"
			<< endl;
		cout << "-------------------------------------------------" << endl;
		x = xp;

		while (x <= xk)
		{
			sum();

			cout << "|" << setw(10) << setprecision(2) << x << " |"
				<< setw(12) << setprecision(5) << atan(-x) + 4 * atan(1.0) / 2 << " |"
				<< setw(12) << setprecision(5) << s << " |"
				<< setw(7) << n << " |"
				<< endl;

			x += dx;

		}
		cout << "-------------------------------------------------" << endl;
	}
	else  cout << "NaN" << endl;
	cin.get();
	return 0;
}