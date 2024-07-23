#include <iostream>
#include <array>

#define LIMIT_IDX 200

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int iLoop, iInput, iTarget;
	array<int, LIMIT_IDX + 1> arrBuff{};

	cin >> iLoop;

	while (iLoop--)
	{
		cin >> iInput;
		arrBuff[((0 > iInput) ? (iInput * -1) * 2 : iInput)] += 1;
	}

	cin >> iTarget;
	cout << (arrBuff[((0 > iTarget) ? (iTarget * -1) * 2 : iTarget)]);

	return 0;
}