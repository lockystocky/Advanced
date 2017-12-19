#include <iostream>
#include <map>
#include <string>

using namespace std;


int main()
{
	map<char, int> building1;
	building1.insert(pair<char, int>('a', 30));
	building1.insert(pair<char, int>('b', 40 ));

	map<char, int> building2;
	building2.insert(pair<char, int>('a', 50 ));
	building2.insert(pair<char, int>('b', 25));
	building2.insert(pair<char, int>('c', 11));

	map<char, int> building3; 
	building3.insert(pair<char, int>('a', 20 ));
	building3.insert(pair<char, int>('b', 35 ));

	map<int, map<char, int>> buildings;
	buildings.insert(pair<int, map<char, int>>(1, building1));
	buildings.insert(pair<int, map<char, int>>(2, building2));
	buildings.insert(pair<int, map<char, int>>(3, building3));

	for (auto &outerMapPair: buildings)
	{
		for (auto &innerMapPair : outerMapPair.second)
		{
			cout << "Building number: " << outerMapPair.first
				<< " letter: " << innerMapPair.first << " has: " 
				<< innerMapPair.second << " square meters." << endl;
		}
	}
	system("pause");
	return 0;
}