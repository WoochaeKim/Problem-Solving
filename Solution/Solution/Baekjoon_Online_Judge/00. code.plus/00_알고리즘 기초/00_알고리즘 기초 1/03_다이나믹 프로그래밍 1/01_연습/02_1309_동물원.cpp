#include <iostream>
#include <vector>

using namespace std;

int main()
{
	enum TYPE_POSITION { NONE, LEFT, RIGHT, END };

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	const int DIVISOR{ 9901 };
	int iCageSize{}, iPreCageSize{};
	cin >> iCageSize;

	vector<vector<int>> vecTabul(iCageSize + 1, vector<int>(TYPE_POSITION::END));
	fill(vecTabul[1].begin(), vecTabul[1].end(), 1);
	
	for (int iCntSize{ 2 }; iCntSize <= iCageSize; ++iCntSize)
	{
		iPreCageSize = iCntSize - 1;
		vecTabul[iCntSize][NONE] = vecTabul[iPreCageSize][NONE] + 
			vecTabul[iPreCageSize][LEFT] + vecTabul[iPreCageSize][RIGHT];

		vecTabul[iCntSize][LEFT] = vecTabul[iPreCageSize][NONE] + vecTabul[iPreCageSize][RIGHT];

		vecTabul[iCntSize][RIGHT] = vecTabul[iPreCageSize][NONE] + vecTabul[iPreCageSize][LEFT];

		for (int iCntPos{}; iCntPos < TYPE_POSITION::END; ++iCntPos)
			vecTabul[iCntSize][iCntPos] %= DIVISOR;
	}

	cout << (vecTabul[iCageSize][NONE] + vecTabul[iCageSize][LEFT] + vecTabul[iCageSize][RIGHT]) % DIVISOR;

	return 0;
}