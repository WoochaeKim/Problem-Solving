#include <iostream>
#include <vector>

using namespace std;

vector<int> g_vecMemo{};

int NumOfSumExpr(int _iNum)
{
	if (0 > _iNum)
		return 0;

	if (0 < g_vecMemo[_iNum])
		return g_vecMemo[_iNum];

	g_vecMemo[_iNum] = NumOfSumExpr(_iNum - 1) + NumOfSumExpr(_iNum - 2) + NumOfSumExpr(_iNum - 3);

	return g_vecMemo[_iNum];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iTestCase{}, iNumInput{};
	cin >> iTestCase;
	
	while (iTestCase--)
	{
		cin >> iNumInput;

		if (g_vecMemo.size() < iNumInput + 1)
			g_vecMemo.resize(iNumInput + 1);

		g_vecMemo[0] = 1, g_vecMemo[1] = 1;

		cout << NumOfSumExpr(iNumInput) << '\n';
	}
	
	return 0;
}