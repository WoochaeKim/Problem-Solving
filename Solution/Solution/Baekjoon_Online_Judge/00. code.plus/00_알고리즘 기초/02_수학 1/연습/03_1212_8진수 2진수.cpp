#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	array<string, 8> arrOctToBin{ "000", "001", "010", "011", "100", "101", "110", "111" };

	string strInput{};
	cin >> strInput;

	int iStrSize{ static_cast<int>(strInput.size()) };
	//int iDigitOctal{  };

	cout << stoi(arrOctToBin[static_cast<int>(strInput.front() - '0')]);

	if (1 < iStrSize)
	{
		for (int iCntidx{ 1 }; iCntidx < iStrSize; ++iCntidx)
			cout << arrOctToBin[static_cast<int>(strInput[iCntidx] - '0')];
	}
	/*

	if (0 == iNumOctal && 1 == iStrSize)
		cout << iNumOctal;
	else
	{
		bool bIsFirstOne{};

		for (int iCntBP{ 4 }; iCntBP > 0; iCntBP >>= 1)
		{
			if (!bIsFirstOne && iNumOctal < iCntBP)
				continue;
			else
				bIsFirstOne = true;

			cout << ((0 > iNumOctal - iCntBP) ? 0 : (iNumOctal -= iCntBP, 1));
		}

		for (int iCntidx{ 1 }; iCntidx < iStrSize; ++iCntidx)
		{
			iNumOctal = static_cast<int>(strInput[iCntidx] - '0');

			for (int iCntBP{ 4 }; iCntBP > 0; iCntBP >>= 1)
				cout << ((0 > iNumOctal - iCntBP) ? 0 : (iNumOctal -= iCntBP, 1));
		}
	}

	*/
	return 0;
}