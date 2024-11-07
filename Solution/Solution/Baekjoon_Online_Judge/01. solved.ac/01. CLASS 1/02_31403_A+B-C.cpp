#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumInputA{}, iNumInputB{}, iNumInputC{};
	cin >> iNumInputA >> iNumInputB >> iNumInputC;

	cout << iNumInputA + iNumInputB - iNumInputC << '\n';
	cout << stoi(to_string(iNumInputA) + to_string(iNumInputB)) - iNumInputC;

	return 0;
}