#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iStrSize{};
	string strInput{};
	array<int, 'z' - 'a' + 1> arrBuff;

	arrBuff.fill(-1);
	cin >> strInput;
	iStrSize = static_cast<int>(strInput.size());

	for (int iCntIdx = 0; iCntIdx < iStrSize; ++iCntIdx)
		if (-1 == arrBuff[strInput[iCntIdx] - 'a'])
			arrBuff[strInput[iCntIdx] - 'a'] = iCntIdx;

	for (const int& iFirstAlphIdx : arrBuff)
		cout << iFirstAlphIdx << ' ';

	return 0;
}