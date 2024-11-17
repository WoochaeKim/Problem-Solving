#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInputSize{}, iInputNum{}, iSum{}, iMode{};

	cin >> iInputSize;

	vector<int> vecSeq{};
	vector<int> vecMode{};
	unordered_map<int, int> umapFreq{};

	vecSeq.reserve(iInputSize);

	for (int iCntIdx{}; iCntIdx < iInputSize; ++iCntIdx)
	{
		cin >> iInputNum;

		vecSeq.emplace_back(iInputNum);
		++umapFreq[iInputNum];
		iSum += iInputNum;
	}

	sort(vecSeq.begin(), vecSeq.end());

	int iMaxFreq{};
	for (const auto& pair : umapFreq)
	{
		if (iMaxFreq < pair.second)
			iMaxFreq = pair.second;
	}

	for (int& iElem : vecSeq)
	{
		if (iMaxFreq == umapFreq[iElem])
		{
			vecMode.emplace_back(iElem);
		}
	}

	iMode = vecMode.front();
	for (int& iElem : vecMode)
	{
		if (iMode != iElem)
		{
			iMode = iElem;
			break;
		}
	}

	cout << static_cast<int>(round(static_cast<double>(iSum) / static_cast<double>(vecSeq.size()))) << '\n';
	cout << vecSeq[iInputSize / 2] << '\n';
	cout << iMode << '\n';
	cout << vecSeq.back() - vecSeq.front() << '\n';

	return 0;
}