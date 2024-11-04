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
		int iOctal{};

		for (int iCntBP{ 4 }; iCntBP > 0; iCntBP >>= 1)
			iOctal += ('0' == strInput[iCntIdx++]) ? 0 : iCntBP;

		cout << iOctal;
	}

	return 0;
}