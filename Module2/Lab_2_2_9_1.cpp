#include <iostream>
#include <fstream>
#include <set>
#include <functional>

using namespace std;

int main() {
	int t[] = { -1, 5, -3, 2, };
	set <int> valuesAscending(t, t + 4);
	int t2[] = { -1, 5, -3, 2, };
	set <int, greater<int>> valuesDescending(t2, t2 + 4);

	valuesAscending.insert(9);
	valuesDescending.insert(10);
	valuesAscending.erase(2);
	valuesDescending.erase(10);
	valuesAscending.insert(1);
	valuesDescending.insert(9);

	for (auto value : valuesAscending)
		cout << value << " ";
	cout << endl;
	for (auto value : valuesDescending)
		cout << value << " ";
	cout << endl;
	system("pause");
	return 0;
}