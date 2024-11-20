#include <iostream>
#include <vector>

using namespace std;

vector<int> g_vecMemo{};

int NumOfWays(int _iNum)
{
	if (0 > _iNum)
		return 0;

	if (0 < g_vecMemo[_iNum])
		return g_vecMemo[_iNum] % 10007;

	g_vecMemo[_iNum] = (NumOfWays(_iNum - 1) + NumOfWays(_iNum - 2)) % 10007;

	return g_vecMemo[_iNum] % 10007;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iWidth{};
	cin >> iWidth;

	g_vecMemo.resize(iWidth + 1);
	g_vecMemo[0] = 1, g_vecMemo[1] = 1;

	cout << NumOfWays(iWidth) % 10007;

	return 0;
}