#include <iostream>
#include <string>
#include <array>

using namespace std;

enum TYPE_NUM { NUM_A, NUM_B, NUM_C, NUM_D, NUM_END };

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	array<string, TYPE_NUM::NUM_END> arrNumBuff{};

	for (string& strNum : arrNumBuff)
		cin >> strNum;

	cout << stoll(arrNumBuff[NUM_A] + arrNumBuff[NUM_B]) + stoll(arrNumBuff[NUM_C] + arrNumBuff[NUM_D]);

	return 0;
}