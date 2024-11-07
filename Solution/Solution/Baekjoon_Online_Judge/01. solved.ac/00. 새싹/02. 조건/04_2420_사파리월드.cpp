#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	long long llNumInputN{}, llNumInputM{};
	cin >> llNumInputN >> llNumInputM;

	cout << (0 > (llNumInputN -= llNumInputM) ? llNumInputN * -1 : llNumInputN);

	return 0;
}