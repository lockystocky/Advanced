#include <iostream>
#include <fstream>
#include <set>
#include <functional>

using namespace std;

int main() {
	
	double t1[] = { -1.1, 2.9, -2.3, 3.7 };
	set <double, greater<double>> valuesA(t1, t1 + 4);
	double t2[] = { -3.14, 2.71, -3.88, 2.19 };
	set <double, greater<double>> valuesB(t2, t2 + 4);

	valuesA.swap(valuesB);

	for (auto value : valuesA)
		cout << value << " ";
	cout << endl;
	for (auto value : valuesB)
		cout << value << " ";
	cout << endl;
	system("pause");
	return 0;
}