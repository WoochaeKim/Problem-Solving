#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const array<string, 8> arrOctToBin{ "000", "001", "010", "011", "100", "101", "110", "111" };

	string strInput{};
	cin >> strInput;

	int iStrSize{ static_cast<int>(strInput.size()) };

	cout << stoi(arrOctToBin[static_cast<int>(strInput.front() - '0')]);

	if (1 < iStrSize)
	{
		for (int iCntidx{ 1 }; iCntidx < iStrSize; ++iCntidx)
			cout << arrOctToBin[static_cast<int>(strInput[iCntidx] - '0')];
	}

	return 0;
}