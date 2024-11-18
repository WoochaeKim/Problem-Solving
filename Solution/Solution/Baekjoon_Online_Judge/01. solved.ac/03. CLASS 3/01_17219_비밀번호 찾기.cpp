#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumSite{}, iNumSearch{};
	cin >> iNumSite >> iNumSearch;

	string strSiteName{}, strPW;
	unordered_map<string, string> umapSitePW{};

	while (iNumSite--)
	{
		cin >> strSiteName >> strPW;
		umapSitePW.emplace(strSiteName, strPW);
	}

	while (iNumSearch--)
	{
		cin >> strSiteName;
		cout << umapSitePW[strSiteName] << '\n';
	}

	return 0;
}