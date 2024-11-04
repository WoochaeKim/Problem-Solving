#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string strInput{};
	cin >> strInput;

	while (strInput.size() % 3)
		strInput = "0" + strInput;

	int iStrSize{ static_cast<int>(strInput.size()) };

	for (int iCntIdx{}; iCntIdx < iStrSize; )
	{
		int iDigitOctal{};

		for (int iCntBP{ 4 }; iCntBP > 0; iCntBP >>= 1)
			iDigitOctal += ('0' == strInput[iCntIdx++]) ? 0 : iCntBP;

		cout << iDigitOctal;
	}

	return 0;
}