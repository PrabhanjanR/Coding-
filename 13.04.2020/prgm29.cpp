//STL - unordered map practicing program3 on 13/04/2020.
//Program to find freq of every word using unordered map
#include <bits/stdc++.h>
using namespace std;
// Printing of individual words in s
void print(const string &s)
{
	unordered_map<string, int> word;
	stringstream ss(s); // Used for breaking words
	string word1; // To store individual words
	while (ss >> word1)
		word[word1]++;
	unordered_map<string, int>:: iterator itr;
	for (itr = word.begin(); itr != word.end(); itr++)
		cout << "(" << itr->first << ", " << itr->second << ")\n";
}
int main()
{
	string str = "time is the time which is time ";
	print(str);
	return 0;
}
