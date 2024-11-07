#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iSelectIdx{};
	string strInput{};

	cin >> strInput >> iSelectIdx;

	cout << strInput[iSelectIdx - 1];

	return 0;
}