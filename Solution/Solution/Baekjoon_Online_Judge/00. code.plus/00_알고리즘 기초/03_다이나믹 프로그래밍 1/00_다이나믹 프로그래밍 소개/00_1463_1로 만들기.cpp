#include <iostream>
#include <vector>

using namespace std;

vector<int> g_vecMomo{};

int MinComputeCost(int _iNum)
{
	if (1 == _iNum)
		return 0;
	
	if (0 != g_vecMomo[_iNum])
		return g_vecMomo[_iNum];
	else
	{
		g_vecMomo[_iNum] = 1 + MinComputeCost(_iNum - 1);

		if (0 == _iNum % 2)
			g_vecMomo[_iNum] = min(g_vecMomo[_iNum], 1 + MinComputeCost(_iNum / 2));

		if (0 == _iNum % 3)
			g_vecMomo[_iNum] = min(g_vecMomo[_iNum], 1 + MinComputeCost(_iNum / 3));
	}

	return g_vecMomo[_iNum];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumInput{};
	cin >> iNumInput;

	g_vecMomo.resize(iNumInput + 1);

	cout << MinComputeCost(iNumInput);

	return 0;
}