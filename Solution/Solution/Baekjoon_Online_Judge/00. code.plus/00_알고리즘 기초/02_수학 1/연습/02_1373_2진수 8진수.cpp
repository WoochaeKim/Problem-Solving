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
		int iSum{};

		for (int iCnt{ 4 }; iCnt > 0; iCnt >>= 1)
			iSum += ('0' == strInput[iCntIdx++]) ? 0 : iCnt;

		cout << iSum;
	}

	return 0;
}