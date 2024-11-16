#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	const string APOCALYPSE{ "666" };
	int iNumApocalypse{};
	cin >> iNumApocalypse;

	string strCulYear{};

	for (int iCntYear{ stoi(APOCALYPSE) }; 0 < iNumApocalypse; ++iCntYear)
	{
		strCulYear = to_string(iCntYear);

		if (string::npos != strCulYear.find(APOCALYPSE))
			--iNumApocalypse;

		if (0 == iNumApocalypse)
			cout << iCntYear;
	}

	return 0;
}