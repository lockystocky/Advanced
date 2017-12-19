#include <iostream>
#include <set>

using namespace std;

template <class T> void print(T start, T end) {
        while (start != end) {
                std::cout << *start << " "; start++;
        }
		cout << endl;
    }

int main()
{
	set<int> s1;
	set<int> s2;
	unsigned start_value;
	cin >> start_value;
	unsigned stop_value;
	cin >> stop_value;
	
	for(int i = start_value; i <= stop_value; i++)
	{
		if(i % 2 == 0) s2.insert(i);
		else s1.insert(i);
	}
	for(int i = start_value; i <= stop_value; i++)
	{
		if(i % 2 == 0) s1.insert(i);
		else s2.insert(i);
	}
	//print(s1.begin(), s1.end());
	//print(s2.begin(), s2.end());
	
    for(set<int>::iterator it1 = s1.begin(); it1 != s1.end(); ++it1)
    {       
		 for(set<int>::iterator it2 = s2.begin(); it2 != s2.end(); ++it2)
		 {
			  cout << *it1 + *it2 <<" ";
		 }
    }

	for(set<int>::reverse_iterator it1 = s1.rbegin(); it1 != s1.rend(); ++it1)
    {       
		 for(set<int>::reverse_iterator it2 = s2.rbegin(); it2 != s2.rend(); ++it2)
		 {
			  if(*it1 == *it2)
				  cout << *it1 + *it2 <<" ";
		 }
    }

	for(auto it1 = s1.rbegin(); it1 != s1.rend(); ++it1)
    {       
		 for(auto it2 = s2.rbegin(); it2 != s2.rend(); ++it2)
		 {
			  if(*it1 == *it2)
				  cout << *it1 + *it2 <<" ";
		 }
    }

	cout << endl;
	system("pause");
	return 0;
}