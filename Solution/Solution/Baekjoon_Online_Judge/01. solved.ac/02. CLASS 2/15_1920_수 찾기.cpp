#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iInputSize{}, iInputNum;
	cin >> iInputSize;

	unordered_set<int> usetBuff{};
	usetBuff.reserve(iInputSize);

	while (iInputSize--)
	{
		cin >> iInputNum;
		usetBuff.emplace(iInputNum);
	}

	cin >> iInputSize;

	while (iInputSize--)
	{
		cin >> iInputNum;
		cout << usetBuff.count(iInputNum) << '\n';
	}

	return 0;
}