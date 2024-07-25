#include <iostream>
#include <vector>
using namespace std;

int GetGCD(const int& _iNumA, const int& _iNumB)
{
	if (0 == _iNumB)
		return _iNumA;

	return GetGCD(_iNumB, _iNumA % _iNumB);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumBro, iMyPos, iBroPos, iDist;
	vector<int> vecDist;

	cin >> iNumBro >> iMyPos;

	while (iNumBro--)
	{
		cin >> iBroPos;
		iDist = iBroPos - iMyPos;

		if (0 != iDist)
			vecDist.emplace_back((0 > iDist) ? iDist * -1 : iDist);
	}
	
	int iLimitIdx{ static_cast<int>(vecDist.size() - 1) };

	for (int iiDistIdx = 0; iiDistIdx < iLimitIdx; iiDistIdx++)
	{
		vecDist[iiDistIdx + 1] = GetGCD(vecDist[iiDistIdx + 1], vecDist[iiDistIdx] % vecDist[iiDistIdx + 1]);
	}

	cout << vecDist.back();

	return 0;
}