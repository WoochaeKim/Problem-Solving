#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iStrSize{};
	string strInput{};
	vector<string> vecStrPart{};

	cin >> strInput;

	iStrSize = static_cast<int>(strInput.size());
	vecStrPart.reserve(iStrSize);

	while (iStrSize)
		vecStrPart.push_back(strInput.substr(--iStrSize));

	sort(vecStrPart.begin(), vecStrPart.end());

	for (const auto& strPart : vecStrPart)
		cout << strPart << '\n';

	return 0;
}