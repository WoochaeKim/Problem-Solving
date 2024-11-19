#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iTestCase{}, iNumClothes{};
	string strClothes, strType{};

	cin >> iTestCase;

	while (iTestCase--)
	{
		cin >> iNumClothes;
		unordered_map<string, vector<string>> umapClothesBuff{};

		while (iNumClothes--)
		{
			cin >> strClothes >> strType;
			umapClothesBuff[strType].emplace_back(strClothes);
		}
		
		int iNumComb{ 1 };

		for (const auto& pair : umapClothesBuff)
			iNumComb *= (static_cast<int>(pair.second.size()) + 1);

		cout << iNumComb - 1 << '\n';
	}

	return 0;
}