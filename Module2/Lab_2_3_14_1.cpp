#include <iostream>
#include <map>
#include <string>

using namespace std;

void Print(map<string, int> results)
{
	for(auto r: results)
	{
		cout << r.first << " result is : " << r.second << endl;
	}
}

int main()
{
	map<string, int> results;
	results.insert(pair<string, int>("Sarah", 15));
	results.insert(pair<string, int>("John", 12));
	results.insert(pair<string, int>("Bart", 17));

	Print(results);
	cout << endl;

	results.erase("Bart");

	Print(results);
	cout << endl;

	results.insert(pair<string, int>("Bob", 16));
	
	Print(results);
	cout << endl;

	system("pause");
	return 0;
}