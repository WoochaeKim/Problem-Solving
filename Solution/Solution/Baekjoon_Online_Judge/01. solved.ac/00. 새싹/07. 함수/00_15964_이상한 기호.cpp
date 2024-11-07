#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	long long llNumInputA{}, llNumInputB{};

	cin >> llNumInputA >> llNumInputB;
	cout << (llNumInputA + llNumInputB) * (llNumInputA - llNumInputB);

	return 0;
}