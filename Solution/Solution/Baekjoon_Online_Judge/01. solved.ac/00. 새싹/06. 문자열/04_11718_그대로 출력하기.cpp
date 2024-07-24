#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string strInput;

	while (getline(cin, strInput))
		cout << strInput << '\n';

	return 0;
}