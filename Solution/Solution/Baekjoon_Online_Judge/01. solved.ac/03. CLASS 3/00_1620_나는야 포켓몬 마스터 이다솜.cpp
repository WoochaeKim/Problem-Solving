#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iListSize{}, iNumQ{};
	cin >> iListSize >> iNumQ;

	string strInput{};
	unordered_map<string, int> umapList{};
	vector<string> vecList{};
	vecList.reserve(iListSize + 1);
	vecList.emplace_back("NULL");
	
	for (int iCntIdx{ 1 }; iCntIdx <= iListSize; ++iCntIdx)
	{
		cin >> strInput;

		vecList.emplace_back(strInput);
		umapList.emplace(strInput, iCntIdx);
	}

	while (iNumQ--)
	{
		cin >> strInput;

		if ('1' <= strInput.front() && '9' >= strInput.front())
			cout << vecList[stoi(strInput)] << '\n';
		else
			cout << umapList[strInput] << '\n';
	}

	return 0;
}