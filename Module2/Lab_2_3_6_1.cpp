#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

void PrintAll(map<string, int> variables, vector<int> values)
{
	for(auto it = variables.begin(); it != variables.end(); it++)
	{
		cout << "Variable: " << it->first << " at address: " <<
			it->second << " has value: " << values.at(it->second) << " ";
	}
}

void PrintForVariableName(map<string, int> variables, vector<int> values, string varName)
{
	auto it = variables.find(varName);
	if(it == variables.end())
		cout << "Variable: " << varName << " doesn't exist";
	else
	{
		cout << "Variable: " << it->first << " at address: " <<
			it->second << " has value: " << values.at(it->second) << " ";
	}	
}

int main()
{
	
	map<string, int> variables_map;

	variables_map.insert(pair<string, int>("x", 0));
	variables_map.insert(pair<string, int>("y", 1));
	variables_map.insert(pair<string, int>("z", 2));
	variables_map.insert(pair<string, int>("xx", 3 ));
	variables_map.insert(pair<string, int>("xy", 4));
	variables_map.insert(pair<string, int>("xz", 5));

	int t[] = { 9, 6, 5, 7, 3, 2};
	vector<int> values(t, t + 6);
	
	string variable_name;
	cin >> variable_name;

	
	PrintAll(variables_map, values);

	PrintForVariableName(variables_map, values, variable_name);

	system("pause");
	return 0;
}