#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int iStrSize{};
	vector<string> vecStrBuff{};
	string strInput{};
	
	cin >> strInput;
	iStrSize = static_cast<int>(strInput.size());
	vecStrBuff.reserve(iStrSize);
	
	for (int iCntIdx = 0; iCntIdx < iStrSize; ++iCntIdx)
		vecStrBuff.emplace_back(strInput.substr(iCntIdx));
	
	sort(vecStrBuff.begin(), vecStrBuff.end());
	
	for (const string& strSuffix : vecStrBuff)
		cout << strSuffix << '\n';

	return 0;
}