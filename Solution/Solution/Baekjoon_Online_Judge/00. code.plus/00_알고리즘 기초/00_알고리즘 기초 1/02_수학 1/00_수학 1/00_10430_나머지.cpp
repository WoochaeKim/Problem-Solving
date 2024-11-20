#include <iostream>
#include <array>

using namespace std;

enum TYPE_NUM { NUM_A, NUM_B, NUM_C, NUM_END };

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	array<int, TYPE_NUM::NUM_END> arrNumBuff{};

	for (int& iNumInput : arrNumBuff)
		cin >> iNumInput;

	cout << (arrNumBuff[NUM_A] + arrNumBuff[NUM_B]) % arrNumBuff[NUM_C] << '\n';
	cout << ((arrNumBuff[NUM_A] % arrNumBuff[NUM_C]) + (arrNumBuff[NUM_B] % arrNumBuff[NUM_C])) % arrNumBuff[NUM_C] << '\n';
	cout << (arrNumBuff[NUM_A] * arrNumBuff[NUM_B]) % arrNumBuff[NUM_C] << '\n';
	cout << ((arrNumBuff[NUM_A] % arrNumBuff[NUM_C]) * (arrNumBuff[NUM_B] % arrNumBuff[NUM_C])) % arrNumBuff[NUM_C] << '\n';

	return 0;
}