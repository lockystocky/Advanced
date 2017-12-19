#include <iostream>
#include <set>
#include <functional>

using namespace std;

void DisplayHowManyTimes(set <double, greater<double>> values, double value)
{
	int count = 0;

	for(auto it = values.begin(); it != values.end(); it++)
	{
		if(*it == value) count++;
	}
	if(count == 0)
	{
		cout << "Not found ";
	}
	else
	{
		for(auto it = values.find(value); it != values.end(); it++)
		{
			cout << *it << " ";
		}
	}
}

int main() {
	
	double t1[] = { -1.1, 2.9, -2.3, 2.71 };
	set <double, greater<double>> valuesA(t1, t1 + 4);
	double t2[] = { -3.14, 2.71, -3.88, 2.19 };
	set <double, greater<double>> valuesB(t2, t2 + 4);
	double value;
	cin >> value;
	DisplayHowManyTimes(valuesA, value);
	DisplayHowManyTimes(valuesB, value);
	system("pause");
	return 0;
}