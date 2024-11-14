#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumString{};
	string strInput{};
	vector<string> vecStrBuff;
	unordered_set<string> usetUniqChk;

	cin >> iNumString;
	vecStrBuff.reserve(iNumString);
	usetUniqChk.reserve(iNumString);

	while (iNumString--)
	{
		cin >> strInput;

		if (usetUniqChk.emplace(strInput).second)
			vecStrBuff.emplace_back(strInput);
	}

	sort(vecStrBuff.begin(), vecStrBuff.end(),
		[](const string& _strLhs, const string& _strRhs) -> bool
		{
			if (_strLhs.size() == _strRhs.size())
				return _strLhs < _strRhs;

			return _strLhs.size() < _strRhs.size();
		}
	);

	for (const string& strElem : vecStrBuff)
		cout << strElem << '\n';

	return 0;
}