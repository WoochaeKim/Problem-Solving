#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumInputA{}, iNumInputB{};
	cin >> iNumInputA >> iNumInputB;

	cout << iNumInputA + iNumInputB << '\n'
		 << iNumInputA - iNumInputB << '\n'
		 << iNumInputA * iNumInputB << '\n'
		 << iNumInputA / iNumInputB << '\n'
		 << iNumInputA % iNumInputB;

	return 0;
}