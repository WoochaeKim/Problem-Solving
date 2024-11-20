#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iBase{}, iSum{};
	string strInput{};

	cin >> strInput >> iBase;
	int iCntExp{ static_cast<int>(strInput.size())};

	for (const char& ch : strInput)
		iSum += (('A' > ch) ? ch - '0' : ch - 'A' + 10) * static_cast<int>(pow(iBase, --iCntExp));

	cout << iSum;

	return 0;
}