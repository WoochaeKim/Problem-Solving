#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumGlass{};
	cin >> iNumGlass;

	vector<int> vecVolume(iNumGlass + 1);
	vector<int> vecTabul(iNumGlass + 1);

	for (int iCntVol{ 1 }; iCntVol <= iNumGlass; ++iCntVol)
		cin >> vecVolume[iCntVol];
	vecTabul[1] = vecVolume[1];
	vecTabul[2] = vecVolume[1] + vecVolume[2];

	for (int iCntIdx{ 3 }; iCntIdx <= iNumGlass; ++iCntIdx)
	{
		vecTabul[iCntIdx] =
			max(max(vecTabul[iCntIdx - 1], vecTabul[iCntIdx - 2] + vecVolume[iCntIdx]),
				vecTabul[iCntIdx - 3] + vecVolume[iCntIdx - 1] + vecVolume[iCntIdx]);
	}

	cout << vecTabul[iNumGlass];

	return 0;
}