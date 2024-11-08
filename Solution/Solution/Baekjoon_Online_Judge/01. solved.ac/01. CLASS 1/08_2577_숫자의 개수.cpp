#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int iNumInputA{}, iNumInputB{}, iNumInputC{};
	string srtBuff{};
	unordered_map<char, int> umapBuff{};

	cin >> iNumInputA >> iNumInputB >> iNumInputC;

	srtBuff = to_string(iNumInputA * iNumInputB * iNumInputC);

	for (const char& ch : srtBuff)
		++umapBuff[ch];

	for (char chCntDigit{ '0' }; chCntDigit <= '9'; ++chCntDigit)
		cout << umapBuff[chCntDigit] << '\n';

	return 0;
}