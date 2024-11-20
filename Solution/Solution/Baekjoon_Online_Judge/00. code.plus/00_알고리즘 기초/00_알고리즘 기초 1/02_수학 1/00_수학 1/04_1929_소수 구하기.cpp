#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const int FIRST_PRIME{ 2 };
	int iStartValue{}, iEndValue{};

	cin >> iStartValue >> iEndValue;
	iStartValue = max(FIRST_PRIME, iStartValue);

	vector<bool> vecIsComposite(iEndValue + 1);

	for (int iCntValue{ FIRST_PRIME }; iCntValue * iCntValue <= iEndValue; ++iCntValue)
	{
		if (vecIsComposite[iCntValue])
			continue;

		for (int iCntSeqMul{ iCntValue * iCntValue }; iCntSeqMul <= iEndValue; iCntSeqMul += iCntValue)
			vecIsComposite[iCntSeqMul] = true;
	}

	for (iStartValue; iStartValue <= iEndValue; ++iStartValue)
	{
		if (!vecIsComposite[iStartValue])
			cout << iStartValue << '\n';
	}

	return 0;
}