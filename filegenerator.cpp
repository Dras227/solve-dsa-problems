#include<iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string f[101];
	int j = 0;
	for (int i = 0; i <= 100; i += 1)
	{
		string fi = "user";
		f[i] = fi + to_string(i);
	}
	for (int i = 0; i < 101; i += 1)
	{

		cout << f[i];
		cout << "\n\n";
	}
	// for (int i = 0; i < 26; ++i)
	// {
	// 	cout << f[i];
	// 	cout << "\n\n";
	// }
}